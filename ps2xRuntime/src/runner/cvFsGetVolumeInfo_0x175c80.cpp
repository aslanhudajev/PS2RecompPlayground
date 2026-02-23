#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsGetVolumeInfo
// Address: 0x175c80 - 0x175d4c
void cvFsGetVolumeInfo_0x175c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsGetVolumeInfo");


    ctx->pc = 0x175c80u;

label_175c80:
    // 0x175c80: 0x27bdffa0
    ctx->pc = 0x175c80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_175c84:
    // 0x175c84: 0xffb20040
    ctx->pc = 0x175c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_175c88:
    // 0x175c88: 0xffb10030
    ctx->pc = 0x175c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_175c8c:
    // 0x175c8c: 0xc0902d
    ctx->pc = 0x175c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_175c90:
    // 0x175c90: 0xffbf0050
    ctx->pc = 0x175c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_175c94:
    // 0x175c94: 0xa0882d
    ctx->pc = 0x175c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175c98:
    // 0x175c98: 0x14800006
label_175c9c:
    if (ctx->pc == 0x175C9Cu) {
        ctx->pc = 0x175C9Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->pc = 0x175CA0u;
        goto label_175ca0;
    }
    ctx->pc = 0x175C98u;
    {
        const bool branch_taken_0x175c98 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x175C9Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        if (branch_taken_0x175c98) {
            ctx->pc = 0x175CB4u;
            goto label_175cb4;
        }
    }
    ctx->pc = 0x175CA0u;
label_175ca0:
    // 0x175ca0: 0x3c04002c
    ctx->pc = 0x175ca0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175ca4:
    // 0x175ca4: 0xc05d076
label_175ca8:
    if (ctx->pc == 0x175CA8u) {
        ctx->pc = 0x175CA8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946568));
        ctx->pc = 0x175CACu;
        goto label_175cac;
    }
    ctx->pc = 0x175CA4u;
    SET_GPR_U32(ctx, 31, 0x175CACu);
    ctx->pc = 0x175CA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946568));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CACu; }
        else if (ctx->pc != 0x175CACu) { ctx->pc = 0x175CACu; }
    }
    if (ctx->pc != 0x175CACu) { return; }
    ctx->pc = 0x175CACu;
label_175cac:
    // 0x175cac: 0x10000021
label_175cb0:
    if (ctx->pc == 0x175CB0u) {
        ctx->pc = 0x175CB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x175CB4u;
        goto label_175cb4;
    }
    ctx->pc = 0x175CACu;
    {
        const bool branch_taken_0x175cac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175CB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x175cac) {
            ctx->pc = 0x175D34u;
            goto label_175d34;
        }
    }
    ctx->pc = 0x175CB4u;
label_175cb4:
    // 0x175cb4: 0x16200006
label_175cb8:
    if (ctx->pc == 0x175CB8u) {
        ctx->pc = 0x175CBCu;
        goto label_175cbc;
    }
    ctx->pc = 0x175CB4u;
    {
        const bool branch_taken_0x175cb4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x175cb4) {
            ctx->pc = 0x175CD0u;
            goto label_175cd0;
        }
    }
    ctx->pc = 0x175CBCu;
label_175cbc:
    // 0x175cbc: 0x3c04002c
    ctx->pc = 0x175cbcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175cc0:
    // 0x175cc0: 0xc05d076
label_175cc4:
    if (ctx->pc == 0x175CC4u) {
        ctx->pc = 0x175CC4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946616));
        ctx->pc = 0x175CC8u;
        goto label_175cc8;
    }
    ctx->pc = 0x175CC0u;
    SET_GPR_U32(ctx, 31, 0x175CC8u);
    ctx->pc = 0x175CC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946616));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CC8u; }
        else if (ctx->pc != 0x175CC8u) { ctx->pc = 0x175CC8u; }
    }
    if (ctx->pc != 0x175CC8u) { return; }
    ctx->pc = 0x175CC8u;
label_175cc8:
    // 0x175cc8: 0x1000001a
label_175ccc:
    if (ctx->pc == 0x175CCCu) {
        ctx->pc = 0x175CCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x175CD0u;
        goto label_175cd0;
    }
    ctx->pc = 0x175CC8u;
    {
        const bool branch_taken_0x175cc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175CCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x175cc8) {
            ctx->pc = 0x175D34u;
            goto label_175d34;
        }
    }
    ctx->pc = 0x175CD0u;
label_175cd0:
    // 0x175cd0: 0xc05d142
label_175cd4:
    if (ctx->pc == 0x175CD4u) {
        ctx->pc = 0x175CD8u;
        goto label_175cd8;
    }
    ctx->pc = 0x175CD0u;
    SET_GPR_U32(ctx, 31, 0x175CD8u);
    ctx->pc = 0x174508u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevice_0x174508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CD8u; }
        else if (ctx->pc != 0x175CD8u) { ctx->pc = 0x175CD8u; }
    }
    if (ctx->pc != 0x175CD8u) { return; }
    ctx->pc = 0x175CD8u;
label_175cd8:
    // 0x175cd8: 0x40802d
    ctx->pc = 0x175cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175cdc:
    // 0x175cdc: 0x16000006
label_175ce0:
    if (ctx->pc == 0x175CE0u) {
        ctx->pc = 0x175CE0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175CE4u;
        goto label_175ce4;
    }
    ctx->pc = 0x175CDCu;
    {
        const bool branch_taken_0x175cdc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x175CE0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175cdc) {
            ctx->pc = 0x175CF8u;
            goto label_175cf8;
        }
    }
    ctx->pc = 0x175CE4u;
label_175ce4:
    // 0x175ce4: 0x3c04002c
    ctx->pc = 0x175ce4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175ce8:
    // 0x175ce8: 0xc05d076
label_175cec:
    if (ctx->pc == 0x175CECu) {
        ctx->pc = 0x175CECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946664));
        ctx->pc = 0x175CF0u;
        goto label_175cf0;
    }
    ctx->pc = 0x175CE8u;
    SET_GPR_U32(ctx, 31, 0x175CF0u);
    ctx->pc = 0x175CECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946664));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CF0u; }
        else if (ctx->pc != 0x175CF0u) { ctx->pc = 0x175CF0u; }
    }
    if (ctx->pc != 0x175CF0u) { return; }
    ctx->pc = 0x175CF0u;
label_175cf0:
    // 0x175cf0: 0x10000010
label_175cf4:
    if (ctx->pc == 0x175CF4u) {
        ctx->pc = 0x175CF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x175CF8u;
        goto label_175cf8;
    }
    ctx->pc = 0x175CF0u;
    {
        const bool branch_taken_0x175cf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175CF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x175cf0) {
            ctx->pc = 0x175D34u;
            goto label_175d34;
        }
    }
    ctx->pc = 0x175CF8u;
label_175cf8:
    // 0x175cf8: 0x282d
    ctx->pc = 0x175cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175cfc:
    // 0x175cfc: 0xc050cfe
label_175d00:
    if (ctx->pc == 0x175D00u) {
        ctx->pc = 0x175D00u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x175D04u;
        goto label_175d04;
    }
    ctx->pc = 0x175CFCu;
    SET_GPR_U32(ctx, 31, 0x175D04u);
    ctx->pc = 0x175D00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D04u; }
        else if (ctx->pc != 0x175D04u) { ctx->pc = 0x175D04u; }
    }
    if (ctx->pc != 0x175D04u) { return; }
    ctx->pc = 0x175D04u;
label_175d04:
    // 0x175d04: 0x8e020060
    ctx->pc = 0x175d04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_175d08:
    // 0x175d08: 0xafb10004
    ctx->pc = 0x175d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
label_175d0c:
    // 0x175d0c: 0x10400008
label_175d10:
    if (ctx->pc == 0x175D10u) {
        ctx->pc = 0x175D10u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
        ctx->pc = 0x175D14u;
        goto label_175d14;
    }
    ctx->pc = 0x175D0Cu;
    {
        const bool branch_taken_0x175d0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175D10u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
        if (branch_taken_0x175d0c) {
            ctx->pc = 0x175D30u;
            goto label_175d30;
        }
    }
    ctx->pc = 0x175D14u;
label_175d14:
    // 0x175d14: 0x3a0202d
    ctx->pc = 0x175d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_175d18:
    // 0x175d18: 0x24050005
    ctx->pc = 0x175d18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
label_175d1c:
    // 0x175d1c: 0x302d
    ctx->pc = 0x175d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175d20:
    // 0x175d20: 0x40f809
label_175d24:
    if (ctx->pc == 0x175D24u) {
        ctx->pc = 0x175D24u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175D28u;
        goto label_175d28;
    }
    ctx->pc = 0x175D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175D28u);
        ctx->pc = 0x175D24u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175C80u: goto label_175c80;
            case 0x175C84u: goto label_175c84;
            case 0x175C88u: goto label_175c88;
            case 0x175C8Cu: goto label_175c8c;
            case 0x175C90u: goto label_175c90;
            case 0x175C94u: goto label_175c94;
            case 0x175C98u: goto label_175c98;
            case 0x175C9Cu: goto label_175c9c;
            case 0x175CA0u: goto label_175ca0;
            case 0x175CA4u: goto label_175ca4;
            case 0x175CA8u: goto label_175ca8;
            case 0x175CACu: goto label_175cac;
            case 0x175CB0u: goto label_175cb0;
            case 0x175CB4u: goto label_175cb4;
            case 0x175CB8u: goto label_175cb8;
            case 0x175CBCu: goto label_175cbc;
            case 0x175CC0u: goto label_175cc0;
            case 0x175CC4u: goto label_175cc4;
            case 0x175CC8u: goto label_175cc8;
            case 0x175CCCu: goto label_175ccc;
            case 0x175CD0u: goto label_175cd0;
            case 0x175CD4u: goto label_175cd4;
            case 0x175CD8u: goto label_175cd8;
            case 0x175CDCu: goto label_175cdc;
            case 0x175CE0u: goto label_175ce0;
            case 0x175CE4u: goto label_175ce4;
            case 0x175CE8u: goto label_175ce8;
            case 0x175CECu: goto label_175cec;
            case 0x175CF0u: goto label_175cf0;
            case 0x175CF4u: goto label_175cf4;
            case 0x175CF8u: goto label_175cf8;
            case 0x175CFCu: goto label_175cfc;
            case 0x175D00u: goto label_175d00;
            case 0x175D04u: goto label_175d04;
            case 0x175D08u: goto label_175d08;
            case 0x175D0Cu: goto label_175d0c;
            case 0x175D10u: goto label_175d10;
            case 0x175D14u: goto label_175d14;
            case 0x175D18u: goto label_175d18;
            case 0x175D1Cu: goto label_175d1c;
            case 0x175D20u: goto label_175d20;
            case 0x175D24u: goto label_175d24;
            case 0x175D28u: goto label_175d28;
            case 0x175D2Cu: goto label_175d2c;
            case 0x175D30u: goto label_175d30;
            case 0x175D34u: goto label_175d34;
            case 0x175D38u: goto label_175d38;
            case 0x175D3Cu: goto label_175d3c;
            case 0x175D40u: goto label_175d40;
            case 0x175D44u: goto label_175d44;
            case 0x175D48u: goto label_175d48;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175D28u; }
            if (ctx->pc != 0x175D28u) { return; }
        }
    }
    ctx->pc = 0x175D28u;
label_175d28:
    // 0x175d28: 0x10000003
label_175d2c:
    if (ctx->pc == 0x175D2Cu) {
        ctx->pc = 0x175D2Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x175D30u;
        goto label_175d30;
    }
    ctx->pc = 0x175D28u;
    {
        const bool branch_taken_0x175d28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175D2Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x175d28) {
            ctx->pc = 0x175D38u;
            goto label_175d38;
        }
    }
    ctx->pc = 0x175D30u;
label_175d30:
    // 0x175d30: 0x2402ffff
    ctx->pc = 0x175d30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_175d34:
    // 0x175d34: 0xdfbf0050
    ctx->pc = 0x175d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_175d38:
    // 0x175d38: 0xdfb20040
    ctx->pc = 0x175d38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_175d3c:
    // 0x175d3c: 0xdfb10030
    ctx->pc = 0x175d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_175d40:
    // 0x175d40: 0xdfb00020
    ctx->pc = 0x175d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_175d44:
    // 0x175d44: 0x3e00008
label_175d48:
    if (ctx->pc == 0x175D48u) {
        ctx->pc = 0x175D48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x175D4Cu;
        goto label_fallthrough_0x175d44;
    }
    ctx->pc = 0x175D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175D48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175C80u: goto label_175c80;
            case 0x175C84u: goto label_175c84;
            case 0x175C88u: goto label_175c88;
            case 0x175C8Cu: goto label_175c8c;
            case 0x175C90u: goto label_175c90;
            case 0x175C94u: goto label_175c94;
            case 0x175C98u: goto label_175c98;
            case 0x175C9Cu: goto label_175c9c;
            case 0x175CA0u: goto label_175ca0;
            case 0x175CA4u: goto label_175ca4;
            case 0x175CA8u: goto label_175ca8;
            case 0x175CACu: goto label_175cac;
            case 0x175CB0u: goto label_175cb0;
            case 0x175CB4u: goto label_175cb4;
            case 0x175CB8u: goto label_175cb8;
            case 0x175CBCu: goto label_175cbc;
            case 0x175CC0u: goto label_175cc0;
            case 0x175CC4u: goto label_175cc4;
            case 0x175CC8u: goto label_175cc8;
            case 0x175CCCu: goto label_175ccc;
            case 0x175CD0u: goto label_175cd0;
            case 0x175CD4u: goto label_175cd4;
            case 0x175CD8u: goto label_175cd8;
            case 0x175CDCu: goto label_175cdc;
            case 0x175CE0u: goto label_175ce0;
            case 0x175CE4u: goto label_175ce4;
            case 0x175CE8u: goto label_175ce8;
            case 0x175CECu: goto label_175cec;
            case 0x175CF0u: goto label_175cf0;
            case 0x175CF4u: goto label_175cf4;
            case 0x175CF8u: goto label_175cf8;
            case 0x175CFCu: goto label_175cfc;
            case 0x175D00u: goto label_175d00;
            case 0x175D04u: goto label_175d04;
            case 0x175D08u: goto label_175d08;
            case 0x175D0Cu: goto label_175d0c;
            case 0x175D10u: goto label_175d10;
            case 0x175D14u: goto label_175d14;
            case 0x175D18u: goto label_175d18;
            case 0x175D1Cu: goto label_175d1c;
            case 0x175D20u: goto label_175d20;
            case 0x175D24u: goto label_175d24;
            case 0x175D28u: goto label_175d28;
            case 0x175D2Cu: goto label_175d2c;
            case 0x175D30u: goto label_175d30;
            case 0x175D34u: goto label_175d34;
            case 0x175D38u: goto label_175d38;
            case 0x175D3Cu: goto label_175d3c;
            case 0x175D40u: goto label_175d40;
            case 0x175D44u: goto label_175d44;
            case 0x175D48u: goto label_175d48;
            default: break;
        }
        return;
    }
label_fallthrough_0x175d44:
    ctx->pc = 0x175D4Cu;
}
