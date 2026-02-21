#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_display_mode
// Address: 0x234d40 - 0x234e04
void get_display_mode_0x234d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x234d40u;

label_234d40:
    // 0x234d40: 0x24022b00
    ctx->pc = 0x234d40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
label_234d44:
    // 0x234d44: 0x822018
    ctx->pc = 0x234d44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_234d48:
    // 0x234d48: 0x3c020032
    ctx->pc = 0x234d48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_234d4c:
    // 0x234d4c: 0x24421bc0
    ctx->pc = 0x234d4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
label_234d50:
    // 0x234d50: 0x822021
    ctx->pc = 0x234d50u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_234d54:
    // 0x234d54: 0x8c8200fc
    ctx->pc = 0x234d54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 252)));
label_234d58:
    // 0x234d58: 0x2443ffff
    ctx->pc = 0x234d58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
label_234d5c:
    // 0x234d5c: 0x2c62000b
    ctx->pc = 0x234d5cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 11));
label_234d60:
    // 0x234d60: 0x10400024
label_234d64:
    if (ctx->pc == 0x234D64u) {
        ctx->pc = 0x234D64u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x234D68u;
        goto label_234d68;
    }
    ctx->pc = 0x234D60u;
    {
        const bool branch_taken_0x234d60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x234D64u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x234d60) {
            ctx->pc = 0x234DF4u;
            goto label_234df4;
        }
    }
    ctx->pc = 0x234D68u;
label_234d68:
    // 0x234d68: 0x244278a0
    ctx->pc = 0x234d68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30880));
label_234d6c:
    // 0x234d6c: 0x31880
    ctx->pc = 0x234d6cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_234d70:
    // 0x234d70: 0x621821
    ctx->pc = 0x234d70u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_234d74:
    // 0x234d74: 0x8c620000
    ctx->pc = 0x234d74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_234d78:
    // 0x234d78: 0x400008
label_234d7c:
    if (ctx->pc == 0x234D7Cu) {
        ctx->pc = 0x234D80u;
        goto label_234d80;
    }
    ctx->pc = 0x234D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234D40u: goto label_234d40;
            case 0x234D44u: goto label_234d44;
            case 0x234D48u: goto label_234d48;
            case 0x234D4Cu: goto label_234d4c;
            case 0x234D50u: goto label_234d50;
            case 0x234D54u: goto label_234d54;
            case 0x234D58u: goto label_234d58;
            case 0x234D5Cu: goto label_234d5c;
            case 0x234D60u: goto label_234d60;
            case 0x234D64u: goto label_234d64;
            case 0x234D68u: goto label_234d68;
            case 0x234D6Cu: goto label_234d6c;
            case 0x234D70u: goto label_234d70;
            case 0x234D74u: goto label_234d74;
            case 0x234D78u: goto label_234d78;
            case 0x234D7Cu: goto label_234d7c;
            case 0x234D80u: goto label_234d80;
            case 0x234D84u: goto label_234d84;
            case 0x234D88u: goto label_234d88;
            case 0x234D8Cu: goto label_234d8c;
            case 0x234D90u: goto label_234d90;
            case 0x234D94u: goto label_234d94;
            case 0x234D98u: goto label_234d98;
            case 0x234D9Cu: goto label_234d9c;
            case 0x234DA0u: goto label_234da0;
            case 0x234DA4u: goto label_234da4;
            case 0x234DA8u: goto label_234da8;
            case 0x234DACu: goto label_234dac;
            case 0x234DB0u: goto label_234db0;
            case 0x234DB4u: goto label_234db4;
            case 0x234DB8u: goto label_234db8;
            case 0x234DBCu: goto label_234dbc;
            case 0x234DC0u: goto label_234dc0;
            case 0x234DC4u: goto label_234dc4;
            case 0x234DC8u: goto label_234dc8;
            case 0x234DCCu: goto label_234dcc;
            case 0x234DD0u: goto label_234dd0;
            case 0x234DD4u: goto label_234dd4;
            case 0x234DD8u: goto label_234dd8;
            case 0x234DDCu: goto label_234ddc;
            case 0x234DE0u: goto label_234de0;
            case 0x234DE4u: goto label_234de4;
            case 0x234DE8u: goto label_234de8;
            case 0x234DECu: goto label_234dec;
            case 0x234DF0u: goto label_234df0;
            case 0x234DF4u: goto label_234df4;
            case 0x234DF8u: goto label_234df8;
            case 0x234DFCu: goto label_234dfc;
            case 0x234E00u: goto label_234e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234D80u;
label_234d80:
    // 0x234d80: 0x3c020031
    ctx->pc = 0x234d80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_234d84:
    // 0x234d84: 0x8c430018
    ctx->pc = 0x234d84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_234d88:
    // 0x234d88: 0x24024012
    ctx->pc = 0x234d88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16402));
label_234d8c:
    // 0x234d8c: 0x1062001b
label_234d90:
    if (ctx->pc == 0x234D90u) {
        ctx->pc = 0x234D90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x234D94u;
        goto label_234d94;
    }
    ctx->pc = 0x234D8Cu;
    {
        const bool branch_taken_0x234d8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x234D90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x234d8c) {
            ctx->pc = 0x234DFCu;
            goto label_234dfc;
        }
    }
    ctx->pc = 0x234D94u;
label_234d94:
    // 0x234d94: 0x3e00008
label_234d98:
    if (ctx->pc == 0x234D98u) {
        ctx->pc = 0x234D98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x234D9Cu;
        goto label_234d9c;
    }
    ctx->pc = 0x234D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234D98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234D40u: goto label_234d40;
            case 0x234D44u: goto label_234d44;
            case 0x234D48u: goto label_234d48;
            case 0x234D4Cu: goto label_234d4c;
            case 0x234D50u: goto label_234d50;
            case 0x234D54u: goto label_234d54;
            case 0x234D58u: goto label_234d58;
            case 0x234D5Cu: goto label_234d5c;
            case 0x234D60u: goto label_234d60;
            case 0x234D64u: goto label_234d64;
            case 0x234D68u: goto label_234d68;
            case 0x234D6Cu: goto label_234d6c;
            case 0x234D70u: goto label_234d70;
            case 0x234D74u: goto label_234d74;
            case 0x234D78u: goto label_234d78;
            case 0x234D7Cu: goto label_234d7c;
            case 0x234D80u: goto label_234d80;
            case 0x234D84u: goto label_234d84;
            case 0x234D88u: goto label_234d88;
            case 0x234D8Cu: goto label_234d8c;
            case 0x234D90u: goto label_234d90;
            case 0x234D94u: goto label_234d94;
            case 0x234D98u: goto label_234d98;
            case 0x234D9Cu: goto label_234d9c;
            case 0x234DA0u: goto label_234da0;
            case 0x234DA4u: goto label_234da4;
            case 0x234DA8u: goto label_234da8;
            case 0x234DACu: goto label_234dac;
            case 0x234DB0u: goto label_234db0;
            case 0x234DB4u: goto label_234db4;
            case 0x234DB8u: goto label_234db8;
            case 0x234DBCu: goto label_234dbc;
            case 0x234DC0u: goto label_234dc0;
            case 0x234DC4u: goto label_234dc4;
            case 0x234DC8u: goto label_234dc8;
            case 0x234DCCu: goto label_234dcc;
            case 0x234DD0u: goto label_234dd0;
            case 0x234DD4u: goto label_234dd4;
            case 0x234DD8u: goto label_234dd8;
            case 0x234DDCu: goto label_234ddc;
            case 0x234DE0u: goto label_234de0;
            case 0x234DE4u: goto label_234de4;
            case 0x234DE8u: goto label_234de8;
            case 0x234DECu: goto label_234dec;
            case 0x234DF0u: goto label_234df0;
            case 0x234DF4u: goto label_234df4;
            case 0x234DF8u: goto label_234df8;
            case 0x234DFCu: goto label_234dfc;
            case 0x234E00u: goto label_234e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234D9Cu;
label_234d9c:
    // 0x234d9c: 0x8c832ad4
    ctx->pc = 0x234d9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 10964)));
label_234da0:
    // 0x234da0: 0x2c62000f
    ctx->pc = 0x234da0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 15));
label_234da4:
    // 0x234da4: 0x1040000d
label_234da8:
    if (ctx->pc == 0x234DA8u) {
        ctx->pc = 0x234DA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x234DACu;
        goto label_234dac;
    }
    ctx->pc = 0x234DA4u;
    {
        const bool branch_taken_0x234da4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x234DA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x234da4) {
            ctx->pc = 0x234DDCu;
            goto label_234ddc;
        }
    }
    ctx->pc = 0x234DACu;
label_234dac:
    // 0x234dac: 0x244278d0
    ctx->pc = 0x234dacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30928));
label_234db0:
    // 0x234db0: 0x31880
    ctx->pc = 0x234db0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_234db4:
    // 0x234db4: 0x621821
    ctx->pc = 0x234db4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_234db8:
    // 0x234db8: 0x8c620000
    ctx->pc = 0x234db8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_234dbc:
    // 0x234dbc: 0x400008
label_234dc0:
    if (ctx->pc == 0x234DC0u) {
        ctx->pc = 0x234DC4u;
        goto label_234dc4;
    }
    ctx->pc = 0x234DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234D40u: goto label_234d40;
            case 0x234D44u: goto label_234d44;
            case 0x234D48u: goto label_234d48;
            case 0x234D4Cu: goto label_234d4c;
            case 0x234D50u: goto label_234d50;
            case 0x234D54u: goto label_234d54;
            case 0x234D58u: goto label_234d58;
            case 0x234D5Cu: goto label_234d5c;
            case 0x234D60u: goto label_234d60;
            case 0x234D64u: goto label_234d64;
            case 0x234D68u: goto label_234d68;
            case 0x234D6Cu: goto label_234d6c;
            case 0x234D70u: goto label_234d70;
            case 0x234D74u: goto label_234d74;
            case 0x234D78u: goto label_234d78;
            case 0x234D7Cu: goto label_234d7c;
            case 0x234D80u: goto label_234d80;
            case 0x234D84u: goto label_234d84;
            case 0x234D88u: goto label_234d88;
            case 0x234D8Cu: goto label_234d8c;
            case 0x234D90u: goto label_234d90;
            case 0x234D94u: goto label_234d94;
            case 0x234D98u: goto label_234d98;
            case 0x234D9Cu: goto label_234d9c;
            case 0x234DA0u: goto label_234da0;
            case 0x234DA4u: goto label_234da4;
            case 0x234DA8u: goto label_234da8;
            case 0x234DACu: goto label_234dac;
            case 0x234DB0u: goto label_234db0;
            case 0x234DB4u: goto label_234db4;
            case 0x234DB8u: goto label_234db8;
            case 0x234DBCu: goto label_234dbc;
            case 0x234DC0u: goto label_234dc0;
            case 0x234DC4u: goto label_234dc4;
            case 0x234DC8u: goto label_234dc8;
            case 0x234DCCu: goto label_234dcc;
            case 0x234DD0u: goto label_234dd0;
            case 0x234DD4u: goto label_234dd4;
            case 0x234DD8u: goto label_234dd8;
            case 0x234DDCu: goto label_234ddc;
            case 0x234DE0u: goto label_234de0;
            case 0x234DE4u: goto label_234de4;
            case 0x234DE8u: goto label_234de8;
            case 0x234DECu: goto label_234dec;
            case 0x234DF0u: goto label_234df0;
            case 0x234DF4u: goto label_234df4;
            case 0x234DF8u: goto label_234df8;
            case 0x234DFCu: goto label_234dfc;
            case 0x234E00u: goto label_234e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234DC4u;
label_234dc4:
    // 0x234dc4: 0x3e00008
label_234dc8:
    if (ctx->pc == 0x234DC8u) {
        ctx->pc = 0x234DC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x234DCCu;
        goto label_234dcc;
    }
    ctx->pc = 0x234DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234DC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234D40u: goto label_234d40;
            case 0x234D44u: goto label_234d44;
            case 0x234D48u: goto label_234d48;
            case 0x234D4Cu: goto label_234d4c;
            case 0x234D50u: goto label_234d50;
            case 0x234D54u: goto label_234d54;
            case 0x234D58u: goto label_234d58;
            case 0x234D5Cu: goto label_234d5c;
            case 0x234D60u: goto label_234d60;
            case 0x234D64u: goto label_234d64;
            case 0x234D68u: goto label_234d68;
            case 0x234D6Cu: goto label_234d6c;
            case 0x234D70u: goto label_234d70;
            case 0x234D74u: goto label_234d74;
            case 0x234D78u: goto label_234d78;
            case 0x234D7Cu: goto label_234d7c;
            case 0x234D80u: goto label_234d80;
            case 0x234D84u: goto label_234d84;
            case 0x234D88u: goto label_234d88;
            case 0x234D8Cu: goto label_234d8c;
            case 0x234D90u: goto label_234d90;
            case 0x234D94u: goto label_234d94;
            case 0x234D98u: goto label_234d98;
            case 0x234D9Cu: goto label_234d9c;
            case 0x234DA0u: goto label_234da0;
            case 0x234DA4u: goto label_234da4;
            case 0x234DA8u: goto label_234da8;
            case 0x234DACu: goto label_234dac;
            case 0x234DB0u: goto label_234db0;
            case 0x234DB4u: goto label_234db4;
            case 0x234DB8u: goto label_234db8;
            case 0x234DBCu: goto label_234dbc;
            case 0x234DC0u: goto label_234dc0;
            case 0x234DC4u: goto label_234dc4;
            case 0x234DC8u: goto label_234dc8;
            case 0x234DCCu: goto label_234dcc;
            case 0x234DD0u: goto label_234dd0;
            case 0x234DD4u: goto label_234dd4;
            case 0x234DD8u: goto label_234dd8;
            case 0x234DDCu: goto label_234ddc;
            case 0x234DE0u: goto label_234de0;
            case 0x234DE4u: goto label_234de4;
            case 0x234DE8u: goto label_234de8;
            case 0x234DECu: goto label_234dec;
            case 0x234DF0u: goto label_234df0;
            case 0x234DF4u: goto label_234df4;
            case 0x234DF8u: goto label_234df8;
            case 0x234DFCu: goto label_234dfc;
            case 0x234E00u: goto label_234e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234DCCu;
label_234dcc:
    // 0x234dcc: 0x3e00008
label_234dd0:
    if (ctx->pc == 0x234DD0u) {
        ctx->pc = 0x234DD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x234DD4u;
        goto label_234dd4;
    }
    ctx->pc = 0x234DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234DD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234D40u: goto label_234d40;
            case 0x234D44u: goto label_234d44;
            case 0x234D48u: goto label_234d48;
            case 0x234D4Cu: goto label_234d4c;
            case 0x234D50u: goto label_234d50;
            case 0x234D54u: goto label_234d54;
            case 0x234D58u: goto label_234d58;
            case 0x234D5Cu: goto label_234d5c;
            case 0x234D60u: goto label_234d60;
            case 0x234D64u: goto label_234d64;
            case 0x234D68u: goto label_234d68;
            case 0x234D6Cu: goto label_234d6c;
            case 0x234D70u: goto label_234d70;
            case 0x234D74u: goto label_234d74;
            case 0x234D78u: goto label_234d78;
            case 0x234D7Cu: goto label_234d7c;
            case 0x234D80u: goto label_234d80;
            case 0x234D84u: goto label_234d84;
            case 0x234D88u: goto label_234d88;
            case 0x234D8Cu: goto label_234d8c;
            case 0x234D90u: goto label_234d90;
            case 0x234D94u: goto label_234d94;
            case 0x234D98u: goto label_234d98;
            case 0x234D9Cu: goto label_234d9c;
            case 0x234DA0u: goto label_234da0;
            case 0x234DA4u: goto label_234da4;
            case 0x234DA8u: goto label_234da8;
            case 0x234DACu: goto label_234dac;
            case 0x234DB0u: goto label_234db0;
            case 0x234DB4u: goto label_234db4;
            case 0x234DB8u: goto label_234db8;
            case 0x234DBCu: goto label_234dbc;
            case 0x234DC0u: goto label_234dc0;
            case 0x234DC4u: goto label_234dc4;
            case 0x234DC8u: goto label_234dc8;
            case 0x234DCCu: goto label_234dcc;
            case 0x234DD0u: goto label_234dd0;
            case 0x234DD4u: goto label_234dd4;
            case 0x234DD8u: goto label_234dd8;
            case 0x234DDCu: goto label_234ddc;
            case 0x234DE0u: goto label_234de0;
            case 0x234DE4u: goto label_234de4;
            case 0x234DE8u: goto label_234de8;
            case 0x234DECu: goto label_234dec;
            case 0x234DF0u: goto label_234df0;
            case 0x234DF4u: goto label_234df4;
            case 0x234DF8u: goto label_234df8;
            case 0x234DFCu: goto label_234dfc;
            case 0x234E00u: goto label_234e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234DD4u;
label_234dd4:
    // 0x234dd4: 0x3e00008
label_234dd8:
    if (ctx->pc == 0x234DD8u) {
        ctx->pc = 0x234DD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x234DDCu;
        goto label_234ddc;
    }
    ctx->pc = 0x234DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234DD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234D40u: goto label_234d40;
            case 0x234D44u: goto label_234d44;
            case 0x234D48u: goto label_234d48;
            case 0x234D4Cu: goto label_234d4c;
            case 0x234D50u: goto label_234d50;
            case 0x234D54u: goto label_234d54;
            case 0x234D58u: goto label_234d58;
            case 0x234D5Cu: goto label_234d5c;
            case 0x234D60u: goto label_234d60;
            case 0x234D64u: goto label_234d64;
            case 0x234D68u: goto label_234d68;
            case 0x234D6Cu: goto label_234d6c;
            case 0x234D70u: goto label_234d70;
            case 0x234D74u: goto label_234d74;
            case 0x234D78u: goto label_234d78;
            case 0x234D7Cu: goto label_234d7c;
            case 0x234D80u: goto label_234d80;
            case 0x234D84u: goto label_234d84;
            case 0x234D88u: goto label_234d88;
            case 0x234D8Cu: goto label_234d8c;
            case 0x234D90u: goto label_234d90;
            case 0x234D94u: goto label_234d94;
            case 0x234D98u: goto label_234d98;
            case 0x234D9Cu: goto label_234d9c;
            case 0x234DA0u: goto label_234da0;
            case 0x234DA4u: goto label_234da4;
            case 0x234DA8u: goto label_234da8;
            case 0x234DACu: goto label_234dac;
            case 0x234DB0u: goto label_234db0;
            case 0x234DB4u: goto label_234db4;
            case 0x234DB8u: goto label_234db8;
            case 0x234DBCu: goto label_234dbc;
            case 0x234DC0u: goto label_234dc0;
            case 0x234DC4u: goto label_234dc4;
            case 0x234DC8u: goto label_234dc8;
            case 0x234DCCu: goto label_234dcc;
            case 0x234DD0u: goto label_234dd0;
            case 0x234DD4u: goto label_234dd4;
            case 0x234DD8u: goto label_234dd8;
            case 0x234DDCu: goto label_234ddc;
            case 0x234DE0u: goto label_234de0;
            case 0x234DE4u: goto label_234de4;
            case 0x234DE8u: goto label_234de8;
            case 0x234DECu: goto label_234dec;
            case 0x234DF0u: goto label_234df0;
            case 0x234DF4u: goto label_234df4;
            case 0x234DF8u: goto label_234df8;
            case 0x234DFCu: goto label_234dfc;
            case 0x234E00u: goto label_234e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234DDCu;
label_234ddc:
    // 0x234ddc: 0x3e00008
label_234de0:
    if (ctx->pc == 0x234DE0u) {
        ctx->pc = 0x234DE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234DE4u;
        goto label_234de4;
    }
    ctx->pc = 0x234DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234DE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234D40u: goto label_234d40;
            case 0x234D44u: goto label_234d44;
            case 0x234D48u: goto label_234d48;
            case 0x234D4Cu: goto label_234d4c;
            case 0x234D50u: goto label_234d50;
            case 0x234D54u: goto label_234d54;
            case 0x234D58u: goto label_234d58;
            case 0x234D5Cu: goto label_234d5c;
            case 0x234D60u: goto label_234d60;
            case 0x234D64u: goto label_234d64;
            case 0x234D68u: goto label_234d68;
            case 0x234D6Cu: goto label_234d6c;
            case 0x234D70u: goto label_234d70;
            case 0x234D74u: goto label_234d74;
            case 0x234D78u: goto label_234d78;
            case 0x234D7Cu: goto label_234d7c;
            case 0x234D80u: goto label_234d80;
            case 0x234D84u: goto label_234d84;
            case 0x234D88u: goto label_234d88;
            case 0x234D8Cu: goto label_234d8c;
            case 0x234D90u: goto label_234d90;
            case 0x234D94u: goto label_234d94;
            case 0x234D98u: goto label_234d98;
            case 0x234D9Cu: goto label_234d9c;
            case 0x234DA0u: goto label_234da0;
            case 0x234DA4u: goto label_234da4;
            case 0x234DA8u: goto label_234da8;
            case 0x234DACu: goto label_234dac;
            case 0x234DB0u: goto label_234db0;
            case 0x234DB4u: goto label_234db4;
            case 0x234DB8u: goto label_234db8;
            case 0x234DBCu: goto label_234dbc;
            case 0x234DC0u: goto label_234dc0;
            case 0x234DC4u: goto label_234dc4;
            case 0x234DC8u: goto label_234dc8;
            case 0x234DCCu: goto label_234dcc;
            case 0x234DD0u: goto label_234dd0;
            case 0x234DD4u: goto label_234dd4;
            case 0x234DD8u: goto label_234dd8;
            case 0x234DDCu: goto label_234ddc;
            case 0x234DE0u: goto label_234de0;
            case 0x234DE4u: goto label_234de4;
            case 0x234DE8u: goto label_234de8;
            case 0x234DECu: goto label_234dec;
            case 0x234DF0u: goto label_234df0;
            case 0x234DF4u: goto label_234df4;
            case 0x234DF8u: goto label_234df8;
            case 0x234DFCu: goto label_234dfc;
            case 0x234E00u: goto label_234e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234DE4u;
label_234de4:
    // 0x234de4: 0x3e00008
label_234de8:
    if (ctx->pc == 0x234DE8u) {
        ctx->pc = 0x234DE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x234DECu;
        goto label_234dec;
    }
    ctx->pc = 0x234DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234DE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234D40u: goto label_234d40;
            case 0x234D44u: goto label_234d44;
            case 0x234D48u: goto label_234d48;
            case 0x234D4Cu: goto label_234d4c;
            case 0x234D50u: goto label_234d50;
            case 0x234D54u: goto label_234d54;
            case 0x234D58u: goto label_234d58;
            case 0x234D5Cu: goto label_234d5c;
            case 0x234D60u: goto label_234d60;
            case 0x234D64u: goto label_234d64;
            case 0x234D68u: goto label_234d68;
            case 0x234D6Cu: goto label_234d6c;
            case 0x234D70u: goto label_234d70;
            case 0x234D74u: goto label_234d74;
            case 0x234D78u: goto label_234d78;
            case 0x234D7Cu: goto label_234d7c;
            case 0x234D80u: goto label_234d80;
            case 0x234D84u: goto label_234d84;
            case 0x234D88u: goto label_234d88;
            case 0x234D8Cu: goto label_234d8c;
            case 0x234D90u: goto label_234d90;
            case 0x234D94u: goto label_234d94;
            case 0x234D98u: goto label_234d98;
            case 0x234D9Cu: goto label_234d9c;
            case 0x234DA0u: goto label_234da0;
            case 0x234DA4u: goto label_234da4;
            case 0x234DA8u: goto label_234da8;
            case 0x234DACu: goto label_234dac;
            case 0x234DB0u: goto label_234db0;
            case 0x234DB4u: goto label_234db4;
            case 0x234DB8u: goto label_234db8;
            case 0x234DBCu: goto label_234dbc;
            case 0x234DC0u: goto label_234dc0;
            case 0x234DC4u: goto label_234dc4;
            case 0x234DC8u: goto label_234dc8;
            case 0x234DCCu: goto label_234dcc;
            case 0x234DD0u: goto label_234dd0;
            case 0x234DD4u: goto label_234dd4;
            case 0x234DD8u: goto label_234dd8;
            case 0x234DDCu: goto label_234ddc;
            case 0x234DE0u: goto label_234de0;
            case 0x234DE4u: goto label_234de4;
            case 0x234DE8u: goto label_234de8;
            case 0x234DECu: goto label_234dec;
            case 0x234DF0u: goto label_234df0;
            case 0x234DF4u: goto label_234df4;
            case 0x234DF8u: goto label_234df8;
            case 0x234DFCu: goto label_234dfc;
            case 0x234E00u: goto label_234e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234DECu;
label_234dec:
    // 0x234dec: 0x3e00008
label_234df0:
    if (ctx->pc == 0x234DF0u) {
        ctx->pc = 0x234DF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x234DF4u;
        goto label_234df4;
    }
    ctx->pc = 0x234DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234DF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234D40u: goto label_234d40;
            case 0x234D44u: goto label_234d44;
            case 0x234D48u: goto label_234d48;
            case 0x234D4Cu: goto label_234d4c;
            case 0x234D50u: goto label_234d50;
            case 0x234D54u: goto label_234d54;
            case 0x234D58u: goto label_234d58;
            case 0x234D5Cu: goto label_234d5c;
            case 0x234D60u: goto label_234d60;
            case 0x234D64u: goto label_234d64;
            case 0x234D68u: goto label_234d68;
            case 0x234D6Cu: goto label_234d6c;
            case 0x234D70u: goto label_234d70;
            case 0x234D74u: goto label_234d74;
            case 0x234D78u: goto label_234d78;
            case 0x234D7Cu: goto label_234d7c;
            case 0x234D80u: goto label_234d80;
            case 0x234D84u: goto label_234d84;
            case 0x234D88u: goto label_234d88;
            case 0x234D8Cu: goto label_234d8c;
            case 0x234D90u: goto label_234d90;
            case 0x234D94u: goto label_234d94;
            case 0x234D98u: goto label_234d98;
            case 0x234D9Cu: goto label_234d9c;
            case 0x234DA0u: goto label_234da0;
            case 0x234DA4u: goto label_234da4;
            case 0x234DA8u: goto label_234da8;
            case 0x234DACu: goto label_234dac;
            case 0x234DB0u: goto label_234db0;
            case 0x234DB4u: goto label_234db4;
            case 0x234DB8u: goto label_234db8;
            case 0x234DBCu: goto label_234dbc;
            case 0x234DC0u: goto label_234dc0;
            case 0x234DC4u: goto label_234dc4;
            case 0x234DC8u: goto label_234dc8;
            case 0x234DCCu: goto label_234dcc;
            case 0x234DD0u: goto label_234dd0;
            case 0x234DD4u: goto label_234dd4;
            case 0x234DD8u: goto label_234dd8;
            case 0x234DDCu: goto label_234ddc;
            case 0x234DE0u: goto label_234de0;
            case 0x234DE4u: goto label_234de4;
            case 0x234DE8u: goto label_234de8;
            case 0x234DECu: goto label_234dec;
            case 0x234DF0u: goto label_234df0;
            case 0x234DF4u: goto label_234df4;
            case 0x234DF8u: goto label_234df8;
            case 0x234DFCu: goto label_234dfc;
            case 0x234E00u: goto label_234e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234DF4u;
label_234df4:
    // 0x234df4: 0x3e00008
label_234df8:
    if (ctx->pc == 0x234DF8u) {
        ctx->pc = 0x234DF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234DFCu;
        goto label_234dfc;
    }
    ctx->pc = 0x234DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234DF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234D40u: goto label_234d40;
            case 0x234D44u: goto label_234d44;
            case 0x234D48u: goto label_234d48;
            case 0x234D4Cu: goto label_234d4c;
            case 0x234D50u: goto label_234d50;
            case 0x234D54u: goto label_234d54;
            case 0x234D58u: goto label_234d58;
            case 0x234D5Cu: goto label_234d5c;
            case 0x234D60u: goto label_234d60;
            case 0x234D64u: goto label_234d64;
            case 0x234D68u: goto label_234d68;
            case 0x234D6Cu: goto label_234d6c;
            case 0x234D70u: goto label_234d70;
            case 0x234D74u: goto label_234d74;
            case 0x234D78u: goto label_234d78;
            case 0x234D7Cu: goto label_234d7c;
            case 0x234D80u: goto label_234d80;
            case 0x234D84u: goto label_234d84;
            case 0x234D88u: goto label_234d88;
            case 0x234D8Cu: goto label_234d8c;
            case 0x234D90u: goto label_234d90;
            case 0x234D94u: goto label_234d94;
            case 0x234D98u: goto label_234d98;
            case 0x234D9Cu: goto label_234d9c;
            case 0x234DA0u: goto label_234da0;
            case 0x234DA4u: goto label_234da4;
            case 0x234DA8u: goto label_234da8;
            case 0x234DACu: goto label_234dac;
            case 0x234DB0u: goto label_234db0;
            case 0x234DB4u: goto label_234db4;
            case 0x234DB8u: goto label_234db8;
            case 0x234DBCu: goto label_234dbc;
            case 0x234DC0u: goto label_234dc0;
            case 0x234DC4u: goto label_234dc4;
            case 0x234DC8u: goto label_234dc8;
            case 0x234DCCu: goto label_234dcc;
            case 0x234DD0u: goto label_234dd0;
            case 0x234DD4u: goto label_234dd4;
            case 0x234DD8u: goto label_234dd8;
            case 0x234DDCu: goto label_234ddc;
            case 0x234DE0u: goto label_234de0;
            case 0x234DE4u: goto label_234de4;
            case 0x234DE8u: goto label_234de8;
            case 0x234DECu: goto label_234dec;
            case 0x234DF0u: goto label_234df0;
            case 0x234DF4u: goto label_234df4;
            case 0x234DF8u: goto label_234df8;
            case 0x234DFCu: goto label_234dfc;
            case 0x234E00u: goto label_234e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234DFCu;
label_234dfc:
    // 0x234dfc: 0x3e00008
label_234e00:
    if (ctx->pc == 0x234E00u) {
        ctx->pc = 0x234E04u;
        goto label_fallthrough_0x234dfc;
    }
    ctx->pc = 0x234DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234D40u: goto label_234d40;
            case 0x234D44u: goto label_234d44;
            case 0x234D48u: goto label_234d48;
            case 0x234D4Cu: goto label_234d4c;
            case 0x234D50u: goto label_234d50;
            case 0x234D54u: goto label_234d54;
            case 0x234D58u: goto label_234d58;
            case 0x234D5Cu: goto label_234d5c;
            case 0x234D60u: goto label_234d60;
            case 0x234D64u: goto label_234d64;
            case 0x234D68u: goto label_234d68;
            case 0x234D6Cu: goto label_234d6c;
            case 0x234D70u: goto label_234d70;
            case 0x234D74u: goto label_234d74;
            case 0x234D78u: goto label_234d78;
            case 0x234D7Cu: goto label_234d7c;
            case 0x234D80u: goto label_234d80;
            case 0x234D84u: goto label_234d84;
            case 0x234D88u: goto label_234d88;
            case 0x234D8Cu: goto label_234d8c;
            case 0x234D90u: goto label_234d90;
            case 0x234D94u: goto label_234d94;
            case 0x234D98u: goto label_234d98;
            case 0x234D9Cu: goto label_234d9c;
            case 0x234DA0u: goto label_234da0;
            case 0x234DA4u: goto label_234da4;
            case 0x234DA8u: goto label_234da8;
            case 0x234DACu: goto label_234dac;
            case 0x234DB0u: goto label_234db0;
            case 0x234DB4u: goto label_234db4;
            case 0x234DB8u: goto label_234db8;
            case 0x234DBCu: goto label_234dbc;
            case 0x234DC0u: goto label_234dc0;
            case 0x234DC4u: goto label_234dc4;
            case 0x234DC8u: goto label_234dc8;
            case 0x234DCCu: goto label_234dcc;
            case 0x234DD0u: goto label_234dd0;
            case 0x234DD4u: goto label_234dd4;
            case 0x234DD8u: goto label_234dd8;
            case 0x234DDCu: goto label_234ddc;
            case 0x234DE0u: goto label_234de0;
            case 0x234DE4u: goto label_234de4;
            case 0x234DE8u: goto label_234de8;
            case 0x234DECu: goto label_234dec;
            case 0x234DF0u: goto label_234df0;
            case 0x234DF4u: goto label_234df4;
            case 0x234DF8u: goto label_234df8;
            case 0x234DFCu: goto label_234dfc;
            case 0x234E00u: goto label_234e00;
            default: break;
        }
        return;
    }
label_fallthrough_0x234dfc:
    ctx->pc = 0x234E04u;
}
