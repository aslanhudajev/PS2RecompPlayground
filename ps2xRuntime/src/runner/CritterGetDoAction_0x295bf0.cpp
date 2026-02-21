#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterGetDoAction
// Address: 0x295bf0 - 0x295e3c
void CritterGetDoAction_0x295bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x295bf0u;

label_295bf0:
    // 0x295bf0: 0x27bdffb0
    ctx->pc = 0x295bf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_295bf4:
    // 0x295bf4: 0xffbf0040
    ctx->pc = 0x295bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_295bf8:
    // 0x295bf8: 0xffb30030
    ctx->pc = 0x295bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_295bfc:
    // 0x295bfc: 0xffb20020
    ctx->pc = 0x295bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_295c00:
    // 0x295c00: 0xffb10010
    ctx->pc = 0x295c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_295c04:
    // 0x295c04: 0xffb00000
    ctx->pc = 0x295c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_295c08:
    // 0x295c08: 0x80982d
    ctx->pc = 0x295c08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_295c0c:
    // 0x295c0c: 0xa0802d
    ctx->pc = 0x295c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_295c10:
    // 0x295c10: 0xc0882d
    ctx->pc = 0x295c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_295c14:
    // 0x295c14: 0x8e020000
    ctx->pc = 0x295c14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_295c18:
    // 0x295c18: 0x2443ff80
    ctx->pc = 0x295c18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967168));
label_295c1c:
    // 0x295c1c: 0x2c620009
    ctx->pc = 0x295c1cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 9));
label_295c20:
    // 0x295c20: 0x1040006c
label_295c24:
    if (ctx->pc == 0x295C24u) {
        ctx->pc = 0x295C24u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295C28u;
        goto label_295c28;
    }
    ctx->pc = 0x295C20u;
    {
        const bool branch_taken_0x295c20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x295C24u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295c20) {
            ctx->pc = 0x295DD4u;
            goto label_295dd4;
        }
    }
    ctx->pc = 0x295C28u;
label_295c28:
    // 0x295c28: 0x3c02003b
    ctx->pc = 0x295c28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_295c2c:
    // 0x295c2c: 0x2442e300
    ctx->pc = 0x295c2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959872));
label_295c30:
    // 0x295c30: 0x31880
    ctx->pc = 0x295c30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_295c34:
    // 0x295c34: 0x621821
    ctx->pc = 0x295c34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_295c38:
    // 0x295c38: 0x8c620000
    ctx->pc = 0x295c38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_295c3c:
    // 0x295c3c: 0x400008
label_295c40:
    if (ctx->pc == 0x295C40u) {
        ctx->pc = 0x295C44u;
        goto label_295c44;
    }
    ctx->pc = 0x295C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x295BF0u: goto label_295bf0;
            case 0x295BF4u: goto label_295bf4;
            case 0x295BF8u: goto label_295bf8;
            case 0x295BFCu: goto label_295bfc;
            case 0x295C00u: goto label_295c00;
            case 0x295C04u: goto label_295c04;
            case 0x295C08u: goto label_295c08;
            case 0x295C0Cu: goto label_295c0c;
            case 0x295C10u: goto label_295c10;
            case 0x295C14u: goto label_295c14;
            case 0x295C18u: goto label_295c18;
            case 0x295C1Cu: goto label_295c1c;
            case 0x295C20u: goto label_295c20;
            case 0x295C24u: goto label_295c24;
            case 0x295C28u: goto label_295c28;
            case 0x295C2Cu: goto label_295c2c;
            case 0x295C30u: goto label_295c30;
            case 0x295C34u: goto label_295c34;
            case 0x295C38u: goto label_295c38;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C40u: goto label_295c40;
            case 0x295C44u: goto label_295c44;
            case 0x295C48u: goto label_295c48;
            case 0x295C4Cu: goto label_295c4c;
            case 0x295C50u: goto label_295c50;
            case 0x295C54u: goto label_295c54;
            case 0x295C58u: goto label_295c58;
            case 0x295C5Cu: goto label_295c5c;
            case 0x295C60u: goto label_295c60;
            case 0x295C64u: goto label_295c64;
            case 0x295C68u: goto label_295c68;
            case 0x295C6Cu: goto label_295c6c;
            case 0x295C70u: goto label_295c70;
            case 0x295C74u: goto label_295c74;
            case 0x295C78u: goto label_295c78;
            case 0x295C7Cu: goto label_295c7c;
            case 0x295C80u: goto label_295c80;
            case 0x295C84u: goto label_295c84;
            case 0x295C88u: goto label_295c88;
            case 0x295C8Cu: goto label_295c8c;
            case 0x295C90u: goto label_295c90;
            case 0x295C94u: goto label_295c94;
            case 0x295C98u: goto label_295c98;
            case 0x295C9Cu: goto label_295c9c;
            case 0x295CA0u: goto label_295ca0;
            case 0x295CA4u: goto label_295ca4;
            case 0x295CA8u: goto label_295ca8;
            case 0x295CACu: goto label_295cac;
            case 0x295CB0u: goto label_295cb0;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CB8u: goto label_295cb8;
            case 0x295CBCu: goto label_295cbc;
            case 0x295CC0u: goto label_295cc0;
            case 0x295CC4u: goto label_295cc4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CCCu: goto label_295ccc;
            case 0x295CD0u: goto label_295cd0;
            case 0x295CD4u: goto label_295cd4;
            case 0x295CD8u: goto label_295cd8;
            case 0x295CDCu: goto label_295cdc;
            case 0x295CE0u: goto label_295ce0;
            case 0x295CE4u: goto label_295ce4;
            case 0x295CE8u: goto label_295ce8;
            case 0x295CECu: goto label_295cec;
            case 0x295CF0u: goto label_295cf0;
            case 0x295CF4u: goto label_295cf4;
            case 0x295CF8u: goto label_295cf8;
            case 0x295CFCu: goto label_295cfc;
            case 0x295D00u: goto label_295d00;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D0Cu: goto label_295d0c;
            case 0x295D10u: goto label_295d10;
            case 0x295D14u: goto label_295d14;
            case 0x295D18u: goto label_295d18;
            case 0x295D1Cu: goto label_295d1c;
            case 0x295D20u: goto label_295d20;
            case 0x295D24u: goto label_295d24;
            case 0x295D28u: goto label_295d28;
            case 0x295D2Cu: goto label_295d2c;
            case 0x295D30u: goto label_295d30;
            case 0x295D34u: goto label_295d34;
            case 0x295D38u: goto label_295d38;
            case 0x295D3Cu: goto label_295d3c;
            case 0x295D40u: goto label_295d40;
            case 0x295D44u: goto label_295d44;
            case 0x295D48u: goto label_295d48;
            case 0x295D4Cu: goto label_295d4c;
            case 0x295D50u: goto label_295d50;
            case 0x295D54u: goto label_295d54;
            case 0x295D58u: goto label_295d58;
            case 0x295D5Cu: goto label_295d5c;
            case 0x295D60u: goto label_295d60;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295D6Cu: goto label_295d6c;
            case 0x295D70u: goto label_295d70;
            case 0x295D74u: goto label_295d74;
            case 0x295D78u: goto label_295d78;
            case 0x295D7Cu: goto label_295d7c;
            case 0x295D80u: goto label_295d80;
            case 0x295D84u: goto label_295d84;
            case 0x295D88u: goto label_295d88;
            case 0x295D8Cu: goto label_295d8c;
            case 0x295D90u: goto label_295d90;
            case 0x295D94u: goto label_295d94;
            case 0x295D98u: goto label_295d98;
            case 0x295D9Cu: goto label_295d9c;
            case 0x295DA0u: goto label_295da0;
            case 0x295DA4u: goto label_295da4;
            case 0x295DA8u: goto label_295da8;
            case 0x295DACu: goto label_295dac;
            case 0x295DB0u: goto label_295db0;
            case 0x295DB4u: goto label_295db4;
            case 0x295DB8u: goto label_295db8;
            case 0x295DBCu: goto label_295dbc;
            case 0x295DC0u: goto label_295dc0;
            case 0x295DC4u: goto label_295dc4;
            case 0x295DC8u: goto label_295dc8;
            case 0x295DCCu: goto label_295dcc;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DD8u: goto label_295dd8;
            case 0x295DDCu: goto label_295ddc;
            case 0x295DE0u: goto label_295de0;
            case 0x295DE4u: goto label_295de4;
            case 0x295DE8u: goto label_295de8;
            case 0x295DECu: goto label_295dec;
            case 0x295DF0u: goto label_295df0;
            case 0x295DF4u: goto label_295df4;
            case 0x295DF8u: goto label_295df8;
            case 0x295DFCu: goto label_295dfc;
            case 0x295E00u: goto label_295e00;
            case 0x295E04u: goto label_295e04;
            case 0x295E08u: goto label_295e08;
            case 0x295E0Cu: goto label_295e0c;
            case 0x295E10u: goto label_295e10;
            case 0x295E14u: goto label_295e14;
            case 0x295E18u: goto label_295e18;
            case 0x295E1Cu: goto label_295e1c;
            case 0x295E20u: goto label_295e20;
            case 0x295E24u: goto label_295e24;
            case 0x295E28u: goto label_295e28;
            case 0x295E2Cu: goto label_295e2c;
            case 0x295E30u: goto label_295e30;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x295C44u;
label_295c44:
    // 0x295c44: 0x8e020040
    ctx->pc = 0x295c44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_295c48:
    // 0x295c48: 0x222102a
    ctx->pc = 0x295c48u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_295c4c:
    // 0x295c4c: 0x54400006
label_295c50:
    if (ctx->pc == 0x295C50u) {
        ctx->pc = 0x295C50u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->pc = 0x295C54u;
        goto label_295c54;
    }
    ctx->pc = 0x295C4Cu;
    {
        const bool branch_taken_0x295c4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x295c4c) {
            ctx->pc = 0x295C50u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x295C68u;
            goto label_295c68;
        }
    }
    ctx->pc = 0x295C54u;
label_295c54:
    // 0x295c54: 0x86020050
    ctx->pc = 0x295c54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_295c58:
    // 0x295c58: 0x51102a
    ctx->pc = 0x295c58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
label_295c5c:
    // 0x295c5c: 0x36430001
    ctx->pc = 0x295c5cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 18), 1));
label_295c60:
    // 0x295c60: 0x62900a
    ctx->pc = 0x295c60u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
label_295c64:
    // 0x295c64: 0x8e020044
    ctx->pc = 0x295c64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_295c68:
    // 0x295c68: 0x440006c
label_295c6c:
    if (ctx->pc == 0x295C6Cu) {
        ctx->pc = 0x295C6Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
        ctx->pc = 0x295C70u;
        goto label_295c70;
    }
    ctx->pc = 0x295C68u;
    {
        const bool branch_taken_0x295c68 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x295C6Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
        if (branch_taken_0x295c68) {
            ctx->pc = 0x295E1Cu;
            goto label_295e1c;
        }
    }
    ctx->pc = 0x295C70u;
label_295c70:
    // 0x295c70: 0x1440006b
label_295c74:
    if (ctx->pc == 0x295C74u) {
        ctx->pc = 0x295C74u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295C78u;
        goto label_295c78;
    }
    ctx->pc = 0x295C70u;
    {
        const bool branch_taken_0x295c70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x295C74u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295c70) {
            ctx->pc = 0x295E20u;
            goto label_295e20;
        }
    }
    ctx->pc = 0x295C78u;
label_295c78:
    // 0x295c78: 0x86020052
    ctx->pc = 0x295c78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
label_295c7c:
    // 0x295c7c: 0x51102a
    ctx->pc = 0x295c7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
label_295c80:
    // 0x295c80: 0x36430002
    ctx->pc = 0x295c80u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 18), 2));
label_295c84:
    // 0x295c84: 0x10000065
label_295c88:
    if (ctx->pc == 0x295C88u) {
        ctx->pc = 0x295C88u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
        ctx->pc = 0x295C8Cu;
        goto label_295c8c;
    }
    ctx->pc = 0x295C84u;
    {
        const bool branch_taken_0x295c84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295C88u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
        if (branch_taken_0x295c84) {
            ctx->pc = 0x295E1Cu;
            goto label_295e1c;
        }
    }
    ctx->pc = 0x295C8Cu;
label_295c8c:
    // 0x295c8c: 0x8e020040
    ctx->pc = 0x295c8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_295c90:
    // 0x295c90: 0x222102a
    ctx->pc = 0x295c90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_295c94:
    // 0x295c94: 0x54400058
label_295c98:
    if (ctx->pc == 0x295C98u) {
        ctx->pc = 0x295C98u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->pc = 0x295C9Cu;
        goto label_295c9c;
    }
    ctx->pc = 0x295C94u;
    {
        const bool branch_taken_0x295c94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x295c94) {
            ctx->pc = 0x295C98u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x295DF8u;
            goto label_295df8;
        }
    }
    ctx->pc = 0x295C9Cu;
label_295c9c:
    // 0x295c9c: 0x86020050
    ctx->pc = 0x295c9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_295ca0:
    // 0x295ca0: 0x10000052
label_295ca4:
    if (ctx->pc == 0x295CA4u) {
        ctx->pc = 0x295CA4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
        ctx->pc = 0x295CA8u;
        goto label_295ca8;
    }
    ctx->pc = 0x295CA0u;
    {
        const bool branch_taken_0x295ca0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295CA4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
        if (branch_taken_0x295ca0) {
            ctx->pc = 0x295DECu;
            goto label_295dec;
        }
    }
    ctx->pc = 0x295CA8u;
label_295ca8:
    // 0x295ca8: 0x8e030040
    ctx->pc = 0x295ca8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_295cac:
    // 0x295cac: 0x223102a
    ctx->pc = 0x295cacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
label_295cb0:
    // 0x295cb0: 0x54400017
label_295cb4:
    if (ctx->pc == 0x295CB4u) {
        ctx->pc = 0x295CB4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->pc = 0x295CB8u;
        goto label_295cb8;
    }
    ctx->pc = 0x295CB0u;
    {
        const bool branch_taken_0x295cb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x295cb0) {
            ctx->pc = 0x295CB4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x295D10u;
            goto label_295d10;
        }
    }
    ctx->pc = 0x295CB8u;
label_295cb8:
    // 0x295cb8: 0x86020050
    ctx->pc = 0x295cb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_295cbc:
    // 0x295cbc: 0x51102a
    ctx->pc = 0x295cbcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
label_295cc0:
    // 0x295cc0: 0x54400013
label_295cc4:
    if (ctx->pc == 0x295CC4u) {
        ctx->pc = 0x295CC4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->pc = 0x295CC8u;
        goto label_295cc8;
    }
    ctx->pc = 0x295CC0u;
    {
        const bool branch_taken_0x295cc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x295cc0) {
            ctx->pc = 0x295CC4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x295D10u;
            goto label_295d10;
        }
    }
    ctx->pc = 0x295CC8u;
label_295cc8:
    // 0x295cc8: 0xc60d004c
    ctx->pc = 0x295cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_295ccc:
    // 0x295ccc: 0x44800000
    ctx->pc = 0x295cccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_295cd0:
    // 0x295cd0: 0x46006836
    ctx->pc = 0x295cd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_295cd4:
    // 0x295cd4: 0x0
    ctx->pc = 0x295cd4u;
    // NOP
label_295cd8:
    // 0x295cd8: 0x4503000c
label_295cdc:
    if (ctx->pc == 0x295CDCu) {
        ctx->pc = 0x295CDCu;
        SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x295CE0u;
        goto label_295ce0;
    }
    ctx->pc = 0x295CD8u;
    {
        const bool branch_taken_0x295cd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295cd8) {
            ctx->pc = 0x295CDCu;
            SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x295D0Cu;
            goto label_295d0c;
        }
    }
    ctx->pc = 0x295CE0u;
label_295ce0:
    // 0x295ce0: 0x2231023
    ctx->pc = 0x295ce0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_295ce4:
    // 0x295ce4: 0x44826000
    ctx->pc = 0x295ce4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_295ce8:
    // 0x295ce8: 0x46806320
    ctx->pc = 0x295ce8u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_295cec:
    // 0x295cec: 0xc0ba0f2
label_295cf0:
    if (ctx->pc == 0x295CF0u) {
        ctx->pc = 0x295CF4u;
        goto label_295cf4;
    }
    ctx->pc = 0x295CECu;
    SET_GPR_U32(ctx, 31, 0x295CF4u);
    ctx->pc = 0x2E83C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fmodf_0x2e83c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295CF4u; }
    }
    if (ctx->pc != 0x295CF4u) { return; }
    ctx->pc = 0x295CF4u;
label_295cf4:
    // 0x295cf4: 0x46000064
    ctx->pc = 0x295cf4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_295cf8:
    // 0x295cf8: 0x44020800
    ctx->pc = 0x295cf8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_295cfc:
    // 0x295cfc: 0x0
    ctx->pc = 0x295cfcu;
    // NOP
label_295d00:
    // 0x295d00: 0x54400003
label_295d04:
    if (ctx->pc == 0x295D04u) {
        ctx->pc = 0x295D04u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->pc = 0x295D08u;
        goto label_295d08;
    }
    ctx->pc = 0x295D00u;
    {
        const bool branch_taken_0x295d00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x295d00) {
            ctx->pc = 0x295D04u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x295D10u;
            goto label_295d10;
        }
    }
    ctx->pc = 0x295D08u;
label_295d08:
    // 0x295d08: 0x36520001
    ctx->pc = 0x295d08u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 1));
label_295d0c:
    // 0x295d0c: 0x8e030044
    ctx->pc = 0x295d0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_295d10:
    // 0x295d10: 0x4600042
label_295d14:
    if (ctx->pc == 0x295D14u) {
        ctx->pc = 0x295D14u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
        ctx->pc = 0x295D18u;
        goto label_295d18;
    }
    ctx->pc = 0x295D10u;
    {
        const bool branch_taken_0x295d10 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x295D14u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
        if (branch_taken_0x295d10) {
            ctx->pc = 0x295E1Cu;
            goto label_295e1c;
        }
    }
    ctx->pc = 0x295D18u;
label_295d18:
    // 0x295d18: 0x14400041
label_295d1c:
    if (ctx->pc == 0x295D1Cu) {
        ctx->pc = 0x295D1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295D20u;
        goto label_295d20;
    }
    ctx->pc = 0x295D18u;
    {
        const bool branch_taken_0x295d18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x295D1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295d18) {
            ctx->pc = 0x295E20u;
            goto label_295e20;
        }
    }
    ctx->pc = 0x295D20u;
label_295d20:
    // 0x295d20: 0x86020052
    ctx->pc = 0x295d20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
label_295d24:
    // 0x295d24: 0x51102a
    ctx->pc = 0x295d24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
label_295d28:
    // 0x295d28: 0x1440003d
label_295d2c:
    if (ctx->pc == 0x295D2Cu) {
        ctx->pc = 0x295D2Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295D30u;
        goto label_295d30;
    }
    ctx->pc = 0x295D28u;
    {
        const bool branch_taken_0x295d28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x295D2Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295d28) {
            ctx->pc = 0x295E20u;
            goto label_295e20;
        }
    }
    ctx->pc = 0x295D30u;
label_295d30:
    // 0x295d30: 0xc60d004c
    ctx->pc = 0x295d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_295d34:
    // 0x295d34: 0x44800000
    ctx->pc = 0x295d34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_295d38:
    // 0x295d38: 0x46006836
    ctx->pc = 0x295d38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_295d3c:
    // 0x295d3c: 0x0
    ctx->pc = 0x295d3cu;
    // NOP
label_295d40:
    // 0x295d40: 0x45030036
label_295d44:
    if (ctx->pc == 0x295D44u) {
        ctx->pc = 0x295D44u;
        SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x295D48u;
        goto label_295d48;
    }
    ctx->pc = 0x295D40u;
    {
        const bool branch_taken_0x295d40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295d40) {
            ctx->pc = 0x295D44u;
            SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 2));
            ctx->pc = 0x295E1Cu;
            goto label_295e1c;
        }
    }
    ctx->pc = 0x295D48u;
label_295d48:
    // 0x295d48: 0x2231023
    ctx->pc = 0x295d48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_295d4c:
    // 0x295d4c: 0x44826000
    ctx->pc = 0x295d4cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_295d50:
    // 0x295d50: 0x46806320
    ctx->pc = 0x295d50u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_295d54:
    // 0x295d54: 0xc0ba0f2
label_295d58:
    if (ctx->pc == 0x295D58u) {
        ctx->pc = 0x295D5Cu;
        goto label_295d5c;
    }
    ctx->pc = 0x295D54u;
    SET_GPR_U32(ctx, 31, 0x295D5Cu);
    ctx->pc = 0x2E83C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fmodf_0x2e83c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D5Cu; }
    }
    if (ctx->pc != 0x295D5Cu) { return; }
    ctx->pc = 0x295D5Cu;
label_295d5c:
    // 0x295d5c: 0x46000064
    ctx->pc = 0x295d5cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_295d60:
    // 0x295d60: 0x44020800
    ctx->pc = 0x295d60u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_295d64:
    // 0x295d64: 0x0
    ctx->pc = 0x295d64u;
    // NOP
label_295d68:
    // 0x295d68: 0x1440002d
label_295d6c:
    if (ctx->pc == 0x295D6Cu) {
        ctx->pc = 0x295D6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295D70u;
        goto label_295d70;
    }
    ctx->pc = 0x295D68u;
    {
        const bool branch_taken_0x295d68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x295D6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295d68) {
            ctx->pc = 0x295E20u;
            goto label_295e20;
        }
    }
    ctx->pc = 0x295D70u;
label_295d70:
    // 0x295d70: 0x1000002a
label_295d74:
    if (ctx->pc == 0x295D74u) {
        ctx->pc = 0x295D74u;
        SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x295D78u;
        goto label_295d78;
    }
    ctx->pc = 0x295D70u;
    {
        const bool branch_taken_0x295d70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295D74u;
        SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x295d70) {
            ctx->pc = 0x295E1Cu;
            goto label_295e1c;
        }
    }
    ctx->pc = 0x295D78u;
label_295d78:
    // 0x295d78: 0x96620250
    ctx->pc = 0x295d78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 592)));
label_295d7c:
    // 0x295d7c: 0x30420001
    ctx->pc = 0x295d7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_295d80:
    // 0x295d80: 0x5440000c
label_295d84:
    if (ctx->pc == 0x295D84u) {
        ctx->pc = 0x295D84u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->pc = 0x295D88u;
        goto label_295d88;
    }
    ctx->pc = 0x295D80u;
    {
        const bool branch_taken_0x295d80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x295d80) {
            ctx->pc = 0x295D84u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x295DB4u;
            goto label_295db4;
        }
    }
    ctx->pc = 0x295D88u;
label_295d88:
    // 0x295d88: 0x8e020040
    ctx->pc = 0x295d88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_295d8c:
    // 0x295d8c: 0x222102a
    ctx->pc = 0x295d8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_295d90:
    // 0x295d90: 0x54400008
label_295d94:
    if (ctx->pc == 0x295D94u) {
        ctx->pc = 0x295D94u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->pc = 0x295D98u;
        goto label_295d98;
    }
    ctx->pc = 0x295D90u;
    {
        const bool branch_taken_0x295d90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x295d90) {
            ctx->pc = 0x295D94u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x295DB4u;
            goto label_295db4;
        }
    }
    ctx->pc = 0x295D98u;
label_295d98:
    // 0x295d98: 0x86640130
    ctx->pc = 0x295d98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 304)));
label_295d9c:
    // 0x295d9c: 0x4820005
label_295da0:
    if (ctx->pc == 0x295DA0u) {
        ctx->pc = 0x295DA0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->pc = 0x295DA4u;
        goto label_295da4;
    }
    ctx->pc = 0x295D9Cu;
    {
        const bool branch_taken_0x295d9c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x295d9c) {
            ctx->pc = 0x295DA0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x295DB4u;
            goto label_295db4;
        }
    }
    ctx->pc = 0x295DA4u;
label_295da4:
    // 0x295da4: 0xc08c61e
label_295da8:
    if (ctx->pc == 0x295DA8u) {
        ctx->pc = 0x295DA8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 576));
        ctx->pc = 0x295DACu;
        goto label_295dac;
    }
    ctx->pc = 0x295DA4u;
    SET_GPR_U32(ctx, 31, 0x295DACu);
    ctx->pc = 0x295DA8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 576));
    ctx->pc = 0x231878u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerColPos_0x231878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295DACu; }
    }
    if (ctx->pc != 0x295DACu) { return; }
    ctx->pc = 0x295DACu;
label_295dac:
    // 0x295dac: 0x36520001
    ctx->pc = 0x295dacu;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 1));
label_295db0:
    // 0x295db0: 0x8e030044
    ctx->pc = 0x295db0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_295db4:
    // 0x295db4: 0x460001a
label_295db8:
    if (ctx->pc == 0x295DB8u) {
        ctx->pc = 0x295DB8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295DBCu;
        goto label_295dbc;
    }
    ctx->pc = 0x295DB4u;
    {
        const bool branch_taken_0x295db4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x295DB8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295db4) {
            ctx->pc = 0x295E20u;
            goto label_295e20;
        }
    }
    ctx->pc = 0x295DBCu;
label_295dbc:
    // 0x295dbc: 0x96640250
    ctx->pc = 0x295dbcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 592)));
label_295dc0:
    // 0x295dc0: 0x30820001
    ctx->pc = 0x295dc0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
label_295dc4:
    // 0x295dc4: 0x10400015
label_295dc8:
    if (ctx->pc == 0x295DC8u) {
        ctx->pc = 0x295DC8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x295DCCu;
        goto label_295dcc;
    }
    ctx->pc = 0x295DC4u;
    {
        const bool branch_taken_0x295dc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x295DC8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x295dc4) {
            ctx->pc = 0x295E1Cu;
            goto label_295e1c;
        }
    }
    ctx->pc = 0x295DCCu;
label_295dcc:
    // 0x295dcc: 0x1000000e
label_295dd0:
    if (ctx->pc == 0x295DD0u) {
        ctx->pc = 0x295DD4u;
        goto label_295dd4;
    }
    ctx->pc = 0x295DCCu;
    {
        const bool branch_taken_0x295dcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x295dcc) {
            ctx->pc = 0x295E08u;
            goto label_295e08;
        }
    }
    ctx->pc = 0x295DD4u;
label_295dd4:
    // 0x295dd4: 0x96620250
    ctx->pc = 0x295dd4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 592)));
label_295dd8:
    // 0x295dd8: 0x30420001
    ctx->pc = 0x295dd8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_295ddc:
    // 0x295ddc: 0x54400006
label_295de0:
    if (ctx->pc == 0x295DE0u) {
        ctx->pc = 0x295DE0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->pc = 0x295DE4u;
        goto label_295de4;
    }
    ctx->pc = 0x295DDCu;
    {
        const bool branch_taken_0x295ddc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x295ddc) {
            ctx->pc = 0x295DE0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x295DF8u;
            goto label_295df8;
        }
    }
    ctx->pc = 0x295DE4u;
label_295de4:
    // 0x295de4: 0x8e020040
    ctx->pc = 0x295de4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_295de8:
    // 0x295de8: 0x222102a
    ctx->pc = 0x295de8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_295dec:
    // 0x295dec: 0x36430001
    ctx->pc = 0x295decu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 18), 1));
label_295df0:
    // 0x295df0: 0x62900a
    ctx->pc = 0x295df0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
label_295df4:
    // 0x295df4: 0x8e030044
    ctx->pc = 0x295df4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_295df8:
    // 0x295df8: 0x4600009
label_295dfc:
    if (ctx->pc == 0x295DFCu) {
        ctx->pc = 0x295DFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295E00u;
        goto label_295e00;
    }
    ctx->pc = 0x295DF8u;
    {
        const bool branch_taken_0x295df8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x295DFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295df8) {
            ctx->pc = 0x295E20u;
            goto label_295e20;
        }
    }
    ctx->pc = 0x295E00u;
label_295e00:
    // 0x295e00: 0x96620250
    ctx->pc = 0x295e00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 592)));
label_295e04:
    // 0x295e04: 0x30420002
    ctx->pc = 0x295e04u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
label_295e08:
    // 0x295e08: 0x14400005
label_295e0c:
    if (ctx->pc == 0x295E0Cu) {
        ctx->pc = 0x295E0Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295E10u;
        goto label_295e10;
    }
    ctx->pc = 0x295E08u;
    {
        const bool branch_taken_0x295e08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x295E0Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295e08) {
            ctx->pc = 0x295E20u;
            goto label_295e20;
        }
    }
    ctx->pc = 0x295E10u;
label_295e10:
    // 0x295e10: 0x223182a
    ctx->pc = 0x295e10u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
label_295e14:
    // 0x295e14: 0x36420002
    ctx->pc = 0x295e14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 18), 2));
label_295e18:
    // 0x295e18: 0x43900a
    ctx->pc = 0x295e18u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 2));
label_295e1c:
    // 0x295e1c: 0x240102d
    ctx->pc = 0x295e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_295e20:
    // 0x295e20: 0xdfbf0040
    ctx->pc = 0x295e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_295e24:
    // 0x295e24: 0xdfb30030
    ctx->pc = 0x295e24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_295e28:
    // 0x295e28: 0xdfb20020
    ctx->pc = 0x295e28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_295e2c:
    // 0x295e2c: 0xdfb10010
    ctx->pc = 0x295e2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_295e30:
    // 0x295e30: 0xdfb00000
    ctx->pc = 0x295e30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_295e34:
    // 0x295e34: 0x3e00008
label_295e38:
    if (ctx->pc == 0x295E38u) {
        ctx->pc = 0x295E38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x295E3Cu;
        goto label_fallthrough_0x295e34;
    }
    ctx->pc = 0x295E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295E38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x295BF0u: goto label_295bf0;
            case 0x295BF4u: goto label_295bf4;
            case 0x295BF8u: goto label_295bf8;
            case 0x295BFCu: goto label_295bfc;
            case 0x295C00u: goto label_295c00;
            case 0x295C04u: goto label_295c04;
            case 0x295C08u: goto label_295c08;
            case 0x295C0Cu: goto label_295c0c;
            case 0x295C10u: goto label_295c10;
            case 0x295C14u: goto label_295c14;
            case 0x295C18u: goto label_295c18;
            case 0x295C1Cu: goto label_295c1c;
            case 0x295C20u: goto label_295c20;
            case 0x295C24u: goto label_295c24;
            case 0x295C28u: goto label_295c28;
            case 0x295C2Cu: goto label_295c2c;
            case 0x295C30u: goto label_295c30;
            case 0x295C34u: goto label_295c34;
            case 0x295C38u: goto label_295c38;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C40u: goto label_295c40;
            case 0x295C44u: goto label_295c44;
            case 0x295C48u: goto label_295c48;
            case 0x295C4Cu: goto label_295c4c;
            case 0x295C50u: goto label_295c50;
            case 0x295C54u: goto label_295c54;
            case 0x295C58u: goto label_295c58;
            case 0x295C5Cu: goto label_295c5c;
            case 0x295C60u: goto label_295c60;
            case 0x295C64u: goto label_295c64;
            case 0x295C68u: goto label_295c68;
            case 0x295C6Cu: goto label_295c6c;
            case 0x295C70u: goto label_295c70;
            case 0x295C74u: goto label_295c74;
            case 0x295C78u: goto label_295c78;
            case 0x295C7Cu: goto label_295c7c;
            case 0x295C80u: goto label_295c80;
            case 0x295C84u: goto label_295c84;
            case 0x295C88u: goto label_295c88;
            case 0x295C8Cu: goto label_295c8c;
            case 0x295C90u: goto label_295c90;
            case 0x295C94u: goto label_295c94;
            case 0x295C98u: goto label_295c98;
            case 0x295C9Cu: goto label_295c9c;
            case 0x295CA0u: goto label_295ca0;
            case 0x295CA4u: goto label_295ca4;
            case 0x295CA8u: goto label_295ca8;
            case 0x295CACu: goto label_295cac;
            case 0x295CB0u: goto label_295cb0;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CB8u: goto label_295cb8;
            case 0x295CBCu: goto label_295cbc;
            case 0x295CC0u: goto label_295cc0;
            case 0x295CC4u: goto label_295cc4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CCCu: goto label_295ccc;
            case 0x295CD0u: goto label_295cd0;
            case 0x295CD4u: goto label_295cd4;
            case 0x295CD8u: goto label_295cd8;
            case 0x295CDCu: goto label_295cdc;
            case 0x295CE0u: goto label_295ce0;
            case 0x295CE4u: goto label_295ce4;
            case 0x295CE8u: goto label_295ce8;
            case 0x295CECu: goto label_295cec;
            case 0x295CF0u: goto label_295cf0;
            case 0x295CF4u: goto label_295cf4;
            case 0x295CF8u: goto label_295cf8;
            case 0x295CFCu: goto label_295cfc;
            case 0x295D00u: goto label_295d00;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D0Cu: goto label_295d0c;
            case 0x295D10u: goto label_295d10;
            case 0x295D14u: goto label_295d14;
            case 0x295D18u: goto label_295d18;
            case 0x295D1Cu: goto label_295d1c;
            case 0x295D20u: goto label_295d20;
            case 0x295D24u: goto label_295d24;
            case 0x295D28u: goto label_295d28;
            case 0x295D2Cu: goto label_295d2c;
            case 0x295D30u: goto label_295d30;
            case 0x295D34u: goto label_295d34;
            case 0x295D38u: goto label_295d38;
            case 0x295D3Cu: goto label_295d3c;
            case 0x295D40u: goto label_295d40;
            case 0x295D44u: goto label_295d44;
            case 0x295D48u: goto label_295d48;
            case 0x295D4Cu: goto label_295d4c;
            case 0x295D50u: goto label_295d50;
            case 0x295D54u: goto label_295d54;
            case 0x295D58u: goto label_295d58;
            case 0x295D5Cu: goto label_295d5c;
            case 0x295D60u: goto label_295d60;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295D6Cu: goto label_295d6c;
            case 0x295D70u: goto label_295d70;
            case 0x295D74u: goto label_295d74;
            case 0x295D78u: goto label_295d78;
            case 0x295D7Cu: goto label_295d7c;
            case 0x295D80u: goto label_295d80;
            case 0x295D84u: goto label_295d84;
            case 0x295D88u: goto label_295d88;
            case 0x295D8Cu: goto label_295d8c;
            case 0x295D90u: goto label_295d90;
            case 0x295D94u: goto label_295d94;
            case 0x295D98u: goto label_295d98;
            case 0x295D9Cu: goto label_295d9c;
            case 0x295DA0u: goto label_295da0;
            case 0x295DA4u: goto label_295da4;
            case 0x295DA8u: goto label_295da8;
            case 0x295DACu: goto label_295dac;
            case 0x295DB0u: goto label_295db0;
            case 0x295DB4u: goto label_295db4;
            case 0x295DB8u: goto label_295db8;
            case 0x295DBCu: goto label_295dbc;
            case 0x295DC0u: goto label_295dc0;
            case 0x295DC4u: goto label_295dc4;
            case 0x295DC8u: goto label_295dc8;
            case 0x295DCCu: goto label_295dcc;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DD8u: goto label_295dd8;
            case 0x295DDCu: goto label_295ddc;
            case 0x295DE0u: goto label_295de0;
            case 0x295DE4u: goto label_295de4;
            case 0x295DE8u: goto label_295de8;
            case 0x295DECu: goto label_295dec;
            case 0x295DF0u: goto label_295df0;
            case 0x295DF4u: goto label_295df4;
            case 0x295DF8u: goto label_295df8;
            case 0x295DFCu: goto label_295dfc;
            case 0x295E00u: goto label_295e00;
            case 0x295E04u: goto label_295e04;
            case 0x295E08u: goto label_295e08;
            case 0x295E0Cu: goto label_295e0c;
            case 0x295E10u: goto label_295e10;
            case 0x295E14u: goto label_295e14;
            case 0x295E18u: goto label_295e18;
            case 0x295E1Cu: goto label_295e1c;
            case 0x295E20u: goto label_295e20;
            case 0x295E24u: goto label_295e24;
            case 0x295E28u: goto label_295e28;
            case 0x295E2Cu: goto label_295e2c;
            case 0x295E30u: goto label_295e30;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            default: break;
        }
        return;
    }
label_fallthrough_0x295e34:
    ctx->pc = 0x295E3Cu;
}
