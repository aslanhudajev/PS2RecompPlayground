#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadGauntWorldStart
// Address: 0x263dc0 - 0x264208
void LoadGauntWorldStart_0x263dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x263dc0u;

label_263dc0:
    // 0x263dc0: 0x27bdff80
    ctx->pc = 0x263dc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_263dc4:
    // 0x263dc4: 0xffbf0070
    ctx->pc = 0x263dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_263dc8:
    // 0x263dc8: 0xffb50060
    ctx->pc = 0x263dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_263dcc:
    // 0x263dcc: 0xffb40050
    ctx->pc = 0x263dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_263dd0:
    // 0x263dd0: 0xffb30040
    ctx->pc = 0x263dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_263dd4:
    // 0x263dd4: 0xffb20030
    ctx->pc = 0x263dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_263dd8:
    // 0x263dd8: 0xffb10020
    ctx->pc = 0x263dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_263ddc:
    // 0x263ddc: 0xffb00010
    ctx->pc = 0x263ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_263de0:
    // 0x263de0: 0x80982d
    ctx->pc = 0x263de0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_263de4:
    // 0x263de4: 0x3c02003c
    ctx->pc = 0x263de4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_263de8:
    // 0x263de8: 0x3c03003a
    ctx->pc = 0x263de8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_263dec:
    // 0x263dec: 0x8c6322f8
    ctx->pc = 0x263decu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
label_263df0:
    // 0x263df0: 0x6610007
label_263df4:
    if (ctx->pc == 0x263DF4u) {
        ctx->pc = 0x263DF4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 13012), GPR_U32(ctx, 3));
        ctx->pc = 0x263DF8u;
        goto label_263df8;
    }
    ctx->pc = 0x263DF0u;
    {
        const bool branch_taken_0x263df0 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x263DF4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 13012), GPR_U32(ctx, 3));
        if (branch_taken_0x263df0) {
            ctx->pc = 0x263E10u;
            goto label_263e10;
        }
    }
    ctx->pc = 0x263DF8u;
label_263df8:
    // 0x263df8: 0xc0870ec
label_263dfc:
    if (ctx->pc == 0x263DFCu) {
        ctx->pc = 0x263DFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263E00u;
        goto label_263e00;
    }
    ctx->pc = 0x263DF8u;
    SET_GPR_U32(ctx, 31, 0x263E00u);
    ctx->pc = 0x263DFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21C3B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartWorldLoad_0x21c3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263E00u; }
    }
    if (ctx->pc != 0x263E00u) { return; }
    ctx->pc = 0x263E00u;
label_263e00:
    // 0x263e00: 0x3c030034
    ctx->pc = 0x263e00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_263e04:
    // 0x263e04: 0x2402ffff
    ctx->pc = 0x263e04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_263e08:
    // 0x263e08: 0x100000f6
label_263e0c:
    if (ctx->pc == 0x263E0Cu) {
        ctx->pc = 0x263E0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        ctx->pc = 0x263E10u;
        goto label_263e10;
    }
    ctx->pc = 0x263E08u;
    {
        const bool branch_taken_0x263e08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x263E0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        if (branch_taken_0x263e08) {
            ctx->pc = 0x2641E4u;
            goto label_2641e4;
        }
    }
    ctx->pc = 0x263E10u;
label_263e10:
    // 0x263e10: 0xc0986b4
label_263e14:
    if (ctx->pc == 0x263E14u) {
        ctx->pc = 0x263E14u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263E18u;
        goto label_263e18;
    }
    ctx->pc = 0x263E10u;
    SET_GPR_U32(ctx, 31, 0x263E18u);
    ctx->pc = 0x263E14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x261AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWorldData_0x261ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263E18u; }
    }
    if (ctx->pc != 0x263E18u) { return; }
    ctx->pc = 0x263E18u;
label_263e18:
    // 0x263e18: 0x3c030034
    ctx->pc = 0x263e18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_263e1c:
    // 0x263e1c: 0x3c020034
    ctx->pc = 0x263e1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_263e20:
    // 0x263e20: 0x8c44e7f0
    ctx->pc = 0x263e20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_263e24:
    // 0x263e24: 0xac64e7f8
    ctx->pc = 0x263e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961144), GPR_U32(ctx, 4));
label_263e28:
    // 0x263e28: 0x3c030034
    ctx->pc = 0x263e28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_263e2c:
    // 0x263e2c: 0x3c020034
    ctx->pc = 0x263e2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_263e30:
    // 0x263e30: 0x8c45e7f4
    ctx->pc = 0x263e30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294961140)));
label_263e34:
    // 0x263e34: 0x2402000d
    ctx->pc = 0x263e34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_263e38:
    // 0x263e38: 0x10820005
label_263e3c:
    if (ctx->pc == 0x263E3Cu) {
        ctx->pc = 0x263E3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961148), GPR_U32(ctx, 5));
        ctx->pc = 0x263E40u;
        goto label_263e40;
    }
    ctx->pc = 0x263E38u;
    {
        const bool branch_taken_0x263e38 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x263E3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961148), GPR_U32(ctx, 5));
        if (branch_taken_0x263e38) {
            ctx->pc = 0x263E50u;
            goto label_263e50;
        }
    }
    ctx->pc = 0x263E40u;
label_263e40:
    // 0x263e40: 0x3c020034
    ctx->pc = 0x263e40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_263e44:
    // 0x263e44: 0xac44e800
    ctx->pc = 0x263e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961152), GPR_U32(ctx, 4));
label_263e48:
    // 0x263e48: 0x3c020034
    ctx->pc = 0x263e48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_263e4c:
    // 0x263e4c: 0xac45e804
    ctx->pc = 0x263e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961156), GPR_U32(ctx, 5));
label_263e50:
    // 0x263e50: 0x3c10003c
    ctx->pc = 0x263e50u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_263e54:
    // 0x263e54: 0xc0989a2
label_263e58:
    if (ctx->pc == 0x263E58u) {
        ctx->pc = 0x263E58u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12944));
        ctx->pc = 0x263E5Cu;
        goto label_263e5c;
    }
    ctx->pc = 0x263E54u;
    SET_GPR_U32(ctx, 31, 0x263E5Cu);
    ctx->pc = 0x263E58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12944));
    ctx->pc = 0x262688u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetLevelDesc_0x262688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263E5Cu; }
    }
    if (ctx->pc != 0x263E5Cu) { return; }
    ctx->pc = 0x263E5Cu;
label_263e5c:
    // 0x263e5c: 0x3c020034
    ctx->pc = 0x263e5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_263e60:
    // 0x263e60: 0xac40e7ec
    ctx->pc = 0x263e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961132), GPR_U32(ctx, 0));
label_263e64:
    // 0x263e64: 0x3c03003c
    ctx->pc = 0x263e64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_263e68:
    // 0x263e68: 0x3c02003a
    ctx->pc = 0x263e68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_263e6c:
    // 0x263e6c: 0x8c42230c
    ctx->pc = 0x263e6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8972)));
label_263e70:
    // 0x263e70: 0xac62325c
    ctx->pc = 0x263e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12892), GPR_U32(ctx, 2));
label_263e74:
    // 0x263e74: 0xc0870ec
label_263e78:
    if (ctx->pc == 0x263E78u) {
        ctx->pc = 0x263E78u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12944));
        ctx->pc = 0x263E7Cu;
        goto label_263e7c;
    }
    ctx->pc = 0x263E74u;
    SET_GPR_U32(ctx, 31, 0x263E7Cu);
    ctx->pc = 0x263E78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12944));
    ctx->pc = 0x21C3B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartWorldLoad_0x21c3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263E7Cu; }
    }
    if (ctx->pc != 0x263E7Cu) { return; }
    ctx->pc = 0x263E7Cu;
label_263e7c:
    // 0x263e7c: 0xc0989f6
label_263e80:
    if (ctx->pc == 0x263E80u) {
        ctx->pc = 0x263E80u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263E84u;
        goto label_263e84;
    }
    ctx->pc = 0x263E7Cu;
    SET_GPR_U32(ctx, 31, 0x263E84u);
    ctx->pc = 0x263E80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2627D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetEnemyTypes_0x2627d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263E84u; }
    }
    if (ctx->pc != 0x263E84u) { return; }
    ctx->pc = 0x263E84u;
label_263e84:
    // 0x263e84: 0x3c020031
    ctx->pc = 0x263e84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_263e88:
    // 0x263e88: 0x8c42fff0
    ctx->pc = 0x263e88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967280)));
label_263e8c:
    // 0x263e8c: 0x28420002
    ctx->pc = 0x263e8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_263e90:
    // 0x263e90: 0x10400012
label_263e94:
    if (ctx->pc == 0x263E94u) {
        ctx->pc = 0x263E94u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x263E98u;
        goto label_263e98;
    }
    ctx->pc = 0x263E90u;
    {
        const bool branch_taken_0x263e90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x263E94u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x263e90) {
            ctx->pc = 0x263EDCu;
            goto label_263edc;
        }
    }
    ctx->pc = 0x263E98u;
label_263e98:
    // 0x263e98: 0x8c42d934
    ctx->pc = 0x263e98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_263e9c:
    // 0x263e9c: 0x4410010
label_263ea0:
    if (ctx->pc == 0x263EA0u) {
        ctx->pc = 0x263EA0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263EA4u;
        goto label_263ea4;
    }
    ctx->pc = 0x263E9Cu;
    {
        const bool branch_taken_0x263e9c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x263EA0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x263e9c) {
            ctx->pc = 0x263EE0u;
            goto label_263ee0;
        }
    }
    ctx->pc = 0x263EA4u;
label_263ea4:
    // 0x263ea4: 0x3c020034
    ctx->pc = 0x263ea4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_263ea8:
    // 0x263ea8: 0x8c42e7d4
    ctx->pc = 0x263ea8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961108)));
label_263eac:
    // 0x263eac: 0x1262000c
label_263eb0:
    if (ctx->pc == 0x263EB0u) {
        ctx->pc = 0x263EB0u;
        SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
        ctx->pc = 0x263EB4u;
        goto label_263eb4;
    }
    ctx->pc = 0x263EACu;
    {
        const bool branch_taken_0x263eac = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x263EB0u;
        SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
        if (branch_taken_0x263eac) {
            ctx->pc = 0x263EE0u;
            goto label_263ee0;
        }
    }
    ctx->pc = 0x263EB4u;
label_263eb4:
    // 0x263eb4: 0x8e024640
    ctx->pc = 0x263eb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 17984)));
label_263eb8:
    // 0x263eb8: 0x441000a
label_263ebc:
    if (ctx->pc == 0x263EBCu) {
        ctx->pc = 0x263EBCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x263EC0u;
        goto label_263ec0;
    }
    ctx->pc = 0x263EB8u;
    {
        const bool branch_taken_0x263eb8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x263EBCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x263eb8) {
            ctx->pc = 0x263EE4u;
            goto label_263ee4;
        }
    }
    ctx->pc = 0x263EC0u;
label_263ec0:
    // 0x263ec0: 0x3c04003b
    ctx->pc = 0x263ec0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_263ec4:
    // 0x263ec4: 0x24849a58
    ctx->pc = 0x263ec4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941272));
label_263ec8:
    // 0x263ec8: 0x282d
    ctx->pc = 0x263ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263ecc:
    // 0x263ecc: 0x302d
    ctx->pc = 0x263eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263ed0:
    // 0x263ed0: 0xc080d22
label_263ed4:
    if (ctx->pc == 0x263ED4u) {
        ctx->pc = 0x263ED4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x263ED8u;
        goto label_263ed8;
    }
    ctx->pc = 0x263ED0u;
    SET_GPR_U32(ctx, 31, 0x263ED8u);
    ctx->pc = 0x263ED4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263ED8u; }
    }
    if (ctx->pc != 0x263ED8u) { return; }
    ctx->pc = 0x263ED8u;
label_263ed8:
    // 0x263ed8: 0xae024640
    ctx->pc = 0x263ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17984), GPR_U32(ctx, 2));
label_263edc:
    // 0x263edc: 0x902d
    ctx->pc = 0x263edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263ee0:
    // 0x263ee0: 0x3c020034
    ctx->pc = 0x263ee0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_263ee4:
    // 0x263ee4: 0x2442e820
    ctx->pc = 0x263ee4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961184));
label_263ee8:
    // 0x263ee8: 0x121880
    ctx->pc = 0x263ee8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
label_263eec:
    // 0x263eec: 0x621021
    ctx->pc = 0x263eecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_263ef0:
    // 0x263ef0: 0x8c510000
    ctx->pc = 0x263ef0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_263ef4:
    // 0x263ef4: 0x3c02003c
    ctx->pc = 0x263ef4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_263ef8:
    // 0x263ef8: 0x24423260
    ctx->pc = 0x263ef8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12896));
label_263efc:
    // 0x263efc: 0x621821
    ctx->pc = 0x263efcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_263f00:
    // 0x263f00: 0xac600000
    ctx->pc = 0x263f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_263f04:
    // 0x263f04: 0x2623ffe3
    ctx->pc = 0x263f04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4294967267));
label_263f08:
    // 0x263f08: 0x2c620010
    ctx->pc = 0x263f08u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16));
label_263f0c:
    // 0x263f0c: 0x10400088
label_263f10:
    if (ctx->pc == 0x263F10u) {
        ctx->pc = 0x263F10u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x263F14u;
        goto label_263f14;
    }
    ctx->pc = 0x263F0Cu;
    {
        const bool branch_taken_0x263f0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x263F10u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x263f0c) {
            ctx->pc = 0x264130u;
            goto label_264130;
        }
    }
    ctx->pc = 0x263F14u;
label_263f14:
    // 0x263f14: 0x3c02003b
    ctx->pc = 0x263f14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_263f18:
    // 0x263f18: 0x24429c60
    ctx->pc = 0x263f18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294941792));
label_263f1c:
    // 0x263f1c: 0x31880
    ctx->pc = 0x263f1cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_263f20:
    // 0x263f20: 0x621821
    ctx->pc = 0x263f20u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_263f24:
    // 0x263f24: 0x8c620000
    ctx->pc = 0x263f24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_263f28:
    // 0x263f28: 0x400008
label_263f2c:
    if (ctx->pc == 0x263F2Cu) {
        ctx->pc = 0x263F30u;
        goto label_263f30;
    }
    ctx->pc = 0x263F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC0u: goto label_263dc0;
            case 0x263DC4u: goto label_263dc4;
            case 0x263DC8u: goto label_263dc8;
            case 0x263DCCu: goto label_263dcc;
            case 0x263DD0u: goto label_263dd0;
            case 0x263DD4u: goto label_263dd4;
            case 0x263DD8u: goto label_263dd8;
            case 0x263DDCu: goto label_263ddc;
            case 0x263DE0u: goto label_263de0;
            case 0x263DE4u: goto label_263de4;
            case 0x263DE8u: goto label_263de8;
            case 0x263DECu: goto label_263dec;
            case 0x263DF0u: goto label_263df0;
            case 0x263DF4u: goto label_263df4;
            case 0x263DF8u: goto label_263df8;
            case 0x263DFCu: goto label_263dfc;
            case 0x263E00u: goto label_263e00;
            case 0x263E04u: goto label_263e04;
            case 0x263E08u: goto label_263e08;
            case 0x263E0Cu: goto label_263e0c;
            case 0x263E10u: goto label_263e10;
            case 0x263E14u: goto label_263e14;
            case 0x263E18u: goto label_263e18;
            case 0x263E1Cu: goto label_263e1c;
            case 0x263E20u: goto label_263e20;
            case 0x263E24u: goto label_263e24;
            case 0x263E28u: goto label_263e28;
            case 0x263E2Cu: goto label_263e2c;
            case 0x263E30u: goto label_263e30;
            case 0x263E34u: goto label_263e34;
            case 0x263E38u: goto label_263e38;
            case 0x263E3Cu: goto label_263e3c;
            case 0x263E40u: goto label_263e40;
            case 0x263E44u: goto label_263e44;
            case 0x263E48u: goto label_263e48;
            case 0x263E4Cu: goto label_263e4c;
            case 0x263E50u: goto label_263e50;
            case 0x263E54u: goto label_263e54;
            case 0x263E58u: goto label_263e58;
            case 0x263E5Cu: goto label_263e5c;
            case 0x263E60u: goto label_263e60;
            case 0x263E64u: goto label_263e64;
            case 0x263E68u: goto label_263e68;
            case 0x263E6Cu: goto label_263e6c;
            case 0x263E70u: goto label_263e70;
            case 0x263E74u: goto label_263e74;
            case 0x263E78u: goto label_263e78;
            case 0x263E7Cu: goto label_263e7c;
            case 0x263E80u: goto label_263e80;
            case 0x263E84u: goto label_263e84;
            case 0x263E88u: goto label_263e88;
            case 0x263E8Cu: goto label_263e8c;
            case 0x263E90u: goto label_263e90;
            case 0x263E94u: goto label_263e94;
            case 0x263E98u: goto label_263e98;
            case 0x263E9Cu: goto label_263e9c;
            case 0x263EA0u: goto label_263ea0;
            case 0x263EA4u: goto label_263ea4;
            case 0x263EA8u: goto label_263ea8;
            case 0x263EACu: goto label_263eac;
            case 0x263EB0u: goto label_263eb0;
            case 0x263EB4u: goto label_263eb4;
            case 0x263EB8u: goto label_263eb8;
            case 0x263EBCu: goto label_263ebc;
            case 0x263EC0u: goto label_263ec0;
            case 0x263EC4u: goto label_263ec4;
            case 0x263EC8u: goto label_263ec8;
            case 0x263ECCu: goto label_263ecc;
            case 0x263ED0u: goto label_263ed0;
            case 0x263ED4u: goto label_263ed4;
            case 0x263ED8u: goto label_263ed8;
            case 0x263EDCu: goto label_263edc;
            case 0x263EE0u: goto label_263ee0;
            case 0x263EE4u: goto label_263ee4;
            case 0x263EE8u: goto label_263ee8;
            case 0x263EECu: goto label_263eec;
            case 0x263EF0u: goto label_263ef0;
            case 0x263EF4u: goto label_263ef4;
            case 0x263EF8u: goto label_263ef8;
            case 0x263EFCu: goto label_263efc;
            case 0x263F00u: goto label_263f00;
            case 0x263F04u: goto label_263f04;
            case 0x263F08u: goto label_263f08;
            case 0x263F0Cu: goto label_263f0c;
            case 0x263F10u: goto label_263f10;
            case 0x263F14u: goto label_263f14;
            case 0x263F18u: goto label_263f18;
            case 0x263F1Cu: goto label_263f1c;
            case 0x263F20u: goto label_263f20;
            case 0x263F24u: goto label_263f24;
            case 0x263F28u: goto label_263f28;
            case 0x263F2Cu: goto label_263f2c;
            case 0x263F30u: goto label_263f30;
            case 0x263F34u: goto label_263f34;
            case 0x263F38u: goto label_263f38;
            case 0x263F3Cu: goto label_263f3c;
            case 0x263F40u: goto label_263f40;
            case 0x263F44u: goto label_263f44;
            case 0x263F48u: goto label_263f48;
            case 0x263F4Cu: goto label_263f4c;
            case 0x263F50u: goto label_263f50;
            case 0x263F54u: goto label_263f54;
            case 0x263F58u: goto label_263f58;
            case 0x263F5Cu: goto label_263f5c;
            case 0x263F60u: goto label_263f60;
            case 0x263F64u: goto label_263f64;
            case 0x263F68u: goto label_263f68;
            case 0x263F6Cu: goto label_263f6c;
            case 0x263F70u: goto label_263f70;
            case 0x263F74u: goto label_263f74;
            case 0x263F78u: goto label_263f78;
            case 0x263F7Cu: goto label_263f7c;
            case 0x263F80u: goto label_263f80;
            case 0x263F84u: goto label_263f84;
            case 0x263F88u: goto label_263f88;
            case 0x263F8Cu: goto label_263f8c;
            case 0x263F90u: goto label_263f90;
            case 0x263F94u: goto label_263f94;
            case 0x263F98u: goto label_263f98;
            case 0x263F9Cu: goto label_263f9c;
            case 0x263FA0u: goto label_263fa0;
            case 0x263FA4u: goto label_263fa4;
            case 0x263FA8u: goto label_263fa8;
            case 0x263FACu: goto label_263fac;
            case 0x263FB0u: goto label_263fb0;
            case 0x263FB4u: goto label_263fb4;
            case 0x263FB8u: goto label_263fb8;
            case 0x263FBCu: goto label_263fbc;
            case 0x263FC0u: goto label_263fc0;
            case 0x263FC4u: goto label_263fc4;
            case 0x263FC8u: goto label_263fc8;
            case 0x263FCCu: goto label_263fcc;
            case 0x263FD0u: goto label_263fd0;
            case 0x263FD4u: goto label_263fd4;
            case 0x263FD8u: goto label_263fd8;
            case 0x263FDCu: goto label_263fdc;
            case 0x263FE0u: goto label_263fe0;
            case 0x263FE4u: goto label_263fe4;
            case 0x263FE8u: goto label_263fe8;
            case 0x263FECu: goto label_263fec;
            case 0x263FF0u: goto label_263ff0;
            case 0x263FF4u: goto label_263ff4;
            case 0x263FF8u: goto label_263ff8;
            case 0x263FFCu: goto label_263ffc;
            case 0x264000u: goto label_264000;
            case 0x264004u: goto label_264004;
            case 0x264008u: goto label_264008;
            case 0x26400Cu: goto label_26400c;
            case 0x264010u: goto label_264010;
            case 0x264014u: goto label_264014;
            case 0x264018u: goto label_264018;
            case 0x26401Cu: goto label_26401c;
            case 0x264020u: goto label_264020;
            case 0x264024u: goto label_264024;
            case 0x264028u: goto label_264028;
            case 0x26402Cu: goto label_26402c;
            case 0x264030u: goto label_264030;
            case 0x264034u: goto label_264034;
            case 0x264038u: goto label_264038;
            case 0x26403Cu: goto label_26403c;
            case 0x264040u: goto label_264040;
            case 0x264044u: goto label_264044;
            case 0x264048u: goto label_264048;
            case 0x26404Cu: goto label_26404c;
            case 0x264050u: goto label_264050;
            case 0x264054u: goto label_264054;
            case 0x264058u: goto label_264058;
            case 0x26405Cu: goto label_26405c;
            case 0x264060u: goto label_264060;
            case 0x264064u: goto label_264064;
            case 0x264068u: goto label_264068;
            case 0x26406Cu: goto label_26406c;
            case 0x264070u: goto label_264070;
            case 0x264074u: goto label_264074;
            case 0x264078u: goto label_264078;
            case 0x26407Cu: goto label_26407c;
            case 0x264080u: goto label_264080;
            case 0x264084u: goto label_264084;
            case 0x264088u: goto label_264088;
            case 0x26408Cu: goto label_26408c;
            case 0x264090u: goto label_264090;
            case 0x264094u: goto label_264094;
            case 0x264098u: goto label_264098;
            case 0x26409Cu: goto label_26409c;
            case 0x2640A0u: goto label_2640a0;
            case 0x2640A4u: goto label_2640a4;
            case 0x2640A8u: goto label_2640a8;
            case 0x2640ACu: goto label_2640ac;
            case 0x2640B0u: goto label_2640b0;
            case 0x2640B4u: goto label_2640b4;
            case 0x2640B8u: goto label_2640b8;
            case 0x2640BCu: goto label_2640bc;
            case 0x2640C0u: goto label_2640c0;
            case 0x2640C4u: goto label_2640c4;
            case 0x2640C8u: goto label_2640c8;
            case 0x2640CCu: goto label_2640cc;
            case 0x2640D0u: goto label_2640d0;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x2640DCu: goto label_2640dc;
            case 0x2640E0u: goto label_2640e0;
            case 0x2640E4u: goto label_2640e4;
            case 0x2640E8u: goto label_2640e8;
            case 0x2640ECu: goto label_2640ec;
            case 0x2640F0u: goto label_2640f0;
            case 0x2640F4u: goto label_2640f4;
            case 0x2640F8u: goto label_2640f8;
            case 0x2640FCu: goto label_2640fc;
            case 0x264100u: goto label_264100;
            case 0x264104u: goto label_264104;
            case 0x264108u: goto label_264108;
            case 0x26410Cu: goto label_26410c;
            case 0x264110u: goto label_264110;
            case 0x264114u: goto label_264114;
            case 0x264118u: goto label_264118;
            case 0x26411Cu: goto label_26411c;
            case 0x264120u: goto label_264120;
            case 0x264124u: goto label_264124;
            case 0x264128u: goto label_264128;
            case 0x26412Cu: goto label_26412c;
            case 0x264130u: goto label_264130;
            case 0x264134u: goto label_264134;
            case 0x264138u: goto label_264138;
            case 0x26413Cu: goto label_26413c;
            case 0x264140u: goto label_264140;
            case 0x264144u: goto label_264144;
            case 0x264148u: goto label_264148;
            case 0x26414Cu: goto label_26414c;
            case 0x264150u: goto label_264150;
            case 0x264154u: goto label_264154;
            case 0x264158u: goto label_264158;
            case 0x26415Cu: goto label_26415c;
            case 0x264160u: goto label_264160;
            case 0x264164u: goto label_264164;
            case 0x264168u: goto label_264168;
            case 0x26416Cu: goto label_26416c;
            case 0x264170u: goto label_264170;
            case 0x264174u: goto label_264174;
            case 0x264178u: goto label_264178;
            case 0x26417Cu: goto label_26417c;
            case 0x264180u: goto label_264180;
            case 0x264184u: goto label_264184;
            case 0x264188u: goto label_264188;
            case 0x26418Cu: goto label_26418c;
            case 0x264190u: goto label_264190;
            case 0x264194u: goto label_264194;
            case 0x264198u: goto label_264198;
            case 0x26419Cu: goto label_26419c;
            case 0x2641A0u: goto label_2641a0;
            case 0x2641A4u: goto label_2641a4;
            case 0x2641A8u: goto label_2641a8;
            case 0x2641ACu: goto label_2641ac;
            case 0x2641B0u: goto label_2641b0;
            case 0x2641B4u: goto label_2641b4;
            case 0x2641B8u: goto label_2641b8;
            case 0x2641BCu: goto label_2641bc;
            case 0x2641C0u: goto label_2641c0;
            case 0x2641C4u: goto label_2641c4;
            case 0x2641C8u: goto label_2641c8;
            case 0x2641CCu: goto label_2641cc;
            case 0x2641D0u: goto label_2641d0;
            case 0x2641D4u: goto label_2641d4;
            case 0x2641D8u: goto label_2641d8;
            case 0x2641DCu: goto label_2641dc;
            case 0x2641E0u: goto label_2641e0;
            case 0x2641E4u: goto label_2641e4;
            case 0x2641E8u: goto label_2641e8;
            case 0x2641ECu: goto label_2641ec;
            case 0x2641F0u: goto label_2641f0;
            case 0x2641F4u: goto label_2641f4;
            case 0x2641F8u: goto label_2641f8;
            case 0x2641FCu: goto label_2641fc;
            case 0x264200u: goto label_264200;
            case 0x264204u: goto label_264204;
            default: break;
        }
        return;
    }
    ctx->pc = 0x263F30u;
label_263f30:
    // 0x263f30: 0x3c04003b
    ctx->pc = 0x263f30u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_263f34:
    // 0x263f34: 0x3c05003b
    ctx->pc = 0x263f34u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_263f38:
    // 0x263f38: 0x24849b50
    ctx->pc = 0x263f38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941520));
label_263f3c:
    // 0x263f3c: 0xc0a4a50
label_263f40:
    if (ctx->pc == 0x263F40u) {
        ctx->pc = 0x263F40u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941528));
        ctx->pc = 0x263F44u;
        goto label_263f44;
    }
    ctx->pc = 0x263F3Cu;
    SET_GPR_U32(ctx, 31, 0x263F44u);
    ctx->pc = 0x263F40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941528));
    ctx->pc = 0x292940u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadFile_0x292940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263F44u; }
    }
    if (ctx->pc != 0x263F44u) { return; }
    ctx->pc = 0x263F44u;
label_263f44:
    // 0x263f44: 0x1000008d
label_263f48:
    if (ctx->pc == 0x263F48u) {
        ctx->pc = 0x263F4Cu;
        goto label_263f4c;
    }
    ctx->pc = 0x263F44u;
    {
        const bool branch_taken_0x263f44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x263f44) {
            ctx->pc = 0x26417Cu;
            goto label_26417c;
        }
    }
    ctx->pc = 0x263F4Cu;
label_263f4c:
    // 0x263f4c: 0x3c04003b
    ctx->pc = 0x263f4cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_263f50:
    // 0x263f50: 0x3c05003b
    ctx->pc = 0x263f50u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_263f54:
    // 0x263f54: 0x24849b50
    ctx->pc = 0x263f54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941520));
label_263f58:
    // 0x263f58: 0xc0a4a50
label_263f5c:
    if (ctx->pc == 0x263F5Cu) {
        ctx->pc = 0x263F5Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941544));
        ctx->pc = 0x263F60u;
        goto label_263f60;
    }
    ctx->pc = 0x263F58u;
    SET_GPR_U32(ctx, 31, 0x263F60u);
    ctx->pc = 0x263F5Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941544));
    ctx->pc = 0x292940u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadFile_0x292940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263F60u; }
    }
    if (ctx->pc != 0x263F60u) { return; }
    ctx->pc = 0x263F60u;
label_263f60:
    // 0x263f60: 0x10000086
label_263f64:
    if (ctx->pc == 0x263F64u) {
        ctx->pc = 0x263F68u;
        goto label_263f68;
    }
    ctx->pc = 0x263F60u;
    {
        const bool branch_taken_0x263f60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x263f60) {
            ctx->pc = 0x26417Cu;
            goto label_26417c;
        }
    }
    ctx->pc = 0x263F68u;
label_263f68:
    // 0x263f68: 0x3c04003b
    ctx->pc = 0x263f68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_263f6c:
    // 0x263f6c: 0x3c05003b
    ctx->pc = 0x263f6cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_263f70:
    // 0x263f70: 0x24849b50
    ctx->pc = 0x263f70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941520));
label_263f74:
    // 0x263f74: 0xc0a4a50
label_263f78:
    if (ctx->pc == 0x263F78u) {
        ctx->pc = 0x263F78u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941560));
        ctx->pc = 0x263F7Cu;
        goto label_263f7c;
    }
    ctx->pc = 0x263F74u;
    SET_GPR_U32(ctx, 31, 0x263F7Cu);
    ctx->pc = 0x263F78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941560));
    ctx->pc = 0x292940u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadFile_0x292940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263F7Cu; }
    }
    if (ctx->pc != 0x263F7Cu) { return; }
    ctx->pc = 0x263F7Cu;
label_263f7c:
    // 0x263f7c: 0x1000007f
label_263f80:
    if (ctx->pc == 0x263F80u) {
        ctx->pc = 0x263F84u;
        goto label_263f84;
    }
    ctx->pc = 0x263F7Cu;
    {
        const bool branch_taken_0x263f7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x263f7c) {
            ctx->pc = 0x26417Cu;
            goto label_26417c;
        }
    }
    ctx->pc = 0x263F84u;
label_263f84:
    // 0x263f84: 0x3c04003b
    ctx->pc = 0x263f84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_263f88:
    // 0x263f88: 0x3c05003b
    ctx->pc = 0x263f88u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_263f8c:
    // 0x263f8c: 0x24849b50
    ctx->pc = 0x263f8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941520));
label_263f90:
    // 0x263f90: 0xc0a4a50
label_263f94:
    if (ctx->pc == 0x263F94u) {
        ctx->pc = 0x263F94u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941576));
        ctx->pc = 0x263F98u;
        goto label_263f98;
    }
    ctx->pc = 0x263F90u;
    SET_GPR_U32(ctx, 31, 0x263F98u);
    ctx->pc = 0x263F94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941576));
    ctx->pc = 0x292940u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadFile_0x292940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263F98u; }
    }
    if (ctx->pc != 0x263F98u) { return; }
    ctx->pc = 0x263F98u;
label_263f98:
    // 0x263f98: 0x10000078
label_263f9c:
    if (ctx->pc == 0x263F9Cu) {
        ctx->pc = 0x263FA0u;
        goto label_263fa0;
    }
    ctx->pc = 0x263F98u;
    {
        const bool branch_taken_0x263f98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x263f98) {
            ctx->pc = 0x26417Cu;
            goto label_26417c;
        }
    }
    ctx->pc = 0x263FA0u;
label_263fa0:
    // 0x263fa0: 0x3c04003b
    ctx->pc = 0x263fa0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_263fa4:
    // 0x263fa4: 0x3c05003b
    ctx->pc = 0x263fa4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_263fa8:
    // 0x263fa8: 0x24849b50
    ctx->pc = 0x263fa8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941520));
label_263fac:
    // 0x263fac: 0xc0a4a50
label_263fb0:
    if (ctx->pc == 0x263FB0u) {
        ctx->pc = 0x263FB0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941592));
        ctx->pc = 0x263FB4u;
        goto label_263fb4;
    }
    ctx->pc = 0x263FACu;
    SET_GPR_U32(ctx, 31, 0x263FB4u);
    ctx->pc = 0x263FB0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941592));
    ctx->pc = 0x292940u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadFile_0x292940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263FB4u; }
    }
    if (ctx->pc != 0x263FB4u) { return; }
    ctx->pc = 0x263FB4u;
label_263fb4:
    // 0x263fb4: 0x10000071
label_263fb8:
    if (ctx->pc == 0x263FB8u) {
        ctx->pc = 0x263FBCu;
        goto label_263fbc;
    }
    ctx->pc = 0x263FB4u;
    {
        const bool branch_taken_0x263fb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x263fb4) {
            ctx->pc = 0x26417Cu;
            goto label_26417c;
        }
    }
    ctx->pc = 0x263FBCu;
label_263fbc:
    // 0x263fbc: 0x3c04003b
    ctx->pc = 0x263fbcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_263fc0:
    // 0x263fc0: 0x3c05003b
    ctx->pc = 0x263fc0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_263fc4:
    // 0x263fc4: 0x24849b50
    ctx->pc = 0x263fc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941520));
label_263fc8:
    // 0x263fc8: 0xc0a4a50
label_263fcc:
    if (ctx->pc == 0x263FCCu) {
        ctx->pc = 0x263FCCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941608));
        ctx->pc = 0x263FD0u;
        goto label_263fd0;
    }
    ctx->pc = 0x263FC8u;
    SET_GPR_U32(ctx, 31, 0x263FD0u);
    ctx->pc = 0x263FCCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941608));
    ctx->pc = 0x292940u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadFile_0x292940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263FD0u; }
    }
    if (ctx->pc != 0x263FD0u) { return; }
    ctx->pc = 0x263FD0u;
label_263fd0:
    // 0x263fd0: 0x1000006a
label_263fd4:
    if (ctx->pc == 0x263FD4u) {
        ctx->pc = 0x263FD8u;
        goto label_263fd8;
    }
    ctx->pc = 0x263FD0u;
    {
        const bool branch_taken_0x263fd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x263fd0) {
            ctx->pc = 0x26417Cu;
            goto label_26417c;
        }
    }
    ctx->pc = 0x263FD8u;
label_263fd8:
    // 0x263fd8: 0x3c04003b
    ctx->pc = 0x263fd8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_263fdc:
    // 0x263fdc: 0x3c05003b
    ctx->pc = 0x263fdcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_263fe0:
    // 0x263fe0: 0x24849b50
    ctx->pc = 0x263fe0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941520));
label_263fe4:
    // 0x263fe4: 0xc0a4a50
label_263fe8:
    if (ctx->pc == 0x263FE8u) {
        ctx->pc = 0x263FE8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941624));
        ctx->pc = 0x263FECu;
        goto label_263fec;
    }
    ctx->pc = 0x263FE4u;
    SET_GPR_U32(ctx, 31, 0x263FECu);
    ctx->pc = 0x263FE8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941624));
    ctx->pc = 0x292940u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadFile_0x292940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263FECu; }
    }
    if (ctx->pc != 0x263FECu) { return; }
    ctx->pc = 0x263FECu;
label_263fec:
    // 0x263fec: 0x10000063
label_263ff0:
    if (ctx->pc == 0x263FF0u) {
        ctx->pc = 0x263FF4u;
        goto label_263ff4;
    }
    ctx->pc = 0x263FECu;
    {
        const bool branch_taken_0x263fec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x263fec) {
            ctx->pc = 0x26417Cu;
            goto label_26417c;
        }
    }
    ctx->pc = 0x263FF4u;
label_263ff4:
    // 0x263ff4: 0x3c04003b
    ctx->pc = 0x263ff4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_263ff8:
    // 0x263ff8: 0x3c05003b
    ctx->pc = 0x263ff8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_263ffc:
    // 0x263ffc: 0x24849b50
    ctx->pc = 0x263ffcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941520));
label_264000:
    // 0x264000: 0xc0a4a50
label_264004:
    if (ctx->pc == 0x264004u) {
        ctx->pc = 0x264004u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941640));
        ctx->pc = 0x264008u;
        goto label_264008;
    }
    ctx->pc = 0x264000u;
    SET_GPR_U32(ctx, 31, 0x264008u);
    ctx->pc = 0x264004u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941640));
    ctx->pc = 0x292940u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadFile_0x292940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264008u; }
    }
    if (ctx->pc != 0x264008u) { return; }
    ctx->pc = 0x264008u;
label_264008:
    // 0x264008: 0x1000005c
label_26400c:
    if (ctx->pc == 0x26400Cu) {
        ctx->pc = 0x264010u;
        goto label_264010;
    }
    ctx->pc = 0x264008u;
    {
        const bool branch_taken_0x264008 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x264008) {
            ctx->pc = 0x26417Cu;
            goto label_26417c;
        }
    }
    ctx->pc = 0x264010u;
label_264010:
    // 0x264010: 0x3c04003b
    ctx->pc = 0x264010u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_264014:
    // 0x264014: 0x3c05003b
    ctx->pc = 0x264014u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_264018:
    // 0x264018: 0x24849b50
    ctx->pc = 0x264018u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941520));
label_26401c:
    // 0x26401c: 0xc0a4a50
label_264020:
    if (ctx->pc == 0x264020u) {
        ctx->pc = 0x264020u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941656));
        ctx->pc = 0x264024u;
        goto label_264024;
    }
    ctx->pc = 0x26401Cu;
    SET_GPR_U32(ctx, 31, 0x264024u);
    ctx->pc = 0x264020u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941656));
    ctx->pc = 0x292940u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadFile_0x292940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264024u; }
    }
    if (ctx->pc != 0x264024u) { return; }
    ctx->pc = 0x264024u;
label_264024:
    // 0x264024: 0x10000055
label_264028:
    if (ctx->pc == 0x264028u) {
        ctx->pc = 0x26402Cu;
        goto label_26402c;
    }
    ctx->pc = 0x264024u;
    {
        const bool branch_taken_0x264024 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x264024) {
            ctx->pc = 0x26417Cu;
            goto label_26417c;
        }
    }
    ctx->pc = 0x26402Cu;
label_26402c:
    // 0x26402c: 0x3c04003b
    ctx->pc = 0x26402cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_264030:
    // 0x264030: 0x3c05003b
    ctx->pc = 0x264030u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_264034:
    // 0x264034: 0x24849b50
    ctx->pc = 0x264034u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941520));
label_264038:
    // 0x264038: 0xc0a4a50
label_26403c:
    if (ctx->pc == 0x26403Cu) {
        ctx->pc = 0x26403Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941672));
        ctx->pc = 0x264040u;
        goto label_264040;
    }
    ctx->pc = 0x264038u;
    SET_GPR_U32(ctx, 31, 0x264040u);
    ctx->pc = 0x26403Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941672));
    ctx->pc = 0x292940u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadFile_0x292940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264040u; }
    }
    if (ctx->pc != 0x264040u) { return; }
    ctx->pc = 0x264040u;
label_264040:
    // 0x264040: 0x1000004e
label_264044:
    if (ctx->pc == 0x264044u) {
        ctx->pc = 0x264048u;
        goto label_264048;
    }
    ctx->pc = 0x264040u;
    {
        const bool branch_taken_0x264040 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x264040) {
            ctx->pc = 0x26417Cu;
            goto label_26417c;
        }
    }
    ctx->pc = 0x264048u;
label_264048:
    // 0x264048: 0x3c04003b
    ctx->pc = 0x264048u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_26404c:
    // 0x26404c: 0x3c05003b
    ctx->pc = 0x26404cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_264050:
    // 0x264050: 0x24849b50
    ctx->pc = 0x264050u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941520));
label_264054:
    // 0x264054: 0xc0a4a50
label_264058:
    if (ctx->pc == 0x264058u) {
        ctx->pc = 0x264058u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941688));
        ctx->pc = 0x26405Cu;
        goto label_26405c;
    }
    ctx->pc = 0x264054u;
    SET_GPR_U32(ctx, 31, 0x26405Cu);
    ctx->pc = 0x264058u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941688));
    ctx->pc = 0x292940u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadFile_0x292940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26405Cu; }
    }
    if (ctx->pc != 0x26405Cu) { return; }
    ctx->pc = 0x26405Cu;
label_26405c:
    // 0x26405c: 0x10000047
label_264060:
    if (ctx->pc == 0x264060u) {
        ctx->pc = 0x264064u;
        goto label_264064;
    }
    ctx->pc = 0x26405Cu;
    {
        const bool branch_taken_0x26405c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26405c) {
            ctx->pc = 0x26417Cu;
            goto label_26417c;
        }
    }
    ctx->pc = 0x264064u;
label_264064:
    // 0x264064: 0x3c020034
    ctx->pc = 0x264064u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_264068:
    // 0x264068: 0x8c43e7f0
    ctx->pc = 0x264068u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_26406c:
    // 0x26406c: 0x24020009
    ctx->pc = 0x26406cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
label_264070:
    // 0x264070: 0x14620008
label_264074:
    if (ctx->pc == 0x264074u) {
        ctx->pc = 0x264074u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x264078u;
        goto label_264078;
    }
    ctx->pc = 0x264070u;
    {
        const bool branch_taken_0x264070 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x264074u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x264070) {
            ctx->pc = 0x264094u;
            goto label_264094;
        }
    }
    ctx->pc = 0x264078u;
label_264078:
    // 0x264078: 0x3c04003b
    ctx->pc = 0x264078u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_26407c:
    // 0x26407c: 0x24849b50
    ctx->pc = 0x26407cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941520));
label_264080:
    // 0x264080: 0x3c05003b
    ctx->pc = 0x264080u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_264084:
    // 0x264084: 0xc0a4a50
label_264088:
    if (ctx->pc == 0x264088u) {
        ctx->pc = 0x264088u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941704));
        ctx->pc = 0x26408Cu;
        goto label_26408c;
    }
    ctx->pc = 0x264084u;
    SET_GPR_U32(ctx, 31, 0x26408Cu);
    ctx->pc = 0x264088u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941704));
    ctx->pc = 0x292940u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadFile_0x292940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26408Cu; }
    }
    if (ctx->pc != 0x26408Cu) { return; }
    ctx->pc = 0x26408Cu;
label_26408c:
    // 0x26408c: 0x1000003b
label_264090:
    if (ctx->pc == 0x264090u) {
        ctx->pc = 0x264094u;
        goto label_264094;
    }
    ctx->pc = 0x26408Cu;
    {
        const bool branch_taken_0x26408c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26408c) {
            ctx->pc = 0x26417Cu;
            goto label_26417c;
        }
    }
    ctx->pc = 0x264094u;
label_264094:
    // 0x264094: 0x8c43e7f0
    ctx->pc = 0x264094u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_264098:
    // 0x264098: 0x24020006
    ctx->pc = 0x264098u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_26409c:
    // 0x26409c: 0x14620007
label_2640a0:
    if (ctx->pc == 0x2640A0u) {
        ctx->pc = 0x2640A0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2640A4u;
        goto label_2640a4;
    }
    ctx->pc = 0x26409Cu;
    {
        const bool branch_taken_0x26409c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2640A0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x26409c) {
            ctx->pc = 0x2640BCu;
            goto label_2640bc;
        }
    }
    ctx->pc = 0x2640A4u;
label_2640a4:
    // 0x2640a4: 0x24849b50
    ctx->pc = 0x2640a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941520));
label_2640a8:
    // 0x2640a8: 0x3c05003b
    ctx->pc = 0x2640a8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_2640ac:
    // 0x2640ac: 0xc0a4a50
label_2640b0:
    if (ctx->pc == 0x2640B0u) {
        ctx->pc = 0x2640B0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941720));
        ctx->pc = 0x2640B4u;
        goto label_2640b4;
    }
    ctx->pc = 0x2640ACu;
    SET_GPR_U32(ctx, 31, 0x2640B4u);
    ctx->pc = 0x2640B0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941720));
    ctx->pc = 0x292940u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadFile_0x292940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2640B4u; }
    }
    if (ctx->pc != 0x2640B4u) { return; }
    ctx->pc = 0x2640B4u;
label_2640b4:
    // 0x2640b4: 0x10000031
label_2640b8:
    if (ctx->pc == 0x2640B8u) {
        ctx->pc = 0x2640BCu;
        goto label_2640bc;
    }
    ctx->pc = 0x2640B4u;
    {
        const bool branch_taken_0x2640b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2640b4) {
            ctx->pc = 0x26417Cu;
            goto label_26417c;
        }
    }
    ctx->pc = 0x2640BCu;
label_2640bc:
    // 0x2640bc: 0x24849b50
    ctx->pc = 0x2640bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941520));
label_2640c0:
    // 0x2640c0: 0x3c05003b
    ctx->pc = 0x2640c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_2640c4:
    // 0x2640c4: 0xc0a4a50
label_2640c8:
    if (ctx->pc == 0x2640C8u) {
        ctx->pc = 0x2640C8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941736));
        ctx->pc = 0x2640CCu;
        goto label_2640cc;
    }
    ctx->pc = 0x2640C4u;
    SET_GPR_U32(ctx, 31, 0x2640CCu);
    ctx->pc = 0x2640C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941736));
    ctx->pc = 0x292940u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadFile_0x292940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2640CCu; }
    }
    if (ctx->pc != 0x2640CCu) { return; }
    ctx->pc = 0x2640CCu;
label_2640cc:
    // 0x2640cc: 0x1000002b
label_2640d0:
    if (ctx->pc == 0x2640D0u) {
        ctx->pc = 0x2640D4u;
        goto label_2640d4;
    }
    ctx->pc = 0x2640CCu;
    {
        const bool branch_taken_0x2640cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2640cc) {
            ctx->pc = 0x26417Cu;
            goto label_26417c;
        }
    }
    ctx->pc = 0x2640D4u;
label_2640d4:
    // 0x2640d4: 0x3c04003b
    ctx->pc = 0x2640d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2640d8:
    // 0x2640d8: 0x24849b50
    ctx->pc = 0x2640d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941520));
label_2640dc:
    // 0x2640dc: 0x3c05003b
    ctx->pc = 0x2640dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_2640e0:
    // 0x2640e0: 0xc0a4a50
label_2640e4:
    if (ctx->pc == 0x2640E4u) {
        ctx->pc = 0x2640E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941752));
        ctx->pc = 0x2640E8u;
        goto label_2640e8;
    }
    ctx->pc = 0x2640E0u;
    SET_GPR_U32(ctx, 31, 0x2640E8u);
    ctx->pc = 0x2640E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941752));
    ctx->pc = 0x292940u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadFile_0x292940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2640E8u; }
    }
    if (ctx->pc != 0x2640E8u) { return; }
    ctx->pc = 0x2640E8u;
label_2640e8:
    // 0x2640e8: 0x10000024
label_2640ec:
    if (ctx->pc == 0x2640ECu) {
        ctx->pc = 0x2640F0u;
        goto label_2640f0;
    }
    ctx->pc = 0x2640E8u;
    {
        const bool branch_taken_0x2640e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2640e8) {
            ctx->pc = 0x26417Cu;
            goto label_26417c;
        }
    }
    ctx->pc = 0x2640F0u;
label_2640f0:
    // 0x2640f0: 0x3c030034
    ctx->pc = 0x2640f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_2640f4:
    // 0x2640f4: 0x2463e8a8
    ctx->pc = 0x2640f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961320));
label_2640f8:
    // 0x2640f8: 0x121080
    ctx->pc = 0x2640f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_2640fc:
    // 0x2640fc: 0x431021
    ctx->pc = 0x2640fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_264100:
    // 0x264100: 0x8c460000
    ctx->pc = 0x264100u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_264104:
    // 0x264104: 0x3a0202d
    ctx->pc = 0x264104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_264108:
    // 0x264108: 0x3c05003b
    ctx->pc = 0x264108u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_26410c:
    // 0x26410c: 0x24a59c48
    ctx->pc = 0x26410cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941768));
label_264110:
    // 0x264110: 0xc0b6252
label_264114:
    if (ctx->pc == 0x264114u) {
        ctx->pc = 0x264114u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
        ctx->pc = 0x264118u;
        goto label_264118;
    }
    ctx->pc = 0x264110u;
    SET_GPR_U32(ctx, 31, 0x264118u);
    ctx->pc = 0x264114u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264118u; }
    }
    if (ctx->pc != 0x264118u) { return; }
    ctx->pc = 0x264118u;
label_264118:
    // 0x264118: 0x3c04003b
    ctx->pc = 0x264118u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_26411c:
    // 0x26411c: 0x24849b50
    ctx->pc = 0x26411cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941520));
label_264120:
    // 0x264120: 0xc0a4a50
label_264124:
    if (ctx->pc == 0x264124u) {
        ctx->pc = 0x264124u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x264128u;
        goto label_264128;
    }
    ctx->pc = 0x264120u;
    SET_GPR_U32(ctx, 31, 0x264128u);
    ctx->pc = 0x264124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x292940u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadFile_0x292940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264128u; }
    }
    if (ctx->pc != 0x264128u) { return; }
    ctx->pc = 0x264128u;
label_264128:
    // 0x264128: 0x10000014
label_26412c:
    if (ctx->pc == 0x26412Cu) {
        ctx->pc = 0x264130u;
        goto label_264130;
    }
    ctx->pc = 0x264128u;
    {
        const bool branch_taken_0x264128 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x264128) {
            ctx->pc = 0x26417Cu;
            goto label_26417c;
        }
    }
    ctx->pc = 0x264130u;
label_264130:
    // 0x264130: 0x6200012
label_264134:
    if (ctx->pc == 0x264134u) {
        ctx->pc = 0x264134u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x264138u;
        goto label_264138;
    }
    ctx->pc = 0x264130u;
    {
        const bool branch_taken_0x264130 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x264134u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x264130) {
            ctx->pc = 0x26417Cu;
            goto label_26417c;
        }
    }
    ctx->pc = 0x264138u;
label_264138:
    // 0x264138: 0xc0b4fa0
label_26413c:
    if (ctx->pc == 0x26413Cu) {
        ctx->pc = 0x26413Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x264140u;
        goto label_264140;
    }
    ctx->pc = 0x264138u;
    SET_GPR_U32(ctx, 31, 0x264140u);
    ctx->pc = 0x26413Cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264140u; }
    }
    if (ctx->pc != 0x264140u) { return; }
    ctx->pc = 0x264140u;
label_264140:
    // 0x264140: 0x26103260
    ctx->pc = 0x264140u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12896));
label_264144:
    // 0x264144: 0x121880
    ctx->pc = 0x264144u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
label_264148:
    // 0x264148: 0x708021
    ctx->pc = 0x264148u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_26414c:
    // 0x26414c: 0xae020000
    ctx->pc = 0x26414cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_264150:
    // 0x264150: 0x3c020034
    ctx->pc = 0x264150u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_264154:
    // 0x264154: 0x2442e860
    ctx->pc = 0x264154u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961248));
label_264158:
    // 0x264158: 0x621821
    ctx->pc = 0x264158u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26415c:
    // 0x26415c: 0x220202d
    ctx->pc = 0x26415cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_264160:
    // 0x264160: 0xc08e0f2
label_264164:
    if (ctx->pc == 0x264164u) {
        ctx->pc = 0x264164u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x264168u;
        goto label_264168;
    }
    ctx->pc = 0x264160u;
    SET_GPR_U32(ctx, 31, 0x264168u);
    ctx->pc = 0x264164u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2383C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocEnemy_0x2383c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264168u; }
    }
    if (ctx->pc != 0x264168u) { return; }
    ctx->pc = 0x264168u;
label_264168:
    // 0x264168: 0xc0b4fa0
label_26416c:
    if (ctx->pc == 0x26416Cu) {
        ctx->pc = 0x264170u;
        goto label_264170;
    }
    ctx->pc = 0x264168u;
    SET_GPR_U32(ctx, 31, 0x264170u);
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264170u; }
    }
    if (ctx->pc != 0x264170u) { return; }
    ctx->pc = 0x264170u;
label_264170:
    // 0x264170: 0x8e030000
    ctx->pc = 0x264170u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_264174:
    // 0x264174: 0x621823
    ctx->pc = 0x264174u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_264178:
    // 0x264178: 0xae030000
    ctx->pc = 0x264178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_26417c:
    // 0x26417c: 0x12800006
label_264180:
    if (ctx->pc == 0x264180u) {
        ctx->pc = 0x264180u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x264184u;
        goto label_264184;
    }
    ctx->pc = 0x26417Cu;
    {
        const bool branch_taken_0x26417c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x264180u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26417c) {
            ctx->pc = 0x264198u;
            goto label_264198;
        }
    }
    ctx->pc = 0x264184u;
label_264184:
    // 0x264184: 0x2442e820
    ctx->pc = 0x264184u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961184));
label_264188:
    // 0x264188: 0x121880
    ctx->pc = 0x264188u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
label_26418c:
    // 0x26418c: 0x621821
    ctx->pc = 0x26418cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_264190:
    // 0x264190: 0x2402ffff
    ctx->pc = 0x264190u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_264194:
    // 0x264194: 0xac620000
    ctx->pc = 0x264194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_264198:
    // 0x264198: 0x26520001
    ctx->pc = 0x264198u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_26419c:
    // 0x26419c: 0x2a420008
    ctx->pc = 0x26419cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 8));
label_2641a0:
    // 0x2641a0: 0x1440ff50
label_2641a4:
    if (ctx->pc == 0x2641A4u) {
        ctx->pc = 0x2641A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x2641A8u;
        goto label_2641a8;
    }
    ctx->pc = 0x2641A0u;
    {
        const bool branch_taken_0x2641a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2641A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2641a0) {
            ctx->pc = 0x263EE4u;
            goto label_263ee4;
        }
    }
    ctx->pc = 0x2641A8u;
label_2641a8:
    // 0x2641a8: 0xc0a497e
label_2641ac:
    if (ctx->pc == 0x2641ACu) {
        ctx->pc = 0x2641ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2641B0u;
        goto label_2641b0;
    }
    ctx->pc = 0x2641A8u;
    SET_GPR_U32(ctx, 31, 0x2641B0u);
    ctx->pc = 0x2641ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2925F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadAllTypes_0x2925f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641B0u; }
    }
    if (ctx->pc != 0x2641B0u) { return; }
    ctx->pc = 0x2641B0u;
label_2641b0:
    // 0x2641b0: 0x3c02003c
    ctx->pc = 0x2641b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2641b4:
    // 0x2641b4: 0xac4032d0
    ctx->pc = 0x2641b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13008), GPR_U32(ctx, 0));
label_2641b8:
    // 0x2641b8: 0x3c020034
    ctx->pc = 0x2641b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2641bc:
    // 0x2641bc: 0x8c42e7d4
    ctx->pc = 0x2641bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961108)));
label_2641c0:
    // 0x2641c0: 0x12620004
label_2641c4:
    if (ctx->pc == 0x2641C4u) {
        ctx->pc = 0x2641C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2641C8u;
        goto label_2641c8;
    }
    ctx->pc = 0x2641C0u;
    {
        const bool branch_taken_0x2641c0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x2641C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2641c0) {
            ctx->pc = 0x2641D4u;
            goto label_2641d4;
        }
    }
    ctx->pc = 0x2641C8u;
label_2641c8:
    // 0x2641c8: 0xc093dcc
label_2641cc:
    if (ctx->pc == 0x2641CCu) {
        ctx->pc = 0x2641D0u;
        goto label_2641d0;
    }
    ctx->pc = 0x2641C8u;
    SET_GPR_U32(ctx, 31, 0x2641D0u);
    ctx->pc = 0x24F730u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitItems_0x24f730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641D0u; }
    }
    if (ctx->pc != 0x2641D0u) { return; }
    ctx->pc = 0x2641D0u;
label_2641d0:
    // 0x2641d0: 0x3c02003c
    ctx->pc = 0x2641d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2641d4:
    // 0x2641d4: 0xac403280
    ctx->pc = 0x2641d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12928), GPR_U32(ctx, 0));
label_2641d8:
    // 0x2641d8: 0xc0898b8
label_2641dc:
    if (ctx->pc == 0x2641DCu) {
        ctx->pc = 0x2641DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2641E0u;
        goto label_2641e0;
    }
    ctx->pc = 0x2641D8u;
    SET_GPR_U32(ctx, 31, 0x2641E0u);
    ctx->pc = 0x2641DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2262E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LockModels_0x2262e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641E0u; }
    }
    if (ctx->pc != 0x2641E0u) { return; }
    ctx->pc = 0x2641E0u;
label_2641e0:
    // 0x2641e0: 0x2a0102d
    ctx->pc = 0x2641e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2641e4:
    // 0x2641e4: 0xdfbf0070
    ctx->pc = 0x2641e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2641e8:
    // 0x2641e8: 0xdfb50060
    ctx->pc = 0x2641e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2641ec:
    // 0x2641ec: 0xdfb40050
    ctx->pc = 0x2641ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2641f0:
    // 0x2641f0: 0xdfb30040
    ctx->pc = 0x2641f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2641f4:
    // 0x2641f4: 0xdfb20030
    ctx->pc = 0x2641f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2641f8:
    // 0x2641f8: 0xdfb10020
    ctx->pc = 0x2641f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2641fc:
    // 0x2641fc: 0xdfb00010
    ctx->pc = 0x2641fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_264200:
    // 0x264200: 0x3e00008
label_264204:
    if (ctx->pc == 0x264204u) {
        ctx->pc = 0x264204u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x264208u;
        goto label_fallthrough_0x264200;
    }
    ctx->pc = 0x264200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264204u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC0u: goto label_263dc0;
            case 0x263DC4u: goto label_263dc4;
            case 0x263DC8u: goto label_263dc8;
            case 0x263DCCu: goto label_263dcc;
            case 0x263DD0u: goto label_263dd0;
            case 0x263DD4u: goto label_263dd4;
            case 0x263DD8u: goto label_263dd8;
            case 0x263DDCu: goto label_263ddc;
            case 0x263DE0u: goto label_263de0;
            case 0x263DE4u: goto label_263de4;
            case 0x263DE8u: goto label_263de8;
            case 0x263DECu: goto label_263dec;
            case 0x263DF0u: goto label_263df0;
            case 0x263DF4u: goto label_263df4;
            case 0x263DF8u: goto label_263df8;
            case 0x263DFCu: goto label_263dfc;
            case 0x263E00u: goto label_263e00;
            case 0x263E04u: goto label_263e04;
            case 0x263E08u: goto label_263e08;
            case 0x263E0Cu: goto label_263e0c;
            case 0x263E10u: goto label_263e10;
            case 0x263E14u: goto label_263e14;
            case 0x263E18u: goto label_263e18;
            case 0x263E1Cu: goto label_263e1c;
            case 0x263E20u: goto label_263e20;
            case 0x263E24u: goto label_263e24;
            case 0x263E28u: goto label_263e28;
            case 0x263E2Cu: goto label_263e2c;
            case 0x263E30u: goto label_263e30;
            case 0x263E34u: goto label_263e34;
            case 0x263E38u: goto label_263e38;
            case 0x263E3Cu: goto label_263e3c;
            case 0x263E40u: goto label_263e40;
            case 0x263E44u: goto label_263e44;
            case 0x263E48u: goto label_263e48;
            case 0x263E4Cu: goto label_263e4c;
            case 0x263E50u: goto label_263e50;
            case 0x263E54u: goto label_263e54;
            case 0x263E58u: goto label_263e58;
            case 0x263E5Cu: goto label_263e5c;
            case 0x263E60u: goto label_263e60;
            case 0x263E64u: goto label_263e64;
            case 0x263E68u: goto label_263e68;
            case 0x263E6Cu: goto label_263e6c;
            case 0x263E70u: goto label_263e70;
            case 0x263E74u: goto label_263e74;
            case 0x263E78u: goto label_263e78;
            case 0x263E7Cu: goto label_263e7c;
            case 0x263E80u: goto label_263e80;
            case 0x263E84u: goto label_263e84;
            case 0x263E88u: goto label_263e88;
            case 0x263E8Cu: goto label_263e8c;
            case 0x263E90u: goto label_263e90;
            case 0x263E94u: goto label_263e94;
            case 0x263E98u: goto label_263e98;
            case 0x263E9Cu: goto label_263e9c;
            case 0x263EA0u: goto label_263ea0;
            case 0x263EA4u: goto label_263ea4;
            case 0x263EA8u: goto label_263ea8;
            case 0x263EACu: goto label_263eac;
            case 0x263EB0u: goto label_263eb0;
            case 0x263EB4u: goto label_263eb4;
            case 0x263EB8u: goto label_263eb8;
            case 0x263EBCu: goto label_263ebc;
            case 0x263EC0u: goto label_263ec0;
            case 0x263EC4u: goto label_263ec4;
            case 0x263EC8u: goto label_263ec8;
            case 0x263ECCu: goto label_263ecc;
            case 0x263ED0u: goto label_263ed0;
            case 0x263ED4u: goto label_263ed4;
            case 0x263ED8u: goto label_263ed8;
            case 0x263EDCu: goto label_263edc;
            case 0x263EE0u: goto label_263ee0;
            case 0x263EE4u: goto label_263ee4;
            case 0x263EE8u: goto label_263ee8;
            case 0x263EECu: goto label_263eec;
            case 0x263EF0u: goto label_263ef0;
            case 0x263EF4u: goto label_263ef4;
            case 0x263EF8u: goto label_263ef8;
            case 0x263EFCu: goto label_263efc;
            case 0x263F00u: goto label_263f00;
            case 0x263F04u: goto label_263f04;
            case 0x263F08u: goto label_263f08;
            case 0x263F0Cu: goto label_263f0c;
            case 0x263F10u: goto label_263f10;
            case 0x263F14u: goto label_263f14;
            case 0x263F18u: goto label_263f18;
            case 0x263F1Cu: goto label_263f1c;
            case 0x263F20u: goto label_263f20;
            case 0x263F24u: goto label_263f24;
            case 0x263F28u: goto label_263f28;
            case 0x263F2Cu: goto label_263f2c;
            case 0x263F30u: goto label_263f30;
            case 0x263F34u: goto label_263f34;
            case 0x263F38u: goto label_263f38;
            case 0x263F3Cu: goto label_263f3c;
            case 0x263F40u: goto label_263f40;
            case 0x263F44u: goto label_263f44;
            case 0x263F48u: goto label_263f48;
            case 0x263F4Cu: goto label_263f4c;
            case 0x263F50u: goto label_263f50;
            case 0x263F54u: goto label_263f54;
            case 0x263F58u: goto label_263f58;
            case 0x263F5Cu: goto label_263f5c;
            case 0x263F60u: goto label_263f60;
            case 0x263F64u: goto label_263f64;
            case 0x263F68u: goto label_263f68;
            case 0x263F6Cu: goto label_263f6c;
            case 0x263F70u: goto label_263f70;
            case 0x263F74u: goto label_263f74;
            case 0x263F78u: goto label_263f78;
            case 0x263F7Cu: goto label_263f7c;
            case 0x263F80u: goto label_263f80;
            case 0x263F84u: goto label_263f84;
            case 0x263F88u: goto label_263f88;
            case 0x263F8Cu: goto label_263f8c;
            case 0x263F90u: goto label_263f90;
            case 0x263F94u: goto label_263f94;
            case 0x263F98u: goto label_263f98;
            case 0x263F9Cu: goto label_263f9c;
            case 0x263FA0u: goto label_263fa0;
            case 0x263FA4u: goto label_263fa4;
            case 0x263FA8u: goto label_263fa8;
            case 0x263FACu: goto label_263fac;
            case 0x263FB0u: goto label_263fb0;
            case 0x263FB4u: goto label_263fb4;
            case 0x263FB8u: goto label_263fb8;
            case 0x263FBCu: goto label_263fbc;
            case 0x263FC0u: goto label_263fc0;
            case 0x263FC4u: goto label_263fc4;
            case 0x263FC8u: goto label_263fc8;
            case 0x263FCCu: goto label_263fcc;
            case 0x263FD0u: goto label_263fd0;
            case 0x263FD4u: goto label_263fd4;
            case 0x263FD8u: goto label_263fd8;
            case 0x263FDCu: goto label_263fdc;
            case 0x263FE0u: goto label_263fe0;
            case 0x263FE4u: goto label_263fe4;
            case 0x263FE8u: goto label_263fe8;
            case 0x263FECu: goto label_263fec;
            case 0x263FF0u: goto label_263ff0;
            case 0x263FF4u: goto label_263ff4;
            case 0x263FF8u: goto label_263ff8;
            case 0x263FFCu: goto label_263ffc;
            case 0x264000u: goto label_264000;
            case 0x264004u: goto label_264004;
            case 0x264008u: goto label_264008;
            case 0x26400Cu: goto label_26400c;
            case 0x264010u: goto label_264010;
            case 0x264014u: goto label_264014;
            case 0x264018u: goto label_264018;
            case 0x26401Cu: goto label_26401c;
            case 0x264020u: goto label_264020;
            case 0x264024u: goto label_264024;
            case 0x264028u: goto label_264028;
            case 0x26402Cu: goto label_26402c;
            case 0x264030u: goto label_264030;
            case 0x264034u: goto label_264034;
            case 0x264038u: goto label_264038;
            case 0x26403Cu: goto label_26403c;
            case 0x264040u: goto label_264040;
            case 0x264044u: goto label_264044;
            case 0x264048u: goto label_264048;
            case 0x26404Cu: goto label_26404c;
            case 0x264050u: goto label_264050;
            case 0x264054u: goto label_264054;
            case 0x264058u: goto label_264058;
            case 0x26405Cu: goto label_26405c;
            case 0x264060u: goto label_264060;
            case 0x264064u: goto label_264064;
            case 0x264068u: goto label_264068;
            case 0x26406Cu: goto label_26406c;
            case 0x264070u: goto label_264070;
            case 0x264074u: goto label_264074;
            case 0x264078u: goto label_264078;
            case 0x26407Cu: goto label_26407c;
            case 0x264080u: goto label_264080;
            case 0x264084u: goto label_264084;
            case 0x264088u: goto label_264088;
            case 0x26408Cu: goto label_26408c;
            case 0x264090u: goto label_264090;
            case 0x264094u: goto label_264094;
            case 0x264098u: goto label_264098;
            case 0x26409Cu: goto label_26409c;
            case 0x2640A0u: goto label_2640a0;
            case 0x2640A4u: goto label_2640a4;
            case 0x2640A8u: goto label_2640a8;
            case 0x2640ACu: goto label_2640ac;
            case 0x2640B0u: goto label_2640b0;
            case 0x2640B4u: goto label_2640b4;
            case 0x2640B8u: goto label_2640b8;
            case 0x2640BCu: goto label_2640bc;
            case 0x2640C0u: goto label_2640c0;
            case 0x2640C4u: goto label_2640c4;
            case 0x2640C8u: goto label_2640c8;
            case 0x2640CCu: goto label_2640cc;
            case 0x2640D0u: goto label_2640d0;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x2640DCu: goto label_2640dc;
            case 0x2640E0u: goto label_2640e0;
            case 0x2640E4u: goto label_2640e4;
            case 0x2640E8u: goto label_2640e8;
            case 0x2640ECu: goto label_2640ec;
            case 0x2640F0u: goto label_2640f0;
            case 0x2640F4u: goto label_2640f4;
            case 0x2640F8u: goto label_2640f8;
            case 0x2640FCu: goto label_2640fc;
            case 0x264100u: goto label_264100;
            case 0x264104u: goto label_264104;
            case 0x264108u: goto label_264108;
            case 0x26410Cu: goto label_26410c;
            case 0x264110u: goto label_264110;
            case 0x264114u: goto label_264114;
            case 0x264118u: goto label_264118;
            case 0x26411Cu: goto label_26411c;
            case 0x264120u: goto label_264120;
            case 0x264124u: goto label_264124;
            case 0x264128u: goto label_264128;
            case 0x26412Cu: goto label_26412c;
            case 0x264130u: goto label_264130;
            case 0x264134u: goto label_264134;
            case 0x264138u: goto label_264138;
            case 0x26413Cu: goto label_26413c;
            case 0x264140u: goto label_264140;
            case 0x264144u: goto label_264144;
            case 0x264148u: goto label_264148;
            case 0x26414Cu: goto label_26414c;
            case 0x264150u: goto label_264150;
            case 0x264154u: goto label_264154;
            case 0x264158u: goto label_264158;
            case 0x26415Cu: goto label_26415c;
            case 0x264160u: goto label_264160;
            case 0x264164u: goto label_264164;
            case 0x264168u: goto label_264168;
            case 0x26416Cu: goto label_26416c;
            case 0x264170u: goto label_264170;
            case 0x264174u: goto label_264174;
            case 0x264178u: goto label_264178;
            case 0x26417Cu: goto label_26417c;
            case 0x264180u: goto label_264180;
            case 0x264184u: goto label_264184;
            case 0x264188u: goto label_264188;
            case 0x26418Cu: goto label_26418c;
            case 0x264190u: goto label_264190;
            case 0x264194u: goto label_264194;
            case 0x264198u: goto label_264198;
            case 0x26419Cu: goto label_26419c;
            case 0x2641A0u: goto label_2641a0;
            case 0x2641A4u: goto label_2641a4;
            case 0x2641A8u: goto label_2641a8;
            case 0x2641ACu: goto label_2641ac;
            case 0x2641B0u: goto label_2641b0;
            case 0x2641B4u: goto label_2641b4;
            case 0x2641B8u: goto label_2641b8;
            case 0x2641BCu: goto label_2641bc;
            case 0x2641C0u: goto label_2641c0;
            case 0x2641C4u: goto label_2641c4;
            case 0x2641C8u: goto label_2641c8;
            case 0x2641CCu: goto label_2641cc;
            case 0x2641D0u: goto label_2641d0;
            case 0x2641D4u: goto label_2641d4;
            case 0x2641D8u: goto label_2641d8;
            case 0x2641DCu: goto label_2641dc;
            case 0x2641E0u: goto label_2641e0;
            case 0x2641E4u: goto label_2641e4;
            case 0x2641E8u: goto label_2641e8;
            case 0x2641ECu: goto label_2641ec;
            case 0x2641F0u: goto label_2641f0;
            case 0x2641F4u: goto label_2641f4;
            case 0x2641F8u: goto label_2641f8;
            case 0x2641FCu: goto label_2641fc;
            case 0x264200u: goto label_264200;
            case 0x264204u: goto label_264204;
            default: break;
        }
        return;
    }
label_fallthrough_0x264200:
    ctx->pc = 0x264208u;
}
