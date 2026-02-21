#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoGoodWizard
// Address: 0x265c48 - 0x266610
void DoGoodWizard_0x265c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x265c48u;

label_265c48:
    // 0x265c48: 0x27bdff80
    ctx->pc = 0x265c48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_265c4c:
    // 0x265c4c: 0xffbf0070
    ctx->pc = 0x265c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_265c50:
    // 0x265c50: 0xffb50060
    ctx->pc = 0x265c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_265c54:
    // 0x265c54: 0xffb40050
    ctx->pc = 0x265c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_265c58:
    // 0x265c58: 0xffb30040
    ctx->pc = 0x265c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_265c5c:
    // 0x265c5c: 0xffb20030
    ctx->pc = 0x265c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_265c60:
    // 0x265c60: 0xffb10020
    ctx->pc = 0x265c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_265c64:
    // 0x265c64: 0xffb00010
    ctx->pc = 0x265c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_265c68:
    // 0x265c68: 0x982d
    ctx->pc = 0x265c68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_265c6c:
    // 0x265c6c: 0x902d
    ctx->pc = 0x265c6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_265c70:
    // 0x265c70: 0x802d
    ctx->pc = 0x265c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_265c74:
    // 0x265c74: 0x24062b00
    ctx->pc = 0x265c74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11008));
label_265c78:
    // 0x265c78: 0x3c020032
    ctx->pc = 0x265c78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_265c7c:
    // 0x265c7c: 0x24481bc0
    ctx->pc = 0x265c7cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 7104));
label_265c80:
    // 0x265c80: 0x24050001
    ctx->pc = 0x265c80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_265c84:
    // 0x265c84: 0x240400b4
    ctx->pc = 0x265c84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 180));
label_265c88:
    // 0x265c88: 0x2061018
    ctx->pc = 0x265c88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_265c8c:
    // 0x265c8c: 0x0
    ctx->pc = 0x265c8cu;
    // NOP
label_265c90:
    // 0x265c90: 0x481821
    ctx->pc = 0x265c90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_265c94:
    // 0x265c94: 0x8c6200fc
    ctx->pc = 0x265c94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_265c98:
    // 0x265c98: 0x14450008
label_265c9c:
    if (ctx->pc == 0x265C9Cu) {
        ctx->pc = 0x265C9Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x265CA0u;
        goto label_265ca0;
    }
    ctx->pc = 0x265C98u;
    {
        const bool branch_taken_0x265c98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x265C9Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x265c98) {
            ctx->pc = 0x265CBCu;
            goto label_265cbc;
        }
    }
    ctx->pc = 0x265CA0u;
label_265ca0:
    // 0x265ca0: 0x8c62000c
    ctx->pc = 0x265ca0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_265ca4:
    // 0x265ca4: 0x443818
    ctx->pc = 0x265ca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_265ca8:
    // 0x265ca8: 0xe31021
    ctx->pc = 0x265ca8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_265cac:
    // 0x265cac: 0x94430cf2
    ctx->pc = 0x265cacu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3314)));
label_265cb0:
    // 0x265cb0: 0x2439025
    ctx->pc = 0x265cb0u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_265cb4:
    // 0x265cb4: 0x94420cf0
    ctx->pc = 0x265cb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3312)));
label_265cb8:
    // 0x265cb8: 0x2629825
    ctx->pc = 0x265cb8u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_265cbc:
    // 0x265cbc: 0x2a020004
    ctx->pc = 0x265cbcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
label_265cc0:
    // 0x265cc0: 0x1440fff3
label_265cc4:
    if (ctx->pc == 0x265CC4u) {
        ctx->pc = 0x265CC4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x265CC8u;
        goto label_265cc8;
    }
    ctx->pc = 0x265CC0u;
    {
        const bool branch_taken_0x265cc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x265CC4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x265cc0) {
            ctx->pc = 0x265C90u;
            goto label_265c90;
        }
    }
    ctx->pc = 0x265CC8u;
label_265cc8:
    // 0x265cc8: 0x3c100034
    ctx->pc = 0x265cc8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
label_265ccc:
    // 0x265ccc: 0xc0a278a
label_265cd0:
    if (ctx->pc == 0x265CD0u) {
        ctx->pc = 0x265CD0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294961136)));
        ctx->pc = 0x265CD4u;
        goto label_265cd4;
    }
    ctx->pc = 0x265CCCu;
    SET_GPR_U32(ctx, 31, 0x265CD4u);
    ctx->pc = 0x265CD0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294961136)));
    ctx->pc = 0x289E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetBossRunes_0x289e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265CD4u; }
    }
    if (ctx->pc != 0x265CD4u) { return; }
    ctx->pc = 0x265CD4u;
label_265cd4:
    // 0x265cd4: 0x40882d
    ctx->pc = 0x265cd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_265cd8:
    // 0x265cd8: 0xc0a279e
label_265cdc:
    if (ctx->pc == 0x265CDCu) {
        ctx->pc = 0x265CDCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294961136)));
        ctx->pc = 0x265CE0u;
        goto label_265ce0;
    }
    ctx->pc = 0x265CD8u;
    SET_GPR_U32(ctx, 31, 0x265CE0u);
    ctx->pc = 0x265CDCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294961136)));
    ctx->pc = 0x289E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetBossNumRunes_0x289e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265CE0u; }
    }
    if (ctx->pc != 0x265CE0u) { return; }
    ctx->pc = 0x265CE0u;
label_265ce0:
    // 0x265ce0: 0x40182d
    ctx->pc = 0x265ce0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_265ce4:
    // 0x265ce4: 0x2511024
    ctx->pc = 0x265ce4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_265ce8:
    // 0x265ce8: 0x54510005
label_265cec:
    if (ctx->pc == 0x265CECu) {
        ctx->pc = 0x265CECu;
        SET_GPR_U32(ctx, 20, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = 0x265CF0u;
        goto label_265cf0;
    }
    ctx->pc = 0x265CE8u;
    {
        const bool branch_taken_0x265ce8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x265ce8) {
            ctx->pc = 0x265CECu;
            SET_GPR_U32(ctx, 20, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->pc = 0x265D00u;
            goto label_265d00;
        }
    }
    ctx->pc = 0x265CF0u;
label_265cf0:
    // 0x265cf0: 0x28630002
    ctx->pc = 0x265cf0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 2));
label_265cf4:
    // 0x265cf4: 0x24140002
    ctx->pc = 0x265cf4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
label_265cf8:
    // 0x265cf8: 0x24020003
    ctx->pc = 0x265cf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_265cfc:
    // 0x265cfc: 0x43a00a
    ctx->pc = 0x265cfcu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 2));
label_265d00:
    // 0x265d00: 0x3c020034
    ctx->pc = 0x265d00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_265d04:
    // 0x265d04: 0x8c42e8fc
    ctx->pc = 0x265d04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961404)));
label_265d08:
    // 0x265d08: 0x2443ffff
    ctx->pc = 0x265d08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
label_265d0c:
    // 0x265d0c: 0x2c62000b
    ctx->pc = 0x265d0cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 11));
label_265d10:
    // 0x265d10: 0x10400225
label_265d14:
    if (ctx->pc == 0x265D14u) {
        ctx->pc = 0x265D14u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x265D18u;
        goto label_265d18;
    }
    ctx->pc = 0x265D10u;
    {
        const bool branch_taken_0x265d10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x265D14u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x265d10) {
            ctx->pc = 0x2665A8u;
            goto label_2665a8;
        }
    }
    ctx->pc = 0x265D18u;
label_265d18:
    // 0x265d18: 0x24429fd0
    ctx->pc = 0x265d18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294942672));
label_265d1c:
    // 0x265d1c: 0x31880
    ctx->pc = 0x265d1cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_265d20:
    // 0x265d20: 0x621821
    ctx->pc = 0x265d20u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_265d24:
    // 0x265d24: 0x8c620000
    ctx->pc = 0x265d24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_265d28:
    // 0x265d28: 0x400008
label_265d2c:
    if (ctx->pc == 0x265D2Cu) {
        ctx->pc = 0x265D30u;
        goto label_265d30;
    }
    ctx->pc = 0x265D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x265C48u: goto label_265c48;
            case 0x265C4Cu: goto label_265c4c;
            case 0x265C50u: goto label_265c50;
            case 0x265C54u: goto label_265c54;
            case 0x265C58u: goto label_265c58;
            case 0x265C5Cu: goto label_265c5c;
            case 0x265C60u: goto label_265c60;
            case 0x265C64u: goto label_265c64;
            case 0x265C68u: goto label_265c68;
            case 0x265C6Cu: goto label_265c6c;
            case 0x265C70u: goto label_265c70;
            case 0x265C74u: goto label_265c74;
            case 0x265C78u: goto label_265c78;
            case 0x265C7Cu: goto label_265c7c;
            case 0x265C80u: goto label_265c80;
            case 0x265C84u: goto label_265c84;
            case 0x265C88u: goto label_265c88;
            case 0x265C8Cu: goto label_265c8c;
            case 0x265C90u: goto label_265c90;
            case 0x265C94u: goto label_265c94;
            case 0x265C98u: goto label_265c98;
            case 0x265C9Cu: goto label_265c9c;
            case 0x265CA0u: goto label_265ca0;
            case 0x265CA4u: goto label_265ca4;
            case 0x265CA8u: goto label_265ca8;
            case 0x265CACu: goto label_265cac;
            case 0x265CB0u: goto label_265cb0;
            case 0x265CB4u: goto label_265cb4;
            case 0x265CB8u: goto label_265cb8;
            case 0x265CBCu: goto label_265cbc;
            case 0x265CC0u: goto label_265cc0;
            case 0x265CC4u: goto label_265cc4;
            case 0x265CC8u: goto label_265cc8;
            case 0x265CCCu: goto label_265ccc;
            case 0x265CD0u: goto label_265cd0;
            case 0x265CD4u: goto label_265cd4;
            case 0x265CD8u: goto label_265cd8;
            case 0x265CDCu: goto label_265cdc;
            case 0x265CE0u: goto label_265ce0;
            case 0x265CE4u: goto label_265ce4;
            case 0x265CE8u: goto label_265ce8;
            case 0x265CECu: goto label_265cec;
            case 0x265CF0u: goto label_265cf0;
            case 0x265CF4u: goto label_265cf4;
            case 0x265CF8u: goto label_265cf8;
            case 0x265CFCu: goto label_265cfc;
            case 0x265D00u: goto label_265d00;
            case 0x265D04u: goto label_265d04;
            case 0x265D08u: goto label_265d08;
            case 0x265D0Cu: goto label_265d0c;
            case 0x265D10u: goto label_265d10;
            case 0x265D14u: goto label_265d14;
            case 0x265D18u: goto label_265d18;
            case 0x265D1Cu: goto label_265d1c;
            case 0x265D20u: goto label_265d20;
            case 0x265D24u: goto label_265d24;
            case 0x265D28u: goto label_265d28;
            case 0x265D2Cu: goto label_265d2c;
            case 0x265D30u: goto label_265d30;
            case 0x265D34u: goto label_265d34;
            case 0x265D38u: goto label_265d38;
            case 0x265D3Cu: goto label_265d3c;
            case 0x265D40u: goto label_265d40;
            case 0x265D44u: goto label_265d44;
            case 0x265D48u: goto label_265d48;
            case 0x265D4Cu: goto label_265d4c;
            case 0x265D50u: goto label_265d50;
            case 0x265D54u: goto label_265d54;
            case 0x265D58u: goto label_265d58;
            case 0x265D5Cu: goto label_265d5c;
            case 0x265D60u: goto label_265d60;
            case 0x265D64u: goto label_265d64;
            case 0x265D68u: goto label_265d68;
            case 0x265D6Cu: goto label_265d6c;
            case 0x265D70u: goto label_265d70;
            case 0x265D74u: goto label_265d74;
            case 0x265D78u: goto label_265d78;
            case 0x265D7Cu: goto label_265d7c;
            case 0x265D80u: goto label_265d80;
            case 0x265D84u: goto label_265d84;
            case 0x265D88u: goto label_265d88;
            case 0x265D8Cu: goto label_265d8c;
            case 0x265D90u: goto label_265d90;
            case 0x265D94u: goto label_265d94;
            case 0x265D98u: goto label_265d98;
            case 0x265D9Cu: goto label_265d9c;
            case 0x265DA0u: goto label_265da0;
            case 0x265DA4u: goto label_265da4;
            case 0x265DA8u: goto label_265da8;
            case 0x265DACu: goto label_265dac;
            case 0x265DB0u: goto label_265db0;
            case 0x265DB4u: goto label_265db4;
            case 0x265DB8u: goto label_265db8;
            case 0x265DBCu: goto label_265dbc;
            case 0x265DC0u: goto label_265dc0;
            case 0x265DC4u: goto label_265dc4;
            case 0x265DC8u: goto label_265dc8;
            case 0x265DCCu: goto label_265dcc;
            case 0x265DD0u: goto label_265dd0;
            case 0x265DD4u: goto label_265dd4;
            case 0x265DD8u: goto label_265dd8;
            case 0x265DDCu: goto label_265ddc;
            case 0x265DE0u: goto label_265de0;
            case 0x265DE4u: goto label_265de4;
            case 0x265DE8u: goto label_265de8;
            case 0x265DECu: goto label_265dec;
            case 0x265DF0u: goto label_265df0;
            case 0x265DF4u: goto label_265df4;
            case 0x265DF8u: goto label_265df8;
            case 0x265DFCu: goto label_265dfc;
            case 0x265E00u: goto label_265e00;
            case 0x265E04u: goto label_265e04;
            case 0x265E08u: goto label_265e08;
            case 0x265E0Cu: goto label_265e0c;
            case 0x265E10u: goto label_265e10;
            case 0x265E14u: goto label_265e14;
            case 0x265E18u: goto label_265e18;
            case 0x265E1Cu: goto label_265e1c;
            case 0x265E20u: goto label_265e20;
            case 0x265E24u: goto label_265e24;
            case 0x265E28u: goto label_265e28;
            case 0x265E2Cu: goto label_265e2c;
            case 0x265E30u: goto label_265e30;
            case 0x265E34u: goto label_265e34;
            case 0x265E38u: goto label_265e38;
            case 0x265E3Cu: goto label_265e3c;
            case 0x265E40u: goto label_265e40;
            case 0x265E44u: goto label_265e44;
            case 0x265E48u: goto label_265e48;
            case 0x265E4Cu: goto label_265e4c;
            case 0x265E50u: goto label_265e50;
            case 0x265E54u: goto label_265e54;
            case 0x265E58u: goto label_265e58;
            case 0x265E5Cu: goto label_265e5c;
            case 0x265E60u: goto label_265e60;
            case 0x265E64u: goto label_265e64;
            case 0x265E68u: goto label_265e68;
            case 0x265E6Cu: goto label_265e6c;
            case 0x265E70u: goto label_265e70;
            case 0x265E74u: goto label_265e74;
            case 0x265E78u: goto label_265e78;
            case 0x265E7Cu: goto label_265e7c;
            case 0x265E80u: goto label_265e80;
            case 0x265E84u: goto label_265e84;
            case 0x265E88u: goto label_265e88;
            case 0x265E8Cu: goto label_265e8c;
            case 0x265E90u: goto label_265e90;
            case 0x265E94u: goto label_265e94;
            case 0x265E98u: goto label_265e98;
            case 0x265E9Cu: goto label_265e9c;
            case 0x265EA0u: goto label_265ea0;
            case 0x265EA4u: goto label_265ea4;
            case 0x265EA8u: goto label_265ea8;
            case 0x265EACu: goto label_265eac;
            case 0x265EB0u: goto label_265eb0;
            case 0x265EB4u: goto label_265eb4;
            case 0x265EB8u: goto label_265eb8;
            case 0x265EBCu: goto label_265ebc;
            case 0x265EC0u: goto label_265ec0;
            case 0x265EC4u: goto label_265ec4;
            case 0x265EC8u: goto label_265ec8;
            case 0x265ECCu: goto label_265ecc;
            case 0x265ED0u: goto label_265ed0;
            case 0x265ED4u: goto label_265ed4;
            case 0x265ED8u: goto label_265ed8;
            case 0x265EDCu: goto label_265edc;
            case 0x265EE0u: goto label_265ee0;
            case 0x265EE4u: goto label_265ee4;
            case 0x265EE8u: goto label_265ee8;
            case 0x265EECu: goto label_265eec;
            case 0x265EF0u: goto label_265ef0;
            case 0x265EF4u: goto label_265ef4;
            case 0x265EF8u: goto label_265ef8;
            case 0x265EFCu: goto label_265efc;
            case 0x265F00u: goto label_265f00;
            case 0x265F04u: goto label_265f04;
            case 0x265F08u: goto label_265f08;
            case 0x265F0Cu: goto label_265f0c;
            case 0x265F10u: goto label_265f10;
            case 0x265F14u: goto label_265f14;
            case 0x265F18u: goto label_265f18;
            case 0x265F1Cu: goto label_265f1c;
            case 0x265F20u: goto label_265f20;
            case 0x265F24u: goto label_265f24;
            case 0x265F28u: goto label_265f28;
            case 0x265F2Cu: goto label_265f2c;
            case 0x265F30u: goto label_265f30;
            case 0x265F34u: goto label_265f34;
            case 0x265F38u: goto label_265f38;
            case 0x265F3Cu: goto label_265f3c;
            case 0x265F40u: goto label_265f40;
            case 0x265F44u: goto label_265f44;
            case 0x265F48u: goto label_265f48;
            case 0x265F4Cu: goto label_265f4c;
            case 0x265F50u: goto label_265f50;
            case 0x265F54u: goto label_265f54;
            case 0x265F58u: goto label_265f58;
            case 0x265F5Cu: goto label_265f5c;
            case 0x265F60u: goto label_265f60;
            case 0x265F64u: goto label_265f64;
            case 0x265F68u: goto label_265f68;
            case 0x265F6Cu: goto label_265f6c;
            case 0x265F70u: goto label_265f70;
            case 0x265F74u: goto label_265f74;
            case 0x265F78u: goto label_265f78;
            case 0x265F7Cu: goto label_265f7c;
            case 0x265F80u: goto label_265f80;
            case 0x265F84u: goto label_265f84;
            case 0x265F88u: goto label_265f88;
            case 0x265F8Cu: goto label_265f8c;
            case 0x265F90u: goto label_265f90;
            case 0x265F94u: goto label_265f94;
            case 0x265F98u: goto label_265f98;
            case 0x265F9Cu: goto label_265f9c;
            case 0x265FA0u: goto label_265fa0;
            case 0x265FA4u: goto label_265fa4;
            case 0x265FA8u: goto label_265fa8;
            case 0x265FACu: goto label_265fac;
            case 0x265FB0u: goto label_265fb0;
            case 0x265FB4u: goto label_265fb4;
            case 0x265FB8u: goto label_265fb8;
            case 0x265FBCu: goto label_265fbc;
            case 0x265FC0u: goto label_265fc0;
            case 0x265FC4u: goto label_265fc4;
            case 0x265FC8u: goto label_265fc8;
            case 0x265FCCu: goto label_265fcc;
            case 0x265FD0u: goto label_265fd0;
            case 0x265FD4u: goto label_265fd4;
            case 0x265FD8u: goto label_265fd8;
            case 0x265FDCu: goto label_265fdc;
            case 0x265FE0u: goto label_265fe0;
            case 0x265FE4u: goto label_265fe4;
            case 0x265FE8u: goto label_265fe8;
            case 0x265FECu: goto label_265fec;
            case 0x265FF0u: goto label_265ff0;
            case 0x265FF4u: goto label_265ff4;
            case 0x265FF8u: goto label_265ff8;
            case 0x265FFCu: goto label_265ffc;
            case 0x266000u: goto label_266000;
            case 0x266004u: goto label_266004;
            case 0x266008u: goto label_266008;
            case 0x26600Cu: goto label_26600c;
            case 0x266010u: goto label_266010;
            case 0x266014u: goto label_266014;
            case 0x266018u: goto label_266018;
            case 0x26601Cu: goto label_26601c;
            case 0x266020u: goto label_266020;
            case 0x266024u: goto label_266024;
            case 0x266028u: goto label_266028;
            case 0x26602Cu: goto label_26602c;
            case 0x266030u: goto label_266030;
            case 0x266034u: goto label_266034;
            case 0x266038u: goto label_266038;
            case 0x26603Cu: goto label_26603c;
            case 0x266040u: goto label_266040;
            case 0x266044u: goto label_266044;
            case 0x266048u: goto label_266048;
            case 0x26604Cu: goto label_26604c;
            case 0x266050u: goto label_266050;
            case 0x266054u: goto label_266054;
            case 0x266058u: goto label_266058;
            case 0x26605Cu: goto label_26605c;
            case 0x266060u: goto label_266060;
            case 0x266064u: goto label_266064;
            case 0x266068u: goto label_266068;
            case 0x26606Cu: goto label_26606c;
            case 0x266070u: goto label_266070;
            case 0x266074u: goto label_266074;
            case 0x266078u: goto label_266078;
            case 0x26607Cu: goto label_26607c;
            case 0x266080u: goto label_266080;
            case 0x266084u: goto label_266084;
            case 0x266088u: goto label_266088;
            case 0x26608Cu: goto label_26608c;
            case 0x266090u: goto label_266090;
            case 0x266094u: goto label_266094;
            case 0x266098u: goto label_266098;
            case 0x26609Cu: goto label_26609c;
            case 0x2660A0u: goto label_2660a0;
            case 0x2660A4u: goto label_2660a4;
            case 0x2660A8u: goto label_2660a8;
            case 0x2660ACu: goto label_2660ac;
            case 0x2660B0u: goto label_2660b0;
            case 0x2660B4u: goto label_2660b4;
            case 0x2660B8u: goto label_2660b8;
            case 0x2660BCu: goto label_2660bc;
            case 0x2660C0u: goto label_2660c0;
            case 0x2660C4u: goto label_2660c4;
            case 0x2660C8u: goto label_2660c8;
            case 0x2660CCu: goto label_2660cc;
            case 0x2660D0u: goto label_2660d0;
            case 0x2660D4u: goto label_2660d4;
            case 0x2660D8u: goto label_2660d8;
            case 0x2660DCu: goto label_2660dc;
            case 0x2660E0u: goto label_2660e0;
            case 0x2660E4u: goto label_2660e4;
            case 0x2660E8u: goto label_2660e8;
            case 0x2660ECu: goto label_2660ec;
            case 0x2660F0u: goto label_2660f0;
            case 0x2660F4u: goto label_2660f4;
            case 0x2660F8u: goto label_2660f8;
            case 0x2660FCu: goto label_2660fc;
            case 0x266100u: goto label_266100;
            case 0x266104u: goto label_266104;
            case 0x266108u: goto label_266108;
            case 0x26610Cu: goto label_26610c;
            case 0x266110u: goto label_266110;
            case 0x266114u: goto label_266114;
            case 0x266118u: goto label_266118;
            case 0x26611Cu: goto label_26611c;
            case 0x266120u: goto label_266120;
            case 0x266124u: goto label_266124;
            case 0x266128u: goto label_266128;
            case 0x26612Cu: goto label_26612c;
            case 0x266130u: goto label_266130;
            case 0x266134u: goto label_266134;
            case 0x266138u: goto label_266138;
            case 0x26613Cu: goto label_26613c;
            case 0x266140u: goto label_266140;
            case 0x266144u: goto label_266144;
            case 0x266148u: goto label_266148;
            case 0x26614Cu: goto label_26614c;
            case 0x266150u: goto label_266150;
            case 0x266154u: goto label_266154;
            case 0x266158u: goto label_266158;
            case 0x26615Cu: goto label_26615c;
            case 0x266160u: goto label_266160;
            case 0x266164u: goto label_266164;
            case 0x266168u: goto label_266168;
            case 0x26616Cu: goto label_26616c;
            case 0x266170u: goto label_266170;
            case 0x266174u: goto label_266174;
            case 0x266178u: goto label_266178;
            case 0x26617Cu: goto label_26617c;
            case 0x266180u: goto label_266180;
            case 0x266184u: goto label_266184;
            case 0x266188u: goto label_266188;
            case 0x26618Cu: goto label_26618c;
            case 0x266190u: goto label_266190;
            case 0x266194u: goto label_266194;
            case 0x266198u: goto label_266198;
            case 0x26619Cu: goto label_26619c;
            case 0x2661A0u: goto label_2661a0;
            case 0x2661A4u: goto label_2661a4;
            case 0x2661A8u: goto label_2661a8;
            case 0x2661ACu: goto label_2661ac;
            case 0x2661B0u: goto label_2661b0;
            case 0x2661B4u: goto label_2661b4;
            case 0x2661B8u: goto label_2661b8;
            case 0x2661BCu: goto label_2661bc;
            case 0x2661C0u: goto label_2661c0;
            case 0x2661C4u: goto label_2661c4;
            case 0x2661C8u: goto label_2661c8;
            case 0x2661CCu: goto label_2661cc;
            case 0x2661D0u: goto label_2661d0;
            case 0x2661D4u: goto label_2661d4;
            case 0x2661D8u: goto label_2661d8;
            case 0x2661DCu: goto label_2661dc;
            case 0x2661E0u: goto label_2661e0;
            case 0x2661E4u: goto label_2661e4;
            case 0x2661E8u: goto label_2661e8;
            case 0x2661ECu: goto label_2661ec;
            case 0x2661F0u: goto label_2661f0;
            case 0x2661F4u: goto label_2661f4;
            case 0x2661F8u: goto label_2661f8;
            case 0x2661FCu: goto label_2661fc;
            case 0x266200u: goto label_266200;
            case 0x266204u: goto label_266204;
            case 0x266208u: goto label_266208;
            case 0x26620Cu: goto label_26620c;
            case 0x266210u: goto label_266210;
            case 0x266214u: goto label_266214;
            case 0x266218u: goto label_266218;
            case 0x26621Cu: goto label_26621c;
            case 0x266220u: goto label_266220;
            case 0x266224u: goto label_266224;
            case 0x266228u: goto label_266228;
            case 0x26622Cu: goto label_26622c;
            case 0x266230u: goto label_266230;
            case 0x266234u: goto label_266234;
            case 0x266238u: goto label_266238;
            case 0x26623Cu: goto label_26623c;
            case 0x266240u: goto label_266240;
            case 0x266244u: goto label_266244;
            case 0x266248u: goto label_266248;
            case 0x26624Cu: goto label_26624c;
            case 0x266250u: goto label_266250;
            case 0x266254u: goto label_266254;
            case 0x266258u: goto label_266258;
            case 0x26625Cu: goto label_26625c;
            case 0x266260u: goto label_266260;
            case 0x266264u: goto label_266264;
            case 0x266268u: goto label_266268;
            case 0x26626Cu: goto label_26626c;
            case 0x266270u: goto label_266270;
            case 0x266274u: goto label_266274;
            case 0x266278u: goto label_266278;
            case 0x26627Cu: goto label_26627c;
            case 0x266280u: goto label_266280;
            case 0x266284u: goto label_266284;
            case 0x266288u: goto label_266288;
            case 0x26628Cu: goto label_26628c;
            case 0x266290u: goto label_266290;
            case 0x266294u: goto label_266294;
            case 0x266298u: goto label_266298;
            case 0x26629Cu: goto label_26629c;
            case 0x2662A0u: goto label_2662a0;
            case 0x2662A4u: goto label_2662a4;
            case 0x2662A8u: goto label_2662a8;
            case 0x2662ACu: goto label_2662ac;
            case 0x2662B0u: goto label_2662b0;
            case 0x2662B4u: goto label_2662b4;
            case 0x2662B8u: goto label_2662b8;
            case 0x2662BCu: goto label_2662bc;
            case 0x2662C0u: goto label_2662c0;
            case 0x2662C4u: goto label_2662c4;
            case 0x2662C8u: goto label_2662c8;
            case 0x2662CCu: goto label_2662cc;
            case 0x2662D0u: goto label_2662d0;
            case 0x2662D4u: goto label_2662d4;
            case 0x2662D8u: goto label_2662d8;
            case 0x2662DCu: goto label_2662dc;
            case 0x2662E0u: goto label_2662e0;
            case 0x2662E4u: goto label_2662e4;
            case 0x2662E8u: goto label_2662e8;
            case 0x2662ECu: goto label_2662ec;
            case 0x2662F0u: goto label_2662f0;
            case 0x2662F4u: goto label_2662f4;
            case 0x2662F8u: goto label_2662f8;
            case 0x2662FCu: goto label_2662fc;
            case 0x266300u: goto label_266300;
            case 0x266304u: goto label_266304;
            case 0x266308u: goto label_266308;
            case 0x26630Cu: goto label_26630c;
            case 0x266310u: goto label_266310;
            case 0x266314u: goto label_266314;
            case 0x266318u: goto label_266318;
            case 0x26631Cu: goto label_26631c;
            case 0x266320u: goto label_266320;
            case 0x266324u: goto label_266324;
            case 0x266328u: goto label_266328;
            case 0x26632Cu: goto label_26632c;
            case 0x266330u: goto label_266330;
            case 0x266334u: goto label_266334;
            case 0x266338u: goto label_266338;
            case 0x26633Cu: goto label_26633c;
            case 0x266340u: goto label_266340;
            case 0x266344u: goto label_266344;
            case 0x266348u: goto label_266348;
            case 0x26634Cu: goto label_26634c;
            case 0x266350u: goto label_266350;
            case 0x266354u: goto label_266354;
            case 0x266358u: goto label_266358;
            case 0x26635Cu: goto label_26635c;
            case 0x266360u: goto label_266360;
            case 0x266364u: goto label_266364;
            case 0x266368u: goto label_266368;
            case 0x26636Cu: goto label_26636c;
            case 0x266370u: goto label_266370;
            case 0x266374u: goto label_266374;
            case 0x266378u: goto label_266378;
            case 0x26637Cu: goto label_26637c;
            case 0x266380u: goto label_266380;
            case 0x266384u: goto label_266384;
            case 0x266388u: goto label_266388;
            case 0x26638Cu: goto label_26638c;
            case 0x266390u: goto label_266390;
            case 0x266394u: goto label_266394;
            case 0x266398u: goto label_266398;
            case 0x26639Cu: goto label_26639c;
            case 0x2663A0u: goto label_2663a0;
            case 0x2663A4u: goto label_2663a4;
            case 0x2663A8u: goto label_2663a8;
            case 0x2663ACu: goto label_2663ac;
            case 0x2663B0u: goto label_2663b0;
            case 0x2663B4u: goto label_2663b4;
            case 0x2663B8u: goto label_2663b8;
            case 0x2663BCu: goto label_2663bc;
            case 0x2663C0u: goto label_2663c0;
            case 0x2663C4u: goto label_2663c4;
            case 0x2663C8u: goto label_2663c8;
            case 0x2663CCu: goto label_2663cc;
            case 0x2663D0u: goto label_2663d0;
            case 0x2663D4u: goto label_2663d4;
            case 0x2663D8u: goto label_2663d8;
            case 0x2663DCu: goto label_2663dc;
            case 0x2663E0u: goto label_2663e0;
            case 0x2663E4u: goto label_2663e4;
            case 0x2663E8u: goto label_2663e8;
            case 0x2663ECu: goto label_2663ec;
            case 0x2663F0u: goto label_2663f0;
            case 0x2663F4u: goto label_2663f4;
            case 0x2663F8u: goto label_2663f8;
            case 0x2663FCu: goto label_2663fc;
            case 0x266400u: goto label_266400;
            case 0x266404u: goto label_266404;
            case 0x266408u: goto label_266408;
            case 0x26640Cu: goto label_26640c;
            case 0x266410u: goto label_266410;
            case 0x266414u: goto label_266414;
            case 0x266418u: goto label_266418;
            case 0x26641Cu: goto label_26641c;
            case 0x266420u: goto label_266420;
            case 0x266424u: goto label_266424;
            case 0x266428u: goto label_266428;
            case 0x26642Cu: goto label_26642c;
            case 0x266430u: goto label_266430;
            case 0x266434u: goto label_266434;
            case 0x266438u: goto label_266438;
            case 0x26643Cu: goto label_26643c;
            case 0x266440u: goto label_266440;
            case 0x266444u: goto label_266444;
            case 0x266448u: goto label_266448;
            case 0x26644Cu: goto label_26644c;
            case 0x266450u: goto label_266450;
            case 0x266454u: goto label_266454;
            case 0x266458u: goto label_266458;
            case 0x26645Cu: goto label_26645c;
            case 0x266460u: goto label_266460;
            case 0x266464u: goto label_266464;
            case 0x266468u: goto label_266468;
            case 0x26646Cu: goto label_26646c;
            case 0x266470u: goto label_266470;
            case 0x266474u: goto label_266474;
            case 0x266478u: goto label_266478;
            case 0x26647Cu: goto label_26647c;
            case 0x266480u: goto label_266480;
            case 0x266484u: goto label_266484;
            case 0x266488u: goto label_266488;
            case 0x26648Cu: goto label_26648c;
            case 0x266490u: goto label_266490;
            case 0x266494u: goto label_266494;
            case 0x266498u: goto label_266498;
            case 0x26649Cu: goto label_26649c;
            case 0x2664A0u: goto label_2664a0;
            case 0x2664A4u: goto label_2664a4;
            case 0x2664A8u: goto label_2664a8;
            case 0x2664ACu: goto label_2664ac;
            case 0x2664B0u: goto label_2664b0;
            case 0x2664B4u: goto label_2664b4;
            case 0x2664B8u: goto label_2664b8;
            case 0x2664BCu: goto label_2664bc;
            case 0x2664C0u: goto label_2664c0;
            case 0x2664C4u: goto label_2664c4;
            case 0x2664C8u: goto label_2664c8;
            case 0x2664CCu: goto label_2664cc;
            case 0x2664D0u: goto label_2664d0;
            case 0x2664D4u: goto label_2664d4;
            case 0x2664D8u: goto label_2664d8;
            case 0x2664DCu: goto label_2664dc;
            case 0x2664E0u: goto label_2664e0;
            case 0x2664E4u: goto label_2664e4;
            case 0x2664E8u: goto label_2664e8;
            case 0x2664ECu: goto label_2664ec;
            case 0x2664F0u: goto label_2664f0;
            case 0x2664F4u: goto label_2664f4;
            case 0x2664F8u: goto label_2664f8;
            case 0x2664FCu: goto label_2664fc;
            case 0x266500u: goto label_266500;
            case 0x266504u: goto label_266504;
            case 0x266508u: goto label_266508;
            case 0x26650Cu: goto label_26650c;
            case 0x266510u: goto label_266510;
            case 0x266514u: goto label_266514;
            case 0x266518u: goto label_266518;
            case 0x26651Cu: goto label_26651c;
            case 0x266520u: goto label_266520;
            case 0x266524u: goto label_266524;
            case 0x266528u: goto label_266528;
            case 0x26652Cu: goto label_26652c;
            case 0x266530u: goto label_266530;
            case 0x266534u: goto label_266534;
            case 0x266538u: goto label_266538;
            case 0x26653Cu: goto label_26653c;
            case 0x266540u: goto label_266540;
            case 0x266544u: goto label_266544;
            case 0x266548u: goto label_266548;
            case 0x26654Cu: goto label_26654c;
            case 0x266550u: goto label_266550;
            case 0x266554u: goto label_266554;
            case 0x266558u: goto label_266558;
            case 0x26655Cu: goto label_26655c;
            case 0x266560u: goto label_266560;
            case 0x266564u: goto label_266564;
            case 0x266568u: goto label_266568;
            case 0x26656Cu: goto label_26656c;
            case 0x266570u: goto label_266570;
            case 0x266574u: goto label_266574;
            case 0x266578u: goto label_266578;
            case 0x26657Cu: goto label_26657c;
            case 0x266580u: goto label_266580;
            case 0x266584u: goto label_266584;
            case 0x266588u: goto label_266588;
            case 0x26658Cu: goto label_26658c;
            case 0x266590u: goto label_266590;
            case 0x266594u: goto label_266594;
            case 0x266598u: goto label_266598;
            case 0x26659Cu: goto label_26659c;
            case 0x2665A0u: goto label_2665a0;
            case 0x2665A4u: goto label_2665a4;
            case 0x2665A8u: goto label_2665a8;
            case 0x2665ACu: goto label_2665ac;
            case 0x2665B0u: goto label_2665b0;
            case 0x2665B4u: goto label_2665b4;
            case 0x2665B8u: goto label_2665b8;
            case 0x2665BCu: goto label_2665bc;
            case 0x2665C0u: goto label_2665c0;
            case 0x2665C4u: goto label_2665c4;
            case 0x2665C8u: goto label_2665c8;
            case 0x2665CCu: goto label_2665cc;
            case 0x2665D0u: goto label_2665d0;
            case 0x2665D4u: goto label_2665d4;
            case 0x2665D8u: goto label_2665d8;
            case 0x2665DCu: goto label_2665dc;
            case 0x2665E0u: goto label_2665e0;
            case 0x2665E4u: goto label_2665e4;
            case 0x2665E8u: goto label_2665e8;
            case 0x2665ECu: goto label_2665ec;
            case 0x2665F0u: goto label_2665f0;
            case 0x2665F4u: goto label_2665f4;
            case 0x2665F8u: goto label_2665f8;
            case 0x2665FCu: goto label_2665fc;
            case 0x266600u: goto label_266600;
            case 0x266604u: goto label_266604;
            case 0x266608u: goto label_266608;
            case 0x26660Cu: goto label_26660c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x265D30u;
label_265d30:
    // 0x265d30: 0x3c020036
    ctx->pc = 0x265d30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_265d34:
    // 0x265d34: 0x8c43d934
    ctx->pc = 0x265d34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_265d38:
    // 0x265d38: 0x2402002a
    ctx->pc = 0x265d38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 42));
label_265d3c:
    // 0x265d3c: 0x10620003
label_265d40:
    if (ctx->pc == 0x265D40u) {
        ctx->pc = 0x265D40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
        ctx->pc = 0x265D44u;
        goto label_265d44;
    }
    ctx->pc = 0x265D3Cu;
    {
        const bool branch_taken_0x265d3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x265D40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
        if (branch_taken_0x265d3c) {
            ctx->pc = 0x265D4Cu;
            goto label_265d4c;
        }
    }
    ctx->pc = 0x265D44u;
label_265d44:
    // 0x265d44: 0x14620008
label_265d48:
    if (ctx->pc == 0x265D48u) {
        ctx->pc = 0x265D48u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x265D4Cu;
        goto label_265d4c;
    }
    ctx->pc = 0x265D44u;
    {
        const bool branch_taken_0x265d44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x265D48u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x265d44) {
            ctx->pc = 0x265D68u;
            goto label_265d68;
        }
    }
    ctx->pc = 0x265D4Cu;
label_265d4c:
    // 0x265d4c: 0x3c03003c
    ctx->pc = 0x265d4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_265d50:
    // 0x265d50: 0x3c020031
    ctx->pc = 0x265d50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_265d54:
    // 0x265d54: 0xc440ffa4
    ctx->pc = 0x265d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265d58:
    // 0x265d58: 0x3c014120
    ctx->pc = 0x265d58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_265d5c:
    // 0x265d5c: 0x44810800
    ctx->pc = 0x265d5cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_265d60:
    // 0x265d60: 0x10000006
label_265d64:
    if (ctx->pc == 0x265D64u) {
        ctx->pc = 0x265D64u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x265D68u;
        goto label_265d68;
    }
    ctx->pc = 0x265D60u;
    {
        const bool branch_taken_0x265d60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x265D64u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x265d60) {
            ctx->pc = 0x265D7Cu;
            goto label_265d7c;
        }
    }
    ctx->pc = 0x265D68u;
label_265d68:
    // 0x265d68: 0x3c020031
    ctx->pc = 0x265d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_265d6c:
    // 0x265d6c: 0xc440ffa4
    ctx->pc = 0x265d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265d70:
    // 0x265d70: 0x3c0140a0
    ctx->pc = 0x265d70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
label_265d74:
    // 0x265d74: 0x44810800
    ctx->pc = 0x265d74u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_265d78:
    // 0x265d78: 0x46010000
    ctx->pc = 0x265d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_265d7c:
    // 0x265d7c: 0xe46038b4
    ctx->pc = 0x265d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14516), bits); }
label_265d80:
    // 0x265d80: 0x3c030034
    ctx->pc = 0x265d80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_265d84:
    // 0x265d84: 0x8c62e8fc
    ctx->pc = 0x265d84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961404)));
label_265d88:
    // 0x265d88: 0x24420001
    ctx->pc = 0x265d88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_265d8c:
    // 0x265d8c: 0xac62e8fc
    ctx->pc = 0x265d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961404), GPR_U32(ctx, 2));
label_265d90:
    // 0x265d90: 0x3c020031
    ctx->pc = 0x265d90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_265d94:
    // 0x265d94: 0x3c03003c
    ctx->pc = 0x265d94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_265d98:
    // 0x265d98: 0xc441ffa4
    ctx->pc = 0x265d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265d9c:
    // 0x265d9c: 0xc46038b4
    ctx->pc = 0x265d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265da0:
    // 0x265da0: 0x46010036
    ctx->pc = 0x265da0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_265da4:
    // 0x265da4: 0x0
    ctx->pc = 0x265da4u;
    // NOP
label_265da8:
    // 0x265da8: 0x45000201
label_265dac:
    if (ctx->pc == 0x265DACu) {
        ctx->pc = 0x265DACu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x265DB0u;
        goto label_265db0;
    }
    ctx->pc = 0x265DA8u;
    {
        const bool branch_taken_0x265da8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x265DACu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x265da8) {
            ctx->pc = 0x2665B0u;
            goto label_2665b0;
        }
    }
    ctx->pc = 0x265DB0u;
label_265db0:
    // 0x265db0: 0x100001f0
label_265db4:
    if (ctx->pc == 0x265DB4u) {
        ctx->pc = 0x265DB4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961404)));
        ctx->pc = 0x265DB8u;
        goto label_265db8;
    }
    ctx->pc = 0x265DB0u;
    {
        const bool branch_taken_0x265db0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x265DB4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961404)));
        if (branch_taken_0x265db0) {
            ctx->pc = 0x266574u;
            goto label_266574;
        }
    }
    ctx->pc = 0x265DB8u;
label_265db8:
    // 0x265db8: 0x3c020034
    ctx->pc = 0x265db8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_265dbc:
    // 0x265dbc: 0x8c44cda4
    ctx->pc = 0x265dbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954404)));
label_265dc0:
    // 0x265dc0: 0x3c05003b
    ctx->pc = 0x265dc0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_265dc4:
    // 0x265dc4: 0x24a59fc8
    ctx->pc = 0x265dc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294942664));
label_265dc8:
    // 0x265dc8: 0xc0847fc
label_265dcc:
    if (ctx->pc == 0x265DCCu) {
        ctx->pc = 0x265DCCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x265DD0u;
        goto label_265dd0;
    }
    ctx->pc = 0x265DC8u;
    SET_GPR_U32(ctx, 31, 0x265DD0u);
    ctx->pc = 0x265DCCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265DD0u; }
    }
    if (ctx->pc != 0x265DD0u) { return; }
    ctx->pc = 0x265DD0u;
label_265dd0:
    // 0x265dd0: 0x40202d
    ctx->pc = 0x265dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_265dd4:
    // 0x265dd4: 0x3c110034
    ctx->pc = 0x265dd4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
label_265dd8:
    // 0x265dd8: 0x2625e900
    ctx->pc = 0x265dd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4294961408));
label_265ddc:
    // 0x265ddc: 0x302d
    ctx->pc = 0x265ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_265de0:
    // 0x265de0: 0x3c070088
    ctx->pc = 0x265de0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)136 << 16));
label_265de4:
    // 0x265de4: 0xc08476a
label_265de8:
    if (ctx->pc == 0x265DE8u) {
        ctx->pc = 0x265DE8u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 6272));
        ctx->pc = 0x265DECu;
        goto label_265dec;
    }
    ctx->pc = 0x265DE4u;
    SET_GPR_U32(ctx, 31, 0x265DECu);
    ctx->pc = 0x265DE8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 6272));
    ctx->pc = 0x211DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInit_0x211da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265DECu; }
    }
    if (ctx->pc != 0x265DECu) { return; }
    ctx->pc = 0x265DECu;
label_265dec:
    // 0x265dec: 0x2623e900
    ctx->pc = 0x265decu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4294961408));
label_265df0:
    // 0x265df0: 0xae22e900
    ctx->pc = 0x265df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294961408), GPR_U32(ctx, 2));
label_265df4:
    // 0x265df4: 0x24020001
    ctx->pc = 0x265df4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_265df8:
    // 0x265df8: 0xa4620038
    ctx->pc = 0x265df8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 56), (uint16_t)GPR_U32(ctx, 2));
label_265dfc:
    // 0x265dfc: 0x3c020034
    ctx->pc = 0x265dfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_265e00:
    // 0x265e00: 0x8c44569c
    ctx->pc = 0x265e00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 22172)));
label_265e04:
    // 0x265e04: 0x3c05003a
    ctx->pc = 0x265e04u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_265e08:
    // 0x265e08: 0x24a52550
    ctx->pc = 0x265e08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
label_265e0c:
    // 0x265e0c: 0xc0b3ec0
label_265e10:
    if (ctx->pc == 0x265E10u) {
        ctx->pc = 0x265E10u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x265E14u;
        goto label_265e14;
    }
    ctx->pc = 0x265E0Cu;
    SET_GPR_U32(ctx, 31, 0x265E14u);
    ctx->pc = 0x265E10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E14u; }
    }
    if (ctx->pc != 0x265E14u) { return; }
    ctx->pc = 0x265E14u;
label_265e14:
    // 0x265e14: 0x3c100034
    ctx->pc = 0x265e14u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
label_265e18:
    // 0x265e18: 0x2610e950
    ctx->pc = 0x265e18u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294961488));
label_265e1c:
    // 0x265e1c: 0xae020060
    ctx->pc = 0x265e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_265e20:
    // 0x265e20: 0x8e23e900
    ctx->pc = 0x265e20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294961408)));
label_265e24:
    // 0x265e24: 0x8c640000
    ctx->pc = 0x265e24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_265e28:
    // 0x265e28: 0xc0b3f94
label_265e2c:
    if (ctx->pc == 0x265E2Cu) {
        ctx->pc = 0x265E2Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265E30u;
        goto label_265e30;
    }
    ctx->pc = 0x265E28u;
    SET_GPR_U32(ctx, 31, 0x265E30u);
    ctx->pc = 0x265E2Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E30u; }
    }
    if (ctx->pc != 0x265E30u) { return; }
    ctx->pc = 0x265E30u;
label_265e30:
    // 0x265e30: 0xae000064
    ctx->pc = 0x265e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_265e34:
    // 0x265e34: 0x3c020036
    ctx->pc = 0x265e34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_265e38:
    // 0x265e38: 0x8c42d934
    ctx->pc = 0x265e38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_265e3c:
    // 0x265e3c: 0x2442ffd6
    ctx->pc = 0x265e3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967254));
label_265e40:
    // 0x265e40: 0x2c420002
    ctx->pc = 0x265e40u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_265e44:
    // 0x265e44: 0x10400009
label_265e48:
    if (ctx->pc == 0x265E48u) {
        ctx->pc = 0x265E4Cu;
        goto label_265e4c;
    }
    ctx->pc = 0x265E44u;
    {
        const bool branch_taken_0x265e44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x265e44) {
            ctx->pc = 0x265E6Cu;
            goto label_265e6c;
        }
    }
    ctx->pc = 0x265E4Cu;
label_265e4c:
    // 0x265e4c: 0xafa00000
    ctx->pc = 0x265e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_265e50:
    // 0x265e50: 0x3c01c140
    ctx->pc = 0x265e50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49472 << 16));
label_265e54:
    // 0x265e54: 0x44810000
    ctx->pc = 0x265e54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_265e58:
    // 0x265e58: 0xe7a00004
    ctx->pc = 0x265e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_265e5c:
    // 0x265e5c: 0x3c0140c0
    ctx->pc = 0x265e5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16576 << 16));
label_265e60:
    // 0x265e60: 0x44810000
    ctx->pc = 0x265e60u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_265e64:
    // 0x265e64: 0x10000008
label_265e68:
    if (ctx->pc == 0x265E68u) {
        ctx->pc = 0x265E68u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->pc = 0x265E6Cu;
        goto label_265e6c;
    }
    ctx->pc = 0x265E64u;
    {
        const bool branch_taken_0x265e64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x265E68u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        if (branch_taken_0x265e64) {
            ctx->pc = 0x265E88u;
            goto label_265e88;
        }
    }
    ctx->pc = 0x265E6Cu;
label_265e6c:
    // 0x265e6c: 0xc09963e
label_265e70:
    if (ctx->pc == 0x265E70u) {
        ctx->pc = 0x265E70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265E74u;
        goto label_265e74;
    }
    ctx->pc = 0x265E6Cu;
    SET_GPR_U32(ctx, 31, 0x265E74u);
    ctx->pc = 0x265E70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2658F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_wizard_pos_0x2658f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E74u; }
    }
    if (ctx->pc != 0x265E74u) { return; }
    ctx->pc = 0x265E74u;
label_265e74:
    // 0x265e74: 0xc7a00004
    ctx->pc = 0x265e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265e78:
    // 0x265e78: 0x3c014040
    ctx->pc = 0x265e78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
label_265e7c:
    // 0x265e7c: 0x44810800
    ctx->pc = 0x265e7cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_265e80:
    // 0x265e80: 0x46010000
    ctx->pc = 0x265e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_265e84:
    // 0x265e84: 0xe7a00004
    ctx->pc = 0x265e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_265e88:
    // 0x265e88: 0x3c020034
    ctx->pc = 0x265e88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_265e8c:
    // 0x265e8c: 0x2450e950
    ctx->pc = 0x265e8cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294961488));
label_265e90:
    // 0x265e90: 0x8e020060
    ctx->pc = 0x265e90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_265e94:
    // 0x265e94: 0xc7a00000
    ctx->pc = 0x265e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265e98:
    // 0x265e98: 0xe4400030
    ctx->pc = 0x265e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_265e9c:
    // 0x265e9c: 0x8e020060
    ctx->pc = 0x265e9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_265ea0:
    // 0x265ea0: 0xc7a00004
    ctx->pc = 0x265ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265ea4:
    // 0x265ea4: 0xe4400034
    ctx->pc = 0x265ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_265ea8:
    // 0x265ea8: 0x8e020060
    ctx->pc = 0x265ea8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_265eac:
    // 0x265eac: 0xc7a00008
    ctx->pc = 0x265eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265eb0:
    // 0x265eb0: 0xe4400038
    ctx->pc = 0x265eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_265eb4:
    // 0x265eb4: 0x8e040060
    ctx->pc = 0x265eb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_265eb8:
    // 0x265eb8: 0xc0b5494
label_265ebc:
    if (ctx->pc == 0x265EBCu) {
        ctx->pc = 0x265EBCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265EC0u;
        goto label_265ec0;
    }
    ctx->pc = 0x265EB8u;
    SET_GPR_U32(ctx, 31, 0x265EC0u);
    ctx->pc = 0x265EBCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265EC0u; }
    }
    if (ctx->pc != 0x265EC0u) { return; }
    ctx->pc = 0x265EC0u;
label_265ec0:
    // 0x265ec0: 0x8e020060
    ctx->pc = 0x265ec0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_265ec4:
    // 0x265ec4: 0xc4430030
    ctx->pc = 0x265ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265ec8:
    // 0x265ec8: 0xe6030040
    ctx->pc = 0x265ec8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_265ecc:
    // 0x265ecc: 0xc4410034
    ctx->pc = 0x265eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265ed0:
    // 0x265ed0: 0xe6010044
    ctx->pc = 0x265ed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_265ed4:
    // 0x265ed4: 0xc4420038
    ctx->pc = 0x265ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265ed8:
    // 0x265ed8: 0xe6020048
    ctx->pc = 0x265ed8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_265edc:
    // 0x265edc: 0x3c014120
    ctx->pc = 0x265edcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_265ee0:
    // 0x265ee0: 0x44810000
    ctx->pc = 0x265ee0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_265ee4:
    // 0x265ee4: 0x46000840
    ctx->pc = 0x265ee4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_265ee8:
    // 0x265ee8: 0xe6010044
    ctx->pc = 0x265ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_265eec:
    // 0x265eec: 0xe6030050
    ctx->pc = 0x265eecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_265ef0:
    // 0x265ef0: 0xe6010054
    ctx->pc = 0x265ef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_265ef4:
    // 0x265ef4: 0xe6020058
    ctx->pc = 0x265ef4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_265ef8:
    // 0x265ef8: 0x3c020036
    ctx->pc = 0x265ef8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_265efc:
    // 0x265efc: 0x8c42d934
    ctx->pc = 0x265efcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_265f00:
    // 0x265f00: 0x2842002a
    ctx->pc = 0x265f00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 42));
label_265f04:
    // 0x265f04: 0x10400004
label_265f08:
    if (ctx->pc == 0x265F08u) {
        ctx->pc = 0x265F08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x265F0Cu;
        goto label_265f0c;
    }
    ctx->pc = 0x265F04u;
    {
        const bool branch_taken_0x265f04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x265F08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x265f04) {
            ctx->pc = 0x265F18u;
            goto label_265f18;
        }
    }
    ctx->pc = 0x265F0Cu;
label_265f0c:
    // 0x265f0c: 0xc09a352
label_265f10:
    if (ctx->pc == 0x265F10u) {
        ctx->pc = 0x265F10u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265F14u;
        goto label_265f14;
    }
    ctx->pc = 0x265F0Cu;
    SET_GPR_U32(ctx, 31, 0x265F14u);
    ctx->pc = 0x265F10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x268D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_target_0x268d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F14u; }
    }
    if (ctx->pc != 0x265F14u) { return; }
    ctx->pc = 0x265F14u;
label_265f14:
    // 0x265f14: 0x3c02003c
    ctx->pc = 0x265f14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_265f18:
    // 0x265f18: 0xac4038c8
    ctx->pc = 0x265f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14536), GPR_U32(ctx, 0));
label_265f1c:
    // 0x265f1c: 0x3c05003c
    ctx->pc = 0x265f1cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
label_265f20:
    // 0x265f20: 0x3c020034
    ctx->pc = 0x265f20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_265f24:
    // 0x265f24: 0x8c44e7f0
    ctx->pc = 0x265f24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_265f28:
    // 0x265f28: 0x24820003
    ctx->pc = 0x265f28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 3));
label_265f2c:
    // 0x265f2c: 0x2403ffff
    ctx->pc = 0x265f2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_265f30:
    // 0x265f30: 0x64182a
    ctx->pc = 0x265f30u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_265f34:
    // 0x265f34: 0x83100b
    ctx->pc = 0x265f34u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_265f38:
    // 0x265f38: 0x21083
    ctx->pc = 0x265f38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_265f3c:
    // 0x265f3c: 0x21080
    ctx->pc = 0x265f3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_265f40:
    // 0x265f40: 0x822023
    ctx->pc = 0x265f40u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_265f44:
    // 0x265f44: 0xaca438cc
    ctx->pc = 0x265f44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 14540), GPR_U32(ctx, 4));
label_265f48:
    // 0x265f48: 0x24040001
    ctx->pc = 0x265f48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_265f4c:
    // 0x265f4c: 0xc09967e
label_265f50:
    if (ctx->pc == 0x265F50u) {
        ctx->pc = 0x265F50u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x265F54u;
        goto label_265f54;
    }
    ctx->pc = 0x265F4Cu;
    SET_GPR_U32(ctx, 31, 0x265F54u);
    ctx->pc = 0x265F50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2659F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_good_wiz_attn_0x2659f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F54u; }
    }
    if (ctx->pc != 0x265F54u) { return; }
    ctx->pc = 0x265F54u;
label_265f54:
    // 0x265f54: 0x3c10003c
    ctx->pc = 0x265f54u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_265f58:
    // 0x265f58: 0xae003890
    ctx->pc = 0x265f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14480), GPR_U32(ctx, 0));
label_265f5c:
    // 0x265f5c: 0x3c020036
    ctx->pc = 0x265f5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_265f60:
    // 0x265f60: 0x8c43d934
    ctx->pc = 0x265f60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_265f64:
    // 0x265f64: 0x2402002a
    ctx->pc = 0x265f64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 42));
label_265f68:
    // 0x265f68: 0x14620006
label_265f6c:
    if (ctx->pc == 0x265F6Cu) {
        ctx->pc = 0x265F6Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x265F70u;
        goto label_265f70;
    }
    ctx->pc = 0x265F68u;
    {
        const bool branch_taken_0x265f68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x265F6Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x265f68) {
            ctx->pc = 0x265F84u;
            goto label_265f84;
        }
    }
    ctx->pc = 0x265F70u;
label_265f70:
    // 0x265f70: 0x3c04003c
    ctx->pc = 0x265f70u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_265f74:
    // 0x265f74: 0xc0996e2
label_265f78:
    if (ctx->pc == 0x265F78u) {
        ctx->pc = 0x265F78u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14296));
        ctx->pc = 0x265F7Cu;
        goto label_265f7c;
    }
    ctx->pc = 0x265F74u;
    SET_GPR_U32(ctx, 31, 0x265F7Cu);
    ctx->pc = 0x265F78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14296));
    ctx->pc = 0x265B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        hide_rune_stones_0x265b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F7Cu; }
    }
    if (ctx->pc != 0x265F7Cu) { return; }
    ctx->pc = 0x265F7Cu;
label_265f7c:
    // 0x265f7c: 0xae023890
    ctx->pc = 0x265f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14480), GPR_U32(ctx, 2));
label_265f80:
    // 0x265f80: 0x3c03003c
    ctx->pc = 0x265f80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_265f84:
    // 0x265f84: 0x240200ff
    ctx->pc = 0x265f84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
label_265f88:
    // 0x265f88: 0xac6238b8
    ctx->pc = 0x265f88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14520), GPR_U32(ctx, 2));
label_265f8c:
    // 0x265f8c: 0x3c030034
    ctx->pc = 0x265f8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_265f90:
    // 0x265f90: 0x8c62e8fc
    ctx->pc = 0x265f90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961404)));
label_265f94:
    // 0x265f94: 0x24420001
    ctx->pc = 0x265f94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_265f98:
    // 0x265f98: 0xac62e8fc
    ctx->pc = 0x265f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961404), GPR_U32(ctx, 2));
label_265f9c:
    // 0x265f9c: 0x3c03003c
    ctx->pc = 0x265f9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_265fa0:
    // 0x265fa0: 0x8c6238b8
    ctx->pc = 0x265fa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 14520)));
label_265fa4:
    // 0x265fa4: 0x18400003
label_265fa8:
    if (ctx->pc == 0x265FA8u) {
        ctx->pc = 0x265FA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->pc = 0x265FACu;
        goto label_265fac;
    }
    ctx->pc = 0x265FA4u;
    {
        const bool branch_taken_0x265fa4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x265FA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
        if (branch_taken_0x265fa4) {
            ctx->pc = 0x265FB4u;
            goto label_265fb4;
        }
    }
    ctx->pc = 0x265FACu;
label_265fac:
    // 0x265fac: 0xac6238b8
    ctx->pc = 0x265facu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14520), GPR_U32(ctx, 2));
label_265fb0:
    // 0x265fb0: 0x3c03003c
    ctx->pc = 0x265fb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_265fb4:
    // 0x265fb4: 0x8c6238b8
    ctx->pc = 0x265fb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 14520)));
label_265fb8:
    // 0x265fb8: 0x4420001
label_265fbc:
    if (ctx->pc == 0x265FBCu) {
        ctx->pc = 0x265FBCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 14520), GPR_U32(ctx, 0));
        ctx->pc = 0x265FC0u;
        goto label_265fc0;
    }
    ctx->pc = 0x265FB8u;
    {
        const bool branch_taken_0x265fb8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x265fb8) {
            ctx->pc = 0x265FBCu;
            WRITE32(ADD32(GPR_U32(ctx, 3), 14520), GPR_U32(ctx, 0));
            ctx->pc = 0x265FC0u;
            goto label_265fc0;
        }
    }
    ctx->pc = 0x265FC0u;
label_265fc0:
    // 0x265fc0: 0x3c020034
    ctx->pc = 0x265fc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_265fc4:
    // 0x265fc4: 0x2450e900
    ctx->pc = 0x265fc4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294961408));
label_265fc8:
    // 0x265fc8: 0x8c42e900
    ctx->pc = 0x265fc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961408)));
label_265fcc:
    // 0x265fcc: 0x3c11003c
    ctx->pc = 0x265fccu;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
label_265fd0:
    // 0x265fd0: 0x8c440000
    ctx->pc = 0x265fd0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_265fd4:
    // 0x265fd4: 0x8e2538b8
    ctx->pc = 0x265fd4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 14520)));
label_265fd8:
    // 0x265fd8: 0xc0b40c0
label_265fdc:
    if (ctx->pc == 0x265FDCu) {
        ctx->pc = 0x265FDCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x265FE0u;
        goto label_265fe0;
    }
    ctx->pc = 0x265FD8u;
    SET_GPR_U32(ctx, 31, 0x265FE0u);
    ctx->pc = 0x265FDCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265FE0u; }
    }
    if (ctx->pc != 0x265FE0u) { return; }
    ctx->pc = 0x265FE0u;
label_265fe0:
    // 0x265fe0: 0x200202d
    ctx->pc = 0x265fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_265fe4:
    // 0x265fe4: 0x282d
    ctx->pc = 0x265fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_265fe8:
    // 0x265fe8: 0xc084a96
label_265fec:
    if (ctx->pc == 0x265FECu) {
        ctx->pc = 0x265FECu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265FF0u;
        goto label_265ff0;
    }
    ctx->pc = 0x265FE8u;
    SET_GPR_U32(ctx, 31, 0x265FF0u);
    ctx->pc = 0x265FECu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateATree_0x212a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265FF0u; }
    }
    if (ctx->pc != 0x265FF0u) { return; }
    ctx->pc = 0x265FF0u;
label_265ff0:
    // 0x265ff0: 0x202d
    ctx->pc = 0x265ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_265ff4:
    // 0x265ff4: 0xc09967e
label_265ff8:
    if (ctx->pc == 0x265FF8u) {
        ctx->pc = 0x265FF8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265FFCu;
        goto label_265ffc;
    }
    ctx->pc = 0x265FF4u;
    SET_GPR_U32(ctx, 31, 0x265FFCu);
    ctx->pc = 0x265FF8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2659F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_good_wiz_attn_0x2659f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265FFCu; }
    }
    if (ctx->pc != 0x265FFCu) { return; }
    ctx->pc = 0x265FFCu;
label_265ffc:
    // 0x265ffc: 0x8e2238b8
    ctx->pc = 0x265ffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 14520)));
label_266000:
    // 0x266000: 0x1440016c
label_266004:
    if (ctx->pc == 0x266004u) {
        ctx->pc = 0x266004u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x266008u;
        goto label_266008;
    }
    ctx->pc = 0x266000u;
    {
        const bool branch_taken_0x266000 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x266004u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x266000) {
            ctx->pc = 0x2665B4u;
            goto label_2665b4;
        }
    }
    ctx->pc = 0x266008u;
label_266008:
    // 0x266008: 0x3c030034
    ctx->pc = 0x266008u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_26600c:
    // 0x26600c: 0x8c62e8fc
    ctx->pc = 0x26600cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961404)));
label_266010:
    // 0x266010: 0x24420001
    ctx->pc = 0x266010u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_266014:
    // 0x266014: 0xac62e8fc
    ctx->pc = 0x266014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961404), GPR_U32(ctx, 2));
label_266018:
    // 0x266018: 0x3c02003c
    ctx->pc = 0x266018u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_26601c:
    // 0x26601c: 0xac4038bc
    ctx->pc = 0x26601cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14524), GPR_U32(ctx, 0));
label_266020:
    // 0x266020: 0x3c02003c
    ctx->pc = 0x266020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_266024:
    // 0x266024: 0xac4038c0
    ctx->pc = 0x266024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14528), GPR_U32(ctx, 0));
label_266028:
    // 0x266028: 0x3c02003c
    ctx->pc = 0x266028u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_26602c:
    // 0x26602c: 0xac4038c4
    ctx->pc = 0x26602cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14532), GPR_U32(ctx, 0));
label_266030:
    // 0x266030: 0x3c020036
    ctx->pc = 0x266030u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_266034:
    // 0x266034: 0x8c44d934
    ctx->pc = 0x266034u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_266038:
    // 0x266038: 0x2882002a
    ctx->pc = 0x266038u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 42));
label_26603c:
    // 0x26603c: 0x14400006
label_266040:
    if (ctx->pc == 0x266040u) {
        ctx->pc = 0x266040u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x266044u;
        goto label_266044;
    }
    ctx->pc = 0x26603Cu;
    {
        const bool branch_taken_0x26603c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x266040u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x26603c) {
            ctx->pc = 0x266058u;
            goto label_266058;
        }
    }
    ctx->pc = 0x266044u;
label_266044:
    // 0x266044: 0x3c02003c
    ctx->pc = 0x266044u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_266048:
    // 0x266048: 0xc098442
label_26604c:
    if (ctx->pc == 0x26604Cu) {
        ctx->pc = 0x26604Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 14480)));
        ctx->pc = 0x266050u;
        goto label_266050;
    }
    ctx->pc = 0x266048u;
    SET_GPR_U32(ctx, 31, 0x266050u);
    ctx->pc = 0x26604Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 14480)));
    ctx->pc = 0x261108u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioGoodWizard_0x261108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266050u; }
    }
    if (ctx->pc != 0x266050u) { return; }
    ctx->pc = 0x266050u;
label_266050:
    // 0x266050: 0x10000005
label_266054:
    if (ctx->pc == 0x266054u) {
        ctx->pc = 0x266054u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        ctx->pc = 0x266058u;
        goto label_266058;
    }
    ctx->pc = 0x266050u;
    {
        const bool branch_taken_0x266050 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266054u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x266050) {
            ctx->pc = 0x266068u;
            goto label_266068;
        }
    }
    ctx->pc = 0x266058u;
label_266058:
    // 0x266058: 0x8c44d934
    ctx->pc = 0x266058u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_26605c:
    // 0x26605c: 0xc098442
label_266060:
    if (ctx->pc == 0x266060u) {
        ctx->pc = 0x266060u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266064u;
        goto label_266064;
    }
    ctx->pc = 0x26605Cu;
    SET_GPR_U32(ctx, 31, 0x266064u);
    ctx->pc = 0x266060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x261108u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioGoodWizard_0x261108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266064u; }
    }
    if (ctx->pc != 0x266064u) { return; }
    ctx->pc = 0x266064u;
label_266064:
    // 0x266064: 0x3c04003c
    ctx->pc = 0x266064u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_266068:
    // 0x266068: 0x3c020031
    ctx->pc = 0x266068u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_26606c:
    // 0x26606c: 0x8c8338c0
    ctx->pc = 0x26606cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 14528)));
label_266070:
    // 0x266070: 0x8c42ffbc
    ctx->pc = 0x266070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_266074:
    // 0x266074: 0x621821
    ctx->pc = 0x266074u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266078:
    // 0x266078: 0xac8338c0
    ctx->pc = 0x266078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14528), GPR_U32(ctx, 3));
label_26607c:
    // 0x26607c: 0x3c02003c
    ctx->pc = 0x26607cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_266080:
    // 0x266080: 0x8c4238bc
    ctx->pc = 0x266080u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14524)));
label_266084:
    // 0x266084: 0x4400057
label_266088:
    if (ctx->pc == 0x266088u) {
        ctx->pc = 0x266088u;
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
        ctx->pc = 0x26608Cu;
        goto label_26608c;
    }
    ctx->pc = 0x266084u;
    {
        const bool branch_taken_0x266084 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x266088u;
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
        if (branch_taken_0x266084) {
            ctx->pc = 0x2661E4u;
            goto label_2661e4;
        }
    }
    ctx->pc = 0x26608Cu;
label_26608c:
    // 0x26608c: 0x3c020036
    ctx->pc = 0x26608cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_266090:
    // 0x266090: 0x8c42d934
    ctx->pc = 0x266090u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_266094:
    // 0x266094: 0x2443ffde
    ctx->pc = 0x266094u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967262));
label_266098:
    // 0x266098: 0x2c62000b
    ctx->pc = 0x266098u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 11));
label_26609c:
    // 0x26609c: 0x1040001e
label_2660a0:
    if (ctx->pc == 0x2660A0u) {
        ctx->pc = 0x2660A0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x2660A4u;
        goto label_2660a4;
    }
    ctx->pc = 0x26609Cu;
    {
        const bool branch_taken_0x26609c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2660A0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x26609c) {
            ctx->pc = 0x266118u;
            goto label_266118;
        }
    }
    ctx->pc = 0x2660A4u;
label_2660a4:
    // 0x2660a4: 0x3c02003b
    ctx->pc = 0x2660a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_2660a8:
    // 0x2660a8: 0x2442a000
    ctx->pc = 0x2660a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294942720));
label_2660ac:
    // 0x2660ac: 0x31880
    ctx->pc = 0x2660acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2660b0:
    // 0x2660b0: 0x621821
    ctx->pc = 0x2660b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2660b4:
    // 0x2660b4: 0x8c620000
    ctx->pc = 0x2660b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2660b8:
    // 0x2660b8: 0x400008
label_2660bc:
    if (ctx->pc == 0x2660BCu) {
        ctx->pc = 0x2660C0u;
        goto label_2660c0;
    }
    ctx->pc = 0x2660B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x265C48u: goto label_265c48;
            case 0x265C4Cu: goto label_265c4c;
            case 0x265C50u: goto label_265c50;
            case 0x265C54u: goto label_265c54;
            case 0x265C58u: goto label_265c58;
            case 0x265C5Cu: goto label_265c5c;
            case 0x265C60u: goto label_265c60;
            case 0x265C64u: goto label_265c64;
            case 0x265C68u: goto label_265c68;
            case 0x265C6Cu: goto label_265c6c;
            case 0x265C70u: goto label_265c70;
            case 0x265C74u: goto label_265c74;
            case 0x265C78u: goto label_265c78;
            case 0x265C7Cu: goto label_265c7c;
            case 0x265C80u: goto label_265c80;
            case 0x265C84u: goto label_265c84;
            case 0x265C88u: goto label_265c88;
            case 0x265C8Cu: goto label_265c8c;
            case 0x265C90u: goto label_265c90;
            case 0x265C94u: goto label_265c94;
            case 0x265C98u: goto label_265c98;
            case 0x265C9Cu: goto label_265c9c;
            case 0x265CA0u: goto label_265ca0;
            case 0x265CA4u: goto label_265ca4;
            case 0x265CA8u: goto label_265ca8;
            case 0x265CACu: goto label_265cac;
            case 0x265CB0u: goto label_265cb0;
            case 0x265CB4u: goto label_265cb4;
            case 0x265CB8u: goto label_265cb8;
            case 0x265CBCu: goto label_265cbc;
            case 0x265CC0u: goto label_265cc0;
            case 0x265CC4u: goto label_265cc4;
            case 0x265CC8u: goto label_265cc8;
            case 0x265CCCu: goto label_265ccc;
            case 0x265CD0u: goto label_265cd0;
            case 0x265CD4u: goto label_265cd4;
            case 0x265CD8u: goto label_265cd8;
            case 0x265CDCu: goto label_265cdc;
            case 0x265CE0u: goto label_265ce0;
            case 0x265CE4u: goto label_265ce4;
            case 0x265CE8u: goto label_265ce8;
            case 0x265CECu: goto label_265cec;
            case 0x265CF0u: goto label_265cf0;
            case 0x265CF4u: goto label_265cf4;
            case 0x265CF8u: goto label_265cf8;
            case 0x265CFCu: goto label_265cfc;
            case 0x265D00u: goto label_265d00;
            case 0x265D04u: goto label_265d04;
            case 0x265D08u: goto label_265d08;
            case 0x265D0Cu: goto label_265d0c;
            case 0x265D10u: goto label_265d10;
            case 0x265D14u: goto label_265d14;
            case 0x265D18u: goto label_265d18;
            case 0x265D1Cu: goto label_265d1c;
            case 0x265D20u: goto label_265d20;
            case 0x265D24u: goto label_265d24;
            case 0x265D28u: goto label_265d28;
            case 0x265D2Cu: goto label_265d2c;
            case 0x265D30u: goto label_265d30;
            case 0x265D34u: goto label_265d34;
            case 0x265D38u: goto label_265d38;
            case 0x265D3Cu: goto label_265d3c;
            case 0x265D40u: goto label_265d40;
            case 0x265D44u: goto label_265d44;
            case 0x265D48u: goto label_265d48;
            case 0x265D4Cu: goto label_265d4c;
            case 0x265D50u: goto label_265d50;
            case 0x265D54u: goto label_265d54;
            case 0x265D58u: goto label_265d58;
            case 0x265D5Cu: goto label_265d5c;
            case 0x265D60u: goto label_265d60;
            case 0x265D64u: goto label_265d64;
            case 0x265D68u: goto label_265d68;
            case 0x265D6Cu: goto label_265d6c;
            case 0x265D70u: goto label_265d70;
            case 0x265D74u: goto label_265d74;
            case 0x265D78u: goto label_265d78;
            case 0x265D7Cu: goto label_265d7c;
            case 0x265D80u: goto label_265d80;
            case 0x265D84u: goto label_265d84;
            case 0x265D88u: goto label_265d88;
            case 0x265D8Cu: goto label_265d8c;
            case 0x265D90u: goto label_265d90;
            case 0x265D94u: goto label_265d94;
            case 0x265D98u: goto label_265d98;
            case 0x265D9Cu: goto label_265d9c;
            case 0x265DA0u: goto label_265da0;
            case 0x265DA4u: goto label_265da4;
            case 0x265DA8u: goto label_265da8;
            case 0x265DACu: goto label_265dac;
            case 0x265DB0u: goto label_265db0;
            case 0x265DB4u: goto label_265db4;
            case 0x265DB8u: goto label_265db8;
            case 0x265DBCu: goto label_265dbc;
            case 0x265DC0u: goto label_265dc0;
            case 0x265DC4u: goto label_265dc4;
            case 0x265DC8u: goto label_265dc8;
            case 0x265DCCu: goto label_265dcc;
            case 0x265DD0u: goto label_265dd0;
            case 0x265DD4u: goto label_265dd4;
            case 0x265DD8u: goto label_265dd8;
            case 0x265DDCu: goto label_265ddc;
            case 0x265DE0u: goto label_265de0;
            case 0x265DE4u: goto label_265de4;
            case 0x265DE8u: goto label_265de8;
            case 0x265DECu: goto label_265dec;
            case 0x265DF0u: goto label_265df0;
            case 0x265DF4u: goto label_265df4;
            case 0x265DF8u: goto label_265df8;
            case 0x265DFCu: goto label_265dfc;
            case 0x265E00u: goto label_265e00;
            case 0x265E04u: goto label_265e04;
            case 0x265E08u: goto label_265e08;
            case 0x265E0Cu: goto label_265e0c;
            case 0x265E10u: goto label_265e10;
            case 0x265E14u: goto label_265e14;
            case 0x265E18u: goto label_265e18;
            case 0x265E1Cu: goto label_265e1c;
            case 0x265E20u: goto label_265e20;
            case 0x265E24u: goto label_265e24;
            case 0x265E28u: goto label_265e28;
            case 0x265E2Cu: goto label_265e2c;
            case 0x265E30u: goto label_265e30;
            case 0x265E34u: goto label_265e34;
            case 0x265E38u: goto label_265e38;
            case 0x265E3Cu: goto label_265e3c;
            case 0x265E40u: goto label_265e40;
            case 0x265E44u: goto label_265e44;
            case 0x265E48u: goto label_265e48;
            case 0x265E4Cu: goto label_265e4c;
            case 0x265E50u: goto label_265e50;
            case 0x265E54u: goto label_265e54;
            case 0x265E58u: goto label_265e58;
            case 0x265E5Cu: goto label_265e5c;
            case 0x265E60u: goto label_265e60;
            case 0x265E64u: goto label_265e64;
            case 0x265E68u: goto label_265e68;
            case 0x265E6Cu: goto label_265e6c;
            case 0x265E70u: goto label_265e70;
            case 0x265E74u: goto label_265e74;
            case 0x265E78u: goto label_265e78;
            case 0x265E7Cu: goto label_265e7c;
            case 0x265E80u: goto label_265e80;
            case 0x265E84u: goto label_265e84;
            case 0x265E88u: goto label_265e88;
            case 0x265E8Cu: goto label_265e8c;
            case 0x265E90u: goto label_265e90;
            case 0x265E94u: goto label_265e94;
            case 0x265E98u: goto label_265e98;
            case 0x265E9Cu: goto label_265e9c;
            case 0x265EA0u: goto label_265ea0;
            case 0x265EA4u: goto label_265ea4;
            case 0x265EA8u: goto label_265ea8;
            case 0x265EACu: goto label_265eac;
            case 0x265EB0u: goto label_265eb0;
            case 0x265EB4u: goto label_265eb4;
            case 0x265EB8u: goto label_265eb8;
            case 0x265EBCu: goto label_265ebc;
            case 0x265EC0u: goto label_265ec0;
            case 0x265EC4u: goto label_265ec4;
            case 0x265EC8u: goto label_265ec8;
            case 0x265ECCu: goto label_265ecc;
            case 0x265ED0u: goto label_265ed0;
            case 0x265ED4u: goto label_265ed4;
            case 0x265ED8u: goto label_265ed8;
            case 0x265EDCu: goto label_265edc;
            case 0x265EE0u: goto label_265ee0;
            case 0x265EE4u: goto label_265ee4;
            case 0x265EE8u: goto label_265ee8;
            case 0x265EECu: goto label_265eec;
            case 0x265EF0u: goto label_265ef0;
            case 0x265EF4u: goto label_265ef4;
            case 0x265EF8u: goto label_265ef8;
            case 0x265EFCu: goto label_265efc;
            case 0x265F00u: goto label_265f00;
            case 0x265F04u: goto label_265f04;
            case 0x265F08u: goto label_265f08;
            case 0x265F0Cu: goto label_265f0c;
            case 0x265F10u: goto label_265f10;
            case 0x265F14u: goto label_265f14;
            case 0x265F18u: goto label_265f18;
            case 0x265F1Cu: goto label_265f1c;
            case 0x265F20u: goto label_265f20;
            case 0x265F24u: goto label_265f24;
            case 0x265F28u: goto label_265f28;
            case 0x265F2Cu: goto label_265f2c;
            case 0x265F30u: goto label_265f30;
            case 0x265F34u: goto label_265f34;
            case 0x265F38u: goto label_265f38;
            case 0x265F3Cu: goto label_265f3c;
            case 0x265F40u: goto label_265f40;
            case 0x265F44u: goto label_265f44;
            case 0x265F48u: goto label_265f48;
            case 0x265F4Cu: goto label_265f4c;
            case 0x265F50u: goto label_265f50;
            case 0x265F54u: goto label_265f54;
            case 0x265F58u: goto label_265f58;
            case 0x265F5Cu: goto label_265f5c;
            case 0x265F60u: goto label_265f60;
            case 0x265F64u: goto label_265f64;
            case 0x265F68u: goto label_265f68;
            case 0x265F6Cu: goto label_265f6c;
            case 0x265F70u: goto label_265f70;
            case 0x265F74u: goto label_265f74;
            case 0x265F78u: goto label_265f78;
            case 0x265F7Cu: goto label_265f7c;
            case 0x265F80u: goto label_265f80;
            case 0x265F84u: goto label_265f84;
            case 0x265F88u: goto label_265f88;
            case 0x265F8Cu: goto label_265f8c;
            case 0x265F90u: goto label_265f90;
            case 0x265F94u: goto label_265f94;
            case 0x265F98u: goto label_265f98;
            case 0x265F9Cu: goto label_265f9c;
            case 0x265FA0u: goto label_265fa0;
            case 0x265FA4u: goto label_265fa4;
            case 0x265FA8u: goto label_265fa8;
            case 0x265FACu: goto label_265fac;
            case 0x265FB0u: goto label_265fb0;
            case 0x265FB4u: goto label_265fb4;
            case 0x265FB8u: goto label_265fb8;
            case 0x265FBCu: goto label_265fbc;
            case 0x265FC0u: goto label_265fc0;
            case 0x265FC4u: goto label_265fc4;
            case 0x265FC8u: goto label_265fc8;
            case 0x265FCCu: goto label_265fcc;
            case 0x265FD0u: goto label_265fd0;
            case 0x265FD4u: goto label_265fd4;
            case 0x265FD8u: goto label_265fd8;
            case 0x265FDCu: goto label_265fdc;
            case 0x265FE0u: goto label_265fe0;
            case 0x265FE4u: goto label_265fe4;
            case 0x265FE8u: goto label_265fe8;
            case 0x265FECu: goto label_265fec;
            case 0x265FF0u: goto label_265ff0;
            case 0x265FF4u: goto label_265ff4;
            case 0x265FF8u: goto label_265ff8;
            case 0x265FFCu: goto label_265ffc;
            case 0x266000u: goto label_266000;
            case 0x266004u: goto label_266004;
            case 0x266008u: goto label_266008;
            case 0x26600Cu: goto label_26600c;
            case 0x266010u: goto label_266010;
            case 0x266014u: goto label_266014;
            case 0x266018u: goto label_266018;
            case 0x26601Cu: goto label_26601c;
            case 0x266020u: goto label_266020;
            case 0x266024u: goto label_266024;
            case 0x266028u: goto label_266028;
            case 0x26602Cu: goto label_26602c;
            case 0x266030u: goto label_266030;
            case 0x266034u: goto label_266034;
            case 0x266038u: goto label_266038;
            case 0x26603Cu: goto label_26603c;
            case 0x266040u: goto label_266040;
            case 0x266044u: goto label_266044;
            case 0x266048u: goto label_266048;
            case 0x26604Cu: goto label_26604c;
            case 0x266050u: goto label_266050;
            case 0x266054u: goto label_266054;
            case 0x266058u: goto label_266058;
            case 0x26605Cu: goto label_26605c;
            case 0x266060u: goto label_266060;
            case 0x266064u: goto label_266064;
            case 0x266068u: goto label_266068;
            case 0x26606Cu: goto label_26606c;
            case 0x266070u: goto label_266070;
            case 0x266074u: goto label_266074;
            case 0x266078u: goto label_266078;
            case 0x26607Cu: goto label_26607c;
            case 0x266080u: goto label_266080;
            case 0x266084u: goto label_266084;
            case 0x266088u: goto label_266088;
            case 0x26608Cu: goto label_26608c;
            case 0x266090u: goto label_266090;
            case 0x266094u: goto label_266094;
            case 0x266098u: goto label_266098;
            case 0x26609Cu: goto label_26609c;
            case 0x2660A0u: goto label_2660a0;
            case 0x2660A4u: goto label_2660a4;
            case 0x2660A8u: goto label_2660a8;
            case 0x2660ACu: goto label_2660ac;
            case 0x2660B0u: goto label_2660b0;
            case 0x2660B4u: goto label_2660b4;
            case 0x2660B8u: goto label_2660b8;
            case 0x2660BCu: goto label_2660bc;
            case 0x2660C0u: goto label_2660c0;
            case 0x2660C4u: goto label_2660c4;
            case 0x2660C8u: goto label_2660c8;
            case 0x2660CCu: goto label_2660cc;
            case 0x2660D0u: goto label_2660d0;
            case 0x2660D4u: goto label_2660d4;
            case 0x2660D8u: goto label_2660d8;
            case 0x2660DCu: goto label_2660dc;
            case 0x2660E0u: goto label_2660e0;
            case 0x2660E4u: goto label_2660e4;
            case 0x2660E8u: goto label_2660e8;
            case 0x2660ECu: goto label_2660ec;
            case 0x2660F0u: goto label_2660f0;
            case 0x2660F4u: goto label_2660f4;
            case 0x2660F8u: goto label_2660f8;
            case 0x2660FCu: goto label_2660fc;
            case 0x266100u: goto label_266100;
            case 0x266104u: goto label_266104;
            case 0x266108u: goto label_266108;
            case 0x26610Cu: goto label_26610c;
            case 0x266110u: goto label_266110;
            case 0x266114u: goto label_266114;
            case 0x266118u: goto label_266118;
            case 0x26611Cu: goto label_26611c;
            case 0x266120u: goto label_266120;
            case 0x266124u: goto label_266124;
            case 0x266128u: goto label_266128;
            case 0x26612Cu: goto label_26612c;
            case 0x266130u: goto label_266130;
            case 0x266134u: goto label_266134;
            case 0x266138u: goto label_266138;
            case 0x26613Cu: goto label_26613c;
            case 0x266140u: goto label_266140;
            case 0x266144u: goto label_266144;
            case 0x266148u: goto label_266148;
            case 0x26614Cu: goto label_26614c;
            case 0x266150u: goto label_266150;
            case 0x266154u: goto label_266154;
            case 0x266158u: goto label_266158;
            case 0x26615Cu: goto label_26615c;
            case 0x266160u: goto label_266160;
            case 0x266164u: goto label_266164;
            case 0x266168u: goto label_266168;
            case 0x26616Cu: goto label_26616c;
            case 0x266170u: goto label_266170;
            case 0x266174u: goto label_266174;
            case 0x266178u: goto label_266178;
            case 0x26617Cu: goto label_26617c;
            case 0x266180u: goto label_266180;
            case 0x266184u: goto label_266184;
            case 0x266188u: goto label_266188;
            case 0x26618Cu: goto label_26618c;
            case 0x266190u: goto label_266190;
            case 0x266194u: goto label_266194;
            case 0x266198u: goto label_266198;
            case 0x26619Cu: goto label_26619c;
            case 0x2661A0u: goto label_2661a0;
            case 0x2661A4u: goto label_2661a4;
            case 0x2661A8u: goto label_2661a8;
            case 0x2661ACu: goto label_2661ac;
            case 0x2661B0u: goto label_2661b0;
            case 0x2661B4u: goto label_2661b4;
            case 0x2661B8u: goto label_2661b8;
            case 0x2661BCu: goto label_2661bc;
            case 0x2661C0u: goto label_2661c0;
            case 0x2661C4u: goto label_2661c4;
            case 0x2661C8u: goto label_2661c8;
            case 0x2661CCu: goto label_2661cc;
            case 0x2661D0u: goto label_2661d0;
            case 0x2661D4u: goto label_2661d4;
            case 0x2661D8u: goto label_2661d8;
            case 0x2661DCu: goto label_2661dc;
            case 0x2661E0u: goto label_2661e0;
            case 0x2661E4u: goto label_2661e4;
            case 0x2661E8u: goto label_2661e8;
            case 0x2661ECu: goto label_2661ec;
            case 0x2661F0u: goto label_2661f0;
            case 0x2661F4u: goto label_2661f4;
            case 0x2661F8u: goto label_2661f8;
            case 0x2661FCu: goto label_2661fc;
            case 0x266200u: goto label_266200;
            case 0x266204u: goto label_266204;
            case 0x266208u: goto label_266208;
            case 0x26620Cu: goto label_26620c;
            case 0x266210u: goto label_266210;
            case 0x266214u: goto label_266214;
            case 0x266218u: goto label_266218;
            case 0x26621Cu: goto label_26621c;
            case 0x266220u: goto label_266220;
            case 0x266224u: goto label_266224;
            case 0x266228u: goto label_266228;
            case 0x26622Cu: goto label_26622c;
            case 0x266230u: goto label_266230;
            case 0x266234u: goto label_266234;
            case 0x266238u: goto label_266238;
            case 0x26623Cu: goto label_26623c;
            case 0x266240u: goto label_266240;
            case 0x266244u: goto label_266244;
            case 0x266248u: goto label_266248;
            case 0x26624Cu: goto label_26624c;
            case 0x266250u: goto label_266250;
            case 0x266254u: goto label_266254;
            case 0x266258u: goto label_266258;
            case 0x26625Cu: goto label_26625c;
            case 0x266260u: goto label_266260;
            case 0x266264u: goto label_266264;
            case 0x266268u: goto label_266268;
            case 0x26626Cu: goto label_26626c;
            case 0x266270u: goto label_266270;
            case 0x266274u: goto label_266274;
            case 0x266278u: goto label_266278;
            case 0x26627Cu: goto label_26627c;
            case 0x266280u: goto label_266280;
            case 0x266284u: goto label_266284;
            case 0x266288u: goto label_266288;
            case 0x26628Cu: goto label_26628c;
            case 0x266290u: goto label_266290;
            case 0x266294u: goto label_266294;
            case 0x266298u: goto label_266298;
            case 0x26629Cu: goto label_26629c;
            case 0x2662A0u: goto label_2662a0;
            case 0x2662A4u: goto label_2662a4;
            case 0x2662A8u: goto label_2662a8;
            case 0x2662ACu: goto label_2662ac;
            case 0x2662B0u: goto label_2662b0;
            case 0x2662B4u: goto label_2662b4;
            case 0x2662B8u: goto label_2662b8;
            case 0x2662BCu: goto label_2662bc;
            case 0x2662C0u: goto label_2662c0;
            case 0x2662C4u: goto label_2662c4;
            case 0x2662C8u: goto label_2662c8;
            case 0x2662CCu: goto label_2662cc;
            case 0x2662D0u: goto label_2662d0;
            case 0x2662D4u: goto label_2662d4;
            case 0x2662D8u: goto label_2662d8;
            case 0x2662DCu: goto label_2662dc;
            case 0x2662E0u: goto label_2662e0;
            case 0x2662E4u: goto label_2662e4;
            case 0x2662E8u: goto label_2662e8;
            case 0x2662ECu: goto label_2662ec;
            case 0x2662F0u: goto label_2662f0;
            case 0x2662F4u: goto label_2662f4;
            case 0x2662F8u: goto label_2662f8;
            case 0x2662FCu: goto label_2662fc;
            case 0x266300u: goto label_266300;
            case 0x266304u: goto label_266304;
            case 0x266308u: goto label_266308;
            case 0x26630Cu: goto label_26630c;
            case 0x266310u: goto label_266310;
            case 0x266314u: goto label_266314;
            case 0x266318u: goto label_266318;
            case 0x26631Cu: goto label_26631c;
            case 0x266320u: goto label_266320;
            case 0x266324u: goto label_266324;
            case 0x266328u: goto label_266328;
            case 0x26632Cu: goto label_26632c;
            case 0x266330u: goto label_266330;
            case 0x266334u: goto label_266334;
            case 0x266338u: goto label_266338;
            case 0x26633Cu: goto label_26633c;
            case 0x266340u: goto label_266340;
            case 0x266344u: goto label_266344;
            case 0x266348u: goto label_266348;
            case 0x26634Cu: goto label_26634c;
            case 0x266350u: goto label_266350;
            case 0x266354u: goto label_266354;
            case 0x266358u: goto label_266358;
            case 0x26635Cu: goto label_26635c;
            case 0x266360u: goto label_266360;
            case 0x266364u: goto label_266364;
            case 0x266368u: goto label_266368;
            case 0x26636Cu: goto label_26636c;
            case 0x266370u: goto label_266370;
            case 0x266374u: goto label_266374;
            case 0x266378u: goto label_266378;
            case 0x26637Cu: goto label_26637c;
            case 0x266380u: goto label_266380;
            case 0x266384u: goto label_266384;
            case 0x266388u: goto label_266388;
            case 0x26638Cu: goto label_26638c;
            case 0x266390u: goto label_266390;
            case 0x266394u: goto label_266394;
            case 0x266398u: goto label_266398;
            case 0x26639Cu: goto label_26639c;
            case 0x2663A0u: goto label_2663a0;
            case 0x2663A4u: goto label_2663a4;
            case 0x2663A8u: goto label_2663a8;
            case 0x2663ACu: goto label_2663ac;
            case 0x2663B0u: goto label_2663b0;
            case 0x2663B4u: goto label_2663b4;
            case 0x2663B8u: goto label_2663b8;
            case 0x2663BCu: goto label_2663bc;
            case 0x2663C0u: goto label_2663c0;
            case 0x2663C4u: goto label_2663c4;
            case 0x2663C8u: goto label_2663c8;
            case 0x2663CCu: goto label_2663cc;
            case 0x2663D0u: goto label_2663d0;
            case 0x2663D4u: goto label_2663d4;
            case 0x2663D8u: goto label_2663d8;
            case 0x2663DCu: goto label_2663dc;
            case 0x2663E0u: goto label_2663e0;
            case 0x2663E4u: goto label_2663e4;
            case 0x2663E8u: goto label_2663e8;
            case 0x2663ECu: goto label_2663ec;
            case 0x2663F0u: goto label_2663f0;
            case 0x2663F4u: goto label_2663f4;
            case 0x2663F8u: goto label_2663f8;
            case 0x2663FCu: goto label_2663fc;
            case 0x266400u: goto label_266400;
            case 0x266404u: goto label_266404;
            case 0x266408u: goto label_266408;
            case 0x26640Cu: goto label_26640c;
            case 0x266410u: goto label_266410;
            case 0x266414u: goto label_266414;
            case 0x266418u: goto label_266418;
            case 0x26641Cu: goto label_26641c;
            case 0x266420u: goto label_266420;
            case 0x266424u: goto label_266424;
            case 0x266428u: goto label_266428;
            case 0x26642Cu: goto label_26642c;
            case 0x266430u: goto label_266430;
            case 0x266434u: goto label_266434;
            case 0x266438u: goto label_266438;
            case 0x26643Cu: goto label_26643c;
            case 0x266440u: goto label_266440;
            case 0x266444u: goto label_266444;
            case 0x266448u: goto label_266448;
            case 0x26644Cu: goto label_26644c;
            case 0x266450u: goto label_266450;
            case 0x266454u: goto label_266454;
            case 0x266458u: goto label_266458;
            case 0x26645Cu: goto label_26645c;
            case 0x266460u: goto label_266460;
            case 0x266464u: goto label_266464;
            case 0x266468u: goto label_266468;
            case 0x26646Cu: goto label_26646c;
            case 0x266470u: goto label_266470;
            case 0x266474u: goto label_266474;
            case 0x266478u: goto label_266478;
            case 0x26647Cu: goto label_26647c;
            case 0x266480u: goto label_266480;
            case 0x266484u: goto label_266484;
            case 0x266488u: goto label_266488;
            case 0x26648Cu: goto label_26648c;
            case 0x266490u: goto label_266490;
            case 0x266494u: goto label_266494;
            case 0x266498u: goto label_266498;
            case 0x26649Cu: goto label_26649c;
            case 0x2664A0u: goto label_2664a0;
            case 0x2664A4u: goto label_2664a4;
            case 0x2664A8u: goto label_2664a8;
            case 0x2664ACu: goto label_2664ac;
            case 0x2664B0u: goto label_2664b0;
            case 0x2664B4u: goto label_2664b4;
            case 0x2664B8u: goto label_2664b8;
            case 0x2664BCu: goto label_2664bc;
            case 0x2664C0u: goto label_2664c0;
            case 0x2664C4u: goto label_2664c4;
            case 0x2664C8u: goto label_2664c8;
            case 0x2664CCu: goto label_2664cc;
            case 0x2664D0u: goto label_2664d0;
            case 0x2664D4u: goto label_2664d4;
            case 0x2664D8u: goto label_2664d8;
            case 0x2664DCu: goto label_2664dc;
            case 0x2664E0u: goto label_2664e0;
            case 0x2664E4u: goto label_2664e4;
            case 0x2664E8u: goto label_2664e8;
            case 0x2664ECu: goto label_2664ec;
            case 0x2664F0u: goto label_2664f0;
            case 0x2664F4u: goto label_2664f4;
            case 0x2664F8u: goto label_2664f8;
            case 0x2664FCu: goto label_2664fc;
            case 0x266500u: goto label_266500;
            case 0x266504u: goto label_266504;
            case 0x266508u: goto label_266508;
            case 0x26650Cu: goto label_26650c;
            case 0x266510u: goto label_266510;
            case 0x266514u: goto label_266514;
            case 0x266518u: goto label_266518;
            case 0x26651Cu: goto label_26651c;
            case 0x266520u: goto label_266520;
            case 0x266524u: goto label_266524;
            case 0x266528u: goto label_266528;
            case 0x26652Cu: goto label_26652c;
            case 0x266530u: goto label_266530;
            case 0x266534u: goto label_266534;
            case 0x266538u: goto label_266538;
            case 0x26653Cu: goto label_26653c;
            case 0x266540u: goto label_266540;
            case 0x266544u: goto label_266544;
            case 0x266548u: goto label_266548;
            case 0x26654Cu: goto label_26654c;
            case 0x266550u: goto label_266550;
            case 0x266554u: goto label_266554;
            case 0x266558u: goto label_266558;
            case 0x26655Cu: goto label_26655c;
            case 0x266560u: goto label_266560;
            case 0x266564u: goto label_266564;
            case 0x266568u: goto label_266568;
            case 0x26656Cu: goto label_26656c;
            case 0x266570u: goto label_266570;
            case 0x266574u: goto label_266574;
            case 0x266578u: goto label_266578;
            case 0x26657Cu: goto label_26657c;
            case 0x266580u: goto label_266580;
            case 0x266584u: goto label_266584;
            case 0x266588u: goto label_266588;
            case 0x26658Cu: goto label_26658c;
            case 0x266590u: goto label_266590;
            case 0x266594u: goto label_266594;
            case 0x266598u: goto label_266598;
            case 0x26659Cu: goto label_26659c;
            case 0x2665A0u: goto label_2665a0;
            case 0x2665A4u: goto label_2665a4;
            case 0x2665A8u: goto label_2665a8;
            case 0x2665ACu: goto label_2665ac;
            case 0x2665B0u: goto label_2665b0;
            case 0x2665B4u: goto label_2665b4;
            case 0x2665B8u: goto label_2665b8;
            case 0x2665BCu: goto label_2665bc;
            case 0x2665C0u: goto label_2665c0;
            case 0x2665C4u: goto label_2665c4;
            case 0x2665C8u: goto label_2665c8;
            case 0x2665CCu: goto label_2665cc;
            case 0x2665D0u: goto label_2665d0;
            case 0x2665D4u: goto label_2665d4;
            case 0x2665D8u: goto label_2665d8;
            case 0x2665DCu: goto label_2665dc;
            case 0x2665E0u: goto label_2665e0;
            case 0x2665E4u: goto label_2665e4;
            case 0x2665E8u: goto label_2665e8;
            case 0x2665ECu: goto label_2665ec;
            case 0x2665F0u: goto label_2665f0;
            case 0x2665F4u: goto label_2665f4;
            case 0x2665F8u: goto label_2665f8;
            case 0x2665FCu: goto label_2665fc;
            case 0x266600u: goto label_266600;
            case 0x266604u: goto label_266604;
            case 0x266608u: goto label_266608;
            case 0x26660Cu: goto label_26660c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2660C0u;
label_2660c0:
    // 0x2660c0: 0x10000016
label_2660c4:
    if (ctx->pc == 0x2660C4u) {
        ctx->pc = 0x2660C4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 147));
        ctx->pc = 0x2660C8u;
        goto label_2660c8;
    }
    ctx->pc = 0x2660C0u;
    {
        const bool branch_taken_0x2660c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2660C4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 147));
        if (branch_taken_0x2660c0) {
            ctx->pc = 0x26611Cu;
            goto label_26611c;
        }
    }
    ctx->pc = 0x2660C8u;
label_2660c8:
    // 0x2660c8: 0x10000014
label_2660cc:
    if (ctx->pc == 0x2660CCu) {
        ctx->pc = 0x2660CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 148));
        ctx->pc = 0x2660D0u;
        goto label_2660d0;
    }
    ctx->pc = 0x2660C8u;
    {
        const bool branch_taken_0x2660c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2660CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 148));
        if (branch_taken_0x2660c8) {
            ctx->pc = 0x26611Cu;
            goto label_26611c;
        }
    }
    ctx->pc = 0x2660D0u;
label_2660d0:
    // 0x2660d0: 0x10000012
label_2660d4:
    if (ctx->pc == 0x2660D4u) {
        ctx->pc = 0x2660D4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 149));
        ctx->pc = 0x2660D8u;
        goto label_2660d8;
    }
    ctx->pc = 0x2660D0u;
    {
        const bool branch_taken_0x2660d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2660D4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 149));
        if (branch_taken_0x2660d0) {
            ctx->pc = 0x26611Cu;
            goto label_26611c;
        }
    }
    ctx->pc = 0x2660D8u;
label_2660d8:
    // 0x2660d8: 0x10000010
label_2660dc:
    if (ctx->pc == 0x2660DCu) {
        ctx->pc = 0x2660DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 150));
        ctx->pc = 0x2660E0u;
        goto label_2660e0;
    }
    ctx->pc = 0x2660D8u;
    {
        const bool branch_taken_0x2660d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2660DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 150));
        if (branch_taken_0x2660d8) {
            ctx->pc = 0x26611Cu;
            goto label_26611c;
        }
    }
    ctx->pc = 0x2660E0u;
label_2660e0:
    // 0x2660e0: 0x1000000e
label_2660e4:
    if (ctx->pc == 0x2660E4u) {
        ctx->pc = 0x2660E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 153));
        ctx->pc = 0x2660E8u;
        goto label_2660e8;
    }
    ctx->pc = 0x2660E0u;
    {
        const bool branch_taken_0x2660e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2660E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 153));
        if (branch_taken_0x2660e0) {
            ctx->pc = 0x26611Cu;
            goto label_26611c;
        }
    }
    ctx->pc = 0x2660E8u;
label_2660e8:
    // 0x2660e8: 0x1000000c
label_2660ec:
    if (ctx->pc == 0x2660ECu) {
        ctx->pc = 0x2660ECu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 151));
        ctx->pc = 0x2660F0u;
        goto label_2660f0;
    }
    ctx->pc = 0x2660E8u;
    {
        const bool branch_taken_0x2660e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2660ECu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 151));
        if (branch_taken_0x2660e8) {
            ctx->pc = 0x26611Cu;
            goto label_26611c;
        }
    }
    ctx->pc = 0x2660F0u;
label_2660f0:
    // 0x2660f0: 0x1000000a
label_2660f4:
    if (ctx->pc == 0x2660F4u) {
        ctx->pc = 0x2660F4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 154));
        ctx->pc = 0x2660F8u;
        goto label_2660f8;
    }
    ctx->pc = 0x2660F0u;
    {
        const bool branch_taken_0x2660f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2660F4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 154));
        if (branch_taken_0x2660f0) {
            ctx->pc = 0x26611Cu;
            goto label_26611c;
        }
    }
    ctx->pc = 0x2660F8u;
label_2660f8:
    // 0x2660f8: 0x10000008
label_2660fc:
    if (ctx->pc == 0x2660FCu) {
        ctx->pc = 0x2660FCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 152));
        ctx->pc = 0x266100u;
        goto label_266100;
    }
    ctx->pc = 0x2660F8u;
    {
        const bool branch_taken_0x2660f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2660FCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 152));
        if (branch_taken_0x2660f8) {
            ctx->pc = 0x26611Cu;
            goto label_26611c;
        }
    }
    ctx->pc = 0x266100u;
label_266100:
    // 0x266100: 0x10000006
label_266104:
    if (ctx->pc == 0x266104u) {
        ctx->pc = 0x266104u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 159));
        ctx->pc = 0x266108u;
        goto label_266108;
    }
    ctx->pc = 0x266100u;
    {
        const bool branch_taken_0x266100 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266104u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 159));
        if (branch_taken_0x266100) {
            ctx->pc = 0x26611Cu;
            goto label_26611c;
        }
    }
    ctx->pc = 0x266108u;
label_266108:
    // 0x266108: 0x10000004
label_26610c:
    if (ctx->pc == 0x26610Cu) {
        ctx->pc = 0x26610Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 162));
        ctx->pc = 0x266110u;
        goto label_266110;
    }
    ctx->pc = 0x266108u;
    {
        const bool branch_taken_0x266108 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26610Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 162));
        if (branch_taken_0x266108) {
            ctx->pc = 0x26611Cu;
            goto label_26611c;
        }
    }
    ctx->pc = 0x266110u;
label_266110:
    // 0x266110: 0x10000002
label_266114:
    if (ctx->pc == 0x266114u) {
        ctx->pc = 0x266114u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 163));
        ctx->pc = 0x266118u;
        goto label_266118;
    }
    ctx->pc = 0x266110u;
    {
        const bool branch_taken_0x266110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266114u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 163));
        if (branch_taken_0x266110) {
            ctx->pc = 0x26611Cu;
            goto label_26611c;
        }
    }
    ctx->pc = 0x266118u;
label_266118:
    // 0x266118: 0x2405ffff
    ctx->pc = 0x266118u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_26611c:
    // 0x26611c: 0x4a00029
label_266120:
    if (ctx->pc == 0x266120u) {
        ctx->pc = 0x266120u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x266124u;
        goto label_266124;
    }
    ctx->pc = 0x26611Cu;
    {
        const bool branch_taken_0x26611c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x266120u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26611c) {
            ctx->pc = 0x2661C4u;
            goto label_2661c4;
        }
    }
    ctx->pc = 0x266124u;
label_266124:
    // 0x266124: 0x2404ffff
    ctx->pc = 0x266124u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_266128:
    // 0x266128: 0x8c4638bc
    ctx->pc = 0x266128u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 14524)));
label_26612c:
    // 0x26612c: 0xc099528
label_266130:
    if (ctx->pc == 0x266130u) {
        ctx->pc = 0x266130u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x266134u;
        goto label_266134;
    }
    ctx->pc = 0x26612Cu;
    SET_GPR_U32(ctx, 31, 0x266134u);
    ctx->pc = 0x266130u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2654A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CaptionText_0x2654a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266134u; }
    }
    if (ctx->pc != 0x266134u) { return; }
    ctx->pc = 0x266134u;
label_266134:
    // 0x266134: 0x18400016
label_266138:
    if (ctx->pc == 0x266138u) {
        ctx->pc = 0x266138u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        ctx->pc = 0x26613Cu;
        goto label_26613c;
    }
    ctx->pc = 0x266134u;
    {
        const bool branch_taken_0x266134 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x266138u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x266134) {
            ctx->pc = 0x266190u;
            goto label_266190;
        }
    }
    ctx->pc = 0x26613Cu;
label_26613c:
    // 0x26613c: 0x8c8338c4
    ctx->pc = 0x26613cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 14532)));
label_266140:
    // 0x266140: 0x70102a
    ctx->pc = 0x266140u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
label_266144:
    // 0x266144: 0x50400006
label_266148:
    if (ctx->pc == 0x266148u) {
        ctx->pc = 0x266148u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x26614Cu;
        goto label_26614c;
    }
    ctx->pc = 0x266144u;
    {
        const bool branch_taken_0x266144 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x266144) {
            ctx->pc = 0x266148u;
            SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
            ctx->pc = 0x266160u;
            goto label_266160;
        }
    }
    ctx->pc = 0x26614Cu;
label_26614c:
    // 0x26614c: 0x3c020031
    ctx->pc = 0x26614cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_266150:
    // 0x266150: 0x8c42ffbc
    ctx->pc = 0x266150u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_266154:
    // 0x266154: 0x621021
    ctx->pc = 0x266154u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266158:
    // 0x266158: 0x10000109
label_26615c:
    if (ctx->pc == 0x26615Cu) {
        ctx->pc = 0x26615Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 14532), GPR_U32(ctx, 2));
        ctx->pc = 0x266160u;
        goto label_266160;
    }
    ctx->pc = 0x266158u;
    {
        const bool branch_taken_0x266158 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26615Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 14532), GPR_U32(ctx, 2));
        if (branch_taken_0x266158) {
            ctx->pc = 0x266580u;
            goto label_266580;
        }
    }
    ctx->pc = 0x266160u;
label_266160:
    // 0x266160: 0x8c6238bc
    ctx->pc = 0x266160u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 14524)));
label_266164:
    // 0x266164: 0x24420001
    ctx->pc = 0x266164u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_266168:
    // 0x266168: 0xac6238bc
    ctx->pc = 0x266168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14524), GPR_U32(ctx, 2));
label_26616c:
    // 0x26616c: 0x3c02003c
    ctx->pc = 0x26616cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_266170:
    // 0x266170: 0xac4038c4
    ctx->pc = 0x266170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14532), GPR_U32(ctx, 0));
label_266174:
    // 0x266174: 0x3c02003c
    ctx->pc = 0x266174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_266178:
    // 0x266178: 0xac4038c0
    ctx->pc = 0x266178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14528), GPR_U32(ctx, 0));
label_26617c:
    // 0x26617c: 0x202d
    ctx->pc = 0x26617cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_266180:
    // 0x266180: 0xc09967e
label_266184:
    if (ctx->pc == 0x266184u) {
        ctx->pc = 0x266184u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x266188u;
        goto label_266188;
    }
    ctx->pc = 0x266180u;
    SET_GPR_U32(ctx, 31, 0x266188u);
    ctx->pc = 0x266184u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2659F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_good_wiz_attn_0x2659f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266188u; }
    }
    if (ctx->pc != 0x266188u) { return; }
    ctx->pc = 0x266188u;
label_266188:
    // 0x266188: 0x100000fe
label_26618c:
    if (ctx->pc == 0x26618Cu) {
        ctx->pc = 0x26618Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        ctx->pc = 0x266190u;
        goto label_266190;
    }
    ctx->pc = 0x266188u;
    {
        const bool branch_taken_0x266188 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26618Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x266188) {
            ctx->pc = 0x266584u;
            goto label_266584;
        }
    }
    ctx->pc = 0x266190u;
label_266190:
    // 0x266190: 0x44100fc
label_266194:
    if (ctx->pc == 0x266194u) {
        ctx->pc = 0x266194u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        ctx->pc = 0x266198u;
        goto label_266198;
    }
    ctx->pc = 0x266190u;
    {
        const bool branch_taken_0x266190 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x266194u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x266190) {
            ctx->pc = 0x266584u;
            goto label_266584;
        }
    }
    ctx->pc = 0x266198u;
label_266198:
    // 0x266198: 0x3c03003c
    ctx->pc = 0x266198u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_26619c:
    // 0x26619c: 0x3c020031
    ctx->pc = 0x26619cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2661a0:
    // 0x2661a0: 0xc440ffa4
    ctx->pc = 0x2661a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2661a4:
    // 0x2661a4: 0x3c013f00
    ctx->pc = 0x2661a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_2661a8:
    // 0x2661a8: 0x44810800
    ctx->pc = 0x2661a8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2661ac:
    // 0x2661ac: 0x46010000
    ctx->pc = 0x2661acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2661b0:
    // 0x2661b0: 0xe46038b4
    ctx->pc = 0x2661b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14516), bits); }
label_2661b4:
    // 0x2661b4: 0x3c03003c
    ctx->pc = 0x2661b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2661b8:
    // 0x2661b8: 0x2402ffff
    ctx->pc = 0x2661b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2661bc:
    // 0x2661bc: 0x100000f0
label_2661c0:
    if (ctx->pc == 0x2661C0u) {
        ctx->pc = 0x2661C0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 14524), GPR_U32(ctx, 2));
        ctx->pc = 0x2661C4u;
        goto label_2661c4;
    }
    ctx->pc = 0x2661BCu;
    {
        const bool branch_taken_0x2661bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2661C0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 14524), GPR_U32(ctx, 2));
        if (branch_taken_0x2661bc) {
            ctx->pc = 0x266580u;
            goto label_266580;
        }
    }
    ctx->pc = 0x2661C4u;
label_2661c4:
    // 0x2661c4: 0x3c03003c
    ctx->pc = 0x2661c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2661c8:
    // 0x2661c8: 0x2402ffff
    ctx->pc = 0x2661c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2661cc:
    // 0x2661cc: 0xac6238bc
    ctx->pc = 0x2661ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14524), GPR_U32(ctx, 2));
label_2661d0:
    // 0x2661d0: 0x3c03003c
    ctx->pc = 0x2661d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2661d4:
    // 0x2661d4: 0x3c020031
    ctx->pc = 0x2661d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2661d8:
    // 0x2661d8: 0xc440ffa4
    ctx->pc = 0x2661d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2661dc:
    // 0x2661dc: 0x100000e8
label_2661e0:
    if (ctx->pc == 0x2661E0u) {
        ctx->pc = 0x2661E0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14516), bits); }
        ctx->pc = 0x2661E4u;
        goto label_2661e4;
    }
    ctx->pc = 0x2661DCu;
    {
        const bool branch_taken_0x2661dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2661E0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14516), bits); }
        if (branch_taken_0x2661dc) {
            ctx->pc = 0x266580u;
            goto label_266580;
        }
    }
    ctx->pc = 0x2661E4u;
label_2661e4:
    // 0x2661e4: 0x3c020031
    ctx->pc = 0x2661e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2661e8:
    // 0x2661e8: 0x3c03003c
    ctx->pc = 0x2661e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2661ec:
    // 0x2661ec: 0xc441ffa4
    ctx->pc = 0x2661ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2661f0:
    // 0x2661f0: 0xc46038b4
    ctx->pc = 0x2661f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2661f4:
    // 0x2661f4: 0x46010036
    ctx->pc = 0x2661f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2661f8:
    // 0x2661f8: 0x0
    ctx->pc = 0x2661f8u;
    // NOP
label_2661fc:
    // 0x2661fc: 0x450000e0
label_266200:
    if (ctx->pc == 0x266200u) {
        ctx->pc = 0x266200u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x266204u;
        goto label_266204;
    }
    ctx->pc = 0x2661FCu;
    {
        const bool branch_taken_0x2661fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x266200u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x2661fc) {
            ctx->pc = 0x266580u;
            goto label_266580;
        }
    }
    ctx->pc = 0x266204u;
label_266204:
    // 0x266204: 0x8c62e8fc
    ctx->pc = 0x266204u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961404)));
label_266208:
    // 0x266208: 0x24420001
    ctx->pc = 0x266208u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_26620c:
    // 0x26620c: 0xac62e8fc
    ctx->pc = 0x26620cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961404), GPR_U32(ctx, 2));
label_266210:
    // 0x266210: 0x3c02003c
    ctx->pc = 0x266210u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_266214:
    // 0x266214: 0xac4038bc
    ctx->pc = 0x266214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14524), GPR_U32(ctx, 0));
label_266218:
    // 0x266218: 0x3c02003c
    ctx->pc = 0x266218u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_26621c:
    // 0x26621c: 0xac4038c0
    ctx->pc = 0x26621cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14528), GPR_U32(ctx, 0));
label_266220:
    // 0x266220: 0x3c02003c
    ctx->pc = 0x266220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_266224:
    // 0x266224: 0xac4038c4
    ctx->pc = 0x266224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14532), GPR_U32(ctx, 0));
label_266228:
    // 0x266228: 0x3c020036
    ctx->pc = 0x266228u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_26622c:
    // 0x26622c: 0x8c44d934
    ctx->pc = 0x26622cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_266230:
    // 0x266230: 0x2882002a
    ctx->pc = 0x266230u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 42));
label_266234:
    // 0x266234: 0x504000d3
label_266238:
    if (ctx->pc == 0x266238u) {
        ctx->pc = 0x266238u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        ctx->pc = 0x26623Cu;
        goto label_26623c;
    }
    ctx->pc = 0x266234u;
    {
        const bool branch_taken_0x266234 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x266234) {
            ctx->pc = 0x266238u;
            SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
            ctx->pc = 0x266584u;
            goto label_266584;
        }
    }
    ctx->pc = 0x26623Cu;
label_26623c:
    // 0x26623c: 0xc098442
label_266240:
    if (ctx->pc == 0x266240u) {
        ctx->pc = 0x266240u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x266244u;
        goto label_266244;
    }
    ctx->pc = 0x26623Cu;
    SET_GPR_U32(ctx, 31, 0x266244u);
    ctx->pc = 0x266240u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x261108u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioGoodWizard_0x261108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266244u; }
    }
    if (ctx->pc != 0x266244u) { return; }
    ctx->pc = 0x266244u;
label_266244:
    // 0x266244: 0x100000cf
label_266248:
    if (ctx->pc == 0x266248u) {
        ctx->pc = 0x266248u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        ctx->pc = 0x26624Cu;
        goto label_26624c;
    }
    ctx->pc = 0x266244u;
    {
        const bool branch_taken_0x266244 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266248u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x266244) {
            ctx->pc = 0x266584u;
            goto label_266584;
        }
    }
    ctx->pc = 0x26624Cu;
label_26624c:
    // 0x26624c: 0x3c04003c
    ctx->pc = 0x26624cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_266250:
    // 0x266250: 0x3c020031
    ctx->pc = 0x266250u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_266254:
    // 0x266254: 0x8c8338c0
    ctx->pc = 0x266254u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 14528)));
label_266258:
    // 0x266258: 0x8c42ffbc
    ctx->pc = 0x266258u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_26625c:
    // 0x26625c: 0x621821
    ctx->pc = 0x26625cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266260:
    // 0x266260: 0xac8338c0
    ctx->pc = 0x266260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14528), GPR_U32(ctx, 3));
label_266264:
    // 0x266264: 0x3c02003c
    ctx->pc = 0x266264u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_266268:
    // 0x266268: 0x8c4238bc
    ctx->pc = 0x266268u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14524)));
label_26626c:
    // 0x26626c: 0x4400035
label_266270:
    if (ctx->pc == 0x266270u) {
        ctx->pc = 0x266270u;
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
        ctx->pc = 0x266274u;
        goto label_266274;
    }
    ctx->pc = 0x26626Cu;
    {
        const bool branch_taken_0x26626c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x266270u;
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
        if (branch_taken_0x26626c) {
            ctx->pc = 0x266344u;
            goto label_266344;
        }
    }
    ctx->pc = 0x266274u;
label_266274:
    // 0x266274: 0x3c020036
    ctx->pc = 0x266274u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_266278:
    // 0x266278: 0x8c43d934
    ctx->pc = 0x266278u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_26627c:
    // 0x26627c: 0x28620022
    ctx->pc = 0x26627cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 34));
label_266280:
    // 0x266280: 0x14400018
label_266284:
    if (ctx->pc == 0x266284u) {
        ctx->pc = 0x266284u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x266288u;
        goto label_266288;
    }
    ctx->pc = 0x266280u;
    {
        const bool branch_taken_0x266280 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x266284u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x266280) {
            ctx->pc = 0x2662E4u;
            goto label_2662e4;
        }
    }
    ctx->pc = 0x266288u;
label_266288:
    // 0x266288: 0x2862002a
    ctx->pc = 0x266288u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 42));
label_26628c:
    // 0x26628c: 0x14400005
label_266290:
    if (ctx->pc == 0x266290u) {
        ctx->pc = 0x266290u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 42));
        ctx->pc = 0x266294u;
        goto label_266294;
    }
    ctx->pc = 0x26628Cu;
    {
        const bool branch_taken_0x26628c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x266290u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 42));
        if (branch_taken_0x26628c) {
            ctx->pc = 0x2662A4u;
            goto label_2662a4;
        }
    }
    ctx->pc = 0x266294u;
label_266294:
    // 0x266294: 0x1062000e
label_266298:
    if (ctx->pc == 0x266298u) {
        ctx->pc = 0x266298u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x26629Cu;
        goto label_26629c;
    }
    ctx->pc = 0x266294u;
    {
        const bool branch_taken_0x266294 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x266298u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x266294) {
            ctx->pc = 0x2662D0u;
            goto label_2662d0;
        }
    }
    ctx->pc = 0x26629Cu;
label_26629c:
    // 0x26629c: 0x10000012
label_2662a0:
    if (ctx->pc == 0x2662A0u) {
        ctx->pc = 0x2662A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2662A4u;
        goto label_2662a4;
    }
    ctx->pc = 0x26629Cu;
    {
        const bool branch_taken_0x26629c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2662A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x26629c) {
            ctx->pc = 0x2662E8u;
            goto label_2662e8;
        }
    }
    ctx->pc = 0x2662A4u;
label_2662a4:
    // 0x2662a4: 0x16800003
label_2662a8:
    if (ctx->pc == 0x2662A8u) {
        ctx->pc = 0x2662A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2662ACu;
        goto label_2662ac;
    }
    ctx->pc = 0x2662A4u;
    {
        const bool branch_taken_0x2662a4 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x2662A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2662a4) {
            ctx->pc = 0x2662B4u;
            goto label_2662b4;
        }
    }
    ctx->pc = 0x2662ACu;
label_2662ac:
    // 0x2662ac: 0x1000000e
label_2662b0:
    if (ctx->pc == 0x2662B0u) {
        ctx->pc = 0x2662B0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 155));
        ctx->pc = 0x2662B4u;
        goto label_2662b4;
    }
    ctx->pc = 0x2662ACu;
    {
        const bool branch_taken_0x2662ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2662B0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 155));
        if (branch_taken_0x2662ac) {
            ctx->pc = 0x2662E8u;
            goto label_2662e8;
        }
    }
    ctx->pc = 0x2662B4u;
label_2662b4:
    // 0x2662b4: 0x1282000c
label_2662b8:
    if (ctx->pc == 0x2662B8u) {
        ctx->pc = 0x2662B8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 156));
        ctx->pc = 0x2662BCu;
        goto label_2662bc;
    }
    ctx->pc = 0x2662B4u;
    {
        const bool branch_taken_0x2662b4 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x2662B8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 156));
        if (branch_taken_0x2662b4) {
            ctx->pc = 0x2662E8u;
            goto label_2662e8;
        }
    }
    ctx->pc = 0x2662BCu;
label_2662bc:
    // 0x2662bc: 0x2405009e
    ctx->pc = 0x2662bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 158));
label_2662c0:
    // 0x2662c0: 0x2403009d
    ctx->pc = 0x2662c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 157));
label_2662c4:
    // 0x2662c4: 0x3a820002
    ctx->pc = 0x2662c4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 20), 2));
label_2662c8:
    // 0x2662c8: 0x10000007
label_2662cc:
    if (ctx->pc == 0x2662CCu) {
        ctx->pc = 0x2662CCu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        ctx->pc = 0x2662D0u;
        goto label_2662d0;
    }
    ctx->pc = 0x2662C8u;
    {
        const bool branch_taken_0x2662c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2662CCu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        if (branch_taken_0x2662c8) {
            ctx->pc = 0x2662E8u;
            goto label_2662e8;
        }
    }
    ctx->pc = 0x2662D0u;
label_2662d0:
    // 0x2662d0: 0x8c433890
    ctx->pc = 0x2662d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 14480)));
label_2662d4:
    // 0x2662d4: 0x240500a1
    ctx->pc = 0x2662d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 161));
label_2662d8:
    // 0x2662d8: 0x240200a0
    ctx->pc = 0x2662d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 160));
label_2662dc:
    // 0x2662dc: 0x10000002
label_2662e0:
    if (ctx->pc == 0x2662E0u) {
        ctx->pc = 0x2662E0u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        ctx->pc = 0x2662E4u;
        goto label_2662e4;
    }
    ctx->pc = 0x2662DCu;
    {
        const bool branch_taken_0x2662dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2662E0u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        if (branch_taken_0x2662dc) {
            ctx->pc = 0x2662E8u;
            goto label_2662e8;
        }
    }
    ctx->pc = 0x2662E4u;
label_2662e4:
    // 0x2662e4: 0x2405ffff
    ctx->pc = 0x2662e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2662e8:
    // 0x2662e8: 0x4a0ffb6
label_2662ec:
    if (ctx->pc == 0x2662ECu) {
        ctx->pc = 0x2662ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2662F0u;
        goto label_2662f0;
    }
    ctx->pc = 0x2662E8u;
    {
        const bool branch_taken_0x2662e8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2662ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2662e8) {
            ctx->pc = 0x2661C4u;
            goto label_2661c4;
        }
    }
    ctx->pc = 0x2662F0u;
label_2662f0:
    // 0x2662f0: 0x2404ffff
    ctx->pc = 0x2662f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2662f4:
    // 0x2662f4: 0x8c4638bc
    ctx->pc = 0x2662f4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 14524)));
label_2662f8:
    // 0x2662f8: 0xc099528
label_2662fc:
    if (ctx->pc == 0x2662FCu) {
        ctx->pc = 0x2662FCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x266300u;
        goto label_266300;
    }
    ctx->pc = 0x2662F8u;
    SET_GPR_U32(ctx, 31, 0x266300u);
    ctx->pc = 0x2662FCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2654A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CaptionText_0x2654a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266300u; }
    }
    if (ctx->pc != 0x266300u) { return; }
    ctx->pc = 0x266300u;
label_266300:
    // 0x266300: 0x18400007
label_266304:
    if (ctx->pc == 0x266304u) {
        ctx->pc = 0x266304u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        ctx->pc = 0x266308u;
        goto label_266308;
    }
    ctx->pc = 0x266300u;
    {
        const bool branch_taken_0x266300 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x266304u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x266300) {
            ctx->pc = 0x266320u;
            goto label_266320;
        }
    }
    ctx->pc = 0x266308u;
label_266308:
    // 0x266308: 0x8c8338c4
    ctx->pc = 0x266308u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 14532)));
label_26630c:
    // 0x26630c: 0x70102a
    ctx->pc = 0x26630cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
label_266310:
    // 0x266310: 0x1440ff8f
label_266314:
    if (ctx->pc == 0x266314u) {
        ctx->pc = 0x266314u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x266318u;
        goto label_266318;
    }
    ctx->pc = 0x266310u;
    {
        const bool branch_taken_0x266310 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x266314u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x266310) {
            ctx->pc = 0x266150u;
            goto label_266150;
        }
    }
    ctx->pc = 0x266318u;
label_266318:
    // 0x266318: 0x1000ff91
label_26631c:
    if (ctx->pc == 0x26631Cu) {
        ctx->pc = 0x26631Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x266320u;
        goto label_266320;
    }
    ctx->pc = 0x266318u;
    {
        const bool branch_taken_0x266318 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26631Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x266318) {
            ctx->pc = 0x266160u;
            goto label_266160;
        }
    }
    ctx->pc = 0x266320u;
label_266320:
    // 0x266320: 0x4410098
label_266324:
    if (ctx->pc == 0x266324u) {
        ctx->pc = 0x266324u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        ctx->pc = 0x266328u;
        goto label_266328;
    }
    ctx->pc = 0x266320u;
    {
        const bool branch_taken_0x266320 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x266324u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x266320) {
            ctx->pc = 0x266584u;
            goto label_266584;
        }
    }
    ctx->pc = 0x266328u;
label_266328:
    // 0x266328: 0x3c03003c
    ctx->pc = 0x266328u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_26632c:
    // 0x26632c: 0x3c020031
    ctx->pc = 0x26632cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_266330:
    // 0x266330: 0xc440ffa4
    ctx->pc = 0x266330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266334:
    // 0x266334: 0x3c013f80
    ctx->pc = 0x266334u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_266338:
    // 0x266338: 0x44810800
    ctx->pc = 0x266338u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_26633c:
    // 0x26633c: 0x1000ff9c
label_266340:
    if (ctx->pc == 0x266340u) {
        ctx->pc = 0x266340u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x266344u;
        goto label_266344;
    }
    ctx->pc = 0x26633Cu;
    {
        const bool branch_taken_0x26633c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266340u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x26633c) {
            ctx->pc = 0x2661B0u;
            goto label_2661b0;
        }
    }
    ctx->pc = 0x266344u;
label_266344:
    // 0x266344: 0x3c020031
    ctx->pc = 0x266344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_266348:
    // 0x266348: 0x3c03003c
    ctx->pc = 0x266348u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_26634c:
    // 0x26634c: 0xc441ffa4
    ctx->pc = 0x26634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266350:
    // 0x266350: 0xc46038b4
    ctx->pc = 0x266350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266354:
    // 0x266354: 0x46010036
    ctx->pc = 0x266354u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_266358:
    // 0x266358: 0x0
    ctx->pc = 0x266358u;
    // NOP
label_26635c:
    // 0x26635c: 0x45000088
label_266360:
    if (ctx->pc == 0x266360u) {
        ctx->pc = 0x266360u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x266364u;
        goto label_266364;
    }
    ctx->pc = 0x26635Cu;
    {
        const bool branch_taken_0x26635c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x266360u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x26635c) {
            ctx->pc = 0x266580u;
            goto label_266580;
        }
    }
    ctx->pc = 0x266364u;
label_266364:
    // 0x266364: 0x8c62e8fc
    ctx->pc = 0x266364u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961404)));
label_266368:
    // 0x266368: 0x24420001
    ctx->pc = 0x266368u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_26636c:
    // 0x26636c: 0xac62e8fc
    ctx->pc = 0x26636cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961404), GPR_U32(ctx, 2));
label_266370:
    // 0x266370: 0x3c02003c
    ctx->pc = 0x266370u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_266374:
    // 0x266374: 0xac4038bc
    ctx->pc = 0x266374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14524), GPR_U32(ctx, 0));
label_266378:
    // 0x266378: 0x3c02003c
    ctx->pc = 0x266378u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_26637c:
    // 0x26637c: 0xac4038c0
    ctx->pc = 0x26637cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14528), GPR_U32(ctx, 0));
label_266380:
    // 0x266380: 0x3c02003c
    ctx->pc = 0x266380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_266384:
    // 0x266384: 0xac4038c4
    ctx->pc = 0x266384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14532), GPR_U32(ctx, 0));
label_266388:
    // 0x266388: 0x3c020036
    ctx->pc = 0x266388u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_26638c:
    // 0x26638c: 0x8c42d934
    ctx->pc = 0x26638cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_266390:
    // 0x266390: 0x2842002a
    ctx->pc = 0x266390u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 42));
label_266394:
    // 0x266394: 0x1040007a
label_266398:
    if (ctx->pc == 0x266398u) {
        ctx->pc = 0x266398u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 1022));
        ctx->pc = 0x26639Cu;
        goto label_26639c;
    }
    ctx->pc = 0x266394u;
    {
        const bool branch_taken_0x266394 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x266398u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 1022));
        if (branch_taken_0x266394) {
            ctx->pc = 0x266580u;
            goto label_266580;
        }
    }
    ctx->pc = 0x26639Cu;
label_26639c:
    // 0x26639c: 0x240203fe
    ctx->pc = 0x26639cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1022));
label_2663a0:
    // 0x2663a0: 0x14620006
label_2663a4:
    if (ctx->pc == 0x2663A4u) {
        ctx->pc = 0x2663A4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2663A8u;
        goto label_2663a8;
    }
    ctx->pc = 0x2663A0u;
    {
        const bool branch_taken_0x2663a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2663A4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x2663a0) {
            ctx->pc = 0x2663BCu;
            goto label_2663bc;
        }
    }
    ctx->pc = 0x2663A8u;
label_2663a8:
    // 0x2663a8: 0x24020fff
    ctx->pc = 0x2663a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4095));
label_2663ac:
    // 0x2663ac: 0x16420004
label_2663b0:
    if (ctx->pc == 0x2663B0u) {
        ctx->pc = 0x2663B0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 510));
        ctx->pc = 0x2663B4u;
        goto label_2663b4;
    }
    ctx->pc = 0x2663ACu;
    {
        const bool branch_taken_0x2663ac = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x2663B0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 510));
        if (branch_taken_0x2663ac) {
            ctx->pc = 0x2663C0u;
            goto label_2663c0;
        }
    }
    ctx->pc = 0x2663B4u;
label_2663b4:
    // 0x2663b4: 0x10000005
label_2663b8:
    if (ctx->pc == 0x2663B8u) {
        ctx->pc = 0x2663B8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2663BCu;
        goto label_2663bc;
    }
    ctx->pc = 0x2663B4u;
    {
        const bool branch_taken_0x2663b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2663B8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x2663b4) {
            ctx->pc = 0x2663CCu;
            goto label_2663cc;
        }
    }
    ctx->pc = 0x2663BCu;
label_2663bc:
    // 0x2663bc: 0x326201fe
    ctx->pc = 0x2663bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 510));
label_2663c0:
    // 0x2663c0: 0x24030006
    ctx->pc = 0x2663c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
label_2663c4:
    // 0x2663c4: 0x384201fe
    ctx->pc = 0x2663c4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 510));
label_2663c8:
    // 0x2663c8: 0x62280a
    ctx->pc = 0x2663c8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_2663cc:
    // 0x2663cc: 0x3c020036
    ctx->pc = 0x2663ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2663d0:
    // 0x2663d0: 0xc098442
label_2663d4:
    if (ctx->pc == 0x2663D4u) {
        ctx->pc = 0x2663D4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
        ctx->pc = 0x2663D8u;
        goto label_2663d8;
    }
    ctx->pc = 0x2663D0u;
    SET_GPR_U32(ctx, 31, 0x2663D8u);
    ctx->pc = 0x2663D4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    ctx->pc = 0x261108u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioGoodWizard_0x261108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2663D8u; }
    }
    if (ctx->pc != 0x2663D8u) { return; }
    ctx->pc = 0x2663D8u;
label_2663d8:
    // 0x2663d8: 0x1000006a
label_2663dc:
    if (ctx->pc == 0x2663DCu) {
        ctx->pc = 0x2663DCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        ctx->pc = 0x2663E0u;
        goto label_2663e0;
    }
    ctx->pc = 0x2663D8u;
    {
        const bool branch_taken_0x2663d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2663DCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x2663d8) {
            ctx->pc = 0x266584u;
            goto label_266584;
        }
    }
    ctx->pc = 0x2663E0u;
label_2663e0:
    // 0x2663e0: 0x3c04003c
    ctx->pc = 0x2663e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_2663e4:
    // 0x2663e4: 0x3c030031
    ctx->pc = 0x2663e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_2663e8:
    // 0x2663e8: 0x8c8238c0
    ctx->pc = 0x2663e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 14528)));
label_2663ec:
    // 0x2663ec: 0x8c63ffbc
    ctx->pc = 0x2663ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_2663f0:
    // 0x2663f0: 0x431021
    ctx->pc = 0x2663f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2663f4:
    // 0x2663f4: 0xac8238c0
    ctx->pc = 0x2663f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14528), GPR_U32(ctx, 2));
label_2663f8:
    // 0x2663f8: 0x3c02003c
    ctx->pc = 0x2663f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2663fc:
    // 0x2663fc: 0x8c4238bc
    ctx->pc = 0x2663fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14524)));
label_266400:
    // 0x266400: 0x441ff71
label_266404:
    if (ctx->pc == 0x266404u) {
        ctx->pc = 0x266404u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x266408u;
        goto label_266408;
    }
    ctx->pc = 0x266400u;
    {
        const bool branch_taken_0x266400 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x266404u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x266400) {
            ctx->pc = 0x2661C8u;
            goto label_2661c8;
        }
    }
    ctx->pc = 0x266408u;
label_266408:
    // 0x266408: 0x3c020031
    ctx->pc = 0x266408u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_26640c:
    // 0x26640c: 0x3c03003c
    ctx->pc = 0x26640cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_266410:
    // 0x266410: 0xc441ffa4
    ctx->pc = 0x266410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266414:
    // 0x266414: 0xc46038b4
    ctx->pc = 0x266414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266418:
    // 0x266418: 0x46010036
    ctx->pc = 0x266418u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26641c:
    // 0x26641c: 0x0
    ctx->pc = 0x26641cu;
    // NOP
label_266420:
    // 0x266420: 0x45000057
label_266424:
    if (ctx->pc == 0x266424u) {
        ctx->pc = 0x266424u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x266428u;
        goto label_266428;
    }
    ctx->pc = 0x266420u;
    {
        const bool branch_taken_0x266420 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x266424u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x266420) {
            ctx->pc = 0x266580u;
            goto label_266580;
        }
    }
    ctx->pc = 0x266428u;
label_266428:
    // 0x266428: 0x8c62e8fc
    ctx->pc = 0x266428u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961404)));
label_26642c:
    // 0x26642c: 0x24420001
    ctx->pc = 0x26642cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_266430:
    // 0x266430: 0xac62e8fc
    ctx->pc = 0x266430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961404), GPR_U32(ctx, 2));
label_266434:
    // 0x266434: 0x3c02003c
    ctx->pc = 0x266434u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_266438:
    // 0x266438: 0xac4038bc
    ctx->pc = 0x266438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14524), GPR_U32(ctx, 0));
label_26643c:
    // 0x26643c: 0x3c02003c
    ctx->pc = 0x26643cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_266440:
    // 0x266440: 0xac4038c0
    ctx->pc = 0x266440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14528), GPR_U32(ctx, 0));
label_266444:
    // 0x266444: 0x3c02003c
    ctx->pc = 0x266444u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_266448:
    // 0x266448: 0x1000004d
label_26644c:
    if (ctx->pc == 0x26644Cu) {
        ctx->pc = 0x26644Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 14532), GPR_U32(ctx, 0));
        ctx->pc = 0x266450u;
        goto label_266450;
    }
    ctx->pc = 0x266448u;
    {
        const bool branch_taken_0x266448 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26644Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 14532), GPR_U32(ctx, 0));
        if (branch_taken_0x266448) {
            ctx->pc = 0x266580u;
            goto label_266580;
        }
    }
    ctx->pc = 0x266450u;
label_266450:
    // 0x266450: 0xc0953a8
label_266454:
    if (ctx->pc == 0x266454u) {
        ctx->pc = 0x266458u;
        goto label_266458;
    }
    ctx->pc = 0x266450u;
    SET_GPR_U32(ctx, 31, 0x266458u);
    ctx->pc = 0x254EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        IsGoldActive_0x254ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266458u; }
    }
    if (ctx->pc != 0x266458u) { return; }
    ctx->pc = 0x266458u;
label_266458:
    // 0x266458: 0x14400005
label_26645c:
    if (ctx->pc == 0x26645Cu) {
        ctx->pc = 0x26645Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x266460u;
        goto label_266460;
    }
    ctx->pc = 0x266458u;
    {
        const bool branch_taken_0x266458 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26645Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x266458) {
            ctx->pc = 0x266470u;
            goto label_266470;
        }
    }
    ctx->pc = 0x266460u;
label_266460:
    // 0x266460: 0x3c02003c
    ctx->pc = 0x266460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_266464:
    // 0x266464: 0x8c423890
    ctx->pc = 0x266464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14480)));
label_266468:
    // 0x266468: 0x10400004
label_26646c:
    if (ctx->pc == 0x26646Cu) {
        ctx->pc = 0x26646Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x266470u;
        goto label_266470;
    }
    ctx->pc = 0x266468u;
    {
        const bool branch_taken_0x266468 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26646Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x266468) {
            ctx->pc = 0x26647Cu;
            goto label_26647c;
        }
    }
    ctx->pc = 0x266470u;
label_266470:
    // 0x266470: 0x3c030034
    ctx->pc = 0x266470u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_266474:
    // 0x266474: 0x10000003
label_266478:
    if (ctx->pc == 0x266478u) {
        ctx->pc = 0x266478u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294961396)));
        ctx->pc = 0x26647Cu;
        goto label_26647c;
    }
    ctx->pc = 0x266474u;
    {
        const bool branch_taken_0x266474 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x266478u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294961396)));
        if (branch_taken_0x266474) {
            ctx->pc = 0x266484u;
            goto label_266484;
        }
    }
    ctx->pc = 0x26647Cu;
label_26647c:
    // 0x26647c: 0x3c030034
    ctx->pc = 0x26647cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_266480:
    // 0x266480: 0x8c63e8f8
    ctx->pc = 0x266480u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294961400)));
label_266484:
    // 0x266484: 0xac4307cc
    ctx->pc = 0x266484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1996), GPR_U32(ctx, 3));
label_266488:
    // 0x266488: 0x3c030034
    ctx->pc = 0x266488u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_26648c:
    // 0x26648c: 0x8c62e8fc
    ctx->pc = 0x26648cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961404)));
label_266490:
    // 0x266490: 0x24420001
    ctx->pc = 0x266490u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_266494:
    // 0x266494: 0xac62e8fc
    ctx->pc = 0x266494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961404), GPR_U32(ctx, 2));
label_266498:
    // 0x266498: 0x3c040034
    ctx->pc = 0x266498u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
label_26649c:
    // 0x26649c: 0x2484e900
    ctx->pc = 0x26649cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961408));
label_2664a0:
    // 0x2664a0: 0x282d
    ctx->pc = 0x2664a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2664a4:
    // 0x2664a4: 0xc084a96
label_2664a8:
    if (ctx->pc == 0x2664A8u) {
        ctx->pc = 0x2664A8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2664ACu;
        goto label_2664ac;
    }
    ctx->pc = 0x2664A4u;
    SET_GPR_U32(ctx, 31, 0x2664ACu);
    ctx->pc = 0x2664A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateATree_0x212a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2664ACu; }
    }
    if (ctx->pc != 0x2664ACu) { return; }
    ctx->pc = 0x2664ACu;
label_2664ac:
    // 0x2664ac: 0x202d
    ctx->pc = 0x2664acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2664b0:
    // 0x2664b0: 0xc09967e
label_2664b4:
    if (ctx->pc == 0x2664B4u) {
        ctx->pc = 0x2664B4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2664B8u;
        goto label_2664b8;
    }
    ctx->pc = 0x2664B0u;
    SET_GPR_U32(ctx, 31, 0x2664B8u);
    ctx->pc = 0x2664B4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2659F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_good_wiz_attn_0x2659f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2664B8u; }
    }
    if (ctx->pc != 0x2664B8u) { return; }
    ctx->pc = 0x2664B8u;
label_2664b8:
    // 0x2664b8: 0xc088b7e
label_2664bc:
    if (ctx->pc == 0x2664BCu) {
        ctx->pc = 0x2664BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2664C0u;
        goto label_2664c0;
    }
    ctx->pc = 0x2664B8u;
    SET_GPR_U32(ctx, 31, 0x2664C0u);
    ctx->pc = 0x2664BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x222DF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStillPlaying_0x222df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2664C0u; }
    }
    if (ctx->pc != 0x2664C0u) { return; }
    ctx->pc = 0x2664C0u;
label_2664c0:
    // 0x2664c0: 0x1440003c
label_2664c4:
    if (ctx->pc == 0x2664C4u) {
        ctx->pc = 0x2664C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x2664C8u;
        goto label_2664c8;
    }
    ctx->pc = 0x2664C0u;
    {
        const bool branch_taken_0x2664c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2664C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2664c0) {
            ctx->pc = 0x2665B4u;
            goto label_2665b4;
        }
    }
    ctx->pc = 0x2664C8u;
label_2664c8:
    // 0x2664c8: 0x10000029
label_2664cc:
    if (ctx->pc == 0x2664CCu) {
        ctx->pc = 0x2664CCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x2664D0u;
        goto label_2664d0;
    }
    ctx->pc = 0x2664C8u;
    {
        const bool branch_taken_0x2664c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2664CCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x2664c8) {
            ctx->pc = 0x266570u;
            goto label_266570;
        }
    }
    ctx->pc = 0x2664D0u;
label_2664d0:
    // 0x2664d0: 0x3c040034
    ctx->pc = 0x2664d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
label_2664d4:
    // 0x2664d4: 0x2484e900
    ctx->pc = 0x2664d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961408));
label_2664d8:
    // 0x2664d8: 0x282d
    ctx->pc = 0x2664d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2664dc:
    // 0x2664dc: 0xc084a96
label_2664e0:
    if (ctx->pc == 0x2664E0u) {
        ctx->pc = 0x2664E0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2664E4u;
        goto label_2664e4;
    }
    ctx->pc = 0x2664DCu;
    SET_GPR_U32(ctx, 31, 0x2664E4u);
    ctx->pc = 0x2664E0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateATree_0x212a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2664E4u; }
    }
    if (ctx->pc != 0x2664E4u) { return; }
    ctx->pc = 0x2664E4u;
label_2664e4:
    // 0x2664e4: 0x202d
    ctx->pc = 0x2664e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2664e8:
    // 0x2664e8: 0xc09967e
label_2664ec:
    if (ctx->pc == 0x2664ECu) {
        ctx->pc = 0x2664ECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2664F0u;
        goto label_2664f0;
    }
    ctx->pc = 0x2664E8u;
    SET_GPR_U32(ctx, 31, 0x2664F0u);
    ctx->pc = 0x2664ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2659F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_good_wiz_attn_0x2659f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2664F0u; }
    }
    if (ctx->pc != 0x2664F0u) { return; }
    ctx->pc = 0x2664F0u;
label_2664f0:
    // 0x2664f0: 0x3c020032
    ctx->pc = 0x2664f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2664f4:
    // 0x2664f4: 0x3c030034
    ctx->pc = 0x2664f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_2664f8:
    // 0x2664f8: 0x8c4407cc
    ctx->pc = 0x2664f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1996)));
label_2664fc:
    // 0x2664fc: 0x8c62e8e0
    ctx->pc = 0x2664fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961376)));
label_266500:
    // 0x266500: 0x44102a
    ctx->pc = 0x266500u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
label_266504:
    // 0x266504: 0x1440002b
label_266508:
    if (ctx->pc == 0x266508u) {
        ctx->pc = 0x266508u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x26650Cu;
        goto label_26650c;
    }
    ctx->pc = 0x266504u;
    {
        const bool branch_taken_0x266504 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x266508u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x266504) {
            ctx->pc = 0x2665B4u;
            goto label_2665b4;
        }
    }
    ctx->pc = 0x26650Cu;
label_26650c:
    // 0x26650c: 0x802d
    ctx->pc = 0x26650cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_266510:
    // 0x266510: 0x3c020032
    ctx->pc = 0x266510u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_266514:
    // 0x266514: 0x24551bc0
    ctx->pc = 0x266514u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 7104));
label_266518:
    // 0x266518: 0x24142b00
    ctx->pc = 0x266518u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 11008));
label_26651c:
    // 0x26651c: 0x24130001
    ctx->pc = 0x26651cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_266520:
    // 0x266520: 0x3c020032
    ctx->pc = 0x266520u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_266524:
    // 0x266524: 0x24522374
    ctx->pc = 0x266524u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 9076));
label_266528:
    // 0x266528: 0x3c110034
    ctx->pc = 0x266528u;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
label_26652c:
    // 0x26652c: 0x2142018
    ctx->pc = 0x26652cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_266530:
    // 0x266530: 0x951021
    ctx->pc = 0x266530u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_266534:
    // 0x266534: 0x8c4200fc
    ctx->pc = 0x266534u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_266538:
    // 0x266538: 0x54530009
label_26653c:
    if (ctx->pc == 0x26653Cu) {
        ctx->pc = 0x26653Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x266540u;
        goto label_266540;
    }
    ctx->pc = 0x266538u;
    {
        const bool branch_taken_0x266538 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x266538) {
            ctx->pc = 0x26653Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x266560u;
            goto label_266560;
        }
    }
    ctx->pc = 0x266540u;
label_266540:
    // 0x266540: 0x922021
    ctx->pc = 0x266540u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_266544:
    // 0x266544: 0x8e255514
    ctx->pc = 0x266544u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 21780)));
label_266548:
    // 0x266548: 0x2406000a
    ctx->pc = 0x266548u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_26654c:
    // 0x26654c: 0x3c013f00
    ctx->pc = 0x26654cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_266550:
    // 0x266550: 0x44816000
    ctx->pc = 0x266550u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_266554:
    // 0x266554: 0xc09ffc6
label_266558:
    if (ctx->pc == 0x266558u) {
        ctx->pc = 0x266558u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x26655Cu;
        goto label_26655c;
    }
    ctx->pc = 0x266554u;
    SET_GPR_U32(ctx, 31, 0x26655Cu);
    ctx->pc = 0x266558u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27FF18u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetSkinFX_0x27ff18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26655Cu; }
    }
    if (ctx->pc != 0x26655Cu) { return; }
    ctx->pc = 0x26655Cu;
label_26655c:
    // 0x26655c: 0x26100001
    ctx->pc = 0x26655cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_266560:
    // 0x266560: 0x2a020004
    ctx->pc = 0x266560u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
label_266564:
    // 0x266564: 0x1440fff2
label_266568:
    if (ctx->pc == 0x266568u) {
        ctx->pc = 0x266568u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x26656Cu;
        goto label_26656c;
    }
    ctx->pc = 0x266564u;
    {
        const bool branch_taken_0x266564 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x266568u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x266564) {
            ctx->pc = 0x266530u;
            goto label_266530;
        }
    }
    ctx->pc = 0x26656Cu;
label_26656c:
    // 0x26656c: 0x3c030034
    ctx->pc = 0x26656cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_266570:
    // 0x266570: 0x8c62e8fc
    ctx->pc = 0x266570u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961404)));
label_266574:
    // 0x266574: 0x24420001
    ctx->pc = 0x266574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_266578:
    // 0x266578: 0x1000000d
label_26657c:
    if (ctx->pc == 0x26657Cu) {
        ctx->pc = 0x26657Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961404), GPR_U32(ctx, 2));
        ctx->pc = 0x266580u;
        goto label_266580;
    }
    ctx->pc = 0x266578u;
    {
        const bool branch_taken_0x266578 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26657Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961404), GPR_U32(ctx, 2));
        if (branch_taken_0x266578) {
            ctx->pc = 0x2665B0u;
            goto label_2665b0;
        }
    }
    ctx->pc = 0x266580u;
label_266580:
    // 0x266580: 0x3c040034
    ctx->pc = 0x266580u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
label_266584:
    // 0x266584: 0x2484e900
    ctx->pc = 0x266584u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961408));
label_266588:
    // 0x266588: 0x282d
    ctx->pc = 0x266588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26658c:
    // 0x26658c: 0xc084a96
label_266590:
    if (ctx->pc == 0x266590u) {
        ctx->pc = 0x266590u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266594u;
        goto label_266594;
    }
    ctx->pc = 0x26658Cu;
    SET_GPR_U32(ctx, 31, 0x266594u);
    ctx->pc = 0x266590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateATree_0x212a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266594u; }
    }
    if (ctx->pc != 0x266594u) { return; }
    ctx->pc = 0x266594u;
label_266594:
    // 0x266594: 0x202d
    ctx->pc = 0x266594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_266598:
    // 0x266598: 0xc09967e
label_26659c:
    if (ctx->pc == 0x26659Cu) {
        ctx->pc = 0x26659Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2665A0u;
        goto label_2665a0;
    }
    ctx->pc = 0x266598u;
    SET_GPR_U32(ctx, 31, 0x2665A0u);
    ctx->pc = 0x26659Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2659F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_good_wiz_attn_0x2659f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2665A0u; }
    }
    if (ctx->pc != 0x2665A0u) { return; }
    ctx->pc = 0x2665A0u;
label_2665a0:
    // 0x2665a0: 0x10000004
label_2665a4:
    if (ctx->pc == 0x2665A4u) {
        ctx->pc = 0x2665A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x2665A8u;
        goto label_2665a8;
    }
    ctx->pc = 0x2665A0u;
    {
        const bool branch_taken_0x2665a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2665A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2665a0) {
            ctx->pc = 0x2665B4u;
            goto label_2665b4;
        }
    }
    ctx->pc = 0x2665A8u;
label_2665a8:
    // 0x2665a8: 0x3c020032
    ctx->pc = 0x2665a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2665ac:
    // 0x2665ac: 0xac40d35c
    ctx->pc = 0x2665acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955868), GPR_U32(ctx, 0));
label_2665b0:
    // 0x2665b0: 0x3c020034
    ctx->pc = 0x2665b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2665b4:
    // 0x2665b4: 0x8c42e8fc
    ctx->pc = 0x2665b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961404)));
label_2665b8:
    // 0x2665b8: 0x28420009
    ctx->pc = 0x2665b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 9));
label_2665bc:
    // 0x2665bc: 0x1440000c
label_2665c0:
    if (ctx->pc == 0x2665C0u) {
        ctx->pc = 0x2665C0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x2665C4u;
        goto label_2665c4;
    }
    ctx->pc = 0x2665BCu;
    {
        const bool branch_taken_0x2665bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2665C0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x2665bc) {
            ctx->pc = 0x2665F0u;
            goto label_2665f0;
        }
    }
    ctx->pc = 0x2665C4u;
label_2665c4:
    // 0x2665c4: 0xc0953a8
label_2665c8:
    if (ctx->pc == 0x2665C8u) {
        ctx->pc = 0x2665CCu;
        goto label_2665cc;
    }
    ctx->pc = 0x2665C4u;
    SET_GPR_U32(ctx, 31, 0x2665CCu);
    ctx->pc = 0x254EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        IsGoldActive_0x254ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2665CCu; }
    }
    if (ctx->pc != 0x2665CCu) { return; }
    ctx->pc = 0x2665CCu;
label_2665cc:
    // 0x2665cc: 0x14400008
label_2665d0:
    if (ctx->pc == 0x2665D0u) {
        ctx->pc = 0x2665D0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x2665D4u;
        goto label_2665d4;
    }
    ctx->pc = 0x2665CCu;
    {
        const bool branch_taken_0x2665cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2665D0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x2665cc) {
            ctx->pc = 0x2665F0u;
            goto label_2665f0;
        }
    }
    ctx->pc = 0x2665D4u;
label_2665d4:
    // 0x2665d4: 0x3c050032
    ctx->pc = 0x2665d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
label_2665d8:
    // 0x2665d8: 0x3c030034
    ctx->pc = 0x2665d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_2665dc:
    // 0x2665dc: 0x8ca207cc
    ctx->pc = 0x2665dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 1996)));
label_2665e0:
    // 0x2665e0: 0x8c64e8f8
    ctx->pc = 0x2665e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294961400)));
label_2665e4:
    // 0x2665e4: 0x82182a
    ctx->pc = 0x2665e4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
label_2665e8:
    // 0x2665e8: 0x83100b
    ctx->pc = 0x2665e8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_2665ec:
    // 0x2665ec: 0xaca207cc
    ctx->pc = 0x2665ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1996), GPR_U32(ctx, 2));
label_2665f0:
    // 0x2665f0: 0xdfb50060
    ctx->pc = 0x2665f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2665f4:
    // 0x2665f4: 0xdfb40050
    ctx->pc = 0x2665f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2665f8:
    // 0x2665f8: 0xdfb30040
    ctx->pc = 0x2665f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2665fc:
    // 0x2665fc: 0xdfb20030
    ctx->pc = 0x2665fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_266600:
    // 0x266600: 0xdfb10020
    ctx->pc = 0x266600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_266604:
    // 0x266604: 0xdfb00010
    ctx->pc = 0x266604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_266608:
    // 0x266608: 0x3e00008
label_26660c:
    if (ctx->pc == 0x26660Cu) {
        ctx->pc = 0x26660Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x266610u;
        goto label_fallthrough_0x266608;
    }
    ctx->pc = 0x266608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26660Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x265C48u: goto label_265c48;
            case 0x265C4Cu: goto label_265c4c;
            case 0x265C50u: goto label_265c50;
            case 0x265C54u: goto label_265c54;
            case 0x265C58u: goto label_265c58;
            case 0x265C5Cu: goto label_265c5c;
            case 0x265C60u: goto label_265c60;
            case 0x265C64u: goto label_265c64;
            case 0x265C68u: goto label_265c68;
            case 0x265C6Cu: goto label_265c6c;
            case 0x265C70u: goto label_265c70;
            case 0x265C74u: goto label_265c74;
            case 0x265C78u: goto label_265c78;
            case 0x265C7Cu: goto label_265c7c;
            case 0x265C80u: goto label_265c80;
            case 0x265C84u: goto label_265c84;
            case 0x265C88u: goto label_265c88;
            case 0x265C8Cu: goto label_265c8c;
            case 0x265C90u: goto label_265c90;
            case 0x265C94u: goto label_265c94;
            case 0x265C98u: goto label_265c98;
            case 0x265C9Cu: goto label_265c9c;
            case 0x265CA0u: goto label_265ca0;
            case 0x265CA4u: goto label_265ca4;
            case 0x265CA8u: goto label_265ca8;
            case 0x265CACu: goto label_265cac;
            case 0x265CB0u: goto label_265cb0;
            case 0x265CB4u: goto label_265cb4;
            case 0x265CB8u: goto label_265cb8;
            case 0x265CBCu: goto label_265cbc;
            case 0x265CC0u: goto label_265cc0;
            case 0x265CC4u: goto label_265cc4;
            case 0x265CC8u: goto label_265cc8;
            case 0x265CCCu: goto label_265ccc;
            case 0x265CD0u: goto label_265cd0;
            case 0x265CD4u: goto label_265cd4;
            case 0x265CD8u: goto label_265cd8;
            case 0x265CDCu: goto label_265cdc;
            case 0x265CE0u: goto label_265ce0;
            case 0x265CE4u: goto label_265ce4;
            case 0x265CE8u: goto label_265ce8;
            case 0x265CECu: goto label_265cec;
            case 0x265CF0u: goto label_265cf0;
            case 0x265CF4u: goto label_265cf4;
            case 0x265CF8u: goto label_265cf8;
            case 0x265CFCu: goto label_265cfc;
            case 0x265D00u: goto label_265d00;
            case 0x265D04u: goto label_265d04;
            case 0x265D08u: goto label_265d08;
            case 0x265D0Cu: goto label_265d0c;
            case 0x265D10u: goto label_265d10;
            case 0x265D14u: goto label_265d14;
            case 0x265D18u: goto label_265d18;
            case 0x265D1Cu: goto label_265d1c;
            case 0x265D20u: goto label_265d20;
            case 0x265D24u: goto label_265d24;
            case 0x265D28u: goto label_265d28;
            case 0x265D2Cu: goto label_265d2c;
            case 0x265D30u: goto label_265d30;
            case 0x265D34u: goto label_265d34;
            case 0x265D38u: goto label_265d38;
            case 0x265D3Cu: goto label_265d3c;
            case 0x265D40u: goto label_265d40;
            case 0x265D44u: goto label_265d44;
            case 0x265D48u: goto label_265d48;
            case 0x265D4Cu: goto label_265d4c;
            case 0x265D50u: goto label_265d50;
            case 0x265D54u: goto label_265d54;
            case 0x265D58u: goto label_265d58;
            case 0x265D5Cu: goto label_265d5c;
            case 0x265D60u: goto label_265d60;
            case 0x265D64u: goto label_265d64;
            case 0x265D68u: goto label_265d68;
            case 0x265D6Cu: goto label_265d6c;
            case 0x265D70u: goto label_265d70;
            case 0x265D74u: goto label_265d74;
            case 0x265D78u: goto label_265d78;
            case 0x265D7Cu: goto label_265d7c;
            case 0x265D80u: goto label_265d80;
            case 0x265D84u: goto label_265d84;
            case 0x265D88u: goto label_265d88;
            case 0x265D8Cu: goto label_265d8c;
            case 0x265D90u: goto label_265d90;
            case 0x265D94u: goto label_265d94;
            case 0x265D98u: goto label_265d98;
            case 0x265D9Cu: goto label_265d9c;
            case 0x265DA0u: goto label_265da0;
            case 0x265DA4u: goto label_265da4;
            case 0x265DA8u: goto label_265da8;
            case 0x265DACu: goto label_265dac;
            case 0x265DB0u: goto label_265db0;
            case 0x265DB4u: goto label_265db4;
            case 0x265DB8u: goto label_265db8;
            case 0x265DBCu: goto label_265dbc;
            case 0x265DC0u: goto label_265dc0;
            case 0x265DC4u: goto label_265dc4;
            case 0x265DC8u: goto label_265dc8;
            case 0x265DCCu: goto label_265dcc;
            case 0x265DD0u: goto label_265dd0;
            case 0x265DD4u: goto label_265dd4;
            case 0x265DD8u: goto label_265dd8;
            case 0x265DDCu: goto label_265ddc;
            case 0x265DE0u: goto label_265de0;
            case 0x265DE4u: goto label_265de4;
            case 0x265DE8u: goto label_265de8;
            case 0x265DECu: goto label_265dec;
            case 0x265DF0u: goto label_265df0;
            case 0x265DF4u: goto label_265df4;
            case 0x265DF8u: goto label_265df8;
            case 0x265DFCu: goto label_265dfc;
            case 0x265E00u: goto label_265e00;
            case 0x265E04u: goto label_265e04;
            case 0x265E08u: goto label_265e08;
            case 0x265E0Cu: goto label_265e0c;
            case 0x265E10u: goto label_265e10;
            case 0x265E14u: goto label_265e14;
            case 0x265E18u: goto label_265e18;
            case 0x265E1Cu: goto label_265e1c;
            case 0x265E20u: goto label_265e20;
            case 0x265E24u: goto label_265e24;
            case 0x265E28u: goto label_265e28;
            case 0x265E2Cu: goto label_265e2c;
            case 0x265E30u: goto label_265e30;
            case 0x265E34u: goto label_265e34;
            case 0x265E38u: goto label_265e38;
            case 0x265E3Cu: goto label_265e3c;
            case 0x265E40u: goto label_265e40;
            case 0x265E44u: goto label_265e44;
            case 0x265E48u: goto label_265e48;
            case 0x265E4Cu: goto label_265e4c;
            case 0x265E50u: goto label_265e50;
            case 0x265E54u: goto label_265e54;
            case 0x265E58u: goto label_265e58;
            case 0x265E5Cu: goto label_265e5c;
            case 0x265E60u: goto label_265e60;
            case 0x265E64u: goto label_265e64;
            case 0x265E68u: goto label_265e68;
            case 0x265E6Cu: goto label_265e6c;
            case 0x265E70u: goto label_265e70;
            case 0x265E74u: goto label_265e74;
            case 0x265E78u: goto label_265e78;
            case 0x265E7Cu: goto label_265e7c;
            case 0x265E80u: goto label_265e80;
            case 0x265E84u: goto label_265e84;
            case 0x265E88u: goto label_265e88;
            case 0x265E8Cu: goto label_265e8c;
            case 0x265E90u: goto label_265e90;
            case 0x265E94u: goto label_265e94;
            case 0x265E98u: goto label_265e98;
            case 0x265E9Cu: goto label_265e9c;
            case 0x265EA0u: goto label_265ea0;
            case 0x265EA4u: goto label_265ea4;
            case 0x265EA8u: goto label_265ea8;
            case 0x265EACu: goto label_265eac;
            case 0x265EB0u: goto label_265eb0;
            case 0x265EB4u: goto label_265eb4;
            case 0x265EB8u: goto label_265eb8;
            case 0x265EBCu: goto label_265ebc;
            case 0x265EC0u: goto label_265ec0;
            case 0x265EC4u: goto label_265ec4;
            case 0x265EC8u: goto label_265ec8;
            case 0x265ECCu: goto label_265ecc;
            case 0x265ED0u: goto label_265ed0;
            case 0x265ED4u: goto label_265ed4;
            case 0x265ED8u: goto label_265ed8;
            case 0x265EDCu: goto label_265edc;
            case 0x265EE0u: goto label_265ee0;
            case 0x265EE4u: goto label_265ee4;
            case 0x265EE8u: goto label_265ee8;
            case 0x265EECu: goto label_265eec;
            case 0x265EF0u: goto label_265ef0;
            case 0x265EF4u: goto label_265ef4;
            case 0x265EF8u: goto label_265ef8;
            case 0x265EFCu: goto label_265efc;
            case 0x265F00u: goto label_265f00;
            case 0x265F04u: goto label_265f04;
            case 0x265F08u: goto label_265f08;
            case 0x265F0Cu: goto label_265f0c;
            case 0x265F10u: goto label_265f10;
            case 0x265F14u: goto label_265f14;
            case 0x265F18u: goto label_265f18;
            case 0x265F1Cu: goto label_265f1c;
            case 0x265F20u: goto label_265f20;
            case 0x265F24u: goto label_265f24;
            case 0x265F28u: goto label_265f28;
            case 0x265F2Cu: goto label_265f2c;
            case 0x265F30u: goto label_265f30;
            case 0x265F34u: goto label_265f34;
            case 0x265F38u: goto label_265f38;
            case 0x265F3Cu: goto label_265f3c;
            case 0x265F40u: goto label_265f40;
            case 0x265F44u: goto label_265f44;
            case 0x265F48u: goto label_265f48;
            case 0x265F4Cu: goto label_265f4c;
            case 0x265F50u: goto label_265f50;
            case 0x265F54u: goto label_265f54;
            case 0x265F58u: goto label_265f58;
            case 0x265F5Cu: goto label_265f5c;
            case 0x265F60u: goto label_265f60;
            case 0x265F64u: goto label_265f64;
            case 0x265F68u: goto label_265f68;
            case 0x265F6Cu: goto label_265f6c;
            case 0x265F70u: goto label_265f70;
            case 0x265F74u: goto label_265f74;
            case 0x265F78u: goto label_265f78;
            case 0x265F7Cu: goto label_265f7c;
            case 0x265F80u: goto label_265f80;
            case 0x265F84u: goto label_265f84;
            case 0x265F88u: goto label_265f88;
            case 0x265F8Cu: goto label_265f8c;
            case 0x265F90u: goto label_265f90;
            case 0x265F94u: goto label_265f94;
            case 0x265F98u: goto label_265f98;
            case 0x265F9Cu: goto label_265f9c;
            case 0x265FA0u: goto label_265fa0;
            case 0x265FA4u: goto label_265fa4;
            case 0x265FA8u: goto label_265fa8;
            case 0x265FACu: goto label_265fac;
            case 0x265FB0u: goto label_265fb0;
            case 0x265FB4u: goto label_265fb4;
            case 0x265FB8u: goto label_265fb8;
            case 0x265FBCu: goto label_265fbc;
            case 0x265FC0u: goto label_265fc0;
            case 0x265FC4u: goto label_265fc4;
            case 0x265FC8u: goto label_265fc8;
            case 0x265FCCu: goto label_265fcc;
            case 0x265FD0u: goto label_265fd0;
            case 0x265FD4u: goto label_265fd4;
            case 0x265FD8u: goto label_265fd8;
            case 0x265FDCu: goto label_265fdc;
            case 0x265FE0u: goto label_265fe0;
            case 0x265FE4u: goto label_265fe4;
            case 0x265FE8u: goto label_265fe8;
            case 0x265FECu: goto label_265fec;
            case 0x265FF0u: goto label_265ff0;
            case 0x265FF4u: goto label_265ff4;
            case 0x265FF8u: goto label_265ff8;
            case 0x265FFCu: goto label_265ffc;
            case 0x266000u: goto label_266000;
            case 0x266004u: goto label_266004;
            case 0x266008u: goto label_266008;
            case 0x26600Cu: goto label_26600c;
            case 0x266010u: goto label_266010;
            case 0x266014u: goto label_266014;
            case 0x266018u: goto label_266018;
            case 0x26601Cu: goto label_26601c;
            case 0x266020u: goto label_266020;
            case 0x266024u: goto label_266024;
            case 0x266028u: goto label_266028;
            case 0x26602Cu: goto label_26602c;
            case 0x266030u: goto label_266030;
            case 0x266034u: goto label_266034;
            case 0x266038u: goto label_266038;
            case 0x26603Cu: goto label_26603c;
            case 0x266040u: goto label_266040;
            case 0x266044u: goto label_266044;
            case 0x266048u: goto label_266048;
            case 0x26604Cu: goto label_26604c;
            case 0x266050u: goto label_266050;
            case 0x266054u: goto label_266054;
            case 0x266058u: goto label_266058;
            case 0x26605Cu: goto label_26605c;
            case 0x266060u: goto label_266060;
            case 0x266064u: goto label_266064;
            case 0x266068u: goto label_266068;
            case 0x26606Cu: goto label_26606c;
            case 0x266070u: goto label_266070;
            case 0x266074u: goto label_266074;
            case 0x266078u: goto label_266078;
            case 0x26607Cu: goto label_26607c;
            case 0x266080u: goto label_266080;
            case 0x266084u: goto label_266084;
            case 0x266088u: goto label_266088;
            case 0x26608Cu: goto label_26608c;
            case 0x266090u: goto label_266090;
            case 0x266094u: goto label_266094;
            case 0x266098u: goto label_266098;
            case 0x26609Cu: goto label_26609c;
            case 0x2660A0u: goto label_2660a0;
            case 0x2660A4u: goto label_2660a4;
            case 0x2660A8u: goto label_2660a8;
            case 0x2660ACu: goto label_2660ac;
            case 0x2660B0u: goto label_2660b0;
            case 0x2660B4u: goto label_2660b4;
            case 0x2660B8u: goto label_2660b8;
            case 0x2660BCu: goto label_2660bc;
            case 0x2660C0u: goto label_2660c0;
            case 0x2660C4u: goto label_2660c4;
            case 0x2660C8u: goto label_2660c8;
            case 0x2660CCu: goto label_2660cc;
            case 0x2660D0u: goto label_2660d0;
            case 0x2660D4u: goto label_2660d4;
            case 0x2660D8u: goto label_2660d8;
            case 0x2660DCu: goto label_2660dc;
            case 0x2660E0u: goto label_2660e0;
            case 0x2660E4u: goto label_2660e4;
            case 0x2660E8u: goto label_2660e8;
            case 0x2660ECu: goto label_2660ec;
            case 0x2660F0u: goto label_2660f0;
            case 0x2660F4u: goto label_2660f4;
            case 0x2660F8u: goto label_2660f8;
            case 0x2660FCu: goto label_2660fc;
            case 0x266100u: goto label_266100;
            case 0x266104u: goto label_266104;
            case 0x266108u: goto label_266108;
            case 0x26610Cu: goto label_26610c;
            case 0x266110u: goto label_266110;
            case 0x266114u: goto label_266114;
            case 0x266118u: goto label_266118;
            case 0x26611Cu: goto label_26611c;
            case 0x266120u: goto label_266120;
            case 0x266124u: goto label_266124;
            case 0x266128u: goto label_266128;
            case 0x26612Cu: goto label_26612c;
            case 0x266130u: goto label_266130;
            case 0x266134u: goto label_266134;
            case 0x266138u: goto label_266138;
            case 0x26613Cu: goto label_26613c;
            case 0x266140u: goto label_266140;
            case 0x266144u: goto label_266144;
            case 0x266148u: goto label_266148;
            case 0x26614Cu: goto label_26614c;
            case 0x266150u: goto label_266150;
            case 0x266154u: goto label_266154;
            case 0x266158u: goto label_266158;
            case 0x26615Cu: goto label_26615c;
            case 0x266160u: goto label_266160;
            case 0x266164u: goto label_266164;
            case 0x266168u: goto label_266168;
            case 0x26616Cu: goto label_26616c;
            case 0x266170u: goto label_266170;
            case 0x266174u: goto label_266174;
            case 0x266178u: goto label_266178;
            case 0x26617Cu: goto label_26617c;
            case 0x266180u: goto label_266180;
            case 0x266184u: goto label_266184;
            case 0x266188u: goto label_266188;
            case 0x26618Cu: goto label_26618c;
            case 0x266190u: goto label_266190;
            case 0x266194u: goto label_266194;
            case 0x266198u: goto label_266198;
            case 0x26619Cu: goto label_26619c;
            case 0x2661A0u: goto label_2661a0;
            case 0x2661A4u: goto label_2661a4;
            case 0x2661A8u: goto label_2661a8;
            case 0x2661ACu: goto label_2661ac;
            case 0x2661B0u: goto label_2661b0;
            case 0x2661B4u: goto label_2661b4;
            case 0x2661B8u: goto label_2661b8;
            case 0x2661BCu: goto label_2661bc;
            case 0x2661C0u: goto label_2661c0;
            case 0x2661C4u: goto label_2661c4;
            case 0x2661C8u: goto label_2661c8;
            case 0x2661CCu: goto label_2661cc;
            case 0x2661D0u: goto label_2661d0;
            case 0x2661D4u: goto label_2661d4;
            case 0x2661D8u: goto label_2661d8;
            case 0x2661DCu: goto label_2661dc;
            case 0x2661E0u: goto label_2661e0;
            case 0x2661E4u: goto label_2661e4;
            case 0x2661E8u: goto label_2661e8;
            case 0x2661ECu: goto label_2661ec;
            case 0x2661F0u: goto label_2661f0;
            case 0x2661F4u: goto label_2661f4;
            case 0x2661F8u: goto label_2661f8;
            case 0x2661FCu: goto label_2661fc;
            case 0x266200u: goto label_266200;
            case 0x266204u: goto label_266204;
            case 0x266208u: goto label_266208;
            case 0x26620Cu: goto label_26620c;
            case 0x266210u: goto label_266210;
            case 0x266214u: goto label_266214;
            case 0x266218u: goto label_266218;
            case 0x26621Cu: goto label_26621c;
            case 0x266220u: goto label_266220;
            case 0x266224u: goto label_266224;
            case 0x266228u: goto label_266228;
            case 0x26622Cu: goto label_26622c;
            case 0x266230u: goto label_266230;
            case 0x266234u: goto label_266234;
            case 0x266238u: goto label_266238;
            case 0x26623Cu: goto label_26623c;
            case 0x266240u: goto label_266240;
            case 0x266244u: goto label_266244;
            case 0x266248u: goto label_266248;
            case 0x26624Cu: goto label_26624c;
            case 0x266250u: goto label_266250;
            case 0x266254u: goto label_266254;
            case 0x266258u: goto label_266258;
            case 0x26625Cu: goto label_26625c;
            case 0x266260u: goto label_266260;
            case 0x266264u: goto label_266264;
            case 0x266268u: goto label_266268;
            case 0x26626Cu: goto label_26626c;
            case 0x266270u: goto label_266270;
            case 0x266274u: goto label_266274;
            case 0x266278u: goto label_266278;
            case 0x26627Cu: goto label_26627c;
            case 0x266280u: goto label_266280;
            case 0x266284u: goto label_266284;
            case 0x266288u: goto label_266288;
            case 0x26628Cu: goto label_26628c;
            case 0x266290u: goto label_266290;
            case 0x266294u: goto label_266294;
            case 0x266298u: goto label_266298;
            case 0x26629Cu: goto label_26629c;
            case 0x2662A0u: goto label_2662a0;
            case 0x2662A4u: goto label_2662a4;
            case 0x2662A8u: goto label_2662a8;
            case 0x2662ACu: goto label_2662ac;
            case 0x2662B0u: goto label_2662b0;
            case 0x2662B4u: goto label_2662b4;
            case 0x2662B8u: goto label_2662b8;
            case 0x2662BCu: goto label_2662bc;
            case 0x2662C0u: goto label_2662c0;
            case 0x2662C4u: goto label_2662c4;
            case 0x2662C8u: goto label_2662c8;
            case 0x2662CCu: goto label_2662cc;
            case 0x2662D0u: goto label_2662d0;
            case 0x2662D4u: goto label_2662d4;
            case 0x2662D8u: goto label_2662d8;
            case 0x2662DCu: goto label_2662dc;
            case 0x2662E0u: goto label_2662e0;
            case 0x2662E4u: goto label_2662e4;
            case 0x2662E8u: goto label_2662e8;
            case 0x2662ECu: goto label_2662ec;
            case 0x2662F0u: goto label_2662f0;
            case 0x2662F4u: goto label_2662f4;
            case 0x2662F8u: goto label_2662f8;
            case 0x2662FCu: goto label_2662fc;
            case 0x266300u: goto label_266300;
            case 0x266304u: goto label_266304;
            case 0x266308u: goto label_266308;
            case 0x26630Cu: goto label_26630c;
            case 0x266310u: goto label_266310;
            case 0x266314u: goto label_266314;
            case 0x266318u: goto label_266318;
            case 0x26631Cu: goto label_26631c;
            case 0x266320u: goto label_266320;
            case 0x266324u: goto label_266324;
            case 0x266328u: goto label_266328;
            case 0x26632Cu: goto label_26632c;
            case 0x266330u: goto label_266330;
            case 0x266334u: goto label_266334;
            case 0x266338u: goto label_266338;
            case 0x26633Cu: goto label_26633c;
            case 0x266340u: goto label_266340;
            case 0x266344u: goto label_266344;
            case 0x266348u: goto label_266348;
            case 0x26634Cu: goto label_26634c;
            case 0x266350u: goto label_266350;
            case 0x266354u: goto label_266354;
            case 0x266358u: goto label_266358;
            case 0x26635Cu: goto label_26635c;
            case 0x266360u: goto label_266360;
            case 0x266364u: goto label_266364;
            case 0x266368u: goto label_266368;
            case 0x26636Cu: goto label_26636c;
            case 0x266370u: goto label_266370;
            case 0x266374u: goto label_266374;
            case 0x266378u: goto label_266378;
            case 0x26637Cu: goto label_26637c;
            case 0x266380u: goto label_266380;
            case 0x266384u: goto label_266384;
            case 0x266388u: goto label_266388;
            case 0x26638Cu: goto label_26638c;
            case 0x266390u: goto label_266390;
            case 0x266394u: goto label_266394;
            case 0x266398u: goto label_266398;
            case 0x26639Cu: goto label_26639c;
            case 0x2663A0u: goto label_2663a0;
            case 0x2663A4u: goto label_2663a4;
            case 0x2663A8u: goto label_2663a8;
            case 0x2663ACu: goto label_2663ac;
            case 0x2663B0u: goto label_2663b0;
            case 0x2663B4u: goto label_2663b4;
            case 0x2663B8u: goto label_2663b8;
            case 0x2663BCu: goto label_2663bc;
            case 0x2663C0u: goto label_2663c0;
            case 0x2663C4u: goto label_2663c4;
            case 0x2663C8u: goto label_2663c8;
            case 0x2663CCu: goto label_2663cc;
            case 0x2663D0u: goto label_2663d0;
            case 0x2663D4u: goto label_2663d4;
            case 0x2663D8u: goto label_2663d8;
            case 0x2663DCu: goto label_2663dc;
            case 0x2663E0u: goto label_2663e0;
            case 0x2663E4u: goto label_2663e4;
            case 0x2663E8u: goto label_2663e8;
            case 0x2663ECu: goto label_2663ec;
            case 0x2663F0u: goto label_2663f0;
            case 0x2663F4u: goto label_2663f4;
            case 0x2663F8u: goto label_2663f8;
            case 0x2663FCu: goto label_2663fc;
            case 0x266400u: goto label_266400;
            case 0x266404u: goto label_266404;
            case 0x266408u: goto label_266408;
            case 0x26640Cu: goto label_26640c;
            case 0x266410u: goto label_266410;
            case 0x266414u: goto label_266414;
            case 0x266418u: goto label_266418;
            case 0x26641Cu: goto label_26641c;
            case 0x266420u: goto label_266420;
            case 0x266424u: goto label_266424;
            case 0x266428u: goto label_266428;
            case 0x26642Cu: goto label_26642c;
            case 0x266430u: goto label_266430;
            case 0x266434u: goto label_266434;
            case 0x266438u: goto label_266438;
            case 0x26643Cu: goto label_26643c;
            case 0x266440u: goto label_266440;
            case 0x266444u: goto label_266444;
            case 0x266448u: goto label_266448;
            case 0x26644Cu: goto label_26644c;
            case 0x266450u: goto label_266450;
            case 0x266454u: goto label_266454;
            case 0x266458u: goto label_266458;
            case 0x26645Cu: goto label_26645c;
            case 0x266460u: goto label_266460;
            case 0x266464u: goto label_266464;
            case 0x266468u: goto label_266468;
            case 0x26646Cu: goto label_26646c;
            case 0x266470u: goto label_266470;
            case 0x266474u: goto label_266474;
            case 0x266478u: goto label_266478;
            case 0x26647Cu: goto label_26647c;
            case 0x266480u: goto label_266480;
            case 0x266484u: goto label_266484;
            case 0x266488u: goto label_266488;
            case 0x26648Cu: goto label_26648c;
            case 0x266490u: goto label_266490;
            case 0x266494u: goto label_266494;
            case 0x266498u: goto label_266498;
            case 0x26649Cu: goto label_26649c;
            case 0x2664A0u: goto label_2664a0;
            case 0x2664A4u: goto label_2664a4;
            case 0x2664A8u: goto label_2664a8;
            case 0x2664ACu: goto label_2664ac;
            case 0x2664B0u: goto label_2664b0;
            case 0x2664B4u: goto label_2664b4;
            case 0x2664B8u: goto label_2664b8;
            case 0x2664BCu: goto label_2664bc;
            case 0x2664C0u: goto label_2664c0;
            case 0x2664C4u: goto label_2664c4;
            case 0x2664C8u: goto label_2664c8;
            case 0x2664CCu: goto label_2664cc;
            case 0x2664D0u: goto label_2664d0;
            case 0x2664D4u: goto label_2664d4;
            case 0x2664D8u: goto label_2664d8;
            case 0x2664DCu: goto label_2664dc;
            case 0x2664E0u: goto label_2664e0;
            case 0x2664E4u: goto label_2664e4;
            case 0x2664E8u: goto label_2664e8;
            case 0x2664ECu: goto label_2664ec;
            case 0x2664F0u: goto label_2664f0;
            case 0x2664F4u: goto label_2664f4;
            case 0x2664F8u: goto label_2664f8;
            case 0x2664FCu: goto label_2664fc;
            case 0x266500u: goto label_266500;
            case 0x266504u: goto label_266504;
            case 0x266508u: goto label_266508;
            case 0x26650Cu: goto label_26650c;
            case 0x266510u: goto label_266510;
            case 0x266514u: goto label_266514;
            case 0x266518u: goto label_266518;
            case 0x26651Cu: goto label_26651c;
            case 0x266520u: goto label_266520;
            case 0x266524u: goto label_266524;
            case 0x266528u: goto label_266528;
            case 0x26652Cu: goto label_26652c;
            case 0x266530u: goto label_266530;
            case 0x266534u: goto label_266534;
            case 0x266538u: goto label_266538;
            case 0x26653Cu: goto label_26653c;
            case 0x266540u: goto label_266540;
            case 0x266544u: goto label_266544;
            case 0x266548u: goto label_266548;
            case 0x26654Cu: goto label_26654c;
            case 0x266550u: goto label_266550;
            case 0x266554u: goto label_266554;
            case 0x266558u: goto label_266558;
            case 0x26655Cu: goto label_26655c;
            case 0x266560u: goto label_266560;
            case 0x266564u: goto label_266564;
            case 0x266568u: goto label_266568;
            case 0x26656Cu: goto label_26656c;
            case 0x266570u: goto label_266570;
            case 0x266574u: goto label_266574;
            case 0x266578u: goto label_266578;
            case 0x26657Cu: goto label_26657c;
            case 0x266580u: goto label_266580;
            case 0x266584u: goto label_266584;
            case 0x266588u: goto label_266588;
            case 0x26658Cu: goto label_26658c;
            case 0x266590u: goto label_266590;
            case 0x266594u: goto label_266594;
            case 0x266598u: goto label_266598;
            case 0x26659Cu: goto label_26659c;
            case 0x2665A0u: goto label_2665a0;
            case 0x2665A4u: goto label_2665a4;
            case 0x2665A8u: goto label_2665a8;
            case 0x2665ACu: goto label_2665ac;
            case 0x2665B0u: goto label_2665b0;
            case 0x2665B4u: goto label_2665b4;
            case 0x2665B8u: goto label_2665b8;
            case 0x2665BCu: goto label_2665bc;
            case 0x2665C0u: goto label_2665c0;
            case 0x2665C4u: goto label_2665c4;
            case 0x2665C8u: goto label_2665c8;
            case 0x2665CCu: goto label_2665cc;
            case 0x2665D0u: goto label_2665d0;
            case 0x2665D4u: goto label_2665d4;
            case 0x2665D8u: goto label_2665d8;
            case 0x2665DCu: goto label_2665dc;
            case 0x2665E0u: goto label_2665e0;
            case 0x2665E4u: goto label_2665e4;
            case 0x2665E8u: goto label_2665e8;
            case 0x2665ECu: goto label_2665ec;
            case 0x2665F0u: goto label_2665f0;
            case 0x2665F4u: goto label_2665f4;
            case 0x2665F8u: goto label_2665f8;
            case 0x2665FCu: goto label_2665fc;
            case 0x266600u: goto label_266600;
            case 0x266604u: goto label_266604;
            case 0x266608u: goto label_266608;
            case 0x26660Cu: goto label_26660c;
            default: break;
        }
        return;
    }
label_fallthrough_0x266608:
    ctx->pc = 0x266610u;
}
