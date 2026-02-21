#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_stats_display
// Address: 0x227b78 - 0x227fcc
void do_stats_display_0x227b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x227b78u;

label_227b78:
    // 0x227b78: 0x27bdffb0
    ctx->pc = 0x227b78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_227b7c:
    // 0x227b7c: 0xffbf0040
    ctx->pc = 0x227b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_227b80:
    // 0x227b80: 0xffb30030
    ctx->pc = 0x227b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_227b84:
    // 0x227b84: 0xffb20020
    ctx->pc = 0x227b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_227b88:
    // 0x227b88: 0xffb10010
    ctx->pc = 0x227b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_227b8c:
    // 0x227b8c: 0xffb00000
    ctx->pc = 0x227b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_227b90:
    // 0x227b90: 0x982d
    ctx->pc = 0x227b90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227b94:
    // 0x227b94: 0x24120001
    ctx->pc = 0x227b94u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_227b98:
    // 0x227b98: 0x2404ff00
    ctx->pc = 0x227b98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
label_227b9c:
    // 0x227b9c: 0x282d
    ctx->pc = 0x227b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227ba0:
    // 0x227ba0: 0x24060007
    ctx->pc = 0x227ba0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
label_227ba4:
    // 0x227ba4: 0x3c0700ff
    ctx->pc = 0x227ba4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_227ba8:
    // 0x227ba8: 0x34e7ffff
    ctx->pc = 0x227ba8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_227bac:
    // 0x227bac: 0x3c013f40
    ctx->pc = 0x227bacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16192 << 16));
label_227bb0:
    // 0x227bb0: 0x44816000
    ctx->pc = 0x227bb0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_227bb4:
    // 0x227bb4: 0x3c08003a
    ctx->pc = 0x227bb4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
label_227bb8:
    // 0x227bb8: 0xc080510
label_227bbc:
    if (ctx->pc == 0x227BBCu) {
        ctx->pc = 0x227BBCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 28024));
        ctx->pc = 0x227BC0u;
        goto label_227bc0;
    }
    ctx->pc = 0x227BB8u;
    SET_GPR_U32(ctx, 31, 0x227BC0u);
    ctx->pc = 0x227BBCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 28024));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227BC0u; }
    }
    if (ctx->pc != 0x227BC0u) { return; }
    ctx->pc = 0x227BC0u;
label_227bc0:
    // 0x227bc0: 0x882d
    ctx->pc = 0x227bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227bc4:
    // 0x227bc4: 0x3c020032
    ctx->pc = 0x227bc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_227bc8:
    // 0x227bc8: 0x24501bc0
    ctx->pc = 0x227bc8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 7104));
label_227bcc:
    // 0x227bcc: 0x0
    ctx->pc = 0x227bccu;
    // NOP
label_227bd0:
    // 0x227bd0: 0x8e0300fc
    ctx->pc = 0x227bd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_227bd4:
    // 0x227bd4: 0x24020001
    ctx->pc = 0x227bd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_227bd8:
    // 0x227bd8: 0x10620005
label_227bdc:
    if (ctx->pc == 0x227BDCu) {
        ctx->pc = 0x227BDCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x227BE0u;
        goto label_227be0;
    }
    ctx->pc = 0x227BD8u;
    {
        const bool branch_taken_0x227bd8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x227BDCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x227bd8) {
            ctx->pc = 0x227BF0u;
            goto label_227bf0;
        }
    }
    ctx->pc = 0x227BE0u;
label_227be0:
    // 0x227be0: 0x10620003
label_227be4:
    if (ctx->pc == 0x227BE4u) {
        ctx->pc = 0x227BE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x227BE8u;
        goto label_227be8;
    }
    ctx->pc = 0x227BE0u;
    {
        const bool branch_taken_0x227be0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x227BE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x227be0) {
            ctx->pc = 0x227BF0u;
            goto label_227bf0;
        }
    }
    ctx->pc = 0x227BE8u;
label_227be8:
    // 0x227be8: 0x546200db
label_227bec:
    if (ctx->pc == 0x227BECu) {
        ctx->pc = 0x227BECu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x227BF0u;
        goto label_227bf0;
    }
    ctx->pc = 0x227BE8u;
    {
        const bool branch_taken_0x227be8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x227be8) {
            ctx->pc = 0x227BECu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x227F58u;
            goto label_227f58;
        }
    }
    ctx->pc = 0x227BF0u;
label_227bf0:
    // 0x227bf0: 0xc089d86
label_227bf4:
    if (ctx->pc == 0x227BF4u) {
        ctx->pc = 0x227BF4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227BF8u;
        goto label_227bf8;
    }
    ctx->pc = 0x227BF0u;
    SET_GPR_U32(ctx, 31, 0x227BF8u);
    ctx->pc = 0x227BF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x227618u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_pname_0x227618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227BF8u; }
    }
    if (ctx->pc != 0x227BF8u) { return; }
    ctx->pc = 0x227BF8u;
label_227bf8:
    // 0x227bf8: 0x8e030980
    ctx->pc = 0x227bf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
label_227bfc:
    // 0x227bfc: 0x2c620007
    ctx->pc = 0x227bfcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 7));
label_227c00:
    // 0x227c00: 0x104000cc
label_227c04:
    if (ctx->pc == 0x227C04u) {
        ctx->pc = 0x227C04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x227C08u;
        goto label_227c08;
    }
    ctx->pc = 0x227C00u;
    {
        const bool branch_taken_0x227c00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x227C04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x227c00) {
            ctx->pc = 0x227F34u;
            goto label_227f34;
        }
    }
    ctx->pc = 0x227C08u;
label_227c08:
    // 0x227c08: 0x24426d90
    ctx->pc = 0x227c08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28048));
label_227c0c:
    // 0x227c0c: 0x31880
    ctx->pc = 0x227c0cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_227c10:
    // 0x227c10: 0x621821
    ctx->pc = 0x227c10u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_227c14:
    // 0x227c14: 0x8c620000
    ctx->pc = 0x227c14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_227c18:
    // 0x227c18: 0x400008
label_227c1c:
    if (ctx->pc == 0x227C1Cu) {
        ctx->pc = 0x227C20u;
        goto label_227c20;
    }
    ctx->pc = 0x227C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227B78u: goto label_227b78;
            case 0x227B7Cu: goto label_227b7c;
            case 0x227B80u: goto label_227b80;
            case 0x227B84u: goto label_227b84;
            case 0x227B88u: goto label_227b88;
            case 0x227B8Cu: goto label_227b8c;
            case 0x227B90u: goto label_227b90;
            case 0x227B94u: goto label_227b94;
            case 0x227B98u: goto label_227b98;
            case 0x227B9Cu: goto label_227b9c;
            case 0x227BA0u: goto label_227ba0;
            case 0x227BA4u: goto label_227ba4;
            case 0x227BA8u: goto label_227ba8;
            case 0x227BACu: goto label_227bac;
            case 0x227BB0u: goto label_227bb0;
            case 0x227BB4u: goto label_227bb4;
            case 0x227BB8u: goto label_227bb8;
            case 0x227BBCu: goto label_227bbc;
            case 0x227BC0u: goto label_227bc0;
            case 0x227BC4u: goto label_227bc4;
            case 0x227BC8u: goto label_227bc8;
            case 0x227BCCu: goto label_227bcc;
            case 0x227BD0u: goto label_227bd0;
            case 0x227BD4u: goto label_227bd4;
            case 0x227BD8u: goto label_227bd8;
            case 0x227BDCu: goto label_227bdc;
            case 0x227BE0u: goto label_227be0;
            case 0x227BE4u: goto label_227be4;
            case 0x227BE8u: goto label_227be8;
            case 0x227BECu: goto label_227bec;
            case 0x227BF0u: goto label_227bf0;
            case 0x227BF4u: goto label_227bf4;
            case 0x227BF8u: goto label_227bf8;
            case 0x227BFCu: goto label_227bfc;
            case 0x227C00u: goto label_227c00;
            case 0x227C04u: goto label_227c04;
            case 0x227C08u: goto label_227c08;
            case 0x227C0Cu: goto label_227c0c;
            case 0x227C10u: goto label_227c10;
            case 0x227C14u: goto label_227c14;
            case 0x227C18u: goto label_227c18;
            case 0x227C1Cu: goto label_227c1c;
            case 0x227C20u: goto label_227c20;
            case 0x227C24u: goto label_227c24;
            case 0x227C28u: goto label_227c28;
            case 0x227C2Cu: goto label_227c2c;
            case 0x227C30u: goto label_227c30;
            case 0x227C34u: goto label_227c34;
            case 0x227C38u: goto label_227c38;
            case 0x227C3Cu: goto label_227c3c;
            case 0x227C40u: goto label_227c40;
            case 0x227C44u: goto label_227c44;
            case 0x227C48u: goto label_227c48;
            case 0x227C4Cu: goto label_227c4c;
            case 0x227C50u: goto label_227c50;
            case 0x227C54u: goto label_227c54;
            case 0x227C58u: goto label_227c58;
            case 0x227C5Cu: goto label_227c5c;
            case 0x227C60u: goto label_227c60;
            case 0x227C64u: goto label_227c64;
            case 0x227C68u: goto label_227c68;
            case 0x227C6Cu: goto label_227c6c;
            case 0x227C70u: goto label_227c70;
            case 0x227C74u: goto label_227c74;
            case 0x227C78u: goto label_227c78;
            case 0x227C7Cu: goto label_227c7c;
            case 0x227C80u: goto label_227c80;
            case 0x227C84u: goto label_227c84;
            case 0x227C88u: goto label_227c88;
            case 0x227C8Cu: goto label_227c8c;
            case 0x227C90u: goto label_227c90;
            case 0x227C94u: goto label_227c94;
            case 0x227C98u: goto label_227c98;
            case 0x227C9Cu: goto label_227c9c;
            case 0x227CA0u: goto label_227ca0;
            case 0x227CA4u: goto label_227ca4;
            case 0x227CA8u: goto label_227ca8;
            case 0x227CACu: goto label_227cac;
            case 0x227CB0u: goto label_227cb0;
            case 0x227CB4u: goto label_227cb4;
            case 0x227CB8u: goto label_227cb8;
            case 0x227CBCu: goto label_227cbc;
            case 0x227CC0u: goto label_227cc0;
            case 0x227CC4u: goto label_227cc4;
            case 0x227CC8u: goto label_227cc8;
            case 0x227CCCu: goto label_227ccc;
            case 0x227CD0u: goto label_227cd0;
            case 0x227CD4u: goto label_227cd4;
            case 0x227CD8u: goto label_227cd8;
            case 0x227CDCu: goto label_227cdc;
            case 0x227CE0u: goto label_227ce0;
            case 0x227CE4u: goto label_227ce4;
            case 0x227CE8u: goto label_227ce8;
            case 0x227CECu: goto label_227cec;
            case 0x227CF0u: goto label_227cf0;
            case 0x227CF4u: goto label_227cf4;
            case 0x227CF8u: goto label_227cf8;
            case 0x227CFCu: goto label_227cfc;
            case 0x227D00u: goto label_227d00;
            case 0x227D04u: goto label_227d04;
            case 0x227D08u: goto label_227d08;
            case 0x227D0Cu: goto label_227d0c;
            case 0x227D10u: goto label_227d10;
            case 0x227D14u: goto label_227d14;
            case 0x227D18u: goto label_227d18;
            case 0x227D1Cu: goto label_227d1c;
            case 0x227D20u: goto label_227d20;
            case 0x227D24u: goto label_227d24;
            case 0x227D28u: goto label_227d28;
            case 0x227D2Cu: goto label_227d2c;
            case 0x227D30u: goto label_227d30;
            case 0x227D34u: goto label_227d34;
            case 0x227D38u: goto label_227d38;
            case 0x227D3Cu: goto label_227d3c;
            case 0x227D40u: goto label_227d40;
            case 0x227D44u: goto label_227d44;
            case 0x227D48u: goto label_227d48;
            case 0x227D4Cu: goto label_227d4c;
            case 0x227D50u: goto label_227d50;
            case 0x227D54u: goto label_227d54;
            case 0x227D58u: goto label_227d58;
            case 0x227D5Cu: goto label_227d5c;
            case 0x227D60u: goto label_227d60;
            case 0x227D64u: goto label_227d64;
            case 0x227D68u: goto label_227d68;
            case 0x227D6Cu: goto label_227d6c;
            case 0x227D70u: goto label_227d70;
            case 0x227D74u: goto label_227d74;
            case 0x227D78u: goto label_227d78;
            case 0x227D7Cu: goto label_227d7c;
            case 0x227D80u: goto label_227d80;
            case 0x227D84u: goto label_227d84;
            case 0x227D88u: goto label_227d88;
            case 0x227D8Cu: goto label_227d8c;
            case 0x227D90u: goto label_227d90;
            case 0x227D94u: goto label_227d94;
            case 0x227D98u: goto label_227d98;
            case 0x227D9Cu: goto label_227d9c;
            case 0x227DA0u: goto label_227da0;
            case 0x227DA4u: goto label_227da4;
            case 0x227DA8u: goto label_227da8;
            case 0x227DACu: goto label_227dac;
            case 0x227DB0u: goto label_227db0;
            case 0x227DB4u: goto label_227db4;
            case 0x227DB8u: goto label_227db8;
            case 0x227DBCu: goto label_227dbc;
            case 0x227DC0u: goto label_227dc0;
            case 0x227DC4u: goto label_227dc4;
            case 0x227DC8u: goto label_227dc8;
            case 0x227DCCu: goto label_227dcc;
            case 0x227DD0u: goto label_227dd0;
            case 0x227DD4u: goto label_227dd4;
            case 0x227DD8u: goto label_227dd8;
            case 0x227DDCu: goto label_227ddc;
            case 0x227DE0u: goto label_227de0;
            case 0x227DE4u: goto label_227de4;
            case 0x227DE8u: goto label_227de8;
            case 0x227DECu: goto label_227dec;
            case 0x227DF0u: goto label_227df0;
            case 0x227DF4u: goto label_227df4;
            case 0x227DF8u: goto label_227df8;
            case 0x227DFCu: goto label_227dfc;
            case 0x227E00u: goto label_227e00;
            case 0x227E04u: goto label_227e04;
            case 0x227E08u: goto label_227e08;
            case 0x227E0Cu: goto label_227e0c;
            case 0x227E10u: goto label_227e10;
            case 0x227E14u: goto label_227e14;
            case 0x227E18u: goto label_227e18;
            case 0x227E1Cu: goto label_227e1c;
            case 0x227E20u: goto label_227e20;
            case 0x227E24u: goto label_227e24;
            case 0x227E28u: goto label_227e28;
            case 0x227E2Cu: goto label_227e2c;
            case 0x227E30u: goto label_227e30;
            case 0x227E34u: goto label_227e34;
            case 0x227E38u: goto label_227e38;
            case 0x227E3Cu: goto label_227e3c;
            case 0x227E40u: goto label_227e40;
            case 0x227E44u: goto label_227e44;
            case 0x227E48u: goto label_227e48;
            case 0x227E4Cu: goto label_227e4c;
            case 0x227E50u: goto label_227e50;
            case 0x227E54u: goto label_227e54;
            case 0x227E58u: goto label_227e58;
            case 0x227E5Cu: goto label_227e5c;
            case 0x227E60u: goto label_227e60;
            case 0x227E64u: goto label_227e64;
            case 0x227E68u: goto label_227e68;
            case 0x227E6Cu: goto label_227e6c;
            case 0x227E70u: goto label_227e70;
            case 0x227E74u: goto label_227e74;
            case 0x227E78u: goto label_227e78;
            case 0x227E7Cu: goto label_227e7c;
            case 0x227E80u: goto label_227e80;
            case 0x227E84u: goto label_227e84;
            case 0x227E88u: goto label_227e88;
            case 0x227E8Cu: goto label_227e8c;
            case 0x227E90u: goto label_227e90;
            case 0x227E94u: goto label_227e94;
            case 0x227E98u: goto label_227e98;
            case 0x227E9Cu: goto label_227e9c;
            case 0x227EA0u: goto label_227ea0;
            case 0x227EA4u: goto label_227ea4;
            case 0x227EA8u: goto label_227ea8;
            case 0x227EACu: goto label_227eac;
            case 0x227EB0u: goto label_227eb0;
            case 0x227EB4u: goto label_227eb4;
            case 0x227EB8u: goto label_227eb8;
            case 0x227EBCu: goto label_227ebc;
            case 0x227EC0u: goto label_227ec0;
            case 0x227EC4u: goto label_227ec4;
            case 0x227EC8u: goto label_227ec8;
            case 0x227ECCu: goto label_227ecc;
            case 0x227ED0u: goto label_227ed0;
            case 0x227ED4u: goto label_227ed4;
            case 0x227ED8u: goto label_227ed8;
            case 0x227EDCu: goto label_227edc;
            case 0x227EE0u: goto label_227ee0;
            case 0x227EE4u: goto label_227ee4;
            case 0x227EE8u: goto label_227ee8;
            case 0x227EECu: goto label_227eec;
            case 0x227EF0u: goto label_227ef0;
            case 0x227EF4u: goto label_227ef4;
            case 0x227EF8u: goto label_227ef8;
            case 0x227EFCu: goto label_227efc;
            case 0x227F00u: goto label_227f00;
            case 0x227F04u: goto label_227f04;
            case 0x227F08u: goto label_227f08;
            case 0x227F0Cu: goto label_227f0c;
            case 0x227F10u: goto label_227f10;
            case 0x227F14u: goto label_227f14;
            case 0x227F18u: goto label_227f18;
            case 0x227F1Cu: goto label_227f1c;
            case 0x227F20u: goto label_227f20;
            case 0x227F24u: goto label_227f24;
            case 0x227F28u: goto label_227f28;
            case 0x227F2Cu: goto label_227f2c;
            case 0x227F30u: goto label_227f30;
            case 0x227F34u: goto label_227f34;
            case 0x227F38u: goto label_227f38;
            case 0x227F3Cu: goto label_227f3c;
            case 0x227F40u: goto label_227f40;
            case 0x227F44u: goto label_227f44;
            case 0x227F48u: goto label_227f48;
            case 0x227F4Cu: goto label_227f4c;
            case 0x227F50u: goto label_227f50;
            case 0x227F54u: goto label_227f54;
            case 0x227F58u: goto label_227f58;
            case 0x227F5Cu: goto label_227f5c;
            case 0x227F60u: goto label_227f60;
            case 0x227F64u: goto label_227f64;
            case 0x227F68u: goto label_227f68;
            case 0x227F6Cu: goto label_227f6c;
            case 0x227F70u: goto label_227f70;
            case 0x227F74u: goto label_227f74;
            case 0x227F78u: goto label_227f78;
            case 0x227F7Cu: goto label_227f7c;
            case 0x227F80u: goto label_227f80;
            case 0x227F84u: goto label_227f84;
            case 0x227F88u: goto label_227f88;
            case 0x227F8Cu: goto label_227f8c;
            case 0x227F90u: goto label_227f90;
            case 0x227F94u: goto label_227f94;
            case 0x227F98u: goto label_227f98;
            case 0x227F9Cu: goto label_227f9c;
            case 0x227FA0u: goto label_227fa0;
            case 0x227FA4u: goto label_227fa4;
            case 0x227FA8u: goto label_227fa8;
            case 0x227FACu: goto label_227fac;
            case 0x227FB0u: goto label_227fb0;
            case 0x227FB4u: goto label_227fb4;
            case 0x227FB8u: goto label_227fb8;
            case 0x227FBCu: goto label_227fbc;
            case 0x227FC0u: goto label_227fc0;
            case 0x227FC4u: goto label_227fc4;
            case 0x227FC8u: goto label_227fc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x227C20u;
label_227c20:
    // 0x227c20: 0x3c05003c
    ctx->pc = 0x227c20u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
label_227c24:
    // 0x227c24: 0x24a51838
    ctx->pc = 0x227c24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6200));
label_227c28:
    // 0x227c28: 0x113080
    ctx->pc = 0x227c28u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 17), 2));
label_227c2c:
    // 0x227c2c: 0xc52821
    ctx->pc = 0x227c2cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_227c30:
    // 0x227c30: 0x3c04003c
    ctx->pc = 0x227c30u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_227c34:
    // 0x227c34: 0x24841848
    ctx->pc = 0x227c34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6216));
label_227c38:
    // 0x227c38: 0xc42021
    ctx->pc = 0x227c38u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_227c3c:
    // 0x227c3c: 0x3c03003c
    ctx->pc = 0x227c3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_227c40:
    // 0x227c40: 0x24631828
    ctx->pc = 0x227c40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6184));
label_227c44:
    // 0x227c44: 0xc31821
    ctx->pc = 0x227c44u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_227c48:
    // 0x227c48: 0x3c02003c
    ctx->pc = 0x227c48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_227c4c:
    // 0x227c4c: 0x24421858
    ctx->pc = 0x227c4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6232));
label_227c50:
    // 0x227c50: 0xc21021
    ctx->pc = 0x227c50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_227c54:
    // 0x227c54: 0x8c420000
    ctx->pc = 0x227c54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_227c58:
    // 0x227c58: 0x2c420001
    ctx->pc = 0x227c58u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_227c5c:
    // 0x227c5c: 0xac620000
    ctx->pc = 0x227c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_227c60:
    // 0x227c60: 0xac820000
    ctx->pc = 0x227c60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_227c64:
    // 0x227c64: 0xaca20000
    ctx->pc = 0x227c64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_227c68:
    // 0x227c68: 0x3c02003c
    ctx->pc = 0x227c68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_227c6c:
    // 0x227c6c: 0x24421868
    ctx->pc = 0x227c6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6248));
label_227c70:
    // 0x227c70: 0xc21021
    ctx->pc = 0x227c70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_227c74:
    // 0x227c74: 0x240301e0
    ctx->pc = 0x227c74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 480));
label_227c78:
    // 0x227c78: 0xac430000
    ctx->pc = 0x227c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_227c7c:
    // 0x227c7c: 0x8e020980
    ctx->pc = 0x227c7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
label_227c80:
    // 0x227c80: 0x24420001
    ctx->pc = 0x227c80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_227c84:
    // 0x227c84: 0xae020980
    ctx->pc = 0x227c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
label_227c88:
    // 0x227c88: 0x3c02003c
    ctx->pc = 0x227c88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_227c8c:
    // 0x227c8c: 0x24421878
    ctx->pc = 0x227c8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6264));
label_227c90:
    // 0x227c90: 0xc23021
    ctx->pc = 0x227c90u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_227c94:
    // 0x227c94: 0x8e02000c
    ctx->pc = 0x227c94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_227c98:
    // 0x227c98: 0x2403001c
    ctx->pc = 0x227c98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_227c9c:
    // 0x227c9c: 0x432018
    ctx->pc = 0x227c9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_227ca0:
    // 0x227ca0: 0x901021
    ctx->pc = 0x227ca0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_227ca4:
    // 0x227ca4: 0x8c430b2c
    ctx->pc = 0x227ca4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 2860)));
label_227ca8:
    // 0x227ca8: 0x2402003c
    ctx->pc = 0x227ca8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
label_227cac:
    // 0x227cac: 0x62001a
    ctx->pc = 0x227cacu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_227cb0:
    // 0x227cb0: 0x1812
    ctx->pc = 0x227cb0u;
    SET_GPR_U32(ctx, 3, ctx->lo);
label_227cb4:
    // 0x227cb4: 0x50400001
label_227cb8:
    if (ctx->pc == 0x227CB8u) {
        ctx->pc = 0x227CB8u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x227CBCu;
        goto label_227cbc;
    }
    ctx->pc = 0x227CB4u;
    {
        const bool branch_taken_0x227cb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x227cb4) {
            ctx->pc = 0x227CB8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x227CBCu;
            goto label_227cbc;
        }
    }
    ctx->pc = 0x227CBCu;
label_227cbc:
    // 0x227cbc: 0x1c600003
label_227cc0:
    if (ctx->pc == 0x227CC0u) {
        ctx->pc = 0x227CC0u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x227CC4u;
        goto label_227cc4;
    }
    ctx->pc = 0x227CBCu;
    {
        const bool branch_taken_0x227cbc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x227CC0u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x227cbc) {
            ctx->pc = 0x227CCCu;
            goto label_227ccc;
        }
    }
    ctx->pc = 0x227CC4u;
label_227cc4:
    // 0x227cc4: 0x24020001
    ctx->pc = 0x227cc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_227cc8:
    // 0x227cc8: 0xacc20000
    ctx->pc = 0x227cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_227ccc:
    // 0x227ccc: 0x902d
    ctx->pc = 0x227cccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227cd0:
    // 0x227cd0: 0xc089cda
label_227cd4:
    if (ctx->pc == 0x227CD4u) {
        ctx->pc = 0x227CD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227CD8u;
        goto label_227cd8;
    }
    ctx->pc = 0x227CD0u;
    SET_GPR_U32(ctx, 31, 0x227CD8u);
    ctx->pc = 0x227CD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x227368u;
    {
        const uint32_t __entryPc = ctx->pc;
        tally_enemies_0x227368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CD8u; }
    }
    if (ctx->pc != 0x227CD8u) { return; }
    ctx->pc = 0x227CD8u;
label_227cd8:
    // 0x227cd8: 0x10400016
label_227cdc:
    if (ctx->pc == 0x227CDCu) {
        ctx->pc = 0x227CDCu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x227CE0u;
        goto label_227ce0;
    }
    ctx->pc = 0x227CD8u;
    {
        const bool branch_taken_0x227cd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x227CDCu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x227cd8) {
            ctx->pc = 0x227D34u;
            goto label_227d34;
        }
    }
    ctx->pc = 0x227CE0u;
label_227ce0:
    // 0x227ce0: 0x8e020980
    ctx->pc = 0x227ce0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
label_227ce4:
    // 0x227ce4: 0x24420001
    ctx->pc = 0x227ce4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_227ce8:
    // 0x227ce8: 0xae020980
    ctx->pc = 0x227ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
label_227cec:
    // 0x227cec: 0x3c02003c
    ctx->pc = 0x227cecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_227cf0:
    // 0x227cf0: 0x24421878
    ctx->pc = 0x227cf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6264));
label_227cf4:
    // 0x227cf4: 0x622021
    ctx->pc = 0x227cf4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_227cf8:
    // 0x227cf8: 0x8e02000c
    ctx->pc = 0x227cf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_227cfc:
    // 0x227cfc: 0x2403001c
    ctx->pc = 0x227cfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_227d00:
    // 0x227d00: 0x432818
    ctx->pc = 0x227d00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_227d04:
    // 0x227d04: 0xb01021
    ctx->pc = 0x227d04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_227d08:
    // 0x227d08: 0x8c430b3c
    ctx->pc = 0x227d08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 2876)));
label_227d0c:
    // 0x227d0c: 0x2402003c
    ctx->pc = 0x227d0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
label_227d10:
    // 0x227d10: 0x62001a
    ctx->pc = 0x227d10u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_227d14:
    // 0x227d14: 0x1812
    ctx->pc = 0x227d14u;
    SET_GPR_U32(ctx, 3, ctx->lo);
label_227d18:
    // 0x227d18: 0x50400001
label_227d1c:
    if (ctx->pc == 0x227D1Cu) {
        ctx->pc = 0x227D1Cu;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x227D20u;
        goto label_227d20;
    }
    ctx->pc = 0x227D18u;
    {
        const bool branch_taken_0x227d18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x227d18) {
            ctx->pc = 0x227D1Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x227D20u;
            goto label_227d20;
        }
    }
    ctx->pc = 0x227D20u;
label_227d20:
    // 0x227d20: 0x1c600005
label_227d24:
    if (ctx->pc == 0x227D24u) {
        ctx->pc = 0x227D24u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x227D28u;
        goto label_227d28;
    }
    ctx->pc = 0x227D20u;
    {
        const bool branch_taken_0x227d20 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x227D24u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x227d20) {
            ctx->pc = 0x227D38u;
            goto label_227d38;
        }
    }
    ctx->pc = 0x227D28u;
label_227d28:
    // 0x227d28: 0x24020001
    ctx->pc = 0x227d28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_227d2c:
    // 0x227d2c: 0x10000002
label_227d30:
    if (ctx->pc == 0x227D30u) {
        ctx->pc = 0x227D30u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x227D34u;
        goto label_227d34;
    }
    ctx->pc = 0x227D2Cu;
    {
        const bool branch_taken_0x227d2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x227D30u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x227d2c) {
            ctx->pc = 0x227D38u;
            goto label_227d38;
        }
    }
    ctx->pc = 0x227D34u;
label_227d34:
    // 0x227d34: 0x24130001
    ctx->pc = 0x227d34u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_227d38:
    // 0x227d38: 0xc089db2
label_227d3c:
    if (ctx->pc == 0x227D3Cu) {
        ctx->pc = 0x227D3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227D40u;
        goto label_227d40;
    }
    ctx->pc = 0x227D38u;
    SET_GPR_U32(ctx, 31, 0x227D40u);
    ctx->pc = 0x227D3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2276C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_enemies_0x2276c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D40u; }
    }
    if (ctx->pc != 0x227D40u) { return; }
    ctx->pc = 0x227D40u;
label_227d40:
    // 0x227d40: 0x10000085
label_227d44:
    if (ctx->pc == 0x227D44u) {
        ctx->pc = 0x227D44u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x227D48u;
        goto label_227d48;
    }
    ctx->pc = 0x227D40u;
    {
        const bool branch_taken_0x227d40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x227D44u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x227d40) {
            ctx->pc = 0x227F58u;
            goto label_227f58;
        }
    }
    ctx->pc = 0x227D48u;
label_227d48:
    // 0x227d48: 0x902d
    ctx->pc = 0x227d48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227d4c:
    // 0x227d4c: 0xc089db2
label_227d50:
    if (ctx->pc == 0x227D50u) {
        ctx->pc = 0x227D50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227D54u;
        goto label_227d54;
    }
    ctx->pc = 0x227D4Cu;
    SET_GPR_U32(ctx, 31, 0x227D54u);
    ctx->pc = 0x227D50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2276C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_enemies_0x2276c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D54u; }
    }
    if (ctx->pc != 0x227D54u) { return; }
    ctx->pc = 0x227D54u;
label_227d54:
    // 0x227d54: 0xc089d12
label_227d58:
    if (ctx->pc == 0x227D58u) {
        ctx->pc = 0x227D58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227D5Cu;
        goto label_227d5c;
    }
    ctx->pc = 0x227D54u;
    SET_GPR_U32(ctx, 31, 0x227D5Cu);
    ctx->pc = 0x227D58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x227448u;
    {
        const uint32_t __entryPc = ctx->pc;
        tally_generators_0x227448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D5Cu; }
    }
    if (ctx->pc != 0x227D5Cu) { return; }
    ctx->pc = 0x227D5Cu;
label_227d5c:
    // 0x227d5c: 0x10400016
label_227d60:
    if (ctx->pc == 0x227D60u) {
        ctx->pc = 0x227D60u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x227D64u;
        goto label_227d64;
    }
    ctx->pc = 0x227D5Cu;
    {
        const bool branch_taken_0x227d5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x227D60u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x227d5c) {
            ctx->pc = 0x227DB8u;
            goto label_227db8;
        }
    }
    ctx->pc = 0x227D64u;
label_227d64:
    // 0x227d64: 0x8e020980
    ctx->pc = 0x227d64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
label_227d68:
    // 0x227d68: 0x24420001
    ctx->pc = 0x227d68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_227d6c:
    // 0x227d6c: 0xae020980
    ctx->pc = 0x227d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
label_227d70:
    // 0x227d70: 0x3c02003c
    ctx->pc = 0x227d70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_227d74:
    // 0x227d74: 0x24421878
    ctx->pc = 0x227d74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6264));
label_227d78:
    // 0x227d78: 0x622021
    ctx->pc = 0x227d78u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_227d7c:
    // 0x227d7c: 0x8e02000c
    ctx->pc = 0x227d7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_227d80:
    // 0x227d80: 0x2403001c
    ctx->pc = 0x227d80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_227d84:
    // 0x227d84: 0x432818
    ctx->pc = 0x227d84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_227d88:
    // 0x227d88: 0xb01021
    ctx->pc = 0x227d88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_227d8c:
    // 0x227d8c: 0x8c430b40
    ctx->pc = 0x227d8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 2880)));
label_227d90:
    // 0x227d90: 0x2402003c
    ctx->pc = 0x227d90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
label_227d94:
    // 0x227d94: 0x62001a
    ctx->pc = 0x227d94u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_227d98:
    // 0x227d98: 0x1812
    ctx->pc = 0x227d98u;
    SET_GPR_U32(ctx, 3, ctx->lo);
label_227d9c:
    // 0x227d9c: 0x50400001
label_227da0:
    if (ctx->pc == 0x227DA0u) {
        ctx->pc = 0x227DA0u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x227DA4u;
        goto label_227da4;
    }
    ctx->pc = 0x227D9Cu;
    {
        const bool branch_taken_0x227d9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x227d9c) {
            ctx->pc = 0x227DA0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x227DA4u;
            goto label_227da4;
        }
    }
    ctx->pc = 0x227DA4u;
label_227da4:
    // 0x227da4: 0x1c600005
label_227da8:
    if (ctx->pc == 0x227DA8u) {
        ctx->pc = 0x227DA8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x227DACu;
        goto label_227dac;
    }
    ctx->pc = 0x227DA4u;
    {
        const bool branch_taken_0x227da4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x227DA8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x227da4) {
            ctx->pc = 0x227DBCu;
            goto label_227dbc;
        }
    }
    ctx->pc = 0x227DACu;
label_227dac:
    // 0x227dac: 0x24020001
    ctx->pc = 0x227dacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_227db0:
    // 0x227db0: 0x10000002
label_227db4:
    if (ctx->pc == 0x227DB4u) {
        ctx->pc = 0x227DB4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x227DB8u;
        goto label_227db8;
    }
    ctx->pc = 0x227DB0u;
    {
        const bool branch_taken_0x227db0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x227DB4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x227db0) {
            ctx->pc = 0x227DBCu;
            goto label_227dbc;
        }
    }
    ctx->pc = 0x227DB8u;
label_227db8:
    // 0x227db8: 0x24130001
    ctx->pc = 0x227db8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_227dbc:
    // 0x227dbc: 0xc089df6
label_227dc0:
    if (ctx->pc == 0x227DC0u) {
        ctx->pc = 0x227DC0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227DC4u;
        goto label_227dc4;
    }
    ctx->pc = 0x227DBCu;
    SET_GPR_U32(ctx, 31, 0x227DC4u);
    ctx->pc = 0x227DC0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2277D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_generators_0x2277d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227DC4u; }
    }
    if (ctx->pc != 0x227DC4u) { return; }
    ctx->pc = 0x227DC4u;
label_227dc4:
    // 0x227dc4: 0x10000064
label_227dc8:
    if (ctx->pc == 0x227DC8u) {
        ctx->pc = 0x227DC8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x227DCCu;
        goto label_227dcc;
    }
    ctx->pc = 0x227DC4u;
    {
        const bool branch_taken_0x227dc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x227DC8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x227dc4) {
            ctx->pc = 0x227F58u;
            goto label_227f58;
        }
    }
    ctx->pc = 0x227DCCu;
label_227dcc:
    // 0x227dcc: 0x902d
    ctx->pc = 0x227dccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227dd0:
    // 0x227dd0: 0xc089db2
label_227dd4:
    if (ctx->pc == 0x227DD4u) {
        ctx->pc = 0x227DD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227DD8u;
        goto label_227dd8;
    }
    ctx->pc = 0x227DD0u;
    SET_GPR_U32(ctx, 31, 0x227DD8u);
    ctx->pc = 0x227DD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2276C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_enemies_0x2276c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227DD8u; }
    }
    if (ctx->pc != 0x227DD8u) { return; }
    ctx->pc = 0x227DD8u;
label_227dd8:
    // 0x227dd8: 0xc089df6
label_227ddc:
    if (ctx->pc == 0x227DDCu) {
        ctx->pc = 0x227DDCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227DE0u;
        goto label_227de0;
    }
    ctx->pc = 0x227DD8u;
    SET_GPR_U32(ctx, 31, 0x227DE0u);
    ctx->pc = 0x227DDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2277D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_generators_0x2277d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227DE0u; }
    }
    if (ctx->pc != 0x227DE0u) { return; }
    ctx->pc = 0x227DE0u;
label_227de0:
    // 0x227de0: 0xc089ca2
label_227de4:
    if (ctx->pc == 0x227DE4u) {
        ctx->pc = 0x227DE4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227DE8u;
        goto label_227de8;
    }
    ctx->pc = 0x227DE0u;
    SET_GPR_U32(ctx, 31, 0x227DE8u);
    ctx->pc = 0x227DE4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x227288u;
    {
        const uint32_t __entryPc = ctx->pc;
        tally_treasures_0x227288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227DE8u; }
    }
    if (ctx->pc != 0x227DE8u) { return; }
    ctx->pc = 0x227DE8u;
label_227de8:
    // 0x227de8: 0x10400021
label_227dec:
    if (ctx->pc == 0x227DECu) {
        ctx->pc = 0x227DECu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x227DF0u;
        goto label_227df0;
    }
    ctx->pc = 0x227DE8u;
    {
        const bool branch_taken_0x227de8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x227DECu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x227de8) {
            ctx->pc = 0x227E70u;
            goto label_227e70;
        }
    }
    ctx->pc = 0x227DF0u;
label_227df0:
    // 0x227df0: 0x8e020980
    ctx->pc = 0x227df0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
label_227df4:
    // 0x227df4: 0x24420001
    ctx->pc = 0x227df4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_227df8:
    // 0x227df8: 0xae020980
    ctx->pc = 0x227df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
label_227dfc:
    // 0x227dfc: 0x3c02003c
    ctx->pc = 0x227dfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_227e00:
    // 0x227e00: 0x24421878
    ctx->pc = 0x227e00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6264));
label_227e04:
    // 0x227e04: 0x622021
    ctx->pc = 0x227e04u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_227e08:
    // 0x227e08: 0x8e02000c
    ctx->pc = 0x227e08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_227e0c:
    // 0x227e0c: 0x2403001c
    ctx->pc = 0x227e0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_227e10:
    // 0x227e10: 0x432818
    ctx->pc = 0x227e10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_227e14:
    // 0x227e14: 0xb01021
    ctx->pc = 0x227e14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_227e18:
    // 0x227e18: 0xc4400b44
    ctx->pc = 0x227e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_227e1c:
    // 0x227e1c: 0x3c014270
    ctx->pc = 0x227e1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17008 << 16));
label_227e20:
    // 0x227e20: 0x44810800
    ctx->pc = 0x227e20u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_227e24:
    // 0x227e24: 0x0
    ctx->pc = 0x227e24u;
    // NOP
label_227e28:
    // 0x227e28: 0x0
    ctx->pc = 0x227e28u;
    // NOP
label_227e2c:
    // 0x227e2c: 0x46010003
    ctx->pc = 0x227e2cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_227e30:
    // 0x227e30: 0x46000064
    ctx->pc = 0x227e30u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_227e34:
    // 0x227e34: 0x44020800
    ctx->pc = 0x227e34u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_227e38:
    // 0x227e38: 0xac820000
    ctx->pc = 0x227e38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_227e3c:
    // 0x227e3c: 0x2842003c
    ctx->pc = 0x227e3cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 60));
label_227e40:
    // 0x227e40: 0x10400002
label_227e44:
    if (ctx->pc == 0x227E44u) {
        ctx->pc = 0x227E44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x227E48u;
        goto label_227e48;
    }
    ctx->pc = 0x227E40u;
    {
        const bool branch_taken_0x227e40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x227E44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x227e40) {
            ctx->pc = 0x227E4Cu;
            goto label_227e4c;
        }
    }
    ctx->pc = 0x227E48u;
label_227e48:
    // 0x227e48: 0xac820000
    ctx->pc = 0x227e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_227e4c:
    // 0x227e4c: 0x3c02003c
    ctx->pc = 0x227e4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_227e50:
    // 0x227e50: 0x24421878
    ctx->pc = 0x227e50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6264));
label_227e54:
    // 0x227e54: 0x111880
    ctx->pc = 0x227e54u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_227e58:
    // 0x227e58: 0x621821
    ctx->pc = 0x227e58u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_227e5c:
    // 0x227e5c: 0x8c620000
    ctx->pc = 0x227e5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_227e60:
    // 0x227e60: 0x1c400004
label_227e64:
    if (ctx->pc == 0x227E64u) {
        ctx->pc = 0x227E64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x227E68u;
        goto label_227e68;
    }
    ctx->pc = 0x227E60u;
    {
        const bool branch_taken_0x227e60 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x227E64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x227e60) {
            ctx->pc = 0x227E74u;
            goto label_227e74;
        }
    }
    ctx->pc = 0x227E68u;
label_227e68:
    // 0x227e68: 0x10000002
label_227e6c:
    if (ctx->pc == 0x227E6Cu) {
        ctx->pc = 0x227E6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x227E70u;
        goto label_227e70;
    }
    ctx->pc = 0x227E68u;
    {
        const bool branch_taken_0x227e68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x227E6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x227e68) {
            ctx->pc = 0x227E74u;
            goto label_227e74;
        }
    }
    ctx->pc = 0x227E70u;
label_227e70:
    // 0x227e70: 0x24130001
    ctx->pc = 0x227e70u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_227e74:
    // 0x227e74: 0xc089e3a
label_227e78:
    if (ctx->pc == 0x227E78u) {
        ctx->pc = 0x227E78u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227E7Cu;
        goto label_227e7c;
    }
    ctx->pc = 0x227E74u;
    SET_GPR_U32(ctx, 31, 0x227E7Cu);
    ctx->pc = 0x227E78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2278E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_treasures_0x2278e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227E7Cu; }
    }
    if (ctx->pc != 0x227E7Cu) { return; }
    ctx->pc = 0x227E7Cu;
label_227e7c:
    // 0x227e7c: 0x10000036
label_227e80:
    if (ctx->pc == 0x227E80u) {
        ctx->pc = 0x227E80u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x227E84u;
        goto label_227e84;
    }
    ctx->pc = 0x227E7Cu;
    {
        const bool branch_taken_0x227e7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x227E80u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x227e7c) {
            ctx->pc = 0x227F58u;
            goto label_227f58;
        }
    }
    ctx->pc = 0x227E84u;
label_227e84:
    // 0x227e84: 0x8e020980
    ctx->pc = 0x227e84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
label_227e88:
    // 0x227e88: 0x24420001
    ctx->pc = 0x227e88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_227e8c:
    // 0x227e8c: 0xae020980
    ctx->pc = 0x227e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
label_227e90:
    // 0x227e90: 0x902d
    ctx->pc = 0x227e90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227e94:
    // 0x227e94: 0xc089db2
label_227e98:
    if (ctx->pc == 0x227E98u) {
        ctx->pc = 0x227E98u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227E9Cu;
        goto label_227e9c;
    }
    ctx->pc = 0x227E94u;
    SET_GPR_U32(ctx, 31, 0x227E9Cu);
    ctx->pc = 0x227E98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2276C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_enemies_0x2276c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227E9Cu; }
    }
    if (ctx->pc != 0x227E9Cu) { return; }
    ctx->pc = 0x227E9Cu;
label_227e9c:
    // 0x227e9c: 0xc089df6
label_227ea0:
    if (ctx->pc == 0x227EA0u) {
        ctx->pc = 0x227EA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227EA4u;
        goto label_227ea4;
    }
    ctx->pc = 0x227E9Cu;
    SET_GPR_U32(ctx, 31, 0x227EA4u);
    ctx->pc = 0x227EA0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2277D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_generators_0x2277d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227EA4u; }
    }
    if (ctx->pc != 0x227EA4u) { return; }
    ctx->pc = 0x227EA4u;
label_227ea4:
    // 0x227ea4: 0xc089e3a
label_227ea8:
    if (ctx->pc == 0x227EA8u) {
        ctx->pc = 0x227EA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227EACu;
        goto label_227eac;
    }
    ctx->pc = 0x227EA4u;
    SET_GPR_U32(ctx, 31, 0x227EACu);
    ctx->pc = 0x227EA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2278E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_treasures_0x2278e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227EACu; }
    }
    if (ctx->pc != 0x227EACu) { return; }
    ctx->pc = 0x227EACu;
label_227eac:
    // 0x227eac: 0xc089d4a
label_227eb0:
    if (ctx->pc == 0x227EB0u) {
        ctx->pc = 0x227EB0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227EB4u;
        goto label_227eb4;
    }
    ctx->pc = 0x227EACu;
    SET_GPR_U32(ctx, 31, 0x227EB4u);
    ctx->pc = 0x227EB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x227528u;
    {
        const uint32_t __entryPc = ctx->pc;
        tally_playtime_0x227528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227EB4u; }
    }
    if (ctx->pc != 0x227EB4u) { return; }
    ctx->pc = 0x227EB4u;
label_227eb4:
    // 0x227eb4: 0x50400004
label_227eb8:
    if (ctx->pc == 0x227EB8u) {
        ctx->pc = 0x227EB8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x227EBCu;
        goto label_227ebc;
    }
    ctx->pc = 0x227EB4u;
    {
        const bool branch_taken_0x227eb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x227eb4) {
            ctx->pc = 0x227EB8u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x227EC8u;
            goto label_227ec8;
        }
    }
    ctx->pc = 0x227EBCu;
label_227ebc:
    // 0x227ebc: 0x8e020980
    ctx->pc = 0x227ebcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
label_227ec0:
    // 0x227ec0: 0x24420001
    ctx->pc = 0x227ec0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_227ec4:
    // 0x227ec4: 0xae020980
    ctx->pc = 0x227ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
label_227ec8:
    // 0x227ec8: 0xc089e7e
label_227ecc:
    if (ctx->pc == 0x227ECCu) {
        ctx->pc = 0x227ECCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227ED0u;
        goto label_227ed0;
    }
    ctx->pc = 0x227EC8u;
    SET_GPR_U32(ctx, 31, 0x227ED0u);
    ctx->pc = 0x227ECCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2279F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_playtime_0x2279f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227ED0u; }
    }
    if (ctx->pc != 0x227ED0u) { return; }
    ctx->pc = 0x227ED0u;
label_227ed0:
    // 0x227ed0: 0x10000021
label_227ed4:
    if (ctx->pc == 0x227ED4u) {
        ctx->pc = 0x227ED4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x227ED8u;
        goto label_227ed8;
    }
    ctx->pc = 0x227ED0u;
    {
        const bool branch_taken_0x227ed0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x227ED4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x227ed0) {
            ctx->pc = 0x227F58u;
            goto label_227f58;
        }
    }
    ctx->pc = 0x227ED8u;
label_227ed8:
    // 0x227ed8: 0x902d
    ctx->pc = 0x227ed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227edc:
    // 0x227edc: 0xc089db2
label_227ee0:
    if (ctx->pc == 0x227EE0u) {
        ctx->pc = 0x227EE0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227EE4u;
        goto label_227ee4;
    }
    ctx->pc = 0x227EDCu;
    SET_GPR_U32(ctx, 31, 0x227EE4u);
    ctx->pc = 0x227EE0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2276C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_enemies_0x2276c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227EE4u; }
    }
    if (ctx->pc != 0x227EE4u) { return; }
    ctx->pc = 0x227EE4u;
label_227ee4:
    // 0x227ee4: 0xc089df6
label_227ee8:
    if (ctx->pc == 0x227EE8u) {
        ctx->pc = 0x227EE8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227EECu;
        goto label_227eec;
    }
    ctx->pc = 0x227EE4u;
    SET_GPR_U32(ctx, 31, 0x227EECu);
    ctx->pc = 0x227EE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2277D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_generators_0x2277d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227EECu; }
    }
    if (ctx->pc != 0x227EECu) { return; }
    ctx->pc = 0x227EECu;
label_227eec:
    // 0x227eec: 0xc089e3a
label_227ef0:
    if (ctx->pc == 0x227EF0u) {
        ctx->pc = 0x227EF0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227EF4u;
        goto label_227ef4;
    }
    ctx->pc = 0x227EECu;
    SET_GPR_U32(ctx, 31, 0x227EF4u);
    ctx->pc = 0x227EF0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2278E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_treasures_0x2278e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227EF4u; }
    }
    if (ctx->pc != 0x227EF4u) { return; }
    ctx->pc = 0x227EF4u;
label_227ef4:
    // 0x227ef4: 0xc089e7e
label_227ef8:
    if (ctx->pc == 0x227EF8u) {
        ctx->pc = 0x227EF8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227EFCu;
        goto label_227efc;
    }
    ctx->pc = 0x227EF4u;
    SET_GPR_U32(ctx, 31, 0x227EFCu);
    ctx->pc = 0x227EF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2279F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_playtime_0x2279f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227EFCu; }
    }
    if (ctx->pc != 0x227EFCu) { return; }
    ctx->pc = 0x227EFCu;
label_227efc:
    // 0x227efc: 0x3c02003c
    ctx->pc = 0x227efcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_227f00:
    // 0x227f00: 0x24421868
    ctx->pc = 0x227f00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6248));
label_227f04:
    // 0x227f04: 0x112080
    ctx->pc = 0x227f04u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 2));
label_227f08:
    // 0x227f08: 0x822021
    ctx->pc = 0x227f08u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_227f0c:
    // 0x227f0c: 0x3c020031
    ctx->pc = 0x227f0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_227f10:
    // 0x227f10: 0x8c830000
    ctx->pc = 0x227f10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_227f14:
    // 0x227f14: 0x8c42ffbc
    ctx->pc = 0x227f14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_227f18:
    // 0x227f18: 0x621823
    ctx->pc = 0x227f18u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_227f1c:
    // 0x227f1c: 0x1c60000d
label_227f20:
    if (ctx->pc == 0x227F20u) {
        ctx->pc = 0x227F20u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x227F24u;
        goto label_227f24;
    }
    ctx->pc = 0x227F1Cu;
    {
        const bool branch_taken_0x227f1c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x227F20u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x227f1c) {
            ctx->pc = 0x227F54u;
            goto label_227f54;
        }
    }
    ctx->pc = 0x227F24u;
label_227f24:
    // 0x227f24: 0x8e020980
    ctx->pc = 0x227f24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
label_227f28:
    // 0x227f28: 0x24420001
    ctx->pc = 0x227f28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_227f2c:
    // 0x227f2c: 0x10000009
label_227f30:
    if (ctx->pc == 0x227F30u) {
        ctx->pc = 0x227F30u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
        ctx->pc = 0x227F34u;
        goto label_227f34;
    }
    ctx->pc = 0x227F2Cu;
    {
        const bool branch_taken_0x227f2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x227F30u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
        if (branch_taken_0x227f2c) {
            ctx->pc = 0x227F54u;
            goto label_227f54;
        }
    }
    ctx->pc = 0x227F34u;
label_227f34:
    // 0x227f34: 0xc089db2
label_227f38:
    if (ctx->pc == 0x227F38u) {
        ctx->pc = 0x227F38u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227F3Cu;
        goto label_227f3c;
    }
    ctx->pc = 0x227F34u;
    SET_GPR_U32(ctx, 31, 0x227F3Cu);
    ctx->pc = 0x227F38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2276C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_enemies_0x2276c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F3Cu; }
    }
    if (ctx->pc != 0x227F3Cu) { return; }
    ctx->pc = 0x227F3Cu;
label_227f3c:
    // 0x227f3c: 0xc089df6
label_227f40:
    if (ctx->pc == 0x227F40u) {
        ctx->pc = 0x227F40u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227F44u;
        goto label_227f44;
    }
    ctx->pc = 0x227F3Cu;
    SET_GPR_U32(ctx, 31, 0x227F44u);
    ctx->pc = 0x227F40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2277D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_generators_0x2277d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F44u; }
    }
    if (ctx->pc != 0x227F44u) { return; }
    ctx->pc = 0x227F44u;
label_227f44:
    // 0x227f44: 0xc089e3a
label_227f48:
    if (ctx->pc == 0x227F48u) {
        ctx->pc = 0x227F48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227F4Cu;
        goto label_227f4c;
    }
    ctx->pc = 0x227F44u;
    SET_GPR_U32(ctx, 31, 0x227F4Cu);
    ctx->pc = 0x227F48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2278E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_treasures_0x2278e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F4Cu; }
    }
    if (ctx->pc != 0x227F4Cu) { return; }
    ctx->pc = 0x227F4Cu;
label_227f4c:
    // 0x227f4c: 0xc089e7e
label_227f50:
    if (ctx->pc == 0x227F50u) {
        ctx->pc = 0x227F50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227F54u;
        goto label_227f54;
    }
    ctx->pc = 0x227F4Cu;
    SET_GPR_U32(ctx, 31, 0x227F54u);
    ctx->pc = 0x227F50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2279F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_playtime_0x2279f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F54u; }
    }
    if (ctx->pc != 0x227F54u) { return; }
    ctx->pc = 0x227F54u;
label_227f54:
    // 0x227f54: 0x26310001
    ctx->pc = 0x227f54u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_227f58:
    // 0x227f58: 0x2a220004
    ctx->pc = 0x227f58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
label_227f5c:
    // 0x227f5c: 0x1440ff1c
label_227f60:
    if (ctx->pc == 0x227F60u) {
        ctx->pc = 0x227F60u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 11008));
        ctx->pc = 0x227F64u;
        goto label_227f64;
    }
    ctx->pc = 0x227F5Cu;
    {
        const bool branch_taken_0x227f5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x227F60u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 11008));
        if (branch_taken_0x227f5c) {
            ctx->pc = 0x227BD0u;
            goto label_227bd0;
        }
    }
    ctx->pc = 0x227F64u;
label_227f64:
    // 0x227f64: 0xc08da4e
label_227f68:
    if (ctx->pc == 0x227F68u) {
        ctx->pc = 0x227F68u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x227F6Cu;
        goto label_227f6c;
    }
    ctx->pc = 0x227F64u;
    SET_GPR_U32(ctx, 31, 0x227F6Cu);
    ctx->pc = 0x227F68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x236938u;
    {
        const uint32_t __entryPc = ctx->pc;
        WritePlayerInfo_0x236938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F6Cu; }
    }
    if (ctx->pc != 0x227F6Cu) { return; }
    ctx->pc = 0x227F6Cu;
label_227f6c:
    // 0x227f6c: 0xc09780a
label_227f70:
    if (ctx->pc == 0x227F70u) {
        ctx->pc = 0x227F70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227F74u;
        goto label_227f74;
    }
    ctx->pc = 0x227F6Cu;
    SET_GPR_U32(ctx, 31, 0x227F74u);
    ctx->pc = 0x227F70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25E028u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoAudioTallySFX_0x25e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F74u; }
    }
    if (ctx->pc != 0x227F74u) { return; }
    ctx->pc = 0x227F74u;
label_227f74:
    // 0x227f74: 0x1240000d
label_227f78:
    if (ctx->pc == 0x227F78u) {
        ctx->pc = 0x227F78u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227F7Cu;
        goto label_227f7c;
    }
    ctx->pc = 0x227F74u;
    {
        const bool branch_taken_0x227f74 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x227F78u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x227f74) {
            ctx->pc = 0x227FACu;
            goto label_227fac;
        }
    }
    ctx->pc = 0x227F7Cu;
label_227f7c:
    // 0x227f7c: 0x3c02003c
    ctx->pc = 0x227f7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_227f80:
    // 0x227f80: 0x24501818
    ctx->pc = 0x227f80u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 6168));
label_227f84:
    // 0x227f84: 0x111080
    ctx->pc = 0x227f84u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_227f88:
    // 0x227f88: 0x501021
    ctx->pc = 0x227f88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_227f8c:
    // 0x227f8c: 0xc0b0b38
label_227f90:
    if (ctx->pc == 0x227F90u) {
        ctx->pc = 0x227F90u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x227F94u;
        goto label_227f94;
    }
    ctx->pc = 0x227F8Cu;
    SET_GPR_U32(ctx, 31, 0x227F94u);
    ctx->pc = 0x227F90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F94u; }
    }
    if (ctx->pc != 0x227F94u) { return; }
    ctx->pc = 0x227F94u;
label_227f94:
    // 0x227f94: 0x26310001
    ctx->pc = 0x227f94u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_227f98:
    // 0x227f98: 0x2a220004
    ctx->pc = 0x227f98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
label_227f9c:
    // 0x227f9c: 0x1440fffa
label_227fa0:
    if (ctx->pc == 0x227FA0u) {
        ctx->pc = 0x227FA0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x227FA4u;
        goto label_227fa4;
    }
    ctx->pc = 0x227F9Cu;
    {
        const bool branch_taken_0x227f9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x227FA0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x227f9c) {
            ctx->pc = 0x227F88u;
            goto label_227f88;
        }
    }
    ctx->pc = 0x227FA4u;
label_227fa4:
    // 0x227fa4: 0xc097420
label_227fa8:
    if (ctx->pc == 0x227FA8u) {
        ctx->pc = 0x227FACu;
        goto label_227fac;
    }
    ctx->pc = 0x227FA4u;
    SET_GPR_U32(ctx, 31, 0x227FACu);
    ctx->pc = 0x25D080u;
    {
        const uint32_t __entryPc = ctx->pc;
        ShopMusicEnd_0x25d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227FACu; }
    }
    if (ctx->pc != 0x227FACu) { return; }
    ctx->pc = 0x227FACu;
label_227fac:
    // 0x227fac: 0x240102d
    ctx->pc = 0x227facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_227fb0:
    // 0x227fb0: 0xdfbf0040
    ctx->pc = 0x227fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_227fb4:
    // 0x227fb4: 0xdfb30030
    ctx->pc = 0x227fb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_227fb8:
    // 0x227fb8: 0xdfb20020
    ctx->pc = 0x227fb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_227fbc:
    // 0x227fbc: 0xdfb10010
    ctx->pc = 0x227fbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_227fc0:
    // 0x227fc0: 0xdfb00000
    ctx->pc = 0x227fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_227fc4:
    // 0x227fc4: 0x3e00008
label_227fc8:
    if (ctx->pc == 0x227FC8u) {
        ctx->pc = 0x227FC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x227FCCu;
        goto label_fallthrough_0x227fc4;
    }
    ctx->pc = 0x227FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227FC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227B78u: goto label_227b78;
            case 0x227B7Cu: goto label_227b7c;
            case 0x227B80u: goto label_227b80;
            case 0x227B84u: goto label_227b84;
            case 0x227B88u: goto label_227b88;
            case 0x227B8Cu: goto label_227b8c;
            case 0x227B90u: goto label_227b90;
            case 0x227B94u: goto label_227b94;
            case 0x227B98u: goto label_227b98;
            case 0x227B9Cu: goto label_227b9c;
            case 0x227BA0u: goto label_227ba0;
            case 0x227BA4u: goto label_227ba4;
            case 0x227BA8u: goto label_227ba8;
            case 0x227BACu: goto label_227bac;
            case 0x227BB0u: goto label_227bb0;
            case 0x227BB4u: goto label_227bb4;
            case 0x227BB8u: goto label_227bb8;
            case 0x227BBCu: goto label_227bbc;
            case 0x227BC0u: goto label_227bc0;
            case 0x227BC4u: goto label_227bc4;
            case 0x227BC8u: goto label_227bc8;
            case 0x227BCCu: goto label_227bcc;
            case 0x227BD0u: goto label_227bd0;
            case 0x227BD4u: goto label_227bd4;
            case 0x227BD8u: goto label_227bd8;
            case 0x227BDCu: goto label_227bdc;
            case 0x227BE0u: goto label_227be0;
            case 0x227BE4u: goto label_227be4;
            case 0x227BE8u: goto label_227be8;
            case 0x227BECu: goto label_227bec;
            case 0x227BF0u: goto label_227bf0;
            case 0x227BF4u: goto label_227bf4;
            case 0x227BF8u: goto label_227bf8;
            case 0x227BFCu: goto label_227bfc;
            case 0x227C00u: goto label_227c00;
            case 0x227C04u: goto label_227c04;
            case 0x227C08u: goto label_227c08;
            case 0x227C0Cu: goto label_227c0c;
            case 0x227C10u: goto label_227c10;
            case 0x227C14u: goto label_227c14;
            case 0x227C18u: goto label_227c18;
            case 0x227C1Cu: goto label_227c1c;
            case 0x227C20u: goto label_227c20;
            case 0x227C24u: goto label_227c24;
            case 0x227C28u: goto label_227c28;
            case 0x227C2Cu: goto label_227c2c;
            case 0x227C30u: goto label_227c30;
            case 0x227C34u: goto label_227c34;
            case 0x227C38u: goto label_227c38;
            case 0x227C3Cu: goto label_227c3c;
            case 0x227C40u: goto label_227c40;
            case 0x227C44u: goto label_227c44;
            case 0x227C48u: goto label_227c48;
            case 0x227C4Cu: goto label_227c4c;
            case 0x227C50u: goto label_227c50;
            case 0x227C54u: goto label_227c54;
            case 0x227C58u: goto label_227c58;
            case 0x227C5Cu: goto label_227c5c;
            case 0x227C60u: goto label_227c60;
            case 0x227C64u: goto label_227c64;
            case 0x227C68u: goto label_227c68;
            case 0x227C6Cu: goto label_227c6c;
            case 0x227C70u: goto label_227c70;
            case 0x227C74u: goto label_227c74;
            case 0x227C78u: goto label_227c78;
            case 0x227C7Cu: goto label_227c7c;
            case 0x227C80u: goto label_227c80;
            case 0x227C84u: goto label_227c84;
            case 0x227C88u: goto label_227c88;
            case 0x227C8Cu: goto label_227c8c;
            case 0x227C90u: goto label_227c90;
            case 0x227C94u: goto label_227c94;
            case 0x227C98u: goto label_227c98;
            case 0x227C9Cu: goto label_227c9c;
            case 0x227CA0u: goto label_227ca0;
            case 0x227CA4u: goto label_227ca4;
            case 0x227CA8u: goto label_227ca8;
            case 0x227CACu: goto label_227cac;
            case 0x227CB0u: goto label_227cb0;
            case 0x227CB4u: goto label_227cb4;
            case 0x227CB8u: goto label_227cb8;
            case 0x227CBCu: goto label_227cbc;
            case 0x227CC0u: goto label_227cc0;
            case 0x227CC4u: goto label_227cc4;
            case 0x227CC8u: goto label_227cc8;
            case 0x227CCCu: goto label_227ccc;
            case 0x227CD0u: goto label_227cd0;
            case 0x227CD4u: goto label_227cd4;
            case 0x227CD8u: goto label_227cd8;
            case 0x227CDCu: goto label_227cdc;
            case 0x227CE0u: goto label_227ce0;
            case 0x227CE4u: goto label_227ce4;
            case 0x227CE8u: goto label_227ce8;
            case 0x227CECu: goto label_227cec;
            case 0x227CF0u: goto label_227cf0;
            case 0x227CF4u: goto label_227cf4;
            case 0x227CF8u: goto label_227cf8;
            case 0x227CFCu: goto label_227cfc;
            case 0x227D00u: goto label_227d00;
            case 0x227D04u: goto label_227d04;
            case 0x227D08u: goto label_227d08;
            case 0x227D0Cu: goto label_227d0c;
            case 0x227D10u: goto label_227d10;
            case 0x227D14u: goto label_227d14;
            case 0x227D18u: goto label_227d18;
            case 0x227D1Cu: goto label_227d1c;
            case 0x227D20u: goto label_227d20;
            case 0x227D24u: goto label_227d24;
            case 0x227D28u: goto label_227d28;
            case 0x227D2Cu: goto label_227d2c;
            case 0x227D30u: goto label_227d30;
            case 0x227D34u: goto label_227d34;
            case 0x227D38u: goto label_227d38;
            case 0x227D3Cu: goto label_227d3c;
            case 0x227D40u: goto label_227d40;
            case 0x227D44u: goto label_227d44;
            case 0x227D48u: goto label_227d48;
            case 0x227D4Cu: goto label_227d4c;
            case 0x227D50u: goto label_227d50;
            case 0x227D54u: goto label_227d54;
            case 0x227D58u: goto label_227d58;
            case 0x227D5Cu: goto label_227d5c;
            case 0x227D60u: goto label_227d60;
            case 0x227D64u: goto label_227d64;
            case 0x227D68u: goto label_227d68;
            case 0x227D6Cu: goto label_227d6c;
            case 0x227D70u: goto label_227d70;
            case 0x227D74u: goto label_227d74;
            case 0x227D78u: goto label_227d78;
            case 0x227D7Cu: goto label_227d7c;
            case 0x227D80u: goto label_227d80;
            case 0x227D84u: goto label_227d84;
            case 0x227D88u: goto label_227d88;
            case 0x227D8Cu: goto label_227d8c;
            case 0x227D90u: goto label_227d90;
            case 0x227D94u: goto label_227d94;
            case 0x227D98u: goto label_227d98;
            case 0x227D9Cu: goto label_227d9c;
            case 0x227DA0u: goto label_227da0;
            case 0x227DA4u: goto label_227da4;
            case 0x227DA8u: goto label_227da8;
            case 0x227DACu: goto label_227dac;
            case 0x227DB0u: goto label_227db0;
            case 0x227DB4u: goto label_227db4;
            case 0x227DB8u: goto label_227db8;
            case 0x227DBCu: goto label_227dbc;
            case 0x227DC0u: goto label_227dc0;
            case 0x227DC4u: goto label_227dc4;
            case 0x227DC8u: goto label_227dc8;
            case 0x227DCCu: goto label_227dcc;
            case 0x227DD0u: goto label_227dd0;
            case 0x227DD4u: goto label_227dd4;
            case 0x227DD8u: goto label_227dd8;
            case 0x227DDCu: goto label_227ddc;
            case 0x227DE0u: goto label_227de0;
            case 0x227DE4u: goto label_227de4;
            case 0x227DE8u: goto label_227de8;
            case 0x227DECu: goto label_227dec;
            case 0x227DF0u: goto label_227df0;
            case 0x227DF4u: goto label_227df4;
            case 0x227DF8u: goto label_227df8;
            case 0x227DFCu: goto label_227dfc;
            case 0x227E00u: goto label_227e00;
            case 0x227E04u: goto label_227e04;
            case 0x227E08u: goto label_227e08;
            case 0x227E0Cu: goto label_227e0c;
            case 0x227E10u: goto label_227e10;
            case 0x227E14u: goto label_227e14;
            case 0x227E18u: goto label_227e18;
            case 0x227E1Cu: goto label_227e1c;
            case 0x227E20u: goto label_227e20;
            case 0x227E24u: goto label_227e24;
            case 0x227E28u: goto label_227e28;
            case 0x227E2Cu: goto label_227e2c;
            case 0x227E30u: goto label_227e30;
            case 0x227E34u: goto label_227e34;
            case 0x227E38u: goto label_227e38;
            case 0x227E3Cu: goto label_227e3c;
            case 0x227E40u: goto label_227e40;
            case 0x227E44u: goto label_227e44;
            case 0x227E48u: goto label_227e48;
            case 0x227E4Cu: goto label_227e4c;
            case 0x227E50u: goto label_227e50;
            case 0x227E54u: goto label_227e54;
            case 0x227E58u: goto label_227e58;
            case 0x227E5Cu: goto label_227e5c;
            case 0x227E60u: goto label_227e60;
            case 0x227E64u: goto label_227e64;
            case 0x227E68u: goto label_227e68;
            case 0x227E6Cu: goto label_227e6c;
            case 0x227E70u: goto label_227e70;
            case 0x227E74u: goto label_227e74;
            case 0x227E78u: goto label_227e78;
            case 0x227E7Cu: goto label_227e7c;
            case 0x227E80u: goto label_227e80;
            case 0x227E84u: goto label_227e84;
            case 0x227E88u: goto label_227e88;
            case 0x227E8Cu: goto label_227e8c;
            case 0x227E90u: goto label_227e90;
            case 0x227E94u: goto label_227e94;
            case 0x227E98u: goto label_227e98;
            case 0x227E9Cu: goto label_227e9c;
            case 0x227EA0u: goto label_227ea0;
            case 0x227EA4u: goto label_227ea4;
            case 0x227EA8u: goto label_227ea8;
            case 0x227EACu: goto label_227eac;
            case 0x227EB0u: goto label_227eb0;
            case 0x227EB4u: goto label_227eb4;
            case 0x227EB8u: goto label_227eb8;
            case 0x227EBCu: goto label_227ebc;
            case 0x227EC0u: goto label_227ec0;
            case 0x227EC4u: goto label_227ec4;
            case 0x227EC8u: goto label_227ec8;
            case 0x227ECCu: goto label_227ecc;
            case 0x227ED0u: goto label_227ed0;
            case 0x227ED4u: goto label_227ed4;
            case 0x227ED8u: goto label_227ed8;
            case 0x227EDCu: goto label_227edc;
            case 0x227EE0u: goto label_227ee0;
            case 0x227EE4u: goto label_227ee4;
            case 0x227EE8u: goto label_227ee8;
            case 0x227EECu: goto label_227eec;
            case 0x227EF0u: goto label_227ef0;
            case 0x227EF4u: goto label_227ef4;
            case 0x227EF8u: goto label_227ef8;
            case 0x227EFCu: goto label_227efc;
            case 0x227F00u: goto label_227f00;
            case 0x227F04u: goto label_227f04;
            case 0x227F08u: goto label_227f08;
            case 0x227F0Cu: goto label_227f0c;
            case 0x227F10u: goto label_227f10;
            case 0x227F14u: goto label_227f14;
            case 0x227F18u: goto label_227f18;
            case 0x227F1Cu: goto label_227f1c;
            case 0x227F20u: goto label_227f20;
            case 0x227F24u: goto label_227f24;
            case 0x227F28u: goto label_227f28;
            case 0x227F2Cu: goto label_227f2c;
            case 0x227F30u: goto label_227f30;
            case 0x227F34u: goto label_227f34;
            case 0x227F38u: goto label_227f38;
            case 0x227F3Cu: goto label_227f3c;
            case 0x227F40u: goto label_227f40;
            case 0x227F44u: goto label_227f44;
            case 0x227F48u: goto label_227f48;
            case 0x227F4Cu: goto label_227f4c;
            case 0x227F50u: goto label_227f50;
            case 0x227F54u: goto label_227f54;
            case 0x227F58u: goto label_227f58;
            case 0x227F5Cu: goto label_227f5c;
            case 0x227F60u: goto label_227f60;
            case 0x227F64u: goto label_227f64;
            case 0x227F68u: goto label_227f68;
            case 0x227F6Cu: goto label_227f6c;
            case 0x227F70u: goto label_227f70;
            case 0x227F74u: goto label_227f74;
            case 0x227F78u: goto label_227f78;
            case 0x227F7Cu: goto label_227f7c;
            case 0x227F80u: goto label_227f80;
            case 0x227F84u: goto label_227f84;
            case 0x227F88u: goto label_227f88;
            case 0x227F8Cu: goto label_227f8c;
            case 0x227F90u: goto label_227f90;
            case 0x227F94u: goto label_227f94;
            case 0x227F98u: goto label_227f98;
            case 0x227F9Cu: goto label_227f9c;
            case 0x227FA0u: goto label_227fa0;
            case 0x227FA4u: goto label_227fa4;
            case 0x227FA8u: goto label_227fa8;
            case 0x227FACu: goto label_227fac;
            case 0x227FB0u: goto label_227fb0;
            case 0x227FB4u: goto label_227fb4;
            case 0x227FB8u: goto label_227fb8;
            case 0x227FBCu: goto label_227fbc;
            case 0x227FC0u: goto label_227fc0;
            case 0x227FC4u: goto label_227fc4;
            case 0x227FC8u: goto label_227fc8;
            default: break;
        }
        return;
    }
label_fallthrough_0x227fc4:
    ctx->pc = 0x227FCCu;
}
