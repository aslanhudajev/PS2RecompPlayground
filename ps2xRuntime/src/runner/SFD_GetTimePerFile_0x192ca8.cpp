#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetTimePerFile
// Address: 0x192ca8 - 0x192e08
void SFD_GetTimePerFile_0x192ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetTimePerFile");


    ctx->pc = 0x192ca8u;

    // 0x192ca8: 0x27bdff50
    ctx->pc = 0x192ca8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x192cac: 0xffb00010
    ctx->pc = 0x192cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x192cb0: 0xffb40050
    ctx->pc = 0x192cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x192cb4: 0x80802d
    ctx->pc = 0x192cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192cb8: 0xffb20030
    ctx->pc = 0x192cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x192cbc: 0xc0a02d
    ctx->pc = 0x192cbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192cc0: 0xffbf00a0
    ctx->pc = 0x192cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x192cc4: 0xa0902d
    ctx->pc = 0x192cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192cc8: 0xffbe0090
    ctx->pc = 0x192cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x192ccc: 0xffb70080
    ctx->pc = 0x192cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x192cd0: 0xffb60070
    ctx->pc = 0x192cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x192cd4: 0xffb50060
    ctx->pc = 0x192cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x192cd8: 0xffb30040
    ctx->pc = 0x192cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x192cdc: 0xffb10020
    ctx->pc = 0x192cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x192ce0: 0xc064f1e
    ctx->pc = 0x192CE0u;
    SET_GPR_U32(ctx, 31, 0x192CE8u);
    ctx->pc = 0x192CE4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192CE8u; }
        else if (ctx->pc != 0x192CE8u) { ctx->pc = 0x192CE8u; }
    }
    if (ctx->pc != 0x192CE8u) { return; }
    ctx->pc = 0x192CE8u;
    // 0x192ce8: 0x10400006
    ctx->pc = 0x192CE8u;
    {
        const bool branch_taken_0x192ce8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x192CECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x192ce8) {
            ctx->pc = 0x192D04u;
            goto label_192d04;
        }
    }
    ctx->pc = 0x192CF0u;
    // 0x192cf0: 0x3c05ff00
    ctx->pc = 0x192cf0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x192cf4: 0xc064ea0
    ctx->pc = 0x192CF4u;
    SET_GPR_U32(ctx, 31, 0x192CFCu);
    ctx->pc = 0x192CF8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 354));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192CFCu; }
        else if (ctx->pc != 0x192CFCu) { ctx->pc = 0x192CFCu; }
    }
    if (ctx->pc != 0x192CFCu) { return; }
    ctx->pc = 0x192CFCu;
    // 0x192cfc: 0x10000037
    ctx->pc = 0x192CFCu;
    {
        const bool branch_taken_0x192cfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192D00u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x192cfc) {
            ctx->pc = 0x192DDCu;
            goto label_192ddc;
        }
    }
    ctx->pc = 0x192D04u;
label_192d04:
    // 0x192d04: 0x8fa20004
    ctx->pc = 0x192d04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x192d08: 0x200202d
    ctx->pc = 0x192d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d0c: 0x8e1e0b98
    ctx->pc = 0x192d0cu;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 16), 2968)));
    // 0x192d10: 0x240282d
    ctx->pc = 0x192d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d14: 0xac400000
    ctx->pc = 0x192d14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x192d18: 0x280302d
    ctx->pc = 0x192d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d1c: 0x26150a94
    ctx->pc = 0x192d1cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 16), 2708));
    // 0x192d20: 0xc067782
    ctx->pc = 0x192D20u;
    SET_GPR_U32(ctx, 31, 0x192D28u);
    ctx->pc = 0x192D24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19DE08u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_GetTimeSub_0x19de08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D28u; }
        else if (ctx->pc != 0x192D28u) { ctx->pc = 0x192D28u; }
    }
    if (ctx->pc != 0x192D28u) { return; }
    ctx->pc = 0x192D28u;
    // 0x192d28: 0x40b02d
    ctx->pc = 0x192d28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d2c: 0x8ea20118
    ctx->pc = 0x192d2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 280)));
    // 0x192d30: 0x10400028
    ctx->pc = 0x192D30u;
    {
        const bool branch_taken_0x192d30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x192D34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x192d30) {
            ctx->pc = 0x192DD4u;
            goto label_192dd4;
        }
    }
    ctx->pc = 0x192D38u;
    // 0x192d38: 0x8e830000
    ctx->pc = 0x192d38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x192d3c: 0x10620026
    ctx->pc = 0x192D3Cu;
    {
        const bool branch_taken_0x192d3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x192D40u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x192d3c) {
            ctx->pc = 0x192DD8u;
            goto label_192dd8;
        }
    }
    ctx->pc = 0x192D44u;
    // 0x192d44: 0x3a0202d
    ctx->pc = 0x192d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d48: 0xc064f3a
    ctx->pc = 0x192D48u;
    SET_GPR_U32(ctx, 31, 0x192D50u);
    ctx->pc = 0x192D4Cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 16), 2996));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D50u; }
        else if (ctx->pc != 0x192D50u) { ctx->pc = 0x192D50u; }
    }
    if (ctx->pc != 0x192D50u) { return; }
    ctx->pc = 0x192D50u;
    // 0x192d50: 0x882d
    ctx->pc = 0x192d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d54: 0x8eb0011c
    ctx->pc = 0x192d54u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 21), 284)));
    // 0x192d58: 0x10000002
    ctx->pc = 0x192D58u;
    {
        const bool branch_taken_0x192d58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192D5Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x192d58) {
            ctx->pc = 0x192D64u;
            goto label_192d64;
        }
    }
    ctx->pc = 0x192D60u;
label_192d60:
    // 0x192d60: 0x2610ffff
    ctx->pc = 0x192d60u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_192d64:
    // 0x192d64: 0x2a220020
    ctx->pc = 0x192d64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 32));
    // 0x192d68: 0x10400011
    ctx->pc = 0x192D68u;
    {
        const bool branch_taken_0x192d68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x192D6Cu;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 16)));
        if (branch_taken_0x192d68) {
            ctx->pc = 0x192DB0u;
            goto label_192db0;
        }
    }
    ctx->pc = 0x192D70u;
    // 0x192d70: 0x2602001f
    ctx->pc = 0x192d70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 31));
    // 0x192d74: 0x203100b
    ctx->pc = 0x192d74u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 16));
    // 0x192d78: 0x8e850000
    ctx->pc = 0x192d78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x192d7c: 0x21143
    ctx->pc = 0x192d7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x192d80: 0x3c0302d
    ctx->pc = 0x192d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d84: 0x21140
    ctx->pc = 0x192d84u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x192d88: 0x2021023
    ctx->pc = 0x192d88u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x192d8c: 0x21080
    ctx->pc = 0x192d8cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x192d90: 0x2e21021
    ctx->pc = 0x192d90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x192d94: 0xc063132
    ctx->pc = 0x192D94u;
    SET_GPR_U32(ctx, 31, 0x192D9Cu);
    ctx->pc = 0x192D98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x18C4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MulAbDivC_0x18c4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D9Cu; }
        else if (ctx->pc != 0x192D9Cu) { ctx->pc = 0x192D9Cu; }
    }
    if (ctx->pc != 0x192D9Cu) { return; }
    ctx->pc = 0x192D9Cu;
    // 0x192d9c: 0x8e430000
    ctx->pc = 0x192d9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x192da0: 0x40982d
    ctx->pc = 0x192da0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192da4: 0x73182a
    ctx->pc = 0x192da4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 19)));
    // 0x192da8: 0x1460ffed
    ctx->pc = 0x192DA8u;
    {
        const bool branch_taken_0x192da8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x192DACu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x192da8) {
            ctx->pc = 0x192D60u;
            goto label_192d60;
        }
    }
    ctx->pc = 0x192DB0u;
label_192db0:
    // 0x192db0: 0x8fa20004
    ctx->pc = 0x192db0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x192db4: 0xac500000
    ctx->pc = 0x192db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x192db8: 0x8e420000
    ctx->pc = 0x192db8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x192dbc: 0x531023
    ctx->pc = 0x192dbcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x192dc0: 0x4410002
    ctx->pc = 0x192DC0u;
    {
        const bool branch_taken_0x192dc0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x192DC4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x192dc0) {
            ctx->pc = 0x192DCCu;
            goto label_192dcc;
        }
    }
    ctx->pc = 0x192DC8u;
    // 0x192dc8: 0xae400000
    ctx->pc = 0x192dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_192dcc:
    // 0x192dcc: 0xc064f44
    ctx->pc = 0x192DCCu;
    SET_GPR_U32(ctx, 31, 0x192DD4u);
    ctx->pc = 0x192DD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192DD4u; }
        else if (ctx->pc != 0x192DD4u) { ctx->pc = 0x192DD4u; }
    }
    if (ctx->pc != 0x192DD4u) { return; }
    ctx->pc = 0x192DD4u;
label_192dd4:
    // 0x192dd4: 0x2c0102d
    ctx->pc = 0x192dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_192dd8:
    // 0x192dd8: 0xdfbf00a0
    ctx->pc = 0x192dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_192ddc:
    // 0x192ddc: 0xdfbe0090
    ctx->pc = 0x192ddcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x192de0: 0xdfb70080
    ctx->pc = 0x192de0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192de4: 0xdfb60070
    ctx->pc = 0x192de4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x192de8: 0xdfb50060
    ctx->pc = 0x192de8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192dec: 0xdfb40050
    ctx->pc = 0x192decu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192df0: 0xdfb30040
    ctx->pc = 0x192df0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192df4: 0xdfb20030
    ctx->pc = 0x192df4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192df8: 0xdfb10020
    ctx->pc = 0x192df8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192dfc: 0xdfb00010
    ctx->pc = 0x192dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192e00: 0x3e00008
    ctx->pc = 0x192E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192E04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192D04u: goto label_192d04;
            case 0x192D60u: goto label_192d60;
            case 0x192D64u: goto label_192d64;
            case 0x192DB0u: goto label_192db0;
            case 0x192DCCu: goto label_192dcc;
            case 0x192DD4u: goto label_192dd4;
            case 0x192DD8u: goto label_192dd8;
            case 0x192DDCu: goto label_192ddc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192E08u;
}
