#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_sel_menu
// Address: 0x286ac8 - 0x28803c
void do_sel_menu_0x286ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x286ac8u;

label_286ac8:
    // 0x286ac8: 0x27bdff20
    ctx->pc = 0x286ac8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
label_286acc:
    // 0x286acc: 0xffbf00c0
    ctx->pc = 0x286accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_286ad0:
    // 0x286ad0: 0xffbe00b0
    ctx->pc = 0x286ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_286ad4:
    // 0x286ad4: 0xffb700a0
    ctx->pc = 0x286ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_286ad8:
    // 0x286ad8: 0xffb60090
    ctx->pc = 0x286ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_286adc:
    // 0x286adc: 0xffb50080
    ctx->pc = 0x286adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_286ae0:
    // 0x286ae0: 0xffb40070
    ctx->pc = 0x286ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_286ae4:
    // 0x286ae4: 0xffb30060
    ctx->pc = 0x286ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_286ae8:
    // 0x286ae8: 0xffb20050
    ctx->pc = 0x286ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_286aec:
    // 0x286aec: 0xffb10040
    ctx->pc = 0x286aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_286af0:
    // 0x286af0: 0xffb00030
    ctx->pc = 0x286af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_286af4:
    // 0x286af4: 0xe7b400d0
    ctx->pc = 0x286af4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_286af8:
    // 0x286af8: 0x80b82d
    ctx->pc = 0x286af8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_286afc:
    // 0x286afc: 0x24032b00
    ctx->pc = 0x286afcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
label_286b00:
    // 0x286b00: 0x2e31818
    ctx->pc = 0x286b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_286b04:
    // 0x286b04: 0x3c020032
    ctx->pc = 0x286b04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_286b08:
    // 0x286b08: 0x24421bc0
    ctx->pc = 0x286b08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
label_286b0c:
    // 0x286b0c: 0x628821
    ctx->pc = 0x286b0cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_286b10:
    // 0x286b10: 0x3c030035
    ctx->pc = 0x286b10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_286b14:
    // 0x286b14: 0x2463a2f0
    ctx->pc = 0x286b14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943472));
label_286b18:
    // 0x286b18: 0x171080
    ctx->pc = 0x286b18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 2));
label_286b1c:
    // 0x286b1c: 0x431021
    ctx->pc = 0x286b1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_286b20:
    // 0x286b20: 0x8c530000
    ctx->pc = 0x286b20u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286b24:
    // 0x286b24: 0x3c020035
    ctx->pc = 0x286b24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_286b28:
    // 0x286b28: 0x8c55aab0
    ctx->pc = 0x286b28u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294945456)));
label_286b2c:
    // 0x286b2c: 0x3c020035
    ctx->pc = 0x286b2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_286b30:
    // 0x286b30: 0x8c54aab4
    ctx->pc = 0x286b30u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 4294945460)));
label_286b34:
    // 0x286b34: 0x3c020035
    ctx->pc = 0x286b34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_286b38:
    // 0x286b38: 0xc454aab8
    ctx->pc = 0x286b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294945464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_286b3c:
    // 0x286b3c: 0x24020001
    ctx->pc = 0x286b3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_286b40:
    // 0x286b40: 0xafa20020
    ctx->pc = 0x286b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_286b44:
    // 0x286b44: 0xafa00024
    ctx->pc = 0x286b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_286b48:
    // 0x286b48: 0x3c014180
    ctx->pc = 0x286b48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
label_286b4c:
    // 0x286b4c: 0x44810000
    ctx->pc = 0x286b4cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_286b50:
    // 0x286b50: 0x4600a002
    ctx->pc = 0x286b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_286b54:
    // 0x286b54: 0x46000064
    ctx->pc = 0x286b54u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_286b58:
    // 0x286b58: 0x44160800
    ctx->pc = 0x286b58u;
    SET_GPR_U32(ctx, 22, *(uint32_t*)&ctx->f[1]);
label_286b5c:
    // 0x286b5c: 0x2ca2000f
    ctx->pc = 0x286b5cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 15));
label_286b60:
    // 0x286b60: 0x104004ef
label_286b64:
    if (ctx->pc == 0x286B64u) {
        ctx->pc = 0x286B64u;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286B68u;
        goto label_286b68;
    }
    ctx->pc = 0x286B60u;
    {
        const bool branch_taken_0x286b60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x286B64u;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x286b60) {
            ctx->pc = 0x287F20u;
            goto label_287f20;
        }
    }
    ctx->pc = 0x286B68u;
label_286b68:
    // 0x286b68: 0x3c02003b
    ctx->pc = 0x286b68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_286b6c:
    // 0x286b6c: 0x2442d720
    ctx->pc = 0x286b6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956832));
label_286b70:
    // 0x286b70: 0x51880
    ctx->pc = 0x286b70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
label_286b74:
    // 0x286b74: 0x621821
    ctx->pc = 0x286b74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_286b78:
    // 0x286b78: 0x8c620000
    ctx->pc = 0x286b78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_286b7c:
    // 0x286b7c: 0x400008
label_286b80:
    if (ctx->pc == 0x286B80u) {
        ctx->pc = 0x286B84u;
        goto label_286b84;
    }
    ctx->pc = 0x286B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286AC8u: goto label_286ac8;
            case 0x286ACCu: goto label_286acc;
            case 0x286AD0u: goto label_286ad0;
            case 0x286AD4u: goto label_286ad4;
            case 0x286AD8u: goto label_286ad8;
            case 0x286ADCu: goto label_286adc;
            case 0x286AE0u: goto label_286ae0;
            case 0x286AE4u: goto label_286ae4;
            case 0x286AE8u: goto label_286ae8;
            case 0x286AECu: goto label_286aec;
            case 0x286AF0u: goto label_286af0;
            case 0x286AF4u: goto label_286af4;
            case 0x286AF8u: goto label_286af8;
            case 0x286AFCu: goto label_286afc;
            case 0x286B00u: goto label_286b00;
            case 0x286B04u: goto label_286b04;
            case 0x286B08u: goto label_286b08;
            case 0x286B0Cu: goto label_286b0c;
            case 0x286B10u: goto label_286b10;
            case 0x286B14u: goto label_286b14;
            case 0x286B18u: goto label_286b18;
            case 0x286B1Cu: goto label_286b1c;
            case 0x286B20u: goto label_286b20;
            case 0x286B24u: goto label_286b24;
            case 0x286B28u: goto label_286b28;
            case 0x286B2Cu: goto label_286b2c;
            case 0x286B30u: goto label_286b30;
            case 0x286B34u: goto label_286b34;
            case 0x286B38u: goto label_286b38;
            case 0x286B3Cu: goto label_286b3c;
            case 0x286B40u: goto label_286b40;
            case 0x286B44u: goto label_286b44;
            case 0x286B48u: goto label_286b48;
            case 0x286B4Cu: goto label_286b4c;
            case 0x286B50u: goto label_286b50;
            case 0x286B54u: goto label_286b54;
            case 0x286B58u: goto label_286b58;
            case 0x286B5Cu: goto label_286b5c;
            case 0x286B60u: goto label_286b60;
            case 0x286B64u: goto label_286b64;
            case 0x286B68u: goto label_286b68;
            case 0x286B6Cu: goto label_286b6c;
            case 0x286B70u: goto label_286b70;
            case 0x286B74u: goto label_286b74;
            case 0x286B78u: goto label_286b78;
            case 0x286B7Cu: goto label_286b7c;
            case 0x286B80u: goto label_286b80;
            case 0x286B84u: goto label_286b84;
            case 0x286B88u: goto label_286b88;
            case 0x286B8Cu: goto label_286b8c;
            case 0x286B90u: goto label_286b90;
            case 0x286B94u: goto label_286b94;
            case 0x286B98u: goto label_286b98;
            case 0x286B9Cu: goto label_286b9c;
            case 0x286BA0u: goto label_286ba0;
            case 0x286BA4u: goto label_286ba4;
            case 0x286BA8u: goto label_286ba8;
            case 0x286BACu: goto label_286bac;
            case 0x286BB0u: goto label_286bb0;
            case 0x286BB4u: goto label_286bb4;
            case 0x286BB8u: goto label_286bb8;
            case 0x286BBCu: goto label_286bbc;
            case 0x286BC0u: goto label_286bc0;
            case 0x286BC4u: goto label_286bc4;
            case 0x286BC8u: goto label_286bc8;
            case 0x286BCCu: goto label_286bcc;
            case 0x286BD0u: goto label_286bd0;
            case 0x286BD4u: goto label_286bd4;
            case 0x286BD8u: goto label_286bd8;
            case 0x286BDCu: goto label_286bdc;
            case 0x286BE0u: goto label_286be0;
            case 0x286BE4u: goto label_286be4;
            case 0x286BE8u: goto label_286be8;
            case 0x286BECu: goto label_286bec;
            case 0x286BF0u: goto label_286bf0;
            case 0x286BF4u: goto label_286bf4;
            case 0x286BF8u: goto label_286bf8;
            case 0x286BFCu: goto label_286bfc;
            case 0x286C00u: goto label_286c00;
            case 0x286C04u: goto label_286c04;
            case 0x286C08u: goto label_286c08;
            case 0x286C0Cu: goto label_286c0c;
            case 0x286C10u: goto label_286c10;
            case 0x286C14u: goto label_286c14;
            case 0x286C18u: goto label_286c18;
            case 0x286C1Cu: goto label_286c1c;
            case 0x286C20u: goto label_286c20;
            case 0x286C24u: goto label_286c24;
            case 0x286C28u: goto label_286c28;
            case 0x286C2Cu: goto label_286c2c;
            case 0x286C30u: goto label_286c30;
            case 0x286C34u: goto label_286c34;
            case 0x286C38u: goto label_286c38;
            case 0x286C3Cu: goto label_286c3c;
            case 0x286C40u: goto label_286c40;
            case 0x286C44u: goto label_286c44;
            case 0x286C48u: goto label_286c48;
            case 0x286C4Cu: goto label_286c4c;
            case 0x286C50u: goto label_286c50;
            case 0x286C54u: goto label_286c54;
            case 0x286C58u: goto label_286c58;
            case 0x286C5Cu: goto label_286c5c;
            case 0x286C60u: goto label_286c60;
            case 0x286C64u: goto label_286c64;
            case 0x286C68u: goto label_286c68;
            case 0x286C6Cu: goto label_286c6c;
            case 0x286C70u: goto label_286c70;
            case 0x286C74u: goto label_286c74;
            case 0x286C78u: goto label_286c78;
            case 0x286C7Cu: goto label_286c7c;
            case 0x286C80u: goto label_286c80;
            case 0x286C84u: goto label_286c84;
            case 0x286C88u: goto label_286c88;
            case 0x286C8Cu: goto label_286c8c;
            case 0x286C90u: goto label_286c90;
            case 0x286C94u: goto label_286c94;
            case 0x286C98u: goto label_286c98;
            case 0x286C9Cu: goto label_286c9c;
            case 0x286CA0u: goto label_286ca0;
            case 0x286CA4u: goto label_286ca4;
            case 0x286CA8u: goto label_286ca8;
            case 0x286CACu: goto label_286cac;
            case 0x286CB0u: goto label_286cb0;
            case 0x286CB4u: goto label_286cb4;
            case 0x286CB8u: goto label_286cb8;
            case 0x286CBCu: goto label_286cbc;
            case 0x286CC0u: goto label_286cc0;
            case 0x286CC4u: goto label_286cc4;
            case 0x286CC8u: goto label_286cc8;
            case 0x286CCCu: goto label_286ccc;
            case 0x286CD0u: goto label_286cd0;
            case 0x286CD4u: goto label_286cd4;
            case 0x286CD8u: goto label_286cd8;
            case 0x286CDCu: goto label_286cdc;
            case 0x286CE0u: goto label_286ce0;
            case 0x286CE4u: goto label_286ce4;
            case 0x286CE8u: goto label_286ce8;
            case 0x286CECu: goto label_286cec;
            case 0x286CF0u: goto label_286cf0;
            case 0x286CF4u: goto label_286cf4;
            case 0x286CF8u: goto label_286cf8;
            case 0x286CFCu: goto label_286cfc;
            case 0x286D00u: goto label_286d00;
            case 0x286D04u: goto label_286d04;
            case 0x286D08u: goto label_286d08;
            case 0x286D0Cu: goto label_286d0c;
            case 0x286D10u: goto label_286d10;
            case 0x286D14u: goto label_286d14;
            case 0x286D18u: goto label_286d18;
            case 0x286D1Cu: goto label_286d1c;
            case 0x286D20u: goto label_286d20;
            case 0x286D24u: goto label_286d24;
            case 0x286D28u: goto label_286d28;
            case 0x286D2Cu: goto label_286d2c;
            case 0x286D30u: goto label_286d30;
            case 0x286D34u: goto label_286d34;
            case 0x286D38u: goto label_286d38;
            case 0x286D3Cu: goto label_286d3c;
            case 0x286D40u: goto label_286d40;
            case 0x286D44u: goto label_286d44;
            case 0x286D48u: goto label_286d48;
            case 0x286D4Cu: goto label_286d4c;
            case 0x286D50u: goto label_286d50;
            case 0x286D54u: goto label_286d54;
            case 0x286D58u: goto label_286d58;
            case 0x286D5Cu: goto label_286d5c;
            case 0x286D60u: goto label_286d60;
            case 0x286D64u: goto label_286d64;
            case 0x286D68u: goto label_286d68;
            case 0x286D6Cu: goto label_286d6c;
            case 0x286D70u: goto label_286d70;
            case 0x286D74u: goto label_286d74;
            case 0x286D78u: goto label_286d78;
            case 0x286D7Cu: goto label_286d7c;
            case 0x286D80u: goto label_286d80;
            case 0x286D84u: goto label_286d84;
            case 0x286D88u: goto label_286d88;
            case 0x286D8Cu: goto label_286d8c;
            case 0x286D90u: goto label_286d90;
            case 0x286D94u: goto label_286d94;
            case 0x286D98u: goto label_286d98;
            case 0x286D9Cu: goto label_286d9c;
            case 0x286DA0u: goto label_286da0;
            case 0x286DA4u: goto label_286da4;
            case 0x286DA8u: goto label_286da8;
            case 0x286DACu: goto label_286dac;
            case 0x286DB0u: goto label_286db0;
            case 0x286DB4u: goto label_286db4;
            case 0x286DB8u: goto label_286db8;
            case 0x286DBCu: goto label_286dbc;
            case 0x286DC0u: goto label_286dc0;
            case 0x286DC4u: goto label_286dc4;
            case 0x286DC8u: goto label_286dc8;
            case 0x286DCCu: goto label_286dcc;
            case 0x286DD0u: goto label_286dd0;
            case 0x286DD4u: goto label_286dd4;
            case 0x286DD8u: goto label_286dd8;
            case 0x286DDCu: goto label_286ddc;
            case 0x286DE0u: goto label_286de0;
            case 0x286DE4u: goto label_286de4;
            case 0x286DE8u: goto label_286de8;
            case 0x286DECu: goto label_286dec;
            case 0x286DF0u: goto label_286df0;
            case 0x286DF4u: goto label_286df4;
            case 0x286DF8u: goto label_286df8;
            case 0x286DFCu: goto label_286dfc;
            case 0x286E00u: goto label_286e00;
            case 0x286E04u: goto label_286e04;
            case 0x286E08u: goto label_286e08;
            case 0x286E0Cu: goto label_286e0c;
            case 0x286E10u: goto label_286e10;
            case 0x286E14u: goto label_286e14;
            case 0x286E18u: goto label_286e18;
            case 0x286E1Cu: goto label_286e1c;
            case 0x286E20u: goto label_286e20;
            case 0x286E24u: goto label_286e24;
            case 0x286E28u: goto label_286e28;
            case 0x286E2Cu: goto label_286e2c;
            case 0x286E30u: goto label_286e30;
            case 0x286E34u: goto label_286e34;
            case 0x286E38u: goto label_286e38;
            case 0x286E3Cu: goto label_286e3c;
            case 0x286E40u: goto label_286e40;
            case 0x286E44u: goto label_286e44;
            case 0x286E48u: goto label_286e48;
            case 0x286E4Cu: goto label_286e4c;
            case 0x286E50u: goto label_286e50;
            case 0x286E54u: goto label_286e54;
            case 0x286E58u: goto label_286e58;
            case 0x286E5Cu: goto label_286e5c;
            case 0x286E60u: goto label_286e60;
            case 0x286E64u: goto label_286e64;
            case 0x286E68u: goto label_286e68;
            case 0x286E6Cu: goto label_286e6c;
            case 0x286E70u: goto label_286e70;
            case 0x286E74u: goto label_286e74;
            case 0x286E78u: goto label_286e78;
            case 0x286E7Cu: goto label_286e7c;
            case 0x286E80u: goto label_286e80;
            case 0x286E84u: goto label_286e84;
            case 0x286E88u: goto label_286e88;
            case 0x286E8Cu: goto label_286e8c;
            case 0x286E90u: goto label_286e90;
            case 0x286E94u: goto label_286e94;
            case 0x286E98u: goto label_286e98;
            case 0x286E9Cu: goto label_286e9c;
            case 0x286EA0u: goto label_286ea0;
            case 0x286EA4u: goto label_286ea4;
            case 0x286EA8u: goto label_286ea8;
            case 0x286EACu: goto label_286eac;
            case 0x286EB0u: goto label_286eb0;
            case 0x286EB4u: goto label_286eb4;
            case 0x286EB8u: goto label_286eb8;
            case 0x286EBCu: goto label_286ebc;
            case 0x286EC0u: goto label_286ec0;
            case 0x286EC4u: goto label_286ec4;
            case 0x286EC8u: goto label_286ec8;
            case 0x286ECCu: goto label_286ecc;
            case 0x286ED0u: goto label_286ed0;
            case 0x286ED4u: goto label_286ed4;
            case 0x286ED8u: goto label_286ed8;
            case 0x286EDCu: goto label_286edc;
            case 0x286EE0u: goto label_286ee0;
            case 0x286EE4u: goto label_286ee4;
            case 0x286EE8u: goto label_286ee8;
            case 0x286EECu: goto label_286eec;
            case 0x286EF0u: goto label_286ef0;
            case 0x286EF4u: goto label_286ef4;
            case 0x286EF8u: goto label_286ef8;
            case 0x286EFCu: goto label_286efc;
            case 0x286F00u: goto label_286f00;
            case 0x286F04u: goto label_286f04;
            case 0x286F08u: goto label_286f08;
            case 0x286F0Cu: goto label_286f0c;
            case 0x286F10u: goto label_286f10;
            case 0x286F14u: goto label_286f14;
            case 0x286F18u: goto label_286f18;
            case 0x286F1Cu: goto label_286f1c;
            case 0x286F20u: goto label_286f20;
            case 0x286F24u: goto label_286f24;
            case 0x286F28u: goto label_286f28;
            case 0x286F2Cu: goto label_286f2c;
            case 0x286F30u: goto label_286f30;
            case 0x286F34u: goto label_286f34;
            case 0x286F38u: goto label_286f38;
            case 0x286F3Cu: goto label_286f3c;
            case 0x286F40u: goto label_286f40;
            case 0x286F44u: goto label_286f44;
            case 0x286F48u: goto label_286f48;
            case 0x286F4Cu: goto label_286f4c;
            case 0x286F50u: goto label_286f50;
            case 0x286F54u: goto label_286f54;
            case 0x286F58u: goto label_286f58;
            case 0x286F5Cu: goto label_286f5c;
            case 0x286F60u: goto label_286f60;
            case 0x286F64u: goto label_286f64;
            case 0x286F68u: goto label_286f68;
            case 0x286F6Cu: goto label_286f6c;
            case 0x286F70u: goto label_286f70;
            case 0x286F74u: goto label_286f74;
            case 0x286F78u: goto label_286f78;
            case 0x286F7Cu: goto label_286f7c;
            case 0x286F80u: goto label_286f80;
            case 0x286F84u: goto label_286f84;
            case 0x286F88u: goto label_286f88;
            case 0x286F8Cu: goto label_286f8c;
            case 0x286F90u: goto label_286f90;
            case 0x286F94u: goto label_286f94;
            case 0x286F98u: goto label_286f98;
            case 0x286F9Cu: goto label_286f9c;
            case 0x286FA0u: goto label_286fa0;
            case 0x286FA4u: goto label_286fa4;
            case 0x286FA8u: goto label_286fa8;
            case 0x286FACu: goto label_286fac;
            case 0x286FB0u: goto label_286fb0;
            case 0x286FB4u: goto label_286fb4;
            case 0x286FB8u: goto label_286fb8;
            case 0x286FBCu: goto label_286fbc;
            case 0x286FC0u: goto label_286fc0;
            case 0x286FC4u: goto label_286fc4;
            case 0x286FC8u: goto label_286fc8;
            case 0x286FCCu: goto label_286fcc;
            case 0x286FD0u: goto label_286fd0;
            case 0x286FD4u: goto label_286fd4;
            case 0x286FD8u: goto label_286fd8;
            case 0x286FDCu: goto label_286fdc;
            case 0x286FE0u: goto label_286fe0;
            case 0x286FE4u: goto label_286fe4;
            case 0x286FE8u: goto label_286fe8;
            case 0x286FECu: goto label_286fec;
            case 0x286FF0u: goto label_286ff0;
            case 0x286FF4u: goto label_286ff4;
            case 0x286FF8u: goto label_286ff8;
            case 0x286FFCu: goto label_286ffc;
            case 0x287000u: goto label_287000;
            case 0x287004u: goto label_287004;
            case 0x287008u: goto label_287008;
            case 0x28700Cu: goto label_28700c;
            case 0x287010u: goto label_287010;
            case 0x287014u: goto label_287014;
            case 0x287018u: goto label_287018;
            case 0x28701Cu: goto label_28701c;
            case 0x287020u: goto label_287020;
            case 0x287024u: goto label_287024;
            case 0x287028u: goto label_287028;
            case 0x28702Cu: goto label_28702c;
            case 0x287030u: goto label_287030;
            case 0x287034u: goto label_287034;
            case 0x287038u: goto label_287038;
            case 0x28703Cu: goto label_28703c;
            case 0x287040u: goto label_287040;
            case 0x287044u: goto label_287044;
            case 0x287048u: goto label_287048;
            case 0x28704Cu: goto label_28704c;
            case 0x287050u: goto label_287050;
            case 0x287054u: goto label_287054;
            case 0x287058u: goto label_287058;
            case 0x28705Cu: goto label_28705c;
            case 0x287060u: goto label_287060;
            case 0x287064u: goto label_287064;
            case 0x287068u: goto label_287068;
            case 0x28706Cu: goto label_28706c;
            case 0x287070u: goto label_287070;
            case 0x287074u: goto label_287074;
            case 0x287078u: goto label_287078;
            case 0x28707Cu: goto label_28707c;
            case 0x287080u: goto label_287080;
            case 0x287084u: goto label_287084;
            case 0x287088u: goto label_287088;
            case 0x28708Cu: goto label_28708c;
            case 0x287090u: goto label_287090;
            case 0x287094u: goto label_287094;
            case 0x287098u: goto label_287098;
            case 0x28709Cu: goto label_28709c;
            case 0x2870A0u: goto label_2870a0;
            case 0x2870A4u: goto label_2870a4;
            case 0x2870A8u: goto label_2870a8;
            case 0x2870ACu: goto label_2870ac;
            case 0x2870B0u: goto label_2870b0;
            case 0x2870B4u: goto label_2870b4;
            case 0x2870B8u: goto label_2870b8;
            case 0x2870BCu: goto label_2870bc;
            case 0x2870C0u: goto label_2870c0;
            case 0x2870C4u: goto label_2870c4;
            case 0x2870C8u: goto label_2870c8;
            case 0x2870CCu: goto label_2870cc;
            case 0x2870D0u: goto label_2870d0;
            case 0x2870D4u: goto label_2870d4;
            case 0x2870D8u: goto label_2870d8;
            case 0x2870DCu: goto label_2870dc;
            case 0x2870E0u: goto label_2870e0;
            case 0x2870E4u: goto label_2870e4;
            case 0x2870E8u: goto label_2870e8;
            case 0x2870ECu: goto label_2870ec;
            case 0x2870F0u: goto label_2870f0;
            case 0x2870F4u: goto label_2870f4;
            case 0x2870F8u: goto label_2870f8;
            case 0x2870FCu: goto label_2870fc;
            case 0x287100u: goto label_287100;
            case 0x287104u: goto label_287104;
            case 0x287108u: goto label_287108;
            case 0x28710Cu: goto label_28710c;
            case 0x287110u: goto label_287110;
            case 0x287114u: goto label_287114;
            case 0x287118u: goto label_287118;
            case 0x28711Cu: goto label_28711c;
            case 0x287120u: goto label_287120;
            case 0x287124u: goto label_287124;
            case 0x287128u: goto label_287128;
            case 0x28712Cu: goto label_28712c;
            case 0x287130u: goto label_287130;
            case 0x287134u: goto label_287134;
            case 0x287138u: goto label_287138;
            case 0x28713Cu: goto label_28713c;
            case 0x287140u: goto label_287140;
            case 0x287144u: goto label_287144;
            case 0x287148u: goto label_287148;
            case 0x28714Cu: goto label_28714c;
            case 0x287150u: goto label_287150;
            case 0x287154u: goto label_287154;
            case 0x287158u: goto label_287158;
            case 0x28715Cu: goto label_28715c;
            case 0x287160u: goto label_287160;
            case 0x287164u: goto label_287164;
            case 0x287168u: goto label_287168;
            case 0x28716Cu: goto label_28716c;
            case 0x287170u: goto label_287170;
            case 0x287174u: goto label_287174;
            case 0x287178u: goto label_287178;
            case 0x28717Cu: goto label_28717c;
            case 0x287180u: goto label_287180;
            case 0x287184u: goto label_287184;
            case 0x287188u: goto label_287188;
            case 0x28718Cu: goto label_28718c;
            case 0x287190u: goto label_287190;
            case 0x287194u: goto label_287194;
            case 0x287198u: goto label_287198;
            case 0x28719Cu: goto label_28719c;
            case 0x2871A0u: goto label_2871a0;
            case 0x2871A4u: goto label_2871a4;
            case 0x2871A8u: goto label_2871a8;
            case 0x2871ACu: goto label_2871ac;
            case 0x2871B0u: goto label_2871b0;
            case 0x2871B4u: goto label_2871b4;
            case 0x2871B8u: goto label_2871b8;
            case 0x2871BCu: goto label_2871bc;
            case 0x2871C0u: goto label_2871c0;
            case 0x2871C4u: goto label_2871c4;
            case 0x2871C8u: goto label_2871c8;
            case 0x2871CCu: goto label_2871cc;
            case 0x2871D0u: goto label_2871d0;
            case 0x2871D4u: goto label_2871d4;
            case 0x2871D8u: goto label_2871d8;
            case 0x2871DCu: goto label_2871dc;
            case 0x2871E0u: goto label_2871e0;
            case 0x2871E4u: goto label_2871e4;
            case 0x2871E8u: goto label_2871e8;
            case 0x2871ECu: goto label_2871ec;
            case 0x2871F0u: goto label_2871f0;
            case 0x2871F4u: goto label_2871f4;
            case 0x2871F8u: goto label_2871f8;
            case 0x2871FCu: goto label_2871fc;
            case 0x287200u: goto label_287200;
            case 0x287204u: goto label_287204;
            case 0x287208u: goto label_287208;
            case 0x28720Cu: goto label_28720c;
            case 0x287210u: goto label_287210;
            case 0x287214u: goto label_287214;
            case 0x287218u: goto label_287218;
            case 0x28721Cu: goto label_28721c;
            case 0x287220u: goto label_287220;
            case 0x287224u: goto label_287224;
            case 0x287228u: goto label_287228;
            case 0x28722Cu: goto label_28722c;
            case 0x287230u: goto label_287230;
            case 0x287234u: goto label_287234;
            case 0x287238u: goto label_287238;
            case 0x28723Cu: goto label_28723c;
            case 0x287240u: goto label_287240;
            case 0x287244u: goto label_287244;
            case 0x287248u: goto label_287248;
            case 0x28724Cu: goto label_28724c;
            case 0x287250u: goto label_287250;
            case 0x287254u: goto label_287254;
            case 0x287258u: goto label_287258;
            case 0x28725Cu: goto label_28725c;
            case 0x287260u: goto label_287260;
            case 0x287264u: goto label_287264;
            case 0x287268u: goto label_287268;
            case 0x28726Cu: goto label_28726c;
            case 0x287270u: goto label_287270;
            case 0x287274u: goto label_287274;
            case 0x287278u: goto label_287278;
            case 0x28727Cu: goto label_28727c;
            case 0x287280u: goto label_287280;
            case 0x287284u: goto label_287284;
            case 0x287288u: goto label_287288;
            case 0x28728Cu: goto label_28728c;
            case 0x287290u: goto label_287290;
            case 0x287294u: goto label_287294;
            case 0x287298u: goto label_287298;
            case 0x28729Cu: goto label_28729c;
            case 0x2872A0u: goto label_2872a0;
            case 0x2872A4u: goto label_2872a4;
            case 0x2872A8u: goto label_2872a8;
            case 0x2872ACu: goto label_2872ac;
            case 0x2872B0u: goto label_2872b0;
            case 0x2872B4u: goto label_2872b4;
            case 0x2872B8u: goto label_2872b8;
            case 0x2872BCu: goto label_2872bc;
            case 0x2872C0u: goto label_2872c0;
            case 0x2872C4u: goto label_2872c4;
            case 0x2872C8u: goto label_2872c8;
            case 0x2872CCu: goto label_2872cc;
            case 0x2872D0u: goto label_2872d0;
            case 0x2872D4u: goto label_2872d4;
            case 0x2872D8u: goto label_2872d8;
            case 0x2872DCu: goto label_2872dc;
            case 0x2872E0u: goto label_2872e0;
            case 0x2872E4u: goto label_2872e4;
            case 0x2872E8u: goto label_2872e8;
            case 0x2872ECu: goto label_2872ec;
            case 0x2872F0u: goto label_2872f0;
            case 0x2872F4u: goto label_2872f4;
            case 0x2872F8u: goto label_2872f8;
            case 0x2872FCu: goto label_2872fc;
            case 0x287300u: goto label_287300;
            case 0x287304u: goto label_287304;
            case 0x287308u: goto label_287308;
            case 0x28730Cu: goto label_28730c;
            case 0x287310u: goto label_287310;
            case 0x287314u: goto label_287314;
            case 0x287318u: goto label_287318;
            case 0x28731Cu: goto label_28731c;
            case 0x287320u: goto label_287320;
            case 0x287324u: goto label_287324;
            case 0x287328u: goto label_287328;
            case 0x28732Cu: goto label_28732c;
            case 0x287330u: goto label_287330;
            case 0x287334u: goto label_287334;
            case 0x287338u: goto label_287338;
            case 0x28733Cu: goto label_28733c;
            case 0x287340u: goto label_287340;
            case 0x287344u: goto label_287344;
            case 0x287348u: goto label_287348;
            case 0x28734Cu: goto label_28734c;
            case 0x287350u: goto label_287350;
            case 0x287354u: goto label_287354;
            case 0x287358u: goto label_287358;
            case 0x28735Cu: goto label_28735c;
            case 0x287360u: goto label_287360;
            case 0x287364u: goto label_287364;
            case 0x287368u: goto label_287368;
            case 0x28736Cu: goto label_28736c;
            case 0x287370u: goto label_287370;
            case 0x287374u: goto label_287374;
            case 0x287378u: goto label_287378;
            case 0x28737Cu: goto label_28737c;
            case 0x287380u: goto label_287380;
            case 0x287384u: goto label_287384;
            case 0x287388u: goto label_287388;
            case 0x28738Cu: goto label_28738c;
            case 0x287390u: goto label_287390;
            case 0x287394u: goto label_287394;
            case 0x287398u: goto label_287398;
            case 0x28739Cu: goto label_28739c;
            case 0x2873A0u: goto label_2873a0;
            case 0x2873A4u: goto label_2873a4;
            case 0x2873A8u: goto label_2873a8;
            case 0x2873ACu: goto label_2873ac;
            case 0x2873B0u: goto label_2873b0;
            case 0x2873B4u: goto label_2873b4;
            case 0x2873B8u: goto label_2873b8;
            case 0x2873BCu: goto label_2873bc;
            case 0x2873C0u: goto label_2873c0;
            case 0x2873C4u: goto label_2873c4;
            case 0x2873C8u: goto label_2873c8;
            case 0x2873CCu: goto label_2873cc;
            case 0x2873D0u: goto label_2873d0;
            case 0x2873D4u: goto label_2873d4;
            case 0x2873D8u: goto label_2873d8;
            case 0x2873DCu: goto label_2873dc;
            case 0x2873E0u: goto label_2873e0;
            case 0x2873E4u: goto label_2873e4;
            case 0x2873E8u: goto label_2873e8;
            case 0x2873ECu: goto label_2873ec;
            case 0x2873F0u: goto label_2873f0;
            case 0x2873F4u: goto label_2873f4;
            case 0x2873F8u: goto label_2873f8;
            case 0x2873FCu: goto label_2873fc;
            case 0x287400u: goto label_287400;
            case 0x287404u: goto label_287404;
            case 0x287408u: goto label_287408;
            case 0x28740Cu: goto label_28740c;
            case 0x287410u: goto label_287410;
            case 0x287414u: goto label_287414;
            case 0x287418u: goto label_287418;
            case 0x28741Cu: goto label_28741c;
            case 0x287420u: goto label_287420;
            case 0x287424u: goto label_287424;
            case 0x287428u: goto label_287428;
            case 0x28742Cu: goto label_28742c;
            case 0x287430u: goto label_287430;
            case 0x287434u: goto label_287434;
            case 0x287438u: goto label_287438;
            case 0x28743Cu: goto label_28743c;
            case 0x287440u: goto label_287440;
            case 0x287444u: goto label_287444;
            case 0x287448u: goto label_287448;
            case 0x28744Cu: goto label_28744c;
            case 0x287450u: goto label_287450;
            case 0x287454u: goto label_287454;
            case 0x287458u: goto label_287458;
            case 0x28745Cu: goto label_28745c;
            case 0x287460u: goto label_287460;
            case 0x287464u: goto label_287464;
            case 0x287468u: goto label_287468;
            case 0x28746Cu: goto label_28746c;
            case 0x287470u: goto label_287470;
            case 0x287474u: goto label_287474;
            case 0x287478u: goto label_287478;
            case 0x28747Cu: goto label_28747c;
            case 0x287480u: goto label_287480;
            case 0x287484u: goto label_287484;
            case 0x287488u: goto label_287488;
            case 0x28748Cu: goto label_28748c;
            case 0x287490u: goto label_287490;
            case 0x287494u: goto label_287494;
            case 0x287498u: goto label_287498;
            case 0x28749Cu: goto label_28749c;
            case 0x2874A0u: goto label_2874a0;
            case 0x2874A4u: goto label_2874a4;
            case 0x2874A8u: goto label_2874a8;
            case 0x2874ACu: goto label_2874ac;
            case 0x2874B0u: goto label_2874b0;
            case 0x2874B4u: goto label_2874b4;
            case 0x2874B8u: goto label_2874b8;
            case 0x2874BCu: goto label_2874bc;
            case 0x2874C0u: goto label_2874c0;
            case 0x2874C4u: goto label_2874c4;
            case 0x2874C8u: goto label_2874c8;
            case 0x2874CCu: goto label_2874cc;
            case 0x2874D0u: goto label_2874d0;
            case 0x2874D4u: goto label_2874d4;
            case 0x2874D8u: goto label_2874d8;
            case 0x2874DCu: goto label_2874dc;
            case 0x2874E0u: goto label_2874e0;
            case 0x2874E4u: goto label_2874e4;
            case 0x2874E8u: goto label_2874e8;
            case 0x2874ECu: goto label_2874ec;
            case 0x2874F0u: goto label_2874f0;
            case 0x2874F4u: goto label_2874f4;
            case 0x2874F8u: goto label_2874f8;
            case 0x2874FCu: goto label_2874fc;
            case 0x287500u: goto label_287500;
            case 0x287504u: goto label_287504;
            case 0x287508u: goto label_287508;
            case 0x28750Cu: goto label_28750c;
            case 0x287510u: goto label_287510;
            case 0x287514u: goto label_287514;
            case 0x287518u: goto label_287518;
            case 0x28751Cu: goto label_28751c;
            case 0x287520u: goto label_287520;
            case 0x287524u: goto label_287524;
            case 0x287528u: goto label_287528;
            case 0x28752Cu: goto label_28752c;
            case 0x287530u: goto label_287530;
            case 0x287534u: goto label_287534;
            case 0x287538u: goto label_287538;
            case 0x28753Cu: goto label_28753c;
            case 0x287540u: goto label_287540;
            case 0x287544u: goto label_287544;
            case 0x287548u: goto label_287548;
            case 0x28754Cu: goto label_28754c;
            case 0x287550u: goto label_287550;
            case 0x287554u: goto label_287554;
            case 0x287558u: goto label_287558;
            case 0x28755Cu: goto label_28755c;
            case 0x287560u: goto label_287560;
            case 0x287564u: goto label_287564;
            case 0x287568u: goto label_287568;
            case 0x28756Cu: goto label_28756c;
            case 0x287570u: goto label_287570;
            case 0x287574u: goto label_287574;
            case 0x287578u: goto label_287578;
            case 0x28757Cu: goto label_28757c;
            case 0x287580u: goto label_287580;
            case 0x287584u: goto label_287584;
            case 0x287588u: goto label_287588;
            case 0x28758Cu: goto label_28758c;
            case 0x287590u: goto label_287590;
            case 0x287594u: goto label_287594;
            case 0x287598u: goto label_287598;
            case 0x28759Cu: goto label_28759c;
            case 0x2875A0u: goto label_2875a0;
            case 0x2875A4u: goto label_2875a4;
            case 0x2875A8u: goto label_2875a8;
            case 0x2875ACu: goto label_2875ac;
            case 0x2875B0u: goto label_2875b0;
            case 0x2875B4u: goto label_2875b4;
            case 0x2875B8u: goto label_2875b8;
            case 0x2875BCu: goto label_2875bc;
            case 0x2875C0u: goto label_2875c0;
            case 0x2875C4u: goto label_2875c4;
            case 0x2875C8u: goto label_2875c8;
            case 0x2875CCu: goto label_2875cc;
            case 0x2875D0u: goto label_2875d0;
            case 0x2875D4u: goto label_2875d4;
            case 0x2875D8u: goto label_2875d8;
            case 0x2875DCu: goto label_2875dc;
            case 0x2875E0u: goto label_2875e0;
            case 0x2875E4u: goto label_2875e4;
            case 0x2875E8u: goto label_2875e8;
            case 0x2875ECu: goto label_2875ec;
            case 0x2875F0u: goto label_2875f0;
            case 0x2875F4u: goto label_2875f4;
            case 0x2875F8u: goto label_2875f8;
            case 0x2875FCu: goto label_2875fc;
            case 0x287600u: goto label_287600;
            case 0x287604u: goto label_287604;
            case 0x287608u: goto label_287608;
            case 0x28760Cu: goto label_28760c;
            case 0x287610u: goto label_287610;
            case 0x287614u: goto label_287614;
            case 0x287618u: goto label_287618;
            case 0x28761Cu: goto label_28761c;
            case 0x287620u: goto label_287620;
            case 0x287624u: goto label_287624;
            case 0x287628u: goto label_287628;
            case 0x28762Cu: goto label_28762c;
            case 0x287630u: goto label_287630;
            case 0x287634u: goto label_287634;
            case 0x287638u: goto label_287638;
            case 0x28763Cu: goto label_28763c;
            case 0x287640u: goto label_287640;
            case 0x287644u: goto label_287644;
            case 0x287648u: goto label_287648;
            case 0x28764Cu: goto label_28764c;
            case 0x287650u: goto label_287650;
            case 0x287654u: goto label_287654;
            case 0x287658u: goto label_287658;
            case 0x28765Cu: goto label_28765c;
            case 0x287660u: goto label_287660;
            case 0x287664u: goto label_287664;
            case 0x287668u: goto label_287668;
            case 0x28766Cu: goto label_28766c;
            case 0x287670u: goto label_287670;
            case 0x287674u: goto label_287674;
            case 0x287678u: goto label_287678;
            case 0x28767Cu: goto label_28767c;
            case 0x287680u: goto label_287680;
            case 0x287684u: goto label_287684;
            case 0x287688u: goto label_287688;
            case 0x28768Cu: goto label_28768c;
            case 0x287690u: goto label_287690;
            case 0x287694u: goto label_287694;
            case 0x287698u: goto label_287698;
            case 0x28769Cu: goto label_28769c;
            case 0x2876A0u: goto label_2876a0;
            case 0x2876A4u: goto label_2876a4;
            case 0x2876A8u: goto label_2876a8;
            case 0x2876ACu: goto label_2876ac;
            case 0x2876B0u: goto label_2876b0;
            case 0x2876B4u: goto label_2876b4;
            case 0x2876B8u: goto label_2876b8;
            case 0x2876BCu: goto label_2876bc;
            case 0x2876C0u: goto label_2876c0;
            case 0x2876C4u: goto label_2876c4;
            case 0x2876C8u: goto label_2876c8;
            case 0x2876CCu: goto label_2876cc;
            case 0x2876D0u: goto label_2876d0;
            case 0x2876D4u: goto label_2876d4;
            case 0x2876D8u: goto label_2876d8;
            case 0x2876DCu: goto label_2876dc;
            case 0x2876E0u: goto label_2876e0;
            case 0x2876E4u: goto label_2876e4;
            case 0x2876E8u: goto label_2876e8;
            case 0x2876ECu: goto label_2876ec;
            case 0x2876F0u: goto label_2876f0;
            case 0x2876F4u: goto label_2876f4;
            case 0x2876F8u: goto label_2876f8;
            case 0x2876FCu: goto label_2876fc;
            case 0x287700u: goto label_287700;
            case 0x287704u: goto label_287704;
            case 0x287708u: goto label_287708;
            case 0x28770Cu: goto label_28770c;
            case 0x287710u: goto label_287710;
            case 0x287714u: goto label_287714;
            case 0x287718u: goto label_287718;
            case 0x28771Cu: goto label_28771c;
            case 0x287720u: goto label_287720;
            case 0x287724u: goto label_287724;
            case 0x287728u: goto label_287728;
            case 0x28772Cu: goto label_28772c;
            case 0x287730u: goto label_287730;
            case 0x287734u: goto label_287734;
            case 0x287738u: goto label_287738;
            case 0x28773Cu: goto label_28773c;
            case 0x287740u: goto label_287740;
            case 0x287744u: goto label_287744;
            case 0x287748u: goto label_287748;
            case 0x28774Cu: goto label_28774c;
            case 0x287750u: goto label_287750;
            case 0x287754u: goto label_287754;
            case 0x287758u: goto label_287758;
            case 0x28775Cu: goto label_28775c;
            case 0x287760u: goto label_287760;
            case 0x287764u: goto label_287764;
            case 0x287768u: goto label_287768;
            case 0x28776Cu: goto label_28776c;
            case 0x287770u: goto label_287770;
            case 0x287774u: goto label_287774;
            case 0x287778u: goto label_287778;
            case 0x28777Cu: goto label_28777c;
            case 0x287780u: goto label_287780;
            case 0x287784u: goto label_287784;
            case 0x287788u: goto label_287788;
            case 0x28778Cu: goto label_28778c;
            case 0x287790u: goto label_287790;
            case 0x287794u: goto label_287794;
            case 0x287798u: goto label_287798;
            case 0x28779Cu: goto label_28779c;
            case 0x2877A0u: goto label_2877a0;
            case 0x2877A4u: goto label_2877a4;
            case 0x2877A8u: goto label_2877a8;
            case 0x2877ACu: goto label_2877ac;
            case 0x2877B0u: goto label_2877b0;
            case 0x2877B4u: goto label_2877b4;
            case 0x2877B8u: goto label_2877b8;
            case 0x2877BCu: goto label_2877bc;
            case 0x2877C0u: goto label_2877c0;
            case 0x2877C4u: goto label_2877c4;
            case 0x2877C8u: goto label_2877c8;
            case 0x2877CCu: goto label_2877cc;
            case 0x2877D0u: goto label_2877d0;
            case 0x2877D4u: goto label_2877d4;
            case 0x2877D8u: goto label_2877d8;
            case 0x2877DCu: goto label_2877dc;
            case 0x2877E0u: goto label_2877e0;
            case 0x2877E4u: goto label_2877e4;
            case 0x2877E8u: goto label_2877e8;
            case 0x2877ECu: goto label_2877ec;
            case 0x2877F0u: goto label_2877f0;
            case 0x2877F4u: goto label_2877f4;
            case 0x2877F8u: goto label_2877f8;
            case 0x2877FCu: goto label_2877fc;
            case 0x287800u: goto label_287800;
            case 0x287804u: goto label_287804;
            case 0x287808u: goto label_287808;
            case 0x28780Cu: goto label_28780c;
            case 0x287810u: goto label_287810;
            case 0x287814u: goto label_287814;
            case 0x287818u: goto label_287818;
            case 0x28781Cu: goto label_28781c;
            case 0x287820u: goto label_287820;
            case 0x287824u: goto label_287824;
            case 0x287828u: goto label_287828;
            case 0x28782Cu: goto label_28782c;
            case 0x287830u: goto label_287830;
            case 0x287834u: goto label_287834;
            case 0x287838u: goto label_287838;
            case 0x28783Cu: goto label_28783c;
            case 0x287840u: goto label_287840;
            case 0x287844u: goto label_287844;
            case 0x287848u: goto label_287848;
            case 0x28784Cu: goto label_28784c;
            case 0x287850u: goto label_287850;
            case 0x287854u: goto label_287854;
            case 0x287858u: goto label_287858;
            case 0x28785Cu: goto label_28785c;
            case 0x287860u: goto label_287860;
            case 0x287864u: goto label_287864;
            case 0x287868u: goto label_287868;
            case 0x28786Cu: goto label_28786c;
            case 0x287870u: goto label_287870;
            case 0x287874u: goto label_287874;
            case 0x287878u: goto label_287878;
            case 0x28787Cu: goto label_28787c;
            case 0x287880u: goto label_287880;
            case 0x287884u: goto label_287884;
            case 0x287888u: goto label_287888;
            case 0x28788Cu: goto label_28788c;
            case 0x287890u: goto label_287890;
            case 0x287894u: goto label_287894;
            case 0x287898u: goto label_287898;
            case 0x28789Cu: goto label_28789c;
            case 0x2878A0u: goto label_2878a0;
            case 0x2878A4u: goto label_2878a4;
            case 0x2878A8u: goto label_2878a8;
            case 0x2878ACu: goto label_2878ac;
            case 0x2878B0u: goto label_2878b0;
            case 0x2878B4u: goto label_2878b4;
            case 0x2878B8u: goto label_2878b8;
            case 0x2878BCu: goto label_2878bc;
            case 0x2878C0u: goto label_2878c0;
            case 0x2878C4u: goto label_2878c4;
            case 0x2878C8u: goto label_2878c8;
            case 0x2878CCu: goto label_2878cc;
            case 0x2878D0u: goto label_2878d0;
            case 0x2878D4u: goto label_2878d4;
            case 0x2878D8u: goto label_2878d8;
            case 0x2878DCu: goto label_2878dc;
            case 0x2878E0u: goto label_2878e0;
            case 0x2878E4u: goto label_2878e4;
            case 0x2878E8u: goto label_2878e8;
            case 0x2878ECu: goto label_2878ec;
            case 0x2878F0u: goto label_2878f0;
            case 0x2878F4u: goto label_2878f4;
            case 0x2878F8u: goto label_2878f8;
            case 0x2878FCu: goto label_2878fc;
            case 0x287900u: goto label_287900;
            case 0x287904u: goto label_287904;
            case 0x287908u: goto label_287908;
            case 0x28790Cu: goto label_28790c;
            case 0x287910u: goto label_287910;
            case 0x287914u: goto label_287914;
            case 0x287918u: goto label_287918;
            case 0x28791Cu: goto label_28791c;
            case 0x287920u: goto label_287920;
            case 0x287924u: goto label_287924;
            case 0x287928u: goto label_287928;
            case 0x28792Cu: goto label_28792c;
            case 0x287930u: goto label_287930;
            case 0x287934u: goto label_287934;
            case 0x287938u: goto label_287938;
            case 0x28793Cu: goto label_28793c;
            case 0x287940u: goto label_287940;
            case 0x287944u: goto label_287944;
            case 0x287948u: goto label_287948;
            case 0x28794Cu: goto label_28794c;
            case 0x287950u: goto label_287950;
            case 0x287954u: goto label_287954;
            case 0x287958u: goto label_287958;
            case 0x28795Cu: goto label_28795c;
            case 0x287960u: goto label_287960;
            case 0x287964u: goto label_287964;
            case 0x287968u: goto label_287968;
            case 0x28796Cu: goto label_28796c;
            case 0x287970u: goto label_287970;
            case 0x287974u: goto label_287974;
            case 0x287978u: goto label_287978;
            case 0x28797Cu: goto label_28797c;
            case 0x287980u: goto label_287980;
            case 0x287984u: goto label_287984;
            case 0x287988u: goto label_287988;
            case 0x28798Cu: goto label_28798c;
            case 0x287990u: goto label_287990;
            case 0x287994u: goto label_287994;
            case 0x287998u: goto label_287998;
            case 0x28799Cu: goto label_28799c;
            case 0x2879A0u: goto label_2879a0;
            case 0x2879A4u: goto label_2879a4;
            case 0x2879A8u: goto label_2879a8;
            case 0x2879ACu: goto label_2879ac;
            case 0x2879B0u: goto label_2879b0;
            case 0x2879B4u: goto label_2879b4;
            case 0x2879B8u: goto label_2879b8;
            case 0x2879BCu: goto label_2879bc;
            case 0x2879C0u: goto label_2879c0;
            case 0x2879C4u: goto label_2879c4;
            case 0x2879C8u: goto label_2879c8;
            case 0x2879CCu: goto label_2879cc;
            case 0x2879D0u: goto label_2879d0;
            case 0x2879D4u: goto label_2879d4;
            case 0x2879D8u: goto label_2879d8;
            case 0x2879DCu: goto label_2879dc;
            case 0x2879E0u: goto label_2879e0;
            case 0x2879E4u: goto label_2879e4;
            case 0x2879E8u: goto label_2879e8;
            case 0x2879ECu: goto label_2879ec;
            case 0x2879F0u: goto label_2879f0;
            case 0x2879F4u: goto label_2879f4;
            case 0x2879F8u: goto label_2879f8;
            case 0x2879FCu: goto label_2879fc;
            case 0x287A00u: goto label_287a00;
            case 0x287A04u: goto label_287a04;
            case 0x287A08u: goto label_287a08;
            case 0x287A0Cu: goto label_287a0c;
            case 0x287A10u: goto label_287a10;
            case 0x287A14u: goto label_287a14;
            case 0x287A18u: goto label_287a18;
            case 0x287A1Cu: goto label_287a1c;
            case 0x287A20u: goto label_287a20;
            case 0x287A24u: goto label_287a24;
            case 0x287A28u: goto label_287a28;
            case 0x287A2Cu: goto label_287a2c;
            case 0x287A30u: goto label_287a30;
            case 0x287A34u: goto label_287a34;
            case 0x287A38u: goto label_287a38;
            case 0x287A3Cu: goto label_287a3c;
            case 0x287A40u: goto label_287a40;
            case 0x287A44u: goto label_287a44;
            case 0x287A48u: goto label_287a48;
            case 0x287A4Cu: goto label_287a4c;
            case 0x287A50u: goto label_287a50;
            case 0x287A54u: goto label_287a54;
            case 0x287A58u: goto label_287a58;
            case 0x287A5Cu: goto label_287a5c;
            case 0x287A60u: goto label_287a60;
            case 0x287A64u: goto label_287a64;
            case 0x287A68u: goto label_287a68;
            case 0x287A6Cu: goto label_287a6c;
            case 0x287A70u: goto label_287a70;
            case 0x287A74u: goto label_287a74;
            case 0x287A78u: goto label_287a78;
            case 0x287A7Cu: goto label_287a7c;
            case 0x287A80u: goto label_287a80;
            case 0x287A84u: goto label_287a84;
            case 0x287A88u: goto label_287a88;
            case 0x287A8Cu: goto label_287a8c;
            case 0x287A90u: goto label_287a90;
            case 0x287A94u: goto label_287a94;
            case 0x287A98u: goto label_287a98;
            case 0x287A9Cu: goto label_287a9c;
            case 0x287AA0u: goto label_287aa0;
            case 0x287AA4u: goto label_287aa4;
            case 0x287AA8u: goto label_287aa8;
            case 0x287AACu: goto label_287aac;
            case 0x287AB0u: goto label_287ab0;
            case 0x287AB4u: goto label_287ab4;
            case 0x287AB8u: goto label_287ab8;
            case 0x287ABCu: goto label_287abc;
            case 0x287AC0u: goto label_287ac0;
            case 0x287AC4u: goto label_287ac4;
            case 0x287AC8u: goto label_287ac8;
            case 0x287ACCu: goto label_287acc;
            case 0x287AD0u: goto label_287ad0;
            case 0x287AD4u: goto label_287ad4;
            case 0x287AD8u: goto label_287ad8;
            case 0x287ADCu: goto label_287adc;
            case 0x287AE0u: goto label_287ae0;
            case 0x287AE4u: goto label_287ae4;
            case 0x287AE8u: goto label_287ae8;
            case 0x287AECu: goto label_287aec;
            case 0x287AF0u: goto label_287af0;
            case 0x287AF4u: goto label_287af4;
            case 0x287AF8u: goto label_287af8;
            case 0x287AFCu: goto label_287afc;
            case 0x287B00u: goto label_287b00;
            case 0x287B04u: goto label_287b04;
            case 0x287B08u: goto label_287b08;
            case 0x287B0Cu: goto label_287b0c;
            case 0x287B10u: goto label_287b10;
            case 0x287B14u: goto label_287b14;
            case 0x287B18u: goto label_287b18;
            case 0x287B1Cu: goto label_287b1c;
            case 0x287B20u: goto label_287b20;
            case 0x287B24u: goto label_287b24;
            case 0x287B28u: goto label_287b28;
            case 0x287B2Cu: goto label_287b2c;
            case 0x287B30u: goto label_287b30;
            case 0x287B34u: goto label_287b34;
            case 0x287B38u: goto label_287b38;
            case 0x287B3Cu: goto label_287b3c;
            case 0x287B40u: goto label_287b40;
            case 0x287B44u: goto label_287b44;
            case 0x287B48u: goto label_287b48;
            case 0x287B4Cu: goto label_287b4c;
            case 0x287B50u: goto label_287b50;
            case 0x287B54u: goto label_287b54;
            case 0x287B58u: goto label_287b58;
            case 0x287B5Cu: goto label_287b5c;
            case 0x287B60u: goto label_287b60;
            case 0x287B64u: goto label_287b64;
            case 0x287B68u: goto label_287b68;
            case 0x287B6Cu: goto label_287b6c;
            case 0x287B70u: goto label_287b70;
            case 0x287B74u: goto label_287b74;
            case 0x287B78u: goto label_287b78;
            case 0x287B7Cu: goto label_287b7c;
            case 0x287B80u: goto label_287b80;
            case 0x287B84u: goto label_287b84;
            case 0x287B88u: goto label_287b88;
            case 0x287B8Cu: goto label_287b8c;
            case 0x287B90u: goto label_287b90;
            case 0x287B94u: goto label_287b94;
            case 0x287B98u: goto label_287b98;
            case 0x287B9Cu: goto label_287b9c;
            case 0x287BA0u: goto label_287ba0;
            case 0x287BA4u: goto label_287ba4;
            case 0x287BA8u: goto label_287ba8;
            case 0x287BACu: goto label_287bac;
            case 0x287BB0u: goto label_287bb0;
            case 0x287BB4u: goto label_287bb4;
            case 0x287BB8u: goto label_287bb8;
            case 0x287BBCu: goto label_287bbc;
            case 0x287BC0u: goto label_287bc0;
            case 0x287BC4u: goto label_287bc4;
            case 0x287BC8u: goto label_287bc8;
            case 0x287BCCu: goto label_287bcc;
            case 0x287BD0u: goto label_287bd0;
            case 0x287BD4u: goto label_287bd4;
            case 0x287BD8u: goto label_287bd8;
            case 0x287BDCu: goto label_287bdc;
            case 0x287BE0u: goto label_287be0;
            case 0x287BE4u: goto label_287be4;
            case 0x287BE8u: goto label_287be8;
            case 0x287BECu: goto label_287bec;
            case 0x287BF0u: goto label_287bf0;
            case 0x287BF4u: goto label_287bf4;
            case 0x287BF8u: goto label_287bf8;
            case 0x287BFCu: goto label_287bfc;
            case 0x287C00u: goto label_287c00;
            case 0x287C04u: goto label_287c04;
            case 0x287C08u: goto label_287c08;
            case 0x287C0Cu: goto label_287c0c;
            case 0x287C10u: goto label_287c10;
            case 0x287C14u: goto label_287c14;
            case 0x287C18u: goto label_287c18;
            case 0x287C1Cu: goto label_287c1c;
            case 0x287C20u: goto label_287c20;
            case 0x287C24u: goto label_287c24;
            case 0x287C28u: goto label_287c28;
            case 0x287C2Cu: goto label_287c2c;
            case 0x287C30u: goto label_287c30;
            case 0x287C34u: goto label_287c34;
            case 0x287C38u: goto label_287c38;
            case 0x287C3Cu: goto label_287c3c;
            case 0x287C40u: goto label_287c40;
            case 0x287C44u: goto label_287c44;
            case 0x287C48u: goto label_287c48;
            case 0x287C4Cu: goto label_287c4c;
            case 0x287C50u: goto label_287c50;
            case 0x287C54u: goto label_287c54;
            case 0x287C58u: goto label_287c58;
            case 0x287C5Cu: goto label_287c5c;
            case 0x287C60u: goto label_287c60;
            case 0x287C64u: goto label_287c64;
            case 0x287C68u: goto label_287c68;
            case 0x287C6Cu: goto label_287c6c;
            case 0x287C70u: goto label_287c70;
            case 0x287C74u: goto label_287c74;
            case 0x287C78u: goto label_287c78;
            case 0x287C7Cu: goto label_287c7c;
            case 0x287C80u: goto label_287c80;
            case 0x287C84u: goto label_287c84;
            case 0x287C88u: goto label_287c88;
            case 0x287C8Cu: goto label_287c8c;
            case 0x287C90u: goto label_287c90;
            case 0x287C94u: goto label_287c94;
            case 0x287C98u: goto label_287c98;
            case 0x287C9Cu: goto label_287c9c;
            case 0x287CA0u: goto label_287ca0;
            case 0x287CA4u: goto label_287ca4;
            case 0x287CA8u: goto label_287ca8;
            case 0x287CACu: goto label_287cac;
            case 0x287CB0u: goto label_287cb0;
            case 0x287CB4u: goto label_287cb4;
            case 0x287CB8u: goto label_287cb8;
            case 0x287CBCu: goto label_287cbc;
            case 0x287CC0u: goto label_287cc0;
            case 0x287CC4u: goto label_287cc4;
            case 0x287CC8u: goto label_287cc8;
            case 0x287CCCu: goto label_287ccc;
            case 0x287CD0u: goto label_287cd0;
            case 0x287CD4u: goto label_287cd4;
            case 0x287CD8u: goto label_287cd8;
            case 0x287CDCu: goto label_287cdc;
            case 0x287CE0u: goto label_287ce0;
            case 0x287CE4u: goto label_287ce4;
            case 0x287CE8u: goto label_287ce8;
            case 0x287CECu: goto label_287cec;
            case 0x287CF0u: goto label_287cf0;
            case 0x287CF4u: goto label_287cf4;
            case 0x287CF8u: goto label_287cf8;
            case 0x287CFCu: goto label_287cfc;
            case 0x287D00u: goto label_287d00;
            case 0x287D04u: goto label_287d04;
            case 0x287D08u: goto label_287d08;
            case 0x287D0Cu: goto label_287d0c;
            case 0x287D10u: goto label_287d10;
            case 0x287D14u: goto label_287d14;
            case 0x287D18u: goto label_287d18;
            case 0x287D1Cu: goto label_287d1c;
            case 0x287D20u: goto label_287d20;
            case 0x287D24u: goto label_287d24;
            case 0x287D28u: goto label_287d28;
            case 0x287D2Cu: goto label_287d2c;
            case 0x287D30u: goto label_287d30;
            case 0x287D34u: goto label_287d34;
            case 0x287D38u: goto label_287d38;
            case 0x287D3Cu: goto label_287d3c;
            case 0x287D40u: goto label_287d40;
            case 0x287D44u: goto label_287d44;
            case 0x287D48u: goto label_287d48;
            case 0x287D4Cu: goto label_287d4c;
            case 0x287D50u: goto label_287d50;
            case 0x287D54u: goto label_287d54;
            case 0x287D58u: goto label_287d58;
            case 0x287D5Cu: goto label_287d5c;
            case 0x287D60u: goto label_287d60;
            case 0x287D64u: goto label_287d64;
            case 0x287D68u: goto label_287d68;
            case 0x287D6Cu: goto label_287d6c;
            case 0x287D70u: goto label_287d70;
            case 0x287D74u: goto label_287d74;
            case 0x287D78u: goto label_287d78;
            case 0x287D7Cu: goto label_287d7c;
            case 0x287D80u: goto label_287d80;
            case 0x287D84u: goto label_287d84;
            case 0x287D88u: goto label_287d88;
            case 0x287D8Cu: goto label_287d8c;
            case 0x287D90u: goto label_287d90;
            case 0x287D94u: goto label_287d94;
            case 0x287D98u: goto label_287d98;
            case 0x287D9Cu: goto label_287d9c;
            case 0x287DA0u: goto label_287da0;
            case 0x287DA4u: goto label_287da4;
            case 0x287DA8u: goto label_287da8;
            case 0x287DACu: goto label_287dac;
            case 0x287DB0u: goto label_287db0;
            case 0x287DB4u: goto label_287db4;
            case 0x287DB8u: goto label_287db8;
            case 0x287DBCu: goto label_287dbc;
            case 0x287DC0u: goto label_287dc0;
            case 0x287DC4u: goto label_287dc4;
            case 0x287DC8u: goto label_287dc8;
            case 0x287DCCu: goto label_287dcc;
            case 0x287DD0u: goto label_287dd0;
            case 0x287DD4u: goto label_287dd4;
            case 0x287DD8u: goto label_287dd8;
            case 0x287DDCu: goto label_287ddc;
            case 0x287DE0u: goto label_287de0;
            case 0x287DE4u: goto label_287de4;
            case 0x287DE8u: goto label_287de8;
            case 0x287DECu: goto label_287dec;
            case 0x287DF0u: goto label_287df0;
            case 0x287DF4u: goto label_287df4;
            case 0x287DF8u: goto label_287df8;
            case 0x287DFCu: goto label_287dfc;
            case 0x287E00u: goto label_287e00;
            case 0x287E04u: goto label_287e04;
            case 0x287E08u: goto label_287e08;
            case 0x287E0Cu: goto label_287e0c;
            case 0x287E10u: goto label_287e10;
            case 0x287E14u: goto label_287e14;
            case 0x287E18u: goto label_287e18;
            case 0x287E1Cu: goto label_287e1c;
            case 0x287E20u: goto label_287e20;
            case 0x287E24u: goto label_287e24;
            case 0x287E28u: goto label_287e28;
            case 0x287E2Cu: goto label_287e2c;
            case 0x287E30u: goto label_287e30;
            case 0x287E34u: goto label_287e34;
            case 0x287E38u: goto label_287e38;
            case 0x287E3Cu: goto label_287e3c;
            case 0x287E40u: goto label_287e40;
            case 0x287E44u: goto label_287e44;
            case 0x287E48u: goto label_287e48;
            case 0x287E4Cu: goto label_287e4c;
            case 0x287E50u: goto label_287e50;
            case 0x287E54u: goto label_287e54;
            case 0x287E58u: goto label_287e58;
            case 0x287E5Cu: goto label_287e5c;
            case 0x287E60u: goto label_287e60;
            case 0x287E64u: goto label_287e64;
            case 0x287E68u: goto label_287e68;
            case 0x287E6Cu: goto label_287e6c;
            case 0x287E70u: goto label_287e70;
            case 0x287E74u: goto label_287e74;
            case 0x287E78u: goto label_287e78;
            case 0x287E7Cu: goto label_287e7c;
            case 0x287E80u: goto label_287e80;
            case 0x287E84u: goto label_287e84;
            case 0x287E88u: goto label_287e88;
            case 0x287E8Cu: goto label_287e8c;
            case 0x287E90u: goto label_287e90;
            case 0x287E94u: goto label_287e94;
            case 0x287E98u: goto label_287e98;
            case 0x287E9Cu: goto label_287e9c;
            case 0x287EA0u: goto label_287ea0;
            case 0x287EA4u: goto label_287ea4;
            case 0x287EA8u: goto label_287ea8;
            case 0x287EACu: goto label_287eac;
            case 0x287EB0u: goto label_287eb0;
            case 0x287EB4u: goto label_287eb4;
            case 0x287EB8u: goto label_287eb8;
            case 0x287EBCu: goto label_287ebc;
            case 0x287EC0u: goto label_287ec0;
            case 0x287EC4u: goto label_287ec4;
            case 0x287EC8u: goto label_287ec8;
            case 0x287ECCu: goto label_287ecc;
            case 0x287ED0u: goto label_287ed0;
            case 0x287ED4u: goto label_287ed4;
            case 0x287ED8u: goto label_287ed8;
            case 0x287EDCu: goto label_287edc;
            case 0x287EE0u: goto label_287ee0;
            case 0x287EE4u: goto label_287ee4;
            case 0x287EE8u: goto label_287ee8;
            case 0x287EECu: goto label_287eec;
            case 0x287EF0u: goto label_287ef0;
            case 0x287EF4u: goto label_287ef4;
            case 0x287EF8u: goto label_287ef8;
            case 0x287EFCu: goto label_287efc;
            case 0x287F00u: goto label_287f00;
            case 0x287F04u: goto label_287f04;
            case 0x287F08u: goto label_287f08;
            case 0x287F0Cu: goto label_287f0c;
            case 0x287F10u: goto label_287f10;
            case 0x287F14u: goto label_287f14;
            case 0x287F18u: goto label_287f18;
            case 0x287F1Cu: goto label_287f1c;
            case 0x287F20u: goto label_287f20;
            case 0x287F24u: goto label_287f24;
            case 0x287F28u: goto label_287f28;
            case 0x287F2Cu: goto label_287f2c;
            case 0x287F30u: goto label_287f30;
            case 0x287F34u: goto label_287f34;
            case 0x287F38u: goto label_287f38;
            case 0x287F3Cu: goto label_287f3c;
            case 0x287F40u: goto label_287f40;
            case 0x287F44u: goto label_287f44;
            case 0x287F48u: goto label_287f48;
            case 0x287F4Cu: goto label_287f4c;
            case 0x287F50u: goto label_287f50;
            case 0x287F54u: goto label_287f54;
            case 0x287F58u: goto label_287f58;
            case 0x287F5Cu: goto label_287f5c;
            case 0x287F60u: goto label_287f60;
            case 0x287F64u: goto label_287f64;
            case 0x287F68u: goto label_287f68;
            case 0x287F6Cu: goto label_287f6c;
            case 0x287F70u: goto label_287f70;
            case 0x287F74u: goto label_287f74;
            case 0x287F78u: goto label_287f78;
            case 0x287F7Cu: goto label_287f7c;
            case 0x287F80u: goto label_287f80;
            case 0x287F84u: goto label_287f84;
            case 0x287F88u: goto label_287f88;
            case 0x287F8Cu: goto label_287f8c;
            case 0x287F90u: goto label_287f90;
            case 0x287F94u: goto label_287f94;
            case 0x287F98u: goto label_287f98;
            case 0x287F9Cu: goto label_287f9c;
            case 0x287FA0u: goto label_287fa0;
            case 0x287FA4u: goto label_287fa4;
            case 0x287FA8u: goto label_287fa8;
            case 0x287FACu: goto label_287fac;
            case 0x287FB0u: goto label_287fb0;
            case 0x287FB4u: goto label_287fb4;
            case 0x287FB8u: goto label_287fb8;
            case 0x287FBCu: goto label_287fbc;
            case 0x287FC0u: goto label_287fc0;
            case 0x287FC4u: goto label_287fc4;
            case 0x287FC8u: goto label_287fc8;
            case 0x287FCCu: goto label_287fcc;
            case 0x287FD0u: goto label_287fd0;
            case 0x287FD4u: goto label_287fd4;
            case 0x287FD8u: goto label_287fd8;
            case 0x287FDCu: goto label_287fdc;
            case 0x287FE0u: goto label_287fe0;
            case 0x287FE4u: goto label_287fe4;
            case 0x287FE8u: goto label_287fe8;
            case 0x287FECu: goto label_287fec;
            case 0x287FF0u: goto label_287ff0;
            case 0x287FF4u: goto label_287ff4;
            case 0x287FF8u: goto label_287ff8;
            case 0x287FFCu: goto label_287ffc;
            case 0x288000u: goto label_288000;
            case 0x288004u: goto label_288004;
            case 0x288008u: goto label_288008;
            case 0x28800Cu: goto label_28800c;
            case 0x288010u: goto label_288010;
            case 0x288014u: goto label_288014;
            case 0x288018u: goto label_288018;
            case 0x28801Cu: goto label_28801c;
            case 0x288020u: goto label_288020;
            case 0x288024u: goto label_288024;
            case 0x288028u: goto label_288028;
            case 0x28802Cu: goto label_28802c;
            case 0x288030u: goto label_288030;
            case 0x288034u: goto label_288034;
            case 0x288038u: goto label_288038;
            default: break;
        }
        return;
    }
    ctx->pc = 0x286B84u;
label_286b84:
    // 0x286b84: 0x3c020031
    ctx->pc = 0x286b84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_286b88:
    // 0x286b88: 0x8c43f184
    ctx->pc = 0x286b88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_286b8c:
    // 0x286b8c: 0x24020001
    ctx->pc = 0x286b8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_286b90:
    // 0x286b90: 0x8fa40024
    ctx->pc = 0x286b90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_286b94:
    // 0x286b94: 0x43200a
    ctx->pc = 0x286b94u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
label_286b98:
    // 0x286b98: 0xafa40024
    ctx->pc = 0x286b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
label_286b9c:
    // 0x286b9c: 0xc0a1808
label_286ba0:
    if (ctx->pc == 0x286BA0u) {
        ctx->pc = 0x286BA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286BA4u;
        goto label_286ba4;
    }
    ctx->pc = 0x286B9Cu;
    SET_GPR_U32(ctx, 31, 0x286BA4u);
    ctx->pc = 0x286BA0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x286020u;
    {
        const uint32_t __entryPc = ctx->pc;
        sel_activate_loadsave_0x286020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286BA4u; }
    }
    if (ctx->pc != 0x286BA4u) { return; }
    ctx->pc = 0x286BA4u;
label_286ba4:
    // 0x286ba4: 0x3c020035
    ctx->pc = 0x286ba4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_286ba8:
    // 0x286ba8: 0x8c52aaac
    ctx->pc = 0x286ba8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294945452)));
label_286bac:
    // 0x286bac: 0x3c020031
    ctx->pc = 0x286bacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_286bb0:
    // 0x286bb0: 0x8c42f184
    ctx->pc = 0x286bb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_286bb4:
    // 0x286bb4: 0x544004db
label_286bb8:
    if (ctx->pc == 0x286BB8u) {
        ctx->pc = 0x286BB8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
        ctx->pc = 0x286BBCu;
        goto label_286bbc;
    }
    ctx->pc = 0x286BB4u;
    {
        const bool branch_taken_0x286bb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x286bb4) {
            ctx->pc = 0x286BB8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
            ctx->pc = 0x287F24u;
            goto label_287f24;
        }
    }
    ctx->pc = 0x286BBCu;
label_286bbc:
    // 0x286bbc: 0xc082728
label_286bc0:
    if (ctx->pc == 0x286BC0u) {
        ctx->pc = 0x286BC4u;
        goto label_286bc4;
    }
    ctx->pc = 0x286BBCu;
    SET_GPR_U32(ctx, 31, 0x286BC4u);
    ctx->pc = 0x209CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        vmu_exists_0x209ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286BC4u; }
    }
    if (ctx->pc != 0x286BC4u) { return; }
    ctx->pc = 0x286BC4u;
label_286bc4:
    // 0x286bc4: 0x1c400032
label_286bc8:
    if (ctx->pc == 0x286BC8u) {
        ctx->pc = 0x286BC8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
        ctx->pc = 0x286BCCu;
        goto label_286bcc;
    }
    ctx->pc = 0x286BC4u;
    {
        const bool branch_taken_0x286bc4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x286BC8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
        if (branch_taken_0x286bc4) {
            ctx->pc = 0x286C90u;
            goto label_286c90;
        }
    }
    ctx->pc = 0x286BCCu;
label_286bcc:
    // 0x286bcc: 0x108023
    ctx->pc = 0x286bccu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_286bd0:
    // 0x286bd0: 0x200202d
    ctx->pc = 0x286bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286bd4:
    // 0x286bd4: 0x240282d
    ctx->pc = 0x286bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286bd8:
    // 0x286bd8: 0x280302d
    ctx->pc = 0x286bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_286bdc:
    // 0x286bdc: 0x3c0700ff
    ctx->pc = 0x286bdcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_286be0:
    // 0x286be0: 0x34e7ffff
    ctx->pc = 0x286be0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_286be4:
    // 0x286be4: 0x4600a306
    ctx->pc = 0x286be4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_286be8:
    // 0x286be8: 0x3c08003b
    ctx->pc = 0x286be8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_286bec:
    // 0x286bec: 0xc080510
label_286bf0:
    if (ctx->pc == 0x286BF0u) {
        ctx->pc = 0x286BF0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955944));
        ctx->pc = 0x286BF4u;
        goto label_286bf4;
    }
    ctx->pc = 0x286BECu;
    SET_GPR_U32(ctx, 31, 0x286BF4u);
    ctx->pc = 0x286BF0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955944));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286BF4u; }
    }
    if (ctx->pc != 0x286BF4u) { return; }
    ctx->pc = 0x286BF4u;
label_286bf4:
    // 0x286bf4: 0x2559021
    ctx->pc = 0x286bf4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_286bf8:
    // 0x286bf8: 0x200202d
    ctx->pc = 0x286bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286bfc:
    // 0x286bfc: 0x240282d
    ctx->pc = 0x286bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286c00:
    // 0x286c00: 0x280302d
    ctx->pc = 0x286c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_286c04:
    // 0x286c04: 0x3c0700ff
    ctx->pc = 0x286c04u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_286c08:
    // 0x286c08: 0x34e7ffff
    ctx->pc = 0x286c08u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_286c0c:
    // 0x286c0c: 0x4600a306
    ctx->pc = 0x286c0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_286c10:
    // 0x286c10: 0x3c08003b
    ctx->pc = 0x286c10u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_286c14:
    // 0x286c14: 0xc080510
label_286c18:
    if (ctx->pc == 0x286C18u) {
        ctx->pc = 0x286C18u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955960));
        ctx->pc = 0x286C1Cu;
        goto label_286c1c;
    }
    ctx->pc = 0x286C14u;
    SET_GPR_U32(ctx, 31, 0x286C1Cu);
    ctx->pc = 0x286C18u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955960));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286C1Cu; }
    }
    if (ctx->pc != 0x286C1Cu) { return; }
    ctx->pc = 0x286C1Cu;
label_286c1c:
    // 0x286c1c: 0x2559021
    ctx->pc = 0x286c1cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_286c20:
    // 0x286c20: 0x200202d
    ctx->pc = 0x286c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286c24:
    // 0x286c24: 0x240282d
    ctx->pc = 0x286c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286c28:
    // 0x286c28: 0x280302d
    ctx->pc = 0x286c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_286c2c:
    // 0x286c2c: 0x3c0700ff
    ctx->pc = 0x286c2cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_286c30:
    // 0x286c30: 0x34e7ffff
    ctx->pc = 0x286c30u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_286c34:
    // 0x286c34: 0x4600a306
    ctx->pc = 0x286c34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_286c38:
    // 0x286c38: 0x3c08003b
    ctx->pc = 0x286c38u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_286c3c:
    // 0x286c3c: 0xc080510
label_286c40:
    if (ctx->pc == 0x286C40u) {
        ctx->pc = 0x286C40u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955968));
        ctx->pc = 0x286C44u;
        goto label_286c44;
    }
    ctx->pc = 0x286C3Cu;
    SET_GPR_U32(ctx, 31, 0x286C44u);
    ctx->pc = 0x286C40u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955968));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286C44u; }
    }
    if (ctx->pc != 0x286C44u) { return; }
    ctx->pc = 0x286C44u;
label_286c44:
    // 0x286c44: 0x2559021
    ctx->pc = 0x286c44u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_286c48:
    // 0x286c48: 0x200202d
    ctx->pc = 0x286c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286c4c:
    // 0x286c4c: 0x240282d
    ctx->pc = 0x286c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286c50:
    // 0x286c50: 0x280302d
    ctx->pc = 0x286c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_286c54:
    // 0x286c54: 0x3c0700ff
    ctx->pc = 0x286c54u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_286c58:
    // 0x286c58: 0x34e7ffff
    ctx->pc = 0x286c58u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_286c5c:
    // 0x286c5c: 0x4600a306
    ctx->pc = 0x286c5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_286c60:
    // 0x286c60: 0x3c08003b
    ctx->pc = 0x286c60u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_286c64:
    // 0x286c64: 0xc080510
label_286c68:
    if (ctx->pc == 0x286C68u) {
        ctx->pc = 0x286C68u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955984));
        ctx->pc = 0x286C6Cu;
        goto label_286c6c;
    }
    ctx->pc = 0x286C64u;
    SET_GPR_U32(ctx, 31, 0x286C6Cu);
    ctx->pc = 0x286C68u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955984));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286C6Cu; }
    }
    if (ctx->pc != 0x286C6Cu) { return; }
    ctx->pc = 0x286C6Cu;
label_286c6c:
    // 0x286c6c: 0x200202d
    ctx->pc = 0x286c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286c70:
    // 0x286c70: 0x2552821
    ctx->pc = 0x286c70u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_286c74:
    // 0x286c74: 0x280302d
    ctx->pc = 0x286c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_286c78:
    // 0x286c78: 0x3c0700ff
    ctx->pc = 0x286c78u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_286c7c:
    // 0x286c7c: 0x34e7ffff
    ctx->pc = 0x286c7cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_286c80:
    // 0x286c80: 0x4600a306
    ctx->pc = 0x286c80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_286c84:
    // 0x286c84: 0x3c08003b
    ctx->pc = 0x286c84u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_286c88:
    // 0x286c88: 0xc080510
label_286c8c:
    if (ctx->pc == 0x286C8Cu) {
        ctx->pc = 0x286C8Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956000));
        ctx->pc = 0x286C90u;
        goto label_286c90;
    }
    ctx->pc = 0x286C88u;
    SET_GPR_U32(ctx, 31, 0x286C90u);
    ctx->pc = 0x286C8Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956000));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286C90u; }
    }
    if (ctx->pc != 0x286C90u) { return; }
    ctx->pc = 0x286C90u;
label_286c90:
    // 0x286c90: 0xc082728
label_286c94:
    if (ctx->pc == 0x286C94u) {
        ctx->pc = 0x286C94u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x286C98u;
        goto label_286c98;
    }
    ctx->pc = 0x286C90u;
    SET_GPR_U32(ctx, 31, 0x286C98u);
    ctx->pc = 0x286C94u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x209CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        vmu_exists_0x209ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286C98u; }
    }
    if (ctx->pc != 0x286C98u) { return; }
    ctx->pc = 0x286C98u;
label_286c98:
    // 0x286c98: 0x2403ffff
    ctx->pc = 0x286c98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_286c9c:
    // 0x286c9c: 0x1443000c
label_286ca0:
    if (ctx->pc == 0x286CA0u) {
        ctx->pc = 0x286CA0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
        ctx->pc = 0x286CA4u;
        goto label_286ca4;
    }
    ctx->pc = 0x286C9Cu;
    {
        const bool branch_taken_0x286c9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x286CA0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
        if (branch_taken_0x286c9c) {
            ctx->pc = 0x286CD0u;
            goto label_286cd0;
        }
    }
    ctx->pc = 0x286CA4u;
label_286ca4:
    // 0x286ca4: 0x26b20020
    ctx->pc = 0x286ca4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 21), 32));
label_286ca8:
    // 0x286ca8: 0x108023
    ctx->pc = 0x286ca8u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_286cac:
    // 0x286cac: 0x200202d
    ctx->pc = 0x286cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286cb0:
    // 0x286cb0: 0x240282d
    ctx->pc = 0x286cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286cb4:
    // 0x286cb4: 0x280302d
    ctx->pc = 0x286cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_286cb8:
    // 0x286cb8: 0x3c0700ff
    ctx->pc = 0x286cb8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_286cbc:
    // 0x286cbc: 0x34e780c0
    ctx->pc = 0x286cbcu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 32960));
label_286cc0:
    // 0x286cc0: 0x4600a306
    ctx->pc = 0x286cc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_286cc4:
    // 0x286cc4: 0x3c08003b
    ctx->pc = 0x286cc4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_286cc8:
    // 0x286cc8: 0x10000011
label_286ccc:
    if (ctx->pc == 0x286CCCu) {
        ctx->pc = 0x286CCCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956016));
        ctx->pc = 0x286CD0u;
        goto label_286cd0;
    }
    ctx->pc = 0x286CC8u;
    {
        const bool branch_taken_0x286cc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x286CCCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956016));
        if (branch_taken_0x286cc8) {
            ctx->pc = 0x286D10u;
            goto label_286d10;
        }
    }
    ctx->pc = 0x286CD0u;
label_286cd0:
    // 0x286cd0: 0xc082728
label_286cd4:
    if (ctx->pc == 0x286CD4u) {
        ctx->pc = 0x286CD8u;
        goto label_286cd8;
    }
    ctx->pc = 0x286CD0u;
    SET_GPR_U32(ctx, 31, 0x286CD8u);
    ctx->pc = 0x209CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        vmu_exists_0x209ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286CD8u; }
    }
    if (ctx->pc != 0x286CD8u) { return; }
    ctx->pc = 0x286CD8u;
label_286cd8:
    // 0x286cd8: 0x2403fffe
    ctx->pc = 0x286cd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
label_286cdc:
    // 0x286cdc: 0x54430491
label_286ce0:
    if (ctx->pc == 0x286CE0u) {
        ctx->pc = 0x286CE0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
        ctx->pc = 0x286CE4u;
        goto label_286ce4;
    }
    ctx->pc = 0x286CDCu;
    {
        const bool branch_taken_0x286cdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x286cdc) {
            ctx->pc = 0x286CE0u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
            ctx->pc = 0x287F24u;
            goto label_287f24;
        }
    }
    ctx->pc = 0x286CE4u;
label_286ce4:
    // 0x286ce4: 0x2559021
    ctx->pc = 0x286ce4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_286ce8:
    // 0x286ce8: 0x26700040
    ctx->pc = 0x286ce8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
label_286cec:
    // 0x286cec: 0x108023
    ctx->pc = 0x286cecu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_286cf0:
    // 0x286cf0: 0x200202d
    ctx->pc = 0x286cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286cf4:
    // 0x286cf4: 0x240282d
    ctx->pc = 0x286cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286cf8:
    // 0x286cf8: 0x280302d
    ctx->pc = 0x286cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_286cfc:
    // 0x286cfc: 0x3c0700ff
    ctx->pc = 0x286cfcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_286d00:
    // 0x286d00: 0x34e780c0
    ctx->pc = 0x286d00u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 32960));
label_286d04:
    // 0x286d04: 0x4600a306
    ctx->pc = 0x286d04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_286d08:
    // 0x286d08: 0x3c08003b
    ctx->pc = 0x286d08u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_286d0c:
    // 0x286d0c: 0x2508d410
    ctx->pc = 0x286d0cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956048));
label_286d10:
    // 0x286d10: 0xc080510
label_286d14:
    if (ctx->pc == 0x286D14u) {
        ctx->pc = 0x286D18u;
        goto label_286d18;
    }
    ctx->pc = 0x286D10u;
    SET_GPR_U32(ctx, 31, 0x286D18u);
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286D18u; }
    }
    if (ctx->pc != 0x286D18u) { return; }
    ctx->pc = 0x286D18u;
label_286d18:
    // 0x286d18: 0x200202d
    ctx->pc = 0x286d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286d1c:
    // 0x286d1c: 0x2552821
    ctx->pc = 0x286d1cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_286d20:
    // 0x286d20: 0x280302d
    ctx->pc = 0x286d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_286d24:
    // 0x286d24: 0x3c0700ff
    ctx->pc = 0x286d24u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_286d28:
    // 0x286d28: 0x34e780c0
    ctx->pc = 0x286d28u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 32960));
label_286d2c:
    // 0x286d2c: 0x4600a306
    ctx->pc = 0x286d2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_286d30:
    // 0x286d30: 0x3c08003b
    ctx->pc = 0x286d30u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_286d34:
    // 0x286d34: 0xc080510
label_286d38:
    if (ctx->pc == 0x286D38u) {
        ctx->pc = 0x286D38u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956032));
        ctx->pc = 0x286D3Cu;
        goto label_286d3c;
    }
    ctx->pc = 0x286D34u;
    SET_GPR_U32(ctx, 31, 0x286D3Cu);
    ctx->pc = 0x286D38u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956032));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286D3Cu; }
    }
    if (ctx->pc != 0x286D3Cu) { return; }
    ctx->pc = 0x286D3Cu;
label_286d3c:
    // 0x286d3c: 0x10000479
label_286d40:
    if (ctx->pc == 0x286D40u) {
        ctx->pc = 0x286D40u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
        ctx->pc = 0x286D44u;
        goto label_286d44;
    }
    ctx->pc = 0x286D3Cu;
    {
        const bool branch_taken_0x286d3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x286D40u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
        if (branch_taken_0x286d3c) {
            ctx->pc = 0x287F24u;
            goto label_287f24;
        }
    }
    ctx->pc = 0x286D44u;
label_286d44:
    // 0x286d44: 0x26700040
    ctx->pc = 0x286d44u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
label_286d48:
    // 0x286d48: 0x108023
    ctx->pc = 0x286d48u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_286d4c:
    // 0x286d4c: 0x200202d
    ctx->pc = 0x286d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286d50:
    // 0x286d50: 0x24050040
    ctx->pc = 0x286d50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
label_286d54:
    // 0x286d54: 0x24060006
    ctx->pc = 0x286d54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
label_286d58:
    // 0x286d58: 0x3c0700ff
    ctx->pc = 0x286d58u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_286d5c:
    // 0x286d5c: 0x34e7ffff
    ctx->pc = 0x286d5cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_286d60:
    // 0x286d60: 0x3c013f4c
    ctx->pc = 0x286d60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
label_286d64:
    // 0x286d64: 0x3421cccd
    ctx->pc = 0x286d64u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_286d68:
    // 0x286d68: 0x44816000
    ctx->pc = 0x286d68u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_286d6c:
    // 0x286d6c: 0x3c08003b
    ctx->pc = 0x286d6cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_286d70:
    // 0x286d70: 0xc080510
label_286d74:
    if (ctx->pc == 0x286D74u) {
        ctx->pc = 0x286D74u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956064));
        ctx->pc = 0x286D78u;
        goto label_286d78;
    }
    ctx->pc = 0x286D70u;
    SET_GPR_U32(ctx, 31, 0x286D78u);
    ctx->pc = 0x286D74u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956064));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286D78u; }
    }
    if (ctx->pc != 0x286D78u) { return; }
    ctx->pc = 0x286D78u;
label_286d78:
    // 0x286d78: 0x200202d
    ctx->pc = 0x286d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286d7c:
    // 0x286d7c: 0x2405005a
    ctx->pc = 0x286d7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 90));
label_286d80:
    // 0x286d80: 0x24060006
    ctx->pc = 0x286d80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
label_286d84:
    // 0x286d84: 0x3c0700ff
    ctx->pc = 0x286d84u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_286d88:
    // 0x286d88: 0x34e7ffff
    ctx->pc = 0x286d88u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_286d8c:
    // 0x286d8c: 0x3c013f4c
    ctx->pc = 0x286d8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
label_286d90:
    // 0x286d90: 0x3421cccd
    ctx->pc = 0x286d90u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_286d94:
    // 0x286d94: 0x44816000
    ctx->pc = 0x286d94u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_286d98:
    // 0x286d98: 0x3c08003b
    ctx->pc = 0x286d98u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_286d9c:
    // 0x286d9c: 0xc080510
label_286da0:
    if (ctx->pc == 0x286DA0u) {
        ctx->pc = 0x286DA0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956072));
        ctx->pc = 0x286DA4u;
        goto label_286da4;
    }
    ctx->pc = 0x286D9Cu;
    SET_GPR_U32(ctx, 31, 0x286DA4u);
    ctx->pc = 0x286DA0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956072));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286DA4u; }
    }
    if (ctx->pc != 0x286DA4u) { return; }
    ctx->pc = 0x286DA4u;
label_286da4:
    // 0x286da4: 0x200202d
    ctx->pc = 0x286da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286da8:
    // 0x286da8: 0x24050074
    ctx->pc = 0x286da8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 116));
label_286dac:
    // 0x286dac: 0x24060006
    ctx->pc = 0x286dacu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
label_286db0:
    // 0x286db0: 0x3c0700ff
    ctx->pc = 0x286db0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_286db4:
    // 0x286db4: 0x34e7ffff
    ctx->pc = 0x286db4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_286db8:
    // 0x286db8: 0x3c013f4c
    ctx->pc = 0x286db8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
label_286dbc:
    // 0x286dbc: 0x3421cccd
    ctx->pc = 0x286dbcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_286dc0:
    // 0x286dc0: 0x44816000
    ctx->pc = 0x286dc0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_286dc4:
    // 0x286dc4: 0x3c08003b
    ctx->pc = 0x286dc4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_286dc8:
    // 0x286dc8: 0xc080510
label_286dcc:
    if (ctx->pc == 0x286DCCu) {
        ctx->pc = 0x286DCCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956080));
        ctx->pc = 0x286DD0u;
        goto label_286dd0;
    }
    ctx->pc = 0x286DC8u;
    SET_GPR_U32(ctx, 31, 0x286DD0u);
    ctx->pc = 0x286DCCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956080));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286DD0u; }
    }
    if (ctx->pc != 0x286DD0u) { return; }
    ctx->pc = 0x286DD0u;
label_286dd0:
    // 0x286dd0: 0x3c020035
    ctx->pc = 0x286dd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_286dd4:
    // 0x286dd4: 0x8c52aabc
    ctx->pc = 0x286dd4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294945468)));
label_286dd8:
    // 0x286dd8: 0x24150014
    ctx->pc = 0x286dd8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 20));
label_286ddc:
    // 0x286ddc: 0x3c020035
    ctx->pc = 0x286ddcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_286de0:
    // 0x286de0: 0x2442a2f0
    ctx->pc = 0x286de0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294943472));
label_286de4:
    // 0x286de4: 0x171880
    ctx->pc = 0x286de4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 23), 2));
label_286de8:
    // 0x286de8: 0x621821
    ctx->pc = 0x286de8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_286dec:
    // 0x286dec: 0x26c4000a
    ctx->pc = 0x286decu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 10));
label_286df0:
    // 0x286df0: 0x8c620000
    ctx->pc = 0x286df0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_286df4:
    // 0x286df4: 0x829821
    ctx->pc = 0x286df4u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_286df8:
    // 0x286df8: 0x3c020038
    ctx->pc = 0x286df8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_286dfc:
    // 0x286dfc: 0x2768823
    ctx->pc = 0x286dfcu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
label_286e00:
    // 0x286e00: 0x8c44b13c
    ctx->pc = 0x286e00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947132)));
label_286e04:
    // 0x286e04: 0x220282d
    ctx->pc = 0x286e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_286e08:
    // 0x286e08: 0x240302d
    ctx->pc = 0x286e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286e0c:
    // 0x286e0c: 0x2c0382d
    ctx->pc = 0x286e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_286e10:
    // 0x286e10: 0xc0b0c6a
label_286e14:
    if (ctx->pc == 0x286E14u) {
        ctx->pc = 0x286E14u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286E18u;
        goto label_286e18;
    }
    ctx->pc = 0x286E10u;
    SET_GPR_U32(ctx, 31, 0x286E18u);
    ctx->pc = 0x286E14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286E18u; }
    }
    if (ctx->pc != 0x286E18u) { return; }
    ctx->pc = 0x286E18u;
label_286e18:
    // 0x286e18: 0x3c020038
    ctx->pc = 0x286e18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_286e1c:
    // 0x286e1c: 0x8c44b138
    ctx->pc = 0x286e1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947128)));
label_286e20:
    // 0x286e20: 0x260282d
    ctx->pc = 0x286e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_286e24:
    // 0x286e24: 0x240302d
    ctx->pc = 0x286e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286e28:
    // 0x286e28: 0x2c0382d
    ctx->pc = 0x286e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_286e2c:
    // 0x286e2c: 0xc0b0c6a
label_286e30:
    if (ctx->pc == 0x286E30u) {
        ctx->pc = 0x286E30u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286E34u;
        goto label_286e34;
    }
    ctx->pc = 0x286E2Cu;
    SET_GPR_U32(ctx, 31, 0x286E34u);
    ctx->pc = 0x286E30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286E34u; }
    }
    if (ctx->pc != 0x286E34u) { return; }
    ctx->pc = 0x286E34u;
label_286e34:
    // 0x286e34: 0x2768021
    ctx->pc = 0x286e34u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
label_286e38:
    // 0x286e38: 0x26100008
    ctx->pc = 0x286e38u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
label_286e3c:
    // 0x286e3c: 0x200202d
    ctx->pc = 0x286e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286e40:
    // 0x286e40: 0x26450004
    ctx->pc = 0x286e40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4));
label_286e44:
    // 0x286e44: 0x280302d
    ctx->pc = 0x286e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_286e48:
    // 0x286e48: 0x3c0700ff
    ctx->pc = 0x286e48u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_286e4c:
    // 0x286e4c: 0x34e7ffff
    ctx->pc = 0x286e4cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_286e50:
    // 0x286e50: 0x4600a306
    ctx->pc = 0x286e50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_286e54:
    // 0x286e54: 0x3c08003b
    ctx->pc = 0x286e54u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_286e58:
    // 0x286e58: 0xc080510
label_286e5c:
    if (ctx->pc == 0x286E5Cu) {
        ctx->pc = 0x286E5Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955768));
        ctx->pc = 0x286E60u;
        goto label_286e60;
    }
    ctx->pc = 0x286E58u;
    SET_GPR_U32(ctx, 31, 0x286E60u);
    ctx->pc = 0x286E5Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955768));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286E60u; }
    }
    if (ctx->pc != 0x286E60u) { return; }
    ctx->pc = 0x286E60u;
label_286e60:
    // 0x286e60: 0x26520014
    ctx->pc = 0x286e60u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 20));
label_286e64:
    // 0x286e64: 0x3c020038
    ctx->pc = 0x286e64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_286e68:
    // 0x286e68: 0x8c44b144
    ctx->pc = 0x286e68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947140)));
label_286e6c:
    // 0x286e6c: 0x220282d
    ctx->pc = 0x286e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_286e70:
    // 0x286e70: 0x240302d
    ctx->pc = 0x286e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286e74:
    // 0x286e74: 0x2c0382d
    ctx->pc = 0x286e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_286e78:
    // 0x286e78: 0xc0b0c6a
label_286e7c:
    if (ctx->pc == 0x286E7Cu) {
        ctx->pc = 0x286E7Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286E80u;
        goto label_286e80;
    }
    ctx->pc = 0x286E78u;
    SET_GPR_U32(ctx, 31, 0x286E80u);
    ctx->pc = 0x286E7Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286E80u; }
    }
    if (ctx->pc != 0x286E80u) { return; }
    ctx->pc = 0x286E80u;
label_286e80:
    // 0x286e80: 0x3c020038
    ctx->pc = 0x286e80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_286e84:
    // 0x286e84: 0x8c44b140
    ctx->pc = 0x286e84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947136)));
label_286e88:
    // 0x286e88: 0x260282d
    ctx->pc = 0x286e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_286e8c:
    // 0x286e8c: 0x240302d
    ctx->pc = 0x286e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286e90:
    // 0x286e90: 0x2c0382d
    ctx->pc = 0x286e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_286e94:
    // 0x286e94: 0xc0b0c6a
label_286e98:
    if (ctx->pc == 0x286E98u) {
        ctx->pc = 0x286E98u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286E9Cu;
        goto label_286e9c;
    }
    ctx->pc = 0x286E94u;
    SET_GPR_U32(ctx, 31, 0x286E9Cu);
    ctx->pc = 0x286E98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286E9Cu; }
    }
    if (ctx->pc != 0x286E9Cu) { return; }
    ctx->pc = 0x286E9Cu;
label_286e9c:
    // 0x286e9c: 0x200202d
    ctx->pc = 0x286e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286ea0:
    // 0x286ea0: 0x26450004
    ctx->pc = 0x286ea0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4));
label_286ea4:
    // 0x286ea4: 0x280302d
    ctx->pc = 0x286ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_286ea8:
    // 0x286ea8: 0x3c0700ff
    ctx->pc = 0x286ea8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_286eac:
    // 0x286eac: 0x34e7ffff
    ctx->pc = 0x286eacu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_286eb0:
    // 0x286eb0: 0x4600a306
    ctx->pc = 0x286eb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_286eb4:
    // 0x286eb4: 0x3c08003b
    ctx->pc = 0x286eb4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_286eb8:
    // 0x286eb8: 0xc080510
label_286ebc:
    if (ctx->pc == 0x286EBCu) {
        ctx->pc = 0x286EBCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956088));
        ctx->pc = 0x286EC0u;
        goto label_286ec0;
    }
    ctx->pc = 0x286EB8u;
    SET_GPR_U32(ctx, 31, 0x286EC0u);
    ctx->pc = 0x286EBCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956088));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286EC0u; }
    }
    if (ctx->pc != 0x286EC0u) { return; }
    ctx->pc = 0x286EC0u;
label_286ec0:
    // 0x286ec0: 0x26520014
    ctx->pc = 0x286ec0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 20));
label_286ec4:
    // 0x286ec4: 0x3c020038
    ctx->pc = 0x286ec4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_286ec8:
    // 0x286ec8: 0x8c44b154
    ctx->pc = 0x286ec8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947156)));
label_286ecc:
    // 0x286ecc: 0x260282d
    ctx->pc = 0x286eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_286ed0:
    // 0x286ed0: 0x240302d
    ctx->pc = 0x286ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286ed4:
    // 0x286ed4: 0x2c0382d
    ctx->pc = 0x286ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_286ed8:
    // 0x286ed8: 0xc0b0c6a
label_286edc:
    if (ctx->pc == 0x286EDCu) {
        ctx->pc = 0x286EDCu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286EE0u;
        goto label_286ee0;
    }
    ctx->pc = 0x286ED8u;
    SET_GPR_U32(ctx, 31, 0x286EE0u);
    ctx->pc = 0x286EDCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286EE0u; }
    }
    if (ctx->pc != 0x286EE0u) { return; }
    ctx->pc = 0x286EE0u;
label_286ee0:
    // 0x286ee0: 0x200202d
    ctx->pc = 0x286ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286ee4:
    // 0x286ee4: 0x26450004
    ctx->pc = 0x286ee4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4));
label_286ee8:
    // 0x286ee8: 0x280302d
    ctx->pc = 0x286ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_286eec:
    // 0x286eec: 0x3c0700ff
    ctx->pc = 0x286eecu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_286ef0:
    // 0x286ef0: 0x34e7ffff
    ctx->pc = 0x286ef0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_286ef4:
    // 0x286ef4: 0x4600a306
    ctx->pc = 0x286ef4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_286ef8:
    // 0x286ef8: 0x3c08003b
    ctx->pc = 0x286ef8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_286efc:
    // 0x286efc: 0xc080510
label_286f00:
    if (ctx->pc == 0x286F00u) {
        ctx->pc = 0x286F00u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956096));
        ctx->pc = 0x286F04u;
        goto label_286f04;
    }
    ctx->pc = 0x286EFCu;
    SET_GPR_U32(ctx, 31, 0x286F04u);
    ctx->pc = 0x286F00u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956096));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286F04u; }
    }
    if (ctx->pc != 0x286F04u) { return; }
    ctx->pc = 0x286F04u;
label_286f04:
    // 0x286f04: 0x26520014
    ctx->pc = 0x286f04u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 20));
label_286f08:
    // 0x286f08: 0x3c020038
    ctx->pc = 0x286f08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_286f0c:
    // 0x286f0c: 0x8c44b150
    ctx->pc = 0x286f0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947152)));
label_286f10:
    // 0x286f10: 0x260282d
    ctx->pc = 0x286f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_286f14:
    // 0x286f14: 0x240302d
    ctx->pc = 0x286f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286f18:
    // 0x286f18: 0x2c0382d
    ctx->pc = 0x286f18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_286f1c:
    // 0x286f1c: 0xc0b0c6a
label_286f20:
    if (ctx->pc == 0x286F20u) {
        ctx->pc = 0x286F20u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286F24u;
        goto label_286f24;
    }
    ctx->pc = 0x286F1Cu;
    SET_GPR_U32(ctx, 31, 0x286F24u);
    ctx->pc = 0x286F20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286F24u; }
    }
    if (ctx->pc != 0x286F24u) { return; }
    ctx->pc = 0x286F24u;
label_286f24:
    // 0x286f24: 0x200202d
    ctx->pc = 0x286f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286f28:
    // 0x286f28: 0x26450004
    ctx->pc = 0x286f28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4));
label_286f2c:
    // 0x286f2c: 0x280302d
    ctx->pc = 0x286f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_286f30:
    // 0x286f30: 0x3c0700ff
    ctx->pc = 0x286f30u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_286f34:
    // 0x286f34: 0x34e7ffff
    ctx->pc = 0x286f34u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_286f38:
    // 0x286f38: 0x4600a306
    ctx->pc = 0x286f38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_286f3c:
    // 0x286f3c: 0x3c08003b
    ctx->pc = 0x286f3cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_286f40:
    // 0x286f40: 0x1000037c
label_286f44:
    if (ctx->pc == 0x286F44u) {
        ctx->pc = 0x286F44u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956104));
        ctx->pc = 0x286F48u;
        goto label_286f48;
    }
    ctx->pc = 0x286F40u;
    {
        const bool branch_taken_0x286f40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x286F44u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956104));
        if (branch_taken_0x286f40) {
            ctx->pc = 0x287D34u;
            goto label_287d34;
        }
    }
    ctx->pc = 0x286F48u;
label_286f48:
    // 0x286f48: 0x3c020035
    ctx->pc = 0x286f48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_286f4c:
    // 0x286f4c: 0x8c50aabc
    ctx->pc = 0x286f4cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294945468)));
label_286f50:
    // 0x286f50: 0x26120034
    ctx->pc = 0x286f50u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 52));
label_286f54:
    // 0x286f54: 0x24150014
    ctx->pc = 0x286f54u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 20));
label_286f58:
    // 0x286f58: 0x3c020035
    ctx->pc = 0x286f58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_286f5c:
    // 0x286f5c: 0x2442a2f0
    ctx->pc = 0x286f5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294943472));
label_286f60:
    // 0x286f60: 0x171880
    ctx->pc = 0x286f60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 23), 2));
label_286f64:
    // 0x286f64: 0x621821
    ctx->pc = 0x286f64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_286f68:
    // 0x286f68: 0x26c4000a
    ctx->pc = 0x286f68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 10));
label_286f6c:
    // 0x286f6c: 0x8c620000
    ctx->pc = 0x286f6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_286f70:
    // 0x286f70: 0x829821
    ctx->pc = 0x286f70u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_286f74:
    // 0x286f74: 0x3c020038
    ctx->pc = 0x286f74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_286f78:
    // 0x286f78: 0x8c44b144
    ctx->pc = 0x286f78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947140)));
label_286f7c:
    // 0x286f7c: 0x2762823
    ctx->pc = 0x286f7cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
label_286f80:
    // 0x286f80: 0x240302d
    ctx->pc = 0x286f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286f84:
    // 0x286f84: 0x2c0382d
    ctx->pc = 0x286f84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_286f88:
    // 0x286f88: 0xc0b0c6a
label_286f8c:
    if (ctx->pc == 0x286F8Cu) {
        ctx->pc = 0x286F8Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286F90u;
        goto label_286f90;
    }
    ctx->pc = 0x286F88u;
    SET_GPR_U32(ctx, 31, 0x286F90u);
    ctx->pc = 0x286F8Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286F90u; }
    }
    if (ctx->pc != 0x286F90u) { return; }
    ctx->pc = 0x286F90u;
label_286f90:
    // 0x286f90: 0x3c020038
    ctx->pc = 0x286f90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_286f94:
    // 0x286f94: 0x8c44b140
    ctx->pc = 0x286f94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947136)));
label_286f98:
    // 0x286f98: 0x260282d
    ctx->pc = 0x286f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_286f9c:
    // 0x286f9c: 0x240302d
    ctx->pc = 0x286f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286fa0:
    // 0x286fa0: 0x2c0382d
    ctx->pc = 0x286fa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_286fa4:
    // 0x286fa4: 0xc0b0c6a
label_286fa8:
    if (ctx->pc == 0x286FA8u) {
        ctx->pc = 0x286FA8u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286FACu;
        goto label_286fac;
    }
    ctx->pc = 0x286FA4u;
    SET_GPR_U32(ctx, 31, 0x286FACu);
    ctx->pc = 0x286FA8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286FACu; }
    }
    if (ctx->pc != 0x286FACu) { return; }
    ctx->pc = 0x286FACu;
label_286fac:
    // 0x286fac: 0x2762021
    ctx->pc = 0x286facu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
label_286fb0:
    // 0x286fb0: 0x24840008
    ctx->pc = 0x286fb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
label_286fb4:
    // 0x286fb4: 0x26050038
    ctx->pc = 0x286fb4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 56));
label_286fb8:
    // 0x286fb8: 0x280302d
    ctx->pc = 0x286fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_286fbc:
    // 0x286fbc: 0x3c0700ff
    ctx->pc = 0x286fbcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_286fc0:
    // 0x286fc0: 0x34e7ffff
    ctx->pc = 0x286fc0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_286fc4:
    // 0x286fc4: 0x4600a306
    ctx->pc = 0x286fc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_286fc8:
    // 0x286fc8: 0x3c08003b
    ctx->pc = 0x286fc8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_286fcc:
    // 0x286fcc: 0xc080510
label_286fd0:
    if (ctx->pc == 0x286FD0u) {
        ctx->pc = 0x286FD0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955768));
        ctx->pc = 0x286FD4u;
        goto label_286fd4;
    }
    ctx->pc = 0x286FCCu;
    SET_GPR_U32(ctx, 31, 0x286FD4u);
    ctx->pc = 0x286FD0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955768));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286FD4u; }
    }
    if (ctx->pc != 0x286FD4u) { return; }
    ctx->pc = 0x286FD4u;
label_286fd4:
    // 0x286fd4: 0xc0a11f8
label_286fd8:
    if (ctx->pc == 0x286FD8u) {
        ctx->pc = 0x286FD8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286FDCu;
        goto label_286fdc;
    }
    ctx->pc = 0x286FD4u;
    SET_GPR_U32(ctx, 31, 0x286FDCu);
    ctx->pc = 0x286FD8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2847E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        useable_class_0x2847e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286FDCu; }
    }
    if (ctx->pc != 0x286FDCu) { return; }
    ctx->pc = 0x286FDCu;
label_286fdc:
    // 0x286fdc: 0x2102b
    ctx->pc = 0x286fdcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_286fe0:
    // 0x286fe0: 0x100003cf
label_286fe4:
    if (ctx->pc == 0x286FE4u) {
        ctx->pc = 0x286FE4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x286FE8u;
        goto label_286fe8;
    }
    ctx->pc = 0x286FE0u;
    {
        const bool branch_taken_0x286fe0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x286FE4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x286fe0) {
            ctx->pc = 0x287F20u;
            goto label_287f20;
        }
    }
    ctx->pc = 0x286FE8u;
label_286fe8:
    // 0x286fe8: 0x8e222ae4
    ctx->pc = 0x286fe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 10980)));
label_286fec:
    // 0x286fec: 0x1440004a
label_286ff0:
    if (ctx->pc == 0x286FF0u) {
        ctx->pc = 0x286FF0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        ctx->pc = 0x286FF4u;
        goto label_286ff4;
    }
    ctx->pc = 0x286FECu;
    {
        const bool branch_taken_0x286fec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x286FF0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x286fec) {
            ctx->pc = 0x287118u;
            goto label_287118;
        }
    }
    ctx->pc = 0x286FF4u;
label_286ff4:
    // 0x286ff4: 0x2463a620
    ctx->pc = 0x286ff4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_286ff8:
    // 0x286ff8: 0x240200e8
    ctx->pc = 0x286ff8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_286ffc:
    // 0x286ffc: 0x2e21018
    ctx->pc = 0x286ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_287000:
    // 0x287000: 0x621821
    ctx->pc = 0x287000u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_287004:
    // 0x287004: 0x3c020035
    ctx->pc = 0x287004u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_287008:
    // 0x287008: 0x8c630010
    ctx->pc = 0x287008u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_28700c:
    // 0x28700c: 0x8c42aac0
    ctx->pc = 0x28700cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294945472)));
label_287010:
    // 0x287010: 0x629021
    ctx->pc = 0x287010u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_287014:
    // 0x287014: 0x24020006
    ctx->pc = 0x287014u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_287018:
    // 0x287018: 0x2a21018
    ctx->pc = 0x287018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_28701c:
    // 0x28701c: 0x2429023
    ctx->pc = 0x28701cu;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_287020:
    // 0x287020: 0x26700040
    ctx->pc = 0x287020u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
label_287024:
    // 0x287024: 0x108023
    ctx->pc = 0x287024u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_287028:
    // 0x287028: 0x200202d
    ctx->pc = 0x287028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28702c:
    // 0x28702c: 0x240282d
    ctx->pc = 0x28702cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287030:
    // 0x287030: 0x280302d
    ctx->pc = 0x287030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287034:
    // 0x287034: 0x3c0700ff
    ctx->pc = 0x287034u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287038:
    // 0x287038: 0x34e7ffff
    ctx->pc = 0x287038u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_28703c:
    // 0x28703c: 0x4600a306
    ctx->pc = 0x28703cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287040:
    // 0x287040: 0x3c08003b
    ctx->pc = 0x287040u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287044:
    // 0x287044: 0xc080510
label_287048:
    if (ctx->pc == 0x287048u) {
        ctx->pc = 0x287048u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956112));
        ctx->pc = 0x28704Cu;
        goto label_28704c;
    }
    ctx->pc = 0x287044u;
    SET_GPR_U32(ctx, 31, 0x28704Cu);
    ctx->pc = 0x287048u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956112));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28704Cu; }
    }
    if (ctx->pc != 0x28704Cu) { return; }
    ctx->pc = 0x28704Cu;
label_28704c:
    // 0x28704c: 0x2559021
    ctx->pc = 0x28704cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287050:
    // 0x287050: 0x200202d
    ctx->pc = 0x287050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287054:
    // 0x287054: 0x240282d
    ctx->pc = 0x287054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287058:
    // 0x287058: 0x280302d
    ctx->pc = 0x287058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28705c:
    // 0x28705c: 0x3c0700ff
    ctx->pc = 0x28705cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287060:
    // 0x287060: 0x34e7ffff
    ctx->pc = 0x287060u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287064:
    // 0x287064: 0x4600a306
    ctx->pc = 0x287064u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287068:
    // 0x287068: 0x3c11003b
    ctx->pc = 0x287068u;
    SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
label_28706c:
    // 0x28706c: 0xc080510
label_287070:
    if (ctx->pc == 0x287070u) {
        ctx->pc = 0x287070u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 4294956120));
        ctx->pc = 0x287074u;
        goto label_287074;
    }
    ctx->pc = 0x28706Cu;
    SET_GPR_U32(ctx, 31, 0x287074u);
    ctx->pc = 0x287070u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 4294956120));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287074u; }
    }
    if (ctx->pc != 0x287074u) { return; }
    ctx->pc = 0x287074u;
label_287074:
    // 0x287074: 0x2559021
    ctx->pc = 0x287074u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287078:
    // 0x287078: 0x200202d
    ctx->pc = 0x287078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28707c:
    // 0x28707c: 0x240282d
    ctx->pc = 0x28707cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287080:
    // 0x287080: 0x280302d
    ctx->pc = 0x287080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287084:
    // 0x287084: 0x3c0700ff
    ctx->pc = 0x287084u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287088:
    // 0x287088: 0x34e7ffff
    ctx->pc = 0x287088u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_28708c:
    // 0x28708c: 0x4600a306
    ctx->pc = 0x28708cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287090:
    // 0x287090: 0x3c08003b
    ctx->pc = 0x287090u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287094:
    // 0x287094: 0xc080510
label_287098:
    if (ctx->pc == 0x287098u) {
        ctx->pc = 0x287098u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956136));
        ctx->pc = 0x28709Cu;
        goto label_28709c;
    }
    ctx->pc = 0x287094u;
    SET_GPR_U32(ctx, 31, 0x28709Cu);
    ctx->pc = 0x287098u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956136));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28709Cu; }
    }
    if (ctx->pc != 0x28709Cu) { return; }
    ctx->pc = 0x28709Cu;
label_28709c:
    // 0x28709c: 0x2559021
    ctx->pc = 0x28709cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2870a0:
    // 0x2870a0: 0x200202d
    ctx->pc = 0x2870a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2870a4:
    // 0x2870a4: 0x240282d
    ctx->pc = 0x2870a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2870a8:
    // 0x2870a8: 0x280302d
    ctx->pc = 0x2870a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2870ac:
    // 0x2870ac: 0x3c0700ff
    ctx->pc = 0x2870acu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2870b0:
    // 0x2870b0: 0x34e7ffff
    ctx->pc = 0x2870b0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2870b4:
    // 0x2870b4: 0x4600a306
    ctx->pc = 0x2870b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2870b8:
    // 0x2870b8: 0x3c08003b
    ctx->pc = 0x2870b8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2870bc:
    // 0x2870bc: 0xc080510
label_2870c0:
    if (ctx->pc == 0x2870C0u) {
        ctx->pc = 0x2870C0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956152));
        ctx->pc = 0x2870C4u;
        goto label_2870c4;
    }
    ctx->pc = 0x2870BCu;
    SET_GPR_U32(ctx, 31, 0x2870C4u);
    ctx->pc = 0x2870C0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956152));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2870C4u; }
    }
    if (ctx->pc != 0x2870C4u) { return; }
    ctx->pc = 0x2870C4u;
label_2870c4:
    // 0x2870c4: 0x2559021
    ctx->pc = 0x2870c4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2870c8:
    // 0x2870c8: 0x200202d
    ctx->pc = 0x2870c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2870cc:
    // 0x2870cc: 0x240282d
    ctx->pc = 0x2870ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2870d0:
    // 0x2870d0: 0x280302d
    ctx->pc = 0x2870d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2870d4:
    // 0x2870d4: 0x3c0700ff
    ctx->pc = 0x2870d4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2870d8:
    // 0x2870d8: 0x34e7ffff
    ctx->pc = 0x2870d8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2870dc:
    // 0x2870dc: 0x4600a306
    ctx->pc = 0x2870dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2870e0:
    // 0x2870e0: 0xc080510
label_2870e4:
    if (ctx->pc == 0x2870E4u) {
        ctx->pc = 0x2870E4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 4294956120));
        ctx->pc = 0x2870E8u;
        goto label_2870e8;
    }
    ctx->pc = 0x2870E0u;
    SET_GPR_U32(ctx, 31, 0x2870E8u);
    ctx->pc = 0x2870E4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 4294956120));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2870E8u; }
    }
    if (ctx->pc != 0x2870E8u) { return; }
    ctx->pc = 0x2870E8u;
label_2870e8:
    // 0x2870e8: 0x200202d
    ctx->pc = 0x2870e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2870ec:
    // 0x2870ec: 0x2552821
    ctx->pc = 0x2870ecu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2870f0:
    // 0x2870f0: 0x280302d
    ctx->pc = 0x2870f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2870f4:
    // 0x2870f4: 0x3c0700ff
    ctx->pc = 0x2870f4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2870f8:
    // 0x2870f8: 0x34e7ffff
    ctx->pc = 0x2870f8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2870fc:
    // 0x2870fc: 0x4600a306
    ctx->pc = 0x2870fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287100:
    // 0x287100: 0x3c08003b
    ctx->pc = 0x287100u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287104:
    // 0x287104: 0xc080510
label_287108:
    if (ctx->pc == 0x287108u) {
        ctx->pc = 0x287108u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956168));
        ctx->pc = 0x28710Cu;
        goto label_28710c;
    }
    ctx->pc = 0x287104u;
    SET_GPR_U32(ctx, 31, 0x28710Cu);
    ctx->pc = 0x287108u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956168));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28710Cu; }
    }
    if (ctx->pc != 0x28710Cu) { return; }
    ctx->pc = 0x28710Cu;
label_28710c:
    // 0x28710c: 0x10000385
label_287110:
    if (ctx->pc == 0x287110u) {
        ctx->pc = 0x287110u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
        ctx->pc = 0x287114u;
        goto label_287114;
    }
    ctx->pc = 0x28710Cu;
    {
        const bool branch_taken_0x28710c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x287110u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
        if (branch_taken_0x28710c) {
            ctx->pc = 0x287F24u;
            goto label_287f24;
        }
    }
    ctx->pc = 0x287114u;
label_287114:
    // 0x287114: 0x3c030035
    ctx->pc = 0x287114u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_287118:
    // 0x287118: 0x2463a620
    ctx->pc = 0x287118u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_28711c:
    // 0x28711c: 0x240200e8
    ctx->pc = 0x28711cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_287120:
    // 0x287120: 0x2e21018
    ctx->pc = 0x287120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_287124:
    // 0x287124: 0x621821
    ctx->pc = 0x287124u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_287128:
    // 0x287128: 0x3c020035
    ctx->pc = 0x287128u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28712c:
    // 0x28712c: 0x8c630010
    ctx->pc = 0x28712cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_287130:
    // 0x287130: 0x8c42aac0
    ctx->pc = 0x287130u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294945472)));
label_287134:
    // 0x287134: 0x629021
    ctx->pc = 0x287134u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_287138:
    // 0x287138: 0x151040
    ctx->pc = 0x287138u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 1));
label_28713c:
    // 0x28713c: 0x551021
    ctx->pc = 0x28713cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_287140:
    // 0x287140: 0x2429023
    ctx->pc = 0x287140u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_287144:
    // 0x287144: 0x26700040
    ctx->pc = 0x287144u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
label_287148:
    // 0x287148: 0x108023
    ctx->pc = 0x287148u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_28714c:
    // 0x28714c: 0x200202d
    ctx->pc = 0x28714cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287150:
    // 0x287150: 0x240282d
    ctx->pc = 0x287150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287154:
    // 0x287154: 0x280302d
    ctx->pc = 0x287154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287158:
    // 0x287158: 0x3c0700ff
    ctx->pc = 0x287158u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_28715c:
    // 0x28715c: 0x34e7ffff
    ctx->pc = 0x28715cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287160:
    // 0x287160: 0x4600a306
    ctx->pc = 0x287160u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287164:
    // 0x287164: 0x3c08003b
    ctx->pc = 0x287164u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287168:
    // 0x287168: 0xc080510
label_28716c:
    if (ctx->pc == 0x28716Cu) {
        ctx->pc = 0x28716Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956176));
        ctx->pc = 0x287170u;
        goto label_287170;
    }
    ctx->pc = 0x287168u;
    SET_GPR_U32(ctx, 31, 0x287170u);
    ctx->pc = 0x28716Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956176));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287170u; }
    }
    if (ctx->pc != 0x287170u) { return; }
    ctx->pc = 0x287170u;
label_287170:
    // 0x287170: 0x2559021
    ctx->pc = 0x287170u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287174:
    // 0x287174: 0x200202d
    ctx->pc = 0x287174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287178:
    // 0x287178: 0x240282d
    ctx->pc = 0x287178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28717c:
    // 0x28717c: 0x280302d
    ctx->pc = 0x28717cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287180:
    // 0x287180: 0x3c0700ff
    ctx->pc = 0x287180u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287184:
    // 0x287184: 0x34e7ffff
    ctx->pc = 0x287184u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287188:
    // 0x287188: 0x4600a306
    ctx->pc = 0x287188u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_28718c:
    // 0x28718c: 0x3c08003b
    ctx->pc = 0x28718cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287190:
    // 0x287190: 0xc080510
label_287194:
    if (ctx->pc == 0x287194u) {
        ctx->pc = 0x287194u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955960));
        ctx->pc = 0x287198u;
        goto label_287198;
    }
    ctx->pc = 0x287190u;
    SET_GPR_U32(ctx, 31, 0x287198u);
    ctx->pc = 0x287194u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955960));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287198u; }
    }
    if (ctx->pc != 0x287198u) { return; }
    ctx->pc = 0x287198u;
label_287198:
    // 0x287198: 0x200202d
    ctx->pc = 0x287198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28719c:
    // 0x28719c: 0x2552821
    ctx->pc = 0x28719cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2871a0:
    // 0x2871a0: 0x280302d
    ctx->pc = 0x2871a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2871a4:
    // 0x2871a4: 0x3c0700ff
    ctx->pc = 0x2871a4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2871a8:
    // 0x2871a8: 0x34e7ffff
    ctx->pc = 0x2871a8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2871ac:
    // 0x2871ac: 0x4600a306
    ctx->pc = 0x2871acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2871b0:
    // 0x2871b0: 0x3c08003b
    ctx->pc = 0x2871b0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2871b4:
    // 0x2871b4: 0xc080510
label_2871b8:
    if (ctx->pc == 0x2871B8u) {
        ctx->pc = 0x2871B8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956192));
        ctx->pc = 0x2871BCu;
        goto label_2871bc;
    }
    ctx->pc = 0x2871B4u;
    SET_GPR_U32(ctx, 31, 0x2871BCu);
    ctx->pc = 0x2871B8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956192));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2871BCu; }
    }
    if (ctx->pc != 0x2871BCu) { return; }
    ctx->pc = 0x2871BCu;
label_2871bc:
    // 0x2871bc: 0x24020001
    ctx->pc = 0x2871bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2871c0:
    // 0x2871c0: 0x10000357
label_2871c4:
    if (ctx->pc == 0x2871C4u) {
        ctx->pc = 0x2871C4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x2871C8u;
        goto label_2871c8;
    }
    ctx->pc = 0x2871C0u;
    {
        const bool branch_taken_0x2871c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2871C4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x2871c0) {
            ctx->pc = 0x287F20u;
            goto label_287f20;
        }
    }
    ctx->pc = 0x2871C8u;
label_2871c8:
    // 0x2871c8: 0x3c020035
    ctx->pc = 0x2871c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2871cc:
    // 0x2871cc: 0x8c52aaa8
    ctx->pc = 0x2871ccu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
label_2871d0:
    // 0x2871d0: 0x26700040
    ctx->pc = 0x2871d0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
label_2871d4:
    // 0x2871d4: 0x108023
    ctx->pc = 0x2871d4u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_2871d8:
    // 0x2871d8: 0x200202d
    ctx->pc = 0x2871d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2871dc:
    // 0x2871dc: 0x240282d
    ctx->pc = 0x2871dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2871e0:
    // 0x2871e0: 0x280302d
    ctx->pc = 0x2871e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2871e4:
    // 0x2871e4: 0x3c0700ff
    ctx->pc = 0x2871e4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2871e8:
    // 0x2871e8: 0x34e7ffff
    ctx->pc = 0x2871e8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2871ec:
    // 0x2871ec: 0x4600a306
    ctx->pc = 0x2871ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2871f0:
    // 0x2871f0: 0x3c08003b
    ctx->pc = 0x2871f0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2871f4:
    // 0x2871f4: 0xc080510
label_2871f8:
    if (ctx->pc == 0x2871F8u) {
        ctx->pc = 0x2871F8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956208));
        ctx->pc = 0x2871FCu;
        goto label_2871fc;
    }
    ctx->pc = 0x2871F4u;
    SET_GPR_U32(ctx, 31, 0x2871FCu);
    ctx->pc = 0x2871F8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956208));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2871FCu; }
    }
    if (ctx->pc != 0x2871FCu) { return; }
    ctx->pc = 0x2871FCu;
label_2871fc:
    // 0x2871fc: 0x2559021
    ctx->pc = 0x2871fcu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287200:
    // 0x287200: 0x200202d
    ctx->pc = 0x287200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287204:
    // 0x287204: 0x240282d
    ctx->pc = 0x287204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287208:
    // 0x287208: 0x280302d
    ctx->pc = 0x287208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28720c:
    // 0x28720c: 0x3c0700ff
    ctx->pc = 0x28720cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287210:
    // 0x287210: 0x34e7ffff
    ctx->pc = 0x287210u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287214:
    // 0x287214: 0x4600a306
    ctx->pc = 0x287214u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287218:
    // 0x287218: 0x3c08003b
    ctx->pc = 0x287218u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_28721c:
    // 0x28721c: 0xc080510
label_287220:
    if (ctx->pc == 0x287220u) {
        ctx->pc = 0x287220u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956224));
        ctx->pc = 0x287224u;
        goto label_287224;
    }
    ctx->pc = 0x28721Cu;
    SET_GPR_U32(ctx, 31, 0x287224u);
    ctx->pc = 0x287220u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956224));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287224u; }
    }
    if (ctx->pc != 0x287224u) { return; }
    ctx->pc = 0x287224u;
label_287224:
    // 0x287224: 0x2559021
    ctx->pc = 0x287224u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287228:
    // 0x287228: 0x200202d
    ctx->pc = 0x287228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28722c:
    // 0x28722c: 0x240282d
    ctx->pc = 0x28722cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287230:
    // 0x287230: 0x280302d
    ctx->pc = 0x287230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287234:
    // 0x287234: 0x3c0700ff
    ctx->pc = 0x287234u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287238:
    // 0x287238: 0x34e7ffff
    ctx->pc = 0x287238u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_28723c:
    // 0x28723c: 0x4600a306
    ctx->pc = 0x28723cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287240:
    // 0x287240: 0x3c08003b
    ctx->pc = 0x287240u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287244:
    // 0x287244: 0xc080510
label_287248:
    if (ctx->pc == 0x287248u) {
        ctx->pc = 0x287248u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955960));
        ctx->pc = 0x28724Cu;
        goto label_28724c;
    }
    ctx->pc = 0x287244u;
    SET_GPR_U32(ctx, 31, 0x28724Cu);
    ctx->pc = 0x287248u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955960));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28724Cu; }
    }
    if (ctx->pc != 0x28724Cu) { return; }
    ctx->pc = 0x28724Cu;
label_28724c:
    // 0x28724c: 0x200202d
    ctx->pc = 0x28724cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287250:
    // 0x287250: 0x2552821
    ctx->pc = 0x287250u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287254:
    // 0x287254: 0x280302d
    ctx->pc = 0x287254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287258:
    // 0x287258: 0x3c0700ff
    ctx->pc = 0x287258u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_28725c:
    // 0x28725c: 0x34e7ffff
    ctx->pc = 0x28725cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287260:
    // 0x287260: 0x4600a306
    ctx->pc = 0x287260u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287264:
    // 0x287264: 0x3c08003b
    ctx->pc = 0x287264u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287268:
    // 0x287268: 0xc080510
label_28726c:
    if (ctx->pc == 0x28726Cu) {
        ctx->pc = 0x28726Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956240));
        ctx->pc = 0x287270u;
        goto label_287270;
    }
    ctx->pc = 0x287268u;
    SET_GPR_U32(ctx, 31, 0x287270u);
    ctx->pc = 0x28726Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956240));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287270u; }
    }
    if (ctx->pc != 0x287270u) { return; }
    ctx->pc = 0x287270u;
label_287270:
    // 0x287270: 0x1000032c
label_287274:
    if (ctx->pc == 0x287274u) {
        ctx->pc = 0x287274u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
        ctx->pc = 0x287278u;
        goto label_287278;
    }
    ctx->pc = 0x287270u;
    {
        const bool branch_taken_0x287270 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x287274u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
        if (branch_taken_0x287270) {
            ctx->pc = 0x287F24u;
            goto label_287f24;
        }
    }
    ctx->pc = 0x287278u;
label_287278:
    // 0x287278: 0x3c030035
    ctx->pc = 0x287278u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_28727c:
    // 0x28727c: 0x2463a620
    ctx->pc = 0x28727cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_287280:
    // 0x287280: 0x240200e8
    ctx->pc = 0x287280u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_287284:
    // 0x287284: 0x2e21018
    ctx->pc = 0x287284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_287288:
    // 0x287288: 0x621821
    ctx->pc = 0x287288u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28728c:
    // 0x28728c: 0x3c020035
    ctx->pc = 0x28728cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_287290:
    // 0x287290: 0x8c630010
    ctx->pc = 0x287290u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_287294:
    // 0x287294: 0x8c42aac0
    ctx->pc = 0x287294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294945472)));
label_287298:
    // 0x287298: 0x629021
    ctx->pc = 0x287298u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28729c:
    // 0x28729c: 0x151040
    ctx->pc = 0x28729cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 1));
label_2872a0:
    // 0x2872a0: 0x2429023
    ctx->pc = 0x2872a0u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2872a4:
    // 0x2872a4: 0x26700040
    ctx->pc = 0x2872a4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
label_2872a8:
    // 0x2872a8: 0x108023
    ctx->pc = 0x2872a8u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_2872ac:
    // 0x2872ac: 0x200202d
    ctx->pc = 0x2872acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2872b0:
    // 0x2872b0: 0x240282d
    ctx->pc = 0x2872b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2872b4:
    // 0x2872b4: 0x280302d
    ctx->pc = 0x2872b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2872b8:
    // 0x2872b8: 0x3c0700ff
    ctx->pc = 0x2872b8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2872bc:
    // 0x2872bc: 0x34e7ffff
    ctx->pc = 0x2872bcu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2872c0:
    // 0x2872c0: 0x4600a306
    ctx->pc = 0x2872c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2872c4:
    // 0x2872c4: 0x3c08003b
    ctx->pc = 0x2872c4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2872c8:
    // 0x2872c8: 0xc080510
label_2872cc:
    if (ctx->pc == 0x2872CCu) {
        ctx->pc = 0x2872CCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956176));
        ctx->pc = 0x2872D0u;
        goto label_2872d0;
    }
    ctx->pc = 0x2872C8u;
    SET_GPR_U32(ctx, 31, 0x2872D0u);
    ctx->pc = 0x2872CCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956176));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2872D0u; }
    }
    if (ctx->pc != 0x2872D0u) { return; }
    ctx->pc = 0x2872D0u;
label_2872d0:
    // 0x2872d0: 0x200202d
    ctx->pc = 0x2872d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2872d4:
    // 0x2872d4: 0x2552821
    ctx->pc = 0x2872d4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2872d8:
    // 0x2872d8: 0x280302d
    ctx->pc = 0x2872d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2872dc:
    // 0x2872dc: 0x3c0700ff
    ctx->pc = 0x2872dcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2872e0:
    // 0x2872e0: 0x34e7ffff
    ctx->pc = 0x2872e0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2872e4:
    // 0x2872e4: 0x4600a306
    ctx->pc = 0x2872e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2872e8:
    // 0x2872e8: 0x3c08003b
    ctx->pc = 0x2872e8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2872ec:
    // 0x2872ec: 0xc080510
label_2872f0:
    if (ctx->pc == 0x2872F0u) {
        ctx->pc = 0x2872F0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956256));
        ctx->pc = 0x2872F4u;
        goto label_2872f4;
    }
    ctx->pc = 0x2872ECu;
    SET_GPR_U32(ctx, 31, 0x2872F4u);
    ctx->pc = 0x2872F0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956256));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2872F4u; }
    }
    if (ctx->pc != 0x2872F4u) { return; }
    ctx->pc = 0x2872F4u;
label_2872f4:
    // 0x2872f4: 0x24030001
    ctx->pc = 0x2872f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2872f8:
    // 0x2872f8: 0x10000309
label_2872fc:
    if (ctx->pc == 0x2872FCu) {
        ctx->pc = 0x2872FCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->pc = 0x287300u;
        goto label_287300;
    }
    ctx->pc = 0x2872F8u;
    {
        const bool branch_taken_0x2872f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2872FCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        if (branch_taken_0x2872f8) {
            ctx->pc = 0x287F20u;
            goto label_287f20;
        }
    }
    ctx->pc = 0x287300u;
label_287300:
    // 0x287300: 0x3c030035
    ctx->pc = 0x287300u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_287304:
    // 0x287304: 0x2463a620
    ctx->pc = 0x287304u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_287308:
    // 0x287308: 0x240200e8
    ctx->pc = 0x287308u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_28730c:
    // 0x28730c: 0x2e21018
    ctx->pc = 0x28730cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_287310:
    // 0x287310: 0x621821
    ctx->pc = 0x287310u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_287314:
    // 0x287314: 0x3c020035
    ctx->pc = 0x287314u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_287318:
    // 0x287318: 0x8c630010
    ctx->pc = 0x287318u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_28731c:
    // 0x28731c: 0x8c42aac0
    ctx->pc = 0x28731cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294945472)));
label_287320:
    // 0x287320: 0x629021
    ctx->pc = 0x287320u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_287324:
    // 0x287324: 0x151040
    ctx->pc = 0x287324u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 1));
label_287328:
    // 0x287328: 0x551021
    ctx->pc = 0x287328u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_28732c:
    // 0x28732c: 0x2429023
    ctx->pc = 0x28732cu;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_287330:
    // 0x287330: 0x26700040
    ctx->pc = 0x287330u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
label_287334:
    // 0x287334: 0x108023
    ctx->pc = 0x287334u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_287338:
    // 0x287338: 0x200202d
    ctx->pc = 0x287338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28733c:
    // 0x28733c: 0x240282d
    ctx->pc = 0x28733cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287340:
    // 0x287340: 0x280302d
    ctx->pc = 0x287340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287344:
    // 0x287344: 0x3c0700ff
    ctx->pc = 0x287344u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287348:
    // 0x287348: 0x34e7ffff
    ctx->pc = 0x287348u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_28734c:
    // 0x28734c: 0x4600a306
    ctx->pc = 0x28734cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287350:
    // 0x287350: 0x3c08003b
    ctx->pc = 0x287350u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287354:
    // 0x287354: 0xc080510
label_287358:
    if (ctx->pc == 0x287358u) {
        ctx->pc = 0x287358u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956176));
        ctx->pc = 0x28735Cu;
        goto label_28735c;
    }
    ctx->pc = 0x287354u;
    SET_GPR_U32(ctx, 31, 0x28735Cu);
    ctx->pc = 0x287358u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956176));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28735Cu; }
    }
    if (ctx->pc != 0x28735Cu) { return; }
    ctx->pc = 0x28735Cu;
label_28735c:
    // 0x28735c: 0x2559021
    ctx->pc = 0x28735cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287360:
    // 0x287360: 0x200202d
    ctx->pc = 0x287360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287364:
    // 0x287364: 0x240282d
    ctx->pc = 0x287364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287368:
    // 0x287368: 0x280302d
    ctx->pc = 0x287368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28736c:
    // 0x28736c: 0x3c0700ff
    ctx->pc = 0x28736cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287370:
    // 0x287370: 0x34e7ffff
    ctx->pc = 0x287370u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287374:
    // 0x287374: 0x4600a306
    ctx->pc = 0x287374u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287378:
    // 0x287378: 0x3c08003b
    ctx->pc = 0x287378u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_28737c:
    // 0x28737c: 0xc080510
label_287380:
    if (ctx->pc == 0x287380u) {
        ctx->pc = 0x287380u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956272));
        ctx->pc = 0x287384u;
        goto label_287384;
    }
    ctx->pc = 0x28737Cu;
    SET_GPR_U32(ctx, 31, 0x287384u);
    ctx->pc = 0x287380u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956272));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287384u; }
    }
    if (ctx->pc != 0x287384u) { return; }
    ctx->pc = 0x287384u;
label_287384:
    // 0x287384: 0x200202d
    ctx->pc = 0x287384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287388:
    // 0x287388: 0x2552821
    ctx->pc = 0x287388u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_28738c:
    // 0x28738c: 0x280302d
    ctx->pc = 0x28738cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287390:
    // 0x287390: 0x3c0700ff
    ctx->pc = 0x287390u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287394:
    // 0x287394: 0x34e7ffff
    ctx->pc = 0x287394u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287398:
    // 0x287398: 0x4600a306
    ctx->pc = 0x287398u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_28739c:
    // 0x28739c: 0x3c08003b
    ctx->pc = 0x28739cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2873a0:
    // 0x2873a0: 0xc080510
label_2873a4:
    if (ctx->pc == 0x2873A4u) {
        ctx->pc = 0x2873A4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956288));
        ctx->pc = 0x2873A8u;
        goto label_2873a8;
    }
    ctx->pc = 0x2873A0u;
    SET_GPR_U32(ctx, 31, 0x2873A8u);
    ctx->pc = 0x2873A4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956288));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2873A8u; }
    }
    if (ctx->pc != 0x2873A8u) { return; }
    ctx->pc = 0x2873A8u;
label_2873a8:
    // 0x2873a8: 0x24040001
    ctx->pc = 0x2873a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_2873ac:
    // 0x2873ac: 0x100002dc
label_2873b0:
    if (ctx->pc == 0x2873B0u) {
        ctx->pc = 0x2873B0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->pc = 0x2873B4u;
        goto label_2873b4;
    }
    ctx->pc = 0x2873ACu;
    {
        const bool branch_taken_0x2873ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2873B0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        if (branch_taken_0x2873ac) {
            ctx->pc = 0x287F20u;
            goto label_287f20;
        }
    }
    ctx->pc = 0x2873B4u;
label_2873b4:
    // 0x2873b4: 0x3c020035
    ctx->pc = 0x2873b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2873b8:
    // 0x2873b8: 0x151880
    ctx->pc = 0x2873b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 2));
label_2873bc:
    // 0x2873bc: 0x751821
    ctx->pc = 0x2873bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_2873c0:
    // 0x2873c0: 0x8c42aaa8
    ctx->pc = 0x2873c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
label_2873c4:
    // 0x2873c4: 0x439023
    ctx->pc = 0x2873c4u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2873c8:
    // 0x2873c8: 0x8e222ae4
    ctx->pc = 0x2873c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 10980)));
label_2873cc:
    // 0x2873cc: 0x1440003f
label_2873d0:
    if (ctx->pc == 0x2873D0u) {
        ctx->pc = 0x2873D0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
        ctx->pc = 0x2873D4u;
        goto label_2873d4;
    }
    ctx->pc = 0x2873CCu;
    {
        const bool branch_taken_0x2873cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2873D0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
        if (branch_taken_0x2873cc) {
            ctx->pc = 0x2874CCu;
            goto label_2874cc;
        }
    }
    ctx->pc = 0x2873D4u;
label_2873d4:
    // 0x2873d4: 0x108023
    ctx->pc = 0x2873d4u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_2873d8:
    // 0x2873d8: 0x200202d
    ctx->pc = 0x2873d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2873dc:
    // 0x2873dc: 0x240282d
    ctx->pc = 0x2873dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2873e0:
    // 0x2873e0: 0x280302d
    ctx->pc = 0x2873e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2873e4:
    // 0x2873e4: 0x3c0700ff
    ctx->pc = 0x2873e4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2873e8:
    // 0x2873e8: 0x34e7ffff
    ctx->pc = 0x2873e8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2873ec:
    // 0x2873ec: 0x4600a306
    ctx->pc = 0x2873ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2873f0:
    // 0x2873f0: 0x3c08003b
    ctx->pc = 0x2873f0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2873f4:
    // 0x2873f4: 0xc080510
label_2873f8:
    if (ctx->pc == 0x2873F8u) {
        ctx->pc = 0x2873F8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956304));
        ctx->pc = 0x2873FCu;
        goto label_2873fc;
    }
    ctx->pc = 0x2873F4u;
    SET_GPR_U32(ctx, 31, 0x2873FCu);
    ctx->pc = 0x2873F8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956304));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2873FCu; }
    }
    if (ctx->pc != 0x2873FCu) { return; }
    ctx->pc = 0x2873FCu;
label_2873fc:
    // 0x2873fc: 0x2559021
    ctx->pc = 0x2873fcu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287400:
    // 0x287400: 0x200202d
    ctx->pc = 0x287400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287404:
    // 0x287404: 0x240282d
    ctx->pc = 0x287404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287408:
    // 0x287408: 0x280302d
    ctx->pc = 0x287408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28740c:
    // 0x28740c: 0x3c0700ff
    ctx->pc = 0x28740cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287410:
    // 0x287410: 0x34e7ffff
    ctx->pc = 0x287410u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287414:
    // 0x287414: 0x4600a306
    ctx->pc = 0x287414u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287418:
    // 0x287418: 0x3c08003b
    ctx->pc = 0x287418u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_28741c:
    // 0x28741c: 0xc080510
label_287420:
    if (ctx->pc == 0x287420u) {
        ctx->pc = 0x287420u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955960));
        ctx->pc = 0x287424u;
        goto label_287424;
    }
    ctx->pc = 0x28741Cu;
    SET_GPR_U32(ctx, 31, 0x287424u);
    ctx->pc = 0x287420u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955960));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287424u; }
    }
    if (ctx->pc != 0x287424u) { return; }
    ctx->pc = 0x287424u;
label_287424:
    // 0x287424: 0x2559021
    ctx->pc = 0x287424u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287428:
    // 0x287428: 0x200202d
    ctx->pc = 0x287428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28742c:
    // 0x28742c: 0x240282d
    ctx->pc = 0x28742cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287430:
    // 0x287430: 0x280302d
    ctx->pc = 0x287430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287434:
    // 0x287434: 0x3c0700ff
    ctx->pc = 0x287434u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287438:
    // 0x287438: 0x34e7ffff
    ctx->pc = 0x287438u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_28743c:
    // 0x28743c: 0x4600a306
    ctx->pc = 0x28743cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287440:
    // 0x287440: 0x3c08003b
    ctx->pc = 0x287440u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287444:
    // 0x287444: 0xc080510
label_287448:
    if (ctx->pc == 0x287448u) {
        ctx->pc = 0x287448u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956240));
        ctx->pc = 0x28744Cu;
        goto label_28744c;
    }
    ctx->pc = 0x287444u;
    SET_GPR_U32(ctx, 31, 0x28744Cu);
    ctx->pc = 0x287448u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956240));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28744Cu; }
    }
    if (ctx->pc != 0x28744Cu) { return; }
    ctx->pc = 0x28744Cu;
label_28744c:
    // 0x28744c: 0x2559021
    ctx->pc = 0x28744cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287450:
    // 0x287450: 0x2559021
    ctx->pc = 0x287450u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287454:
    // 0x287454: 0x200202d
    ctx->pc = 0x287454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287458:
    // 0x287458: 0x240282d
    ctx->pc = 0x287458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28745c:
    // 0x28745c: 0x280302d
    ctx->pc = 0x28745cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287460:
    // 0x287460: 0x3c0700ff
    ctx->pc = 0x287460u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287464:
    // 0x287464: 0x34e7ffff
    ctx->pc = 0x287464u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287468:
    // 0x287468: 0x4600a306
    ctx->pc = 0x287468u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_28746c:
    // 0x28746c: 0x3c08003b
    ctx->pc = 0x28746cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287470:
    // 0x287470: 0xc080510
label_287474:
    if (ctx->pc == 0x287474u) {
        ctx->pc = 0x287474u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956320));
        ctx->pc = 0x287478u;
        goto label_287478;
    }
    ctx->pc = 0x287470u;
    SET_GPR_U32(ctx, 31, 0x287478u);
    ctx->pc = 0x287474u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956320));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287478u; }
    }
    if (ctx->pc != 0x287478u) { return; }
    ctx->pc = 0x287478u;
label_287478:
    // 0x287478: 0x2559021
    ctx->pc = 0x287478u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_28747c:
    // 0x28747c: 0x200202d
    ctx->pc = 0x28747cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287480:
    // 0x287480: 0x240282d
    ctx->pc = 0x287480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287484:
    // 0x287484: 0x280302d
    ctx->pc = 0x287484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287488:
    // 0x287488: 0x3c0700ff
    ctx->pc = 0x287488u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_28748c:
    // 0x28748c: 0x34e7ffff
    ctx->pc = 0x28748cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287490:
    // 0x287490: 0x4600a306
    ctx->pc = 0x287490u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287494:
    // 0x287494: 0x3c08003b
    ctx->pc = 0x287494u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287498:
    // 0x287498: 0xc080510
label_28749c:
    if (ctx->pc == 0x28749Cu) {
        ctx->pc = 0x28749Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956336));
        ctx->pc = 0x2874A0u;
        goto label_2874a0;
    }
    ctx->pc = 0x287498u;
    SET_GPR_U32(ctx, 31, 0x2874A0u);
    ctx->pc = 0x28749Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956336));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2874A0u; }
    }
    if (ctx->pc != 0x2874A0u) { return; }
    ctx->pc = 0x2874A0u;
label_2874a0:
    // 0x2874a0: 0x200202d
    ctx->pc = 0x2874a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2874a4:
    // 0x2874a4: 0x2552821
    ctx->pc = 0x2874a4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2874a8:
    // 0x2874a8: 0x280302d
    ctx->pc = 0x2874a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2874ac:
    // 0x2874ac: 0x3c0700ff
    ctx->pc = 0x2874acu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2874b0:
    // 0x2874b0: 0x34e7ffff
    ctx->pc = 0x2874b0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2874b4:
    // 0x2874b4: 0x4600a306
    ctx->pc = 0x2874b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2874b8:
    // 0x2874b8: 0x3c08003b
    ctx->pc = 0x2874b8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2874bc:
    // 0x2874bc: 0xc080510
label_2874c0:
    if (ctx->pc == 0x2874C0u) {
        ctx->pc = 0x2874C0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956344));
        ctx->pc = 0x2874C4u;
        goto label_2874c4;
    }
    ctx->pc = 0x2874BCu;
    SET_GPR_U32(ctx, 31, 0x2874C4u);
    ctx->pc = 0x2874C0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956344));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2874C4u; }
    }
    if (ctx->pc != 0x2874C4u) { return; }
    ctx->pc = 0x2874C4u;
label_2874c4:
    // 0x2874c4: 0x10000297
label_2874c8:
    if (ctx->pc == 0x2874C8u) {
        ctx->pc = 0x2874C8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
        ctx->pc = 0x2874CCu;
        goto label_2874cc;
    }
    ctx->pc = 0x2874C4u;
    {
        const bool branch_taken_0x2874c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2874C8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
        if (branch_taken_0x2874c4) {
            ctx->pc = 0x287F24u;
            goto label_287f24;
        }
    }
    ctx->pc = 0x2874CCu;
label_2874cc:
    // 0x2874cc: 0x4400023
label_2874d0:
    if (ctx->pc == 0x2874D0u) {
        ctx->pc = 0x2874D0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
        ctx->pc = 0x2874D4u;
        goto label_2874d4;
    }
    ctx->pc = 0x2874CCu;
    {
        const bool branch_taken_0x2874cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2874D0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
        if (branch_taken_0x2874cc) {
            ctx->pc = 0x28755Cu;
            goto label_28755c;
        }
    }
    ctx->pc = 0x2874D4u;
label_2874d4:
    // 0x2874d4: 0x10400021
label_2874d8:
    if (ctx->pc == 0x2874D8u) {
        ctx->pc = 0x2874D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x2874DCu;
        goto label_2874dc;
    }
    ctx->pc = 0x2874D4u;
    {
        const bool branch_taken_0x2874d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2874D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x2874d4) {
            ctx->pc = 0x28755Cu;
            goto label_28755c;
        }
    }
    ctx->pc = 0x2874DCu;
label_2874dc:
    // 0x2874dc: 0x8c52aaa8
    ctx->pc = 0x2874dcu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
label_2874e0:
    // 0x2874e0: 0x26700040
    ctx->pc = 0x2874e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
label_2874e4:
    // 0x2874e4: 0x108023
    ctx->pc = 0x2874e4u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_2874e8:
    // 0x2874e8: 0x200202d
    ctx->pc = 0x2874e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2874ec:
    // 0x2874ec: 0x240282d
    ctx->pc = 0x2874ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2874f0:
    // 0x2874f0: 0x280302d
    ctx->pc = 0x2874f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2874f4:
    // 0x2874f4: 0x3c0700ff
    ctx->pc = 0x2874f4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2874f8:
    // 0x2874f8: 0x34e7ffff
    ctx->pc = 0x2874f8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2874fc:
    // 0x2874fc: 0x4600a306
    ctx->pc = 0x2874fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287500:
    // 0x287500: 0x3c08003b
    ctx->pc = 0x287500u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287504:
    // 0x287504: 0xc080510
label_287508:
    if (ctx->pc == 0x287508u) {
        ctx->pc = 0x287508u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956360));
        ctx->pc = 0x28750Cu;
        goto label_28750c;
    }
    ctx->pc = 0x287504u;
    SET_GPR_U32(ctx, 31, 0x28750Cu);
    ctx->pc = 0x287508u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956360));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28750Cu; }
    }
    if (ctx->pc != 0x28750Cu) { return; }
    ctx->pc = 0x28750Cu;
label_28750c:
    // 0x28750c: 0x2559021
    ctx->pc = 0x28750cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287510:
    // 0x287510: 0x2559021
    ctx->pc = 0x287510u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287514:
    // 0x287514: 0x200202d
    ctx->pc = 0x287514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287518:
    // 0x287518: 0x240282d
    ctx->pc = 0x287518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28751c:
    // 0x28751c: 0x280302d
    ctx->pc = 0x28751cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287520:
    // 0x287520: 0x3c0700ff
    ctx->pc = 0x287520u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287524:
    // 0x287524: 0x34e7ffff
    ctx->pc = 0x287524u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287528:
    // 0x287528: 0x4600a306
    ctx->pc = 0x287528u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_28752c:
    // 0x28752c: 0x3c08003b
    ctx->pc = 0x28752cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287530:
    // 0x287530: 0xc080510
label_287534:
    if (ctx->pc == 0x287534u) {
        ctx->pc = 0x287534u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956376));
        ctx->pc = 0x287538u;
        goto label_287538;
    }
    ctx->pc = 0x287530u;
    SET_GPR_U32(ctx, 31, 0x287538u);
    ctx->pc = 0x287534u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956376));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287538u; }
    }
    if (ctx->pc != 0x287538u) { return; }
    ctx->pc = 0x287538u;
label_287538:
    // 0x287538: 0x2559021
    ctx->pc = 0x287538u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_28753c:
    // 0x28753c: 0x200202d
    ctx->pc = 0x28753cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287540:
    // 0x287540: 0x240282d
    ctx->pc = 0x287540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287544:
    // 0x287544: 0x280302d
    ctx->pc = 0x287544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287548:
    // 0x287548: 0x3c0700ff
    ctx->pc = 0x287548u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_28754c:
    // 0x28754c: 0x34e7ffff
    ctx->pc = 0x28754cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287550:
    // 0x287550: 0x4600a306
    ctx->pc = 0x287550u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287554:
    // 0x287554: 0x100001d8
label_287558:
    if (ctx->pc == 0x287558u) {
        ctx->pc = 0x287558u;
        SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
        ctx->pc = 0x28755Cu;
        goto label_28755c;
    }
    ctx->pc = 0x287554u;
    {
        const bool branch_taken_0x287554 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x287558u;
        SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
        if (branch_taken_0x287554) {
            ctx->pc = 0x287CB8u;
            goto label_287cb8;
        }
    }
    ctx->pc = 0x28755Cu;
label_28755c:
    // 0x28755c: 0x3c020035
    ctx->pc = 0x28755cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_287560:
    // 0x287560: 0x8c52aaa8
    ctx->pc = 0x287560u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
label_287564:
    // 0x287564: 0x8e222ae4
    ctx->pc = 0x287564u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 10980)));
label_287568:
    // 0x287568: 0x4400014
label_28756c:
    if (ctx->pc == 0x28756Cu) {
        ctx->pc = 0x28756Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
        ctx->pc = 0x287570u;
        goto label_287570;
    }
    ctx->pc = 0x287568u;
    {
        const bool branch_taken_0x287568 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28756Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
        if (branch_taken_0x287568) {
            ctx->pc = 0x2875BCu;
            goto label_2875bc;
        }
    }
    ctx->pc = 0x287570u;
label_287570:
    // 0x287570: 0x108023
    ctx->pc = 0x287570u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_287574:
    // 0x287574: 0x200202d
    ctx->pc = 0x287574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287578:
    // 0x287578: 0x240282d
    ctx->pc = 0x287578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28757c:
    // 0x28757c: 0x280302d
    ctx->pc = 0x28757cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287580:
    // 0x287580: 0x3c0700ff
    ctx->pc = 0x287580u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287584:
    // 0x287584: 0x34e7ffff
    ctx->pc = 0x287584u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287588:
    // 0x287588: 0x4600a306
    ctx->pc = 0x287588u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_28758c:
    // 0x28758c: 0x3c08003b
    ctx->pc = 0x28758cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287590:
    // 0x287590: 0xc080510
label_287594:
    if (ctx->pc == 0x287594u) {
        ctx->pc = 0x287594u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956424));
        ctx->pc = 0x287598u;
        goto label_287598;
    }
    ctx->pc = 0x287590u;
    SET_GPR_U32(ctx, 31, 0x287598u);
    ctx->pc = 0x287594u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956424));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287598u; }
    }
    if (ctx->pc != 0x287598u) { return; }
    ctx->pc = 0x287598u;
label_287598:
    // 0x287598: 0x200202d
    ctx->pc = 0x287598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28759c:
    // 0x28759c: 0x2552821
    ctx->pc = 0x28759cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2875a0:
    // 0x2875a0: 0x280302d
    ctx->pc = 0x2875a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2875a4:
    // 0x2875a4: 0x3c0700ff
    ctx->pc = 0x2875a4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2875a8:
    // 0x2875a8: 0x34e7ffff
    ctx->pc = 0x2875a8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2875ac:
    // 0x2875ac: 0x4600a306
    ctx->pc = 0x2875acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2875b0:
    // 0x2875b0: 0x3c08003b
    ctx->pc = 0x2875b0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2875b4:
    // 0x2875b4: 0x100001df
label_2875b8:
    if (ctx->pc == 0x2875B8u) {
        ctx->pc = 0x2875B8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956432));
        ctx->pc = 0x2875BCu;
        goto label_2875bc;
    }
    ctx->pc = 0x2875B4u;
    {
        const bool branch_taken_0x2875b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2875B8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956432));
        if (branch_taken_0x2875b4) {
            ctx->pc = 0x287D34u;
            goto label_287d34;
        }
    }
    ctx->pc = 0x2875BCu;
label_2875bc:
    // 0x2875bc: 0x108023
    ctx->pc = 0x2875bcu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_2875c0:
    // 0x2875c0: 0x200202d
    ctx->pc = 0x2875c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2875c4:
    // 0x2875c4: 0x240282d
    ctx->pc = 0x2875c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2875c8:
    // 0x2875c8: 0x280302d
    ctx->pc = 0x2875c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2875cc:
    // 0x2875cc: 0x3c0700ff
    ctx->pc = 0x2875ccu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2875d0:
    // 0x2875d0: 0x34e7ffff
    ctx->pc = 0x2875d0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2875d4:
    // 0x2875d4: 0x4600a306
    ctx->pc = 0x2875d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2875d8:
    // 0x2875d8: 0x3c08003b
    ctx->pc = 0x2875d8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2875dc:
    // 0x2875dc: 0xc080510
label_2875e0:
    if (ctx->pc == 0x2875E0u) {
        ctx->pc = 0x2875E0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956424));
        ctx->pc = 0x2875E4u;
        goto label_2875e4;
    }
    ctx->pc = 0x2875DCu;
    SET_GPR_U32(ctx, 31, 0x2875E4u);
    ctx->pc = 0x2875E0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956424));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2875E4u; }
    }
    if (ctx->pc != 0x2875E4u) { return; }
    ctx->pc = 0x2875E4u;
label_2875e4:
    // 0x2875e4: 0x200202d
    ctx->pc = 0x2875e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2875e8:
    // 0x2875e8: 0x2552821
    ctx->pc = 0x2875e8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2875ec:
    // 0x2875ec: 0x280302d
    ctx->pc = 0x2875ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2875f0:
    // 0x2875f0: 0x3c0700ff
    ctx->pc = 0x2875f0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2875f4:
    // 0x2875f4: 0x34e7ffff
    ctx->pc = 0x2875f4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2875f8:
    // 0x2875f8: 0x4600a306
    ctx->pc = 0x2875f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2875fc:
    // 0x2875fc: 0x3c08003b
    ctx->pc = 0x2875fcu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287600:
    // 0x287600: 0x100001cc
label_287604:
    if (ctx->pc == 0x287604u) {
        ctx->pc = 0x287604u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956448));
        ctx->pc = 0x287608u;
        goto label_287608;
    }
    ctx->pc = 0x287600u;
    {
        const bool branch_taken_0x287600 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x287604u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956448));
        if (branch_taken_0x287600) {
            ctx->pc = 0x287D34u;
            goto label_287d34;
        }
    }
    ctx->pc = 0x287608u;
label_287608:
    // 0x287608: 0x3c020035
    ctx->pc = 0x287608u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28760c:
    // 0x28760c: 0x151880
    ctx->pc = 0x28760cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 2));
label_287610:
    // 0x287610: 0x751821
    ctx->pc = 0x287610u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_287614:
    // 0x287614: 0x8c42aaa8
    ctx->pc = 0x287614u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
label_287618:
    // 0x287618: 0x439023
    ctx->pc = 0x287618u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28761c:
    // 0x28761c: 0x8e222ae4
    ctx->pc = 0x28761cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 10980)));
label_287620:
    // 0x287620: 0x50400007
label_287624:
    if (ctx->pc == 0x287624u) {
        ctx->pc = 0x287624u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x287628u;
        goto label_287628;
    }
    ctx->pc = 0x287620u;
    {
        const bool branch_taken_0x287620 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x287620) {
            ctx->pc = 0x287624u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
            ctx->pc = 0x287640u;
            goto label_287640;
        }
    }
    ctx->pc = 0x287628u;
label_287628:
    // 0x287628: 0x44000f4
label_28762c:
    if (ctx->pc == 0x28762Cu) {
        ctx->pc = 0x28762Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
        ctx->pc = 0x287630u;
        goto label_287630;
    }
    ctx->pc = 0x287628u;
    {
        const bool branch_taken_0x287628 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28762Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
        if (branch_taken_0x287628) {
            ctx->pc = 0x2879FCu;
            goto label_2879fc;
        }
    }
    ctx->pc = 0x287630u;
label_287630:
    // 0x287630: 0x104000f2
label_287634:
    if (ctx->pc == 0x287634u) {
        ctx->pc = 0x287634u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x287638u;
        goto label_287638;
    }
    ctx->pc = 0x287630u;
    {
        const bool branch_taken_0x287630 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x287634u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x287630) {
            ctx->pc = 0x2879FCu;
            goto label_2879fc;
        }
    }
    ctx->pc = 0x287638u;
label_287638:
    // 0x287638: 0x100000bc
label_28763c:
    if (ctx->pc == 0x28763Cu) {
        ctx->pc = 0x28763Cu;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
        ctx->pc = 0x287640u;
        goto label_287640;
    }
    ctx->pc = 0x287638u;
    {
        const bool branch_taken_0x287638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28763Cu;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
        if (branch_taken_0x287638) {
            ctx->pc = 0x28792Cu;
            goto label_28792c;
        }
    }
    ctx->pc = 0x287640u;
label_287640:
    // 0x287640: 0x14a20059
label_287644:
    if (ctx->pc == 0x287644u) {
        ctx->pc = 0x287644u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
        ctx->pc = 0x287648u;
        goto label_287648;
    }
    ctx->pc = 0x287640u;
    {
        const bool branch_taken_0x287640 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x287644u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
        if (branch_taken_0x287640) {
            ctx->pc = 0x2877A8u;
            goto label_2877a8;
        }
    }
    ctx->pc = 0x287648u;
label_287648:
    // 0x287648: 0x108023
    ctx->pc = 0x287648u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_28764c:
    // 0x28764c: 0x200202d
    ctx->pc = 0x28764cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287650:
    // 0x287650: 0x240282d
    ctx->pc = 0x287650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287654:
    // 0x287654: 0x280302d
    ctx->pc = 0x287654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287658:
    // 0x287658: 0x3c0700ff
    ctx->pc = 0x287658u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_28765c:
    // 0x28765c: 0x34e7ffff
    ctx->pc = 0x28765cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287660:
    // 0x287660: 0x4600a306
    ctx->pc = 0x287660u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287664:
    // 0x287664: 0x3c08003b
    ctx->pc = 0x287664u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287668:
    // 0x287668: 0xc080510
label_28766c:
    if (ctx->pc == 0x28766Cu) {
        ctx->pc = 0x28766Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956304));
        ctx->pc = 0x287670u;
        goto label_287670;
    }
    ctx->pc = 0x287668u;
    SET_GPR_U32(ctx, 31, 0x287670u);
    ctx->pc = 0x28766Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956304));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287670u; }
    }
    if (ctx->pc != 0x287670u) { return; }
    ctx->pc = 0x287670u;
label_287670:
    // 0x287670: 0x2559021
    ctx->pc = 0x287670u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287674:
    // 0x287674: 0x200202d
    ctx->pc = 0x287674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287678:
    // 0x287678: 0x240282d
    ctx->pc = 0x287678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28767c:
    // 0x28767c: 0x280302d
    ctx->pc = 0x28767cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287680:
    // 0x287680: 0x3c0700ff
    ctx->pc = 0x287680u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287684:
    // 0x287684: 0x34e7ffff
    ctx->pc = 0x287684u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287688:
    // 0x287688: 0x4600a306
    ctx->pc = 0x287688u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_28768c:
    // 0x28768c: 0x3c08003b
    ctx->pc = 0x28768cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287690:
    // 0x287690: 0xc080510
label_287694:
    if (ctx->pc == 0x287694u) {
        ctx->pc = 0x287694u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955960));
        ctx->pc = 0x287698u;
        goto label_287698;
    }
    ctx->pc = 0x287690u;
    SET_GPR_U32(ctx, 31, 0x287698u);
    ctx->pc = 0x287694u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955960));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287698u; }
    }
    if (ctx->pc != 0x287698u) { return; }
    ctx->pc = 0x287698u;
label_287698:
    // 0x287698: 0x2559021
    ctx->pc = 0x287698u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_28769c:
    // 0x28769c: 0x200202d
    ctx->pc = 0x28769cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2876a0:
    // 0x2876a0: 0x240282d
    ctx->pc = 0x2876a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2876a4:
    // 0x2876a4: 0x280302d
    ctx->pc = 0x2876a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2876a8:
    // 0x2876a8: 0x3c0700ff
    ctx->pc = 0x2876a8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2876ac:
    // 0x2876ac: 0x34e7ffff
    ctx->pc = 0x2876acu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2876b0:
    // 0x2876b0: 0x4600a306
    ctx->pc = 0x2876b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2876b4:
    // 0x2876b4: 0x3c08003b
    ctx->pc = 0x2876b4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2876b8:
    // 0x2876b8: 0xc080510
label_2876bc:
    if (ctx->pc == 0x2876BCu) {
        ctx->pc = 0x2876BCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956240));
        ctx->pc = 0x2876C0u;
        goto label_2876c0;
    }
    ctx->pc = 0x2876B8u;
    SET_GPR_U32(ctx, 31, 0x2876C0u);
    ctx->pc = 0x2876BCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956240));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2876C0u; }
    }
    if (ctx->pc != 0x2876C0u) { return; }
    ctx->pc = 0x2876C0u;
label_2876c0:
    // 0x2876c0: 0x2559021
    ctx->pc = 0x2876c0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2876c4:
    // 0x2876c4: 0x2559021
    ctx->pc = 0x2876c4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2876c8:
    // 0x2876c8: 0x200202d
    ctx->pc = 0x2876c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2876cc:
    // 0x2876cc: 0x240282d
    ctx->pc = 0x2876ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2876d0:
    // 0x2876d0: 0x280302d
    ctx->pc = 0x2876d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2876d4:
    // 0x2876d4: 0x3c0700ff
    ctx->pc = 0x2876d4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2876d8:
    // 0x2876d8: 0x34e7ffff
    ctx->pc = 0x2876d8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2876dc:
    // 0x2876dc: 0x4600a306
    ctx->pc = 0x2876dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2876e0:
    // 0x2876e0: 0x3c08003b
    ctx->pc = 0x2876e0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2876e4:
    // 0x2876e4: 0xc080510
label_2876e8:
    if (ctx->pc == 0x2876E8u) {
        ctx->pc = 0x2876E8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956456));
        ctx->pc = 0x2876ECu;
        goto label_2876ec;
    }
    ctx->pc = 0x2876E4u;
    SET_GPR_U32(ctx, 31, 0x2876ECu);
    ctx->pc = 0x2876E8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956456));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2876ECu; }
    }
    if (ctx->pc != 0x2876ECu) { return; }
    ctx->pc = 0x2876ECu;
label_2876ec:
    // 0x2876ec: 0x2559021
    ctx->pc = 0x2876ecu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2876f0:
    // 0x2876f0: 0x200202d
    ctx->pc = 0x2876f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2876f4:
    // 0x2876f4: 0x240282d
    ctx->pc = 0x2876f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2876f8:
    // 0x2876f8: 0x280302d
    ctx->pc = 0x2876f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2876fc:
    // 0x2876fc: 0x3c0700ff
    ctx->pc = 0x2876fcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287700:
    // 0x287700: 0x34e7ffff
    ctx->pc = 0x287700u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287704:
    // 0x287704: 0x4600a306
    ctx->pc = 0x287704u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287708:
    // 0x287708: 0x3c08003b
    ctx->pc = 0x287708u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_28770c:
    // 0x28770c: 0xc080510
label_287710:
    if (ctx->pc == 0x287710u) {
        ctx->pc = 0x287710u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956192));
        ctx->pc = 0x287714u;
        goto label_287714;
    }
    ctx->pc = 0x28770Cu;
    SET_GPR_U32(ctx, 31, 0x287714u);
    ctx->pc = 0x287710u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956192));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287714u; }
    }
    if (ctx->pc != 0x287714u) { return; }
    ctx->pc = 0x287714u;
label_287714:
    // 0x287714: 0x2559021
    ctx->pc = 0x287714u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287718:
    // 0x287718: 0x200202d
    ctx->pc = 0x287718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28771c:
    // 0x28771c: 0x240282d
    ctx->pc = 0x28771cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287720:
    // 0x287720: 0x280302d
    ctx->pc = 0x287720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287724:
    // 0x287724: 0x3c0700ff
    ctx->pc = 0x287724u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287728:
    // 0x287728: 0x34e7ffff
    ctx->pc = 0x287728u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_28772c:
    // 0x28772c: 0x4600a306
    ctx->pc = 0x28772cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287730:
    // 0x287730: 0x3c08003b
    ctx->pc = 0x287730u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287734:
    // 0x287734: 0xc080510
label_287738:
    if (ctx->pc == 0x287738u) {
        ctx->pc = 0x287738u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956472));
        ctx->pc = 0x28773Cu;
        goto label_28773c;
    }
    ctx->pc = 0x287734u;
    SET_GPR_U32(ctx, 31, 0x28773Cu);
    ctx->pc = 0x287738u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956472));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28773Cu; }
    }
    if (ctx->pc != 0x28773Cu) { return; }
    ctx->pc = 0x28773Cu;
label_28773c:
    // 0x28773c: 0x2559021
    ctx->pc = 0x28773cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287740:
    // 0x287740: 0x3c020035
    ctx->pc = 0x287740u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_287744:
    // 0x287744: 0x8c46a3cc
    ctx->pc = 0x287744u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294943692)));
label_287748:
    // 0x287748: 0x3a0202d
    ctx->pc = 0x287748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28774c:
    // 0x28774c: 0x3c05003b
    ctx->pc = 0x28774cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_287750:
    // 0x287750: 0x24a5d5c8
    ctx->pc = 0x287750u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294956488));
label_287754:
    // 0x287754: 0xc0b6252
label_287758:
    if (ctx->pc == 0x287758u) {
        ctx->pc = 0x287758u;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 10));
        ctx->pc = 0x28775Cu;
        goto label_28775c;
    }
    ctx->pc = 0x287754u;
    SET_GPR_U32(ctx, 31, 0x28775Cu);
    ctx->pc = 0x287758u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 10));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28775Cu; }
    }
    if (ctx->pc != 0x28775Cu) { return; }
    ctx->pc = 0x28775Cu;
label_28775c:
    // 0x28775c: 0x200202d
    ctx->pc = 0x28775cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287760:
    // 0x287760: 0x240282d
    ctx->pc = 0x287760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287764:
    // 0x287764: 0x280302d
    ctx->pc = 0x287764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287768:
    // 0x287768: 0x3c0700ff
    ctx->pc = 0x287768u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_28776c:
    // 0x28776c: 0x34e7ffff
    ctx->pc = 0x28776cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287770:
    // 0x287770: 0x4600a306
    ctx->pc = 0x287770u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287774:
    // 0x287774: 0xc080510
label_287778:
    if (ctx->pc == 0x287778u) {
        ctx->pc = 0x287778u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28777Cu;
        goto label_28777c;
    }
    ctx->pc = 0x287774u;
    SET_GPR_U32(ctx, 31, 0x28777Cu);
    ctx->pc = 0x287778u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28777Cu; }
    }
    if (ctx->pc != 0x28777Cu) { return; }
    ctx->pc = 0x28777Cu;
label_28777c:
    // 0x28777c: 0x200202d
    ctx->pc = 0x28777cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287780:
    // 0x287780: 0x2552821
    ctx->pc = 0x287780u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287784:
    // 0x287784: 0x280302d
    ctx->pc = 0x287784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287788:
    // 0x287788: 0x3c0700ff
    ctx->pc = 0x287788u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_28778c:
    // 0x28778c: 0x34e7ffff
    ctx->pc = 0x28778cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287790:
    // 0x287790: 0x4600a306
    ctx->pc = 0x287790u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287794:
    // 0x287794: 0x3c08003b
    ctx->pc = 0x287794u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287798:
    // 0x287798: 0xc080510
label_28779c:
    if (ctx->pc == 0x28779Cu) {
        ctx->pc = 0x28779Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956496));
        ctx->pc = 0x2877A0u;
        goto label_2877a0;
    }
    ctx->pc = 0x287798u;
    SET_GPR_U32(ctx, 31, 0x2877A0u);
    ctx->pc = 0x28779Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956496));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2877A0u; }
    }
    if (ctx->pc != 0x2877A0u) { return; }
    ctx->pc = 0x2877A0u;
label_2877a0:
    // 0x2877a0: 0x100001e0
label_2877a4:
    if (ctx->pc == 0x2877A4u) {
        ctx->pc = 0x2877A4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
        ctx->pc = 0x2877A8u;
        goto label_2877a8;
    }
    ctx->pc = 0x2877A0u;
    {
        const bool branch_taken_0x2877a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2877A4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
        if (branch_taken_0x2877a0) {
            ctx->pc = 0x287F24u;
            goto label_287f24;
        }
    }
    ctx->pc = 0x2877A8u;
label_2877a8:
    // 0x2877a8: 0x108023
    ctx->pc = 0x2877a8u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_2877ac:
    // 0x2877ac: 0x200202d
    ctx->pc = 0x2877acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2877b0:
    // 0x2877b0: 0x240282d
    ctx->pc = 0x2877b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2877b4:
    // 0x2877b4: 0x280302d
    ctx->pc = 0x2877b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2877b8:
    // 0x2877b8: 0x3c0700ff
    ctx->pc = 0x2877b8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2877bc:
    // 0x2877bc: 0x34e7ffff
    ctx->pc = 0x2877bcu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2877c0:
    // 0x2877c0: 0x4600a306
    ctx->pc = 0x2877c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2877c4:
    // 0x2877c4: 0x3c08003b
    ctx->pc = 0x2877c4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2877c8:
    // 0x2877c8: 0xc080510
label_2877cc:
    if (ctx->pc == 0x2877CCu) {
        ctx->pc = 0x2877CCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956208));
        ctx->pc = 0x2877D0u;
        goto label_2877d0;
    }
    ctx->pc = 0x2877C8u;
    SET_GPR_U32(ctx, 31, 0x2877D0u);
    ctx->pc = 0x2877CCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956208));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2877D0u; }
    }
    if (ctx->pc != 0x2877D0u) { return; }
    ctx->pc = 0x2877D0u;
label_2877d0:
    // 0x2877d0: 0x2559021
    ctx->pc = 0x2877d0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2877d4:
    // 0x2877d4: 0x200202d
    ctx->pc = 0x2877d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2877d8:
    // 0x2877d8: 0x240282d
    ctx->pc = 0x2877d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2877dc:
    // 0x2877dc: 0x280302d
    ctx->pc = 0x2877dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2877e0:
    // 0x2877e0: 0x3c0700ff
    ctx->pc = 0x2877e0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2877e4:
    // 0x2877e4: 0x34e7ffff
    ctx->pc = 0x2877e4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2877e8:
    // 0x2877e8: 0x4600a306
    ctx->pc = 0x2877e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2877ec:
    // 0x2877ec: 0x3c08003b
    ctx->pc = 0x2877ecu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2877f0:
    // 0x2877f0: 0xc080510
label_2877f4:
    if (ctx->pc == 0x2877F4u) {
        ctx->pc = 0x2877F4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956224));
        ctx->pc = 0x2877F8u;
        goto label_2877f8;
    }
    ctx->pc = 0x2877F0u;
    SET_GPR_U32(ctx, 31, 0x2877F8u);
    ctx->pc = 0x2877F4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956224));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2877F8u; }
    }
    if (ctx->pc != 0x2877F8u) { return; }
    ctx->pc = 0x2877F8u;
label_2877f8:
    // 0x2877f8: 0x2559021
    ctx->pc = 0x2877f8u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2877fc:
    // 0x2877fc: 0x200202d
    ctx->pc = 0x2877fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287800:
    // 0x287800: 0x240282d
    ctx->pc = 0x287800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287804:
    // 0x287804: 0x280302d
    ctx->pc = 0x287804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287808:
    // 0x287808: 0x3c0700ff
    ctx->pc = 0x287808u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_28780c:
    // 0x28780c: 0x34e7ffff
    ctx->pc = 0x28780cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287810:
    // 0x287810: 0x4600a306
    ctx->pc = 0x287810u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287814:
    // 0x287814: 0x3c08003b
    ctx->pc = 0x287814u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287818:
    // 0x287818: 0xc080510
label_28781c:
    if (ctx->pc == 0x28781Cu) {
        ctx->pc = 0x28781Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955960));
        ctx->pc = 0x287820u;
        goto label_287820;
    }
    ctx->pc = 0x287818u;
    SET_GPR_U32(ctx, 31, 0x287820u);
    ctx->pc = 0x28781Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955960));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287820u; }
    }
    if (ctx->pc != 0x287820u) { return; }
    ctx->pc = 0x287820u;
label_287820:
    // 0x287820: 0x2559021
    ctx->pc = 0x287820u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287824:
    // 0x287824: 0x200202d
    ctx->pc = 0x287824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287828:
    // 0x287828: 0x240282d
    ctx->pc = 0x287828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28782c:
    // 0x28782c: 0x280302d
    ctx->pc = 0x28782cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287830:
    // 0x287830: 0x3c0700ff
    ctx->pc = 0x287830u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287834:
    // 0x287834: 0x34e7ffff
    ctx->pc = 0x287834u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287838:
    // 0x287838: 0x4600a306
    ctx->pc = 0x287838u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_28783c:
    // 0x28783c: 0x3c08003b
    ctx->pc = 0x28783cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287840:
    // 0x287840: 0xc080510
label_287844:
    if (ctx->pc == 0x287844u) {
        ctx->pc = 0x287844u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956240));
        ctx->pc = 0x287848u;
        goto label_287848;
    }
    ctx->pc = 0x287840u;
    SET_GPR_U32(ctx, 31, 0x287848u);
    ctx->pc = 0x287844u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956240));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287848u; }
    }
    if (ctx->pc != 0x287848u) { return; }
    ctx->pc = 0x287848u;
label_287848:
    // 0x287848: 0x2559021
    ctx->pc = 0x287848u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_28784c:
    // 0x28784c: 0x2559021
    ctx->pc = 0x28784cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287850:
    // 0x287850: 0x200202d
    ctx->pc = 0x287850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287854:
    // 0x287854: 0x240282d
    ctx->pc = 0x287854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287858:
    // 0x287858: 0x280302d
    ctx->pc = 0x287858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28785c:
    // 0x28785c: 0x3c0700ff
    ctx->pc = 0x28785cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287860:
    // 0x287860: 0x34e7ffff
    ctx->pc = 0x287860u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287864:
    // 0x287864: 0x4600a306
    ctx->pc = 0x287864u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287868:
    // 0x287868: 0x3c08003b
    ctx->pc = 0x287868u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_28786c:
    // 0x28786c: 0xc080510
label_287870:
    if (ctx->pc == 0x287870u) {
        ctx->pc = 0x287870u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956512));
        ctx->pc = 0x287874u;
        goto label_287874;
    }
    ctx->pc = 0x28786Cu;
    SET_GPR_U32(ctx, 31, 0x287874u);
    ctx->pc = 0x287870u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956512));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287874u; }
    }
    if (ctx->pc != 0x287874u) { return; }
    ctx->pc = 0x287874u;
label_287874:
    // 0x287874: 0x2559021
    ctx->pc = 0x287874u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287878:
    // 0x287878: 0x3c020035
    ctx->pc = 0x287878u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28787c:
    // 0x28787c: 0x8c46a3cc
    ctx->pc = 0x28787cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294943692)));
label_287880:
    // 0x287880: 0x3a0202d
    ctx->pc = 0x287880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_287884:
    // 0x287884: 0x3c05003b
    ctx->pc = 0x287884u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_287888:
    // 0x287888: 0x24a5d5c8
    ctx->pc = 0x287888u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294956488));
label_28788c:
    // 0x28788c: 0xc0b6252
label_287890:
    if (ctx->pc == 0x287890u) {
        ctx->pc = 0x287890u;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 10));
        ctx->pc = 0x287894u;
        goto label_287894;
    }
    ctx->pc = 0x28788Cu;
    SET_GPR_U32(ctx, 31, 0x287894u);
    ctx->pc = 0x287890u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 10));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287894u; }
    }
    if (ctx->pc != 0x287894u) { return; }
    ctx->pc = 0x287894u;
label_287894:
    // 0x287894: 0x200202d
    ctx->pc = 0x287894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287898:
    // 0x287898: 0x240282d
    ctx->pc = 0x287898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28789c:
    // 0x28789c: 0x280302d
    ctx->pc = 0x28789cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2878a0:
    // 0x2878a0: 0x3c0700ff
    ctx->pc = 0x2878a0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2878a4:
    // 0x2878a4: 0x34e7ffff
    ctx->pc = 0x2878a4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2878a8:
    // 0x2878a8: 0x4600a306
    ctx->pc = 0x2878a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2878ac:
    // 0x2878ac: 0xc080510
label_2878b0:
    if (ctx->pc == 0x2878B0u) {
        ctx->pc = 0x2878B0u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2878B4u;
        goto label_2878b4;
    }
    ctx->pc = 0x2878ACu;
    SET_GPR_U32(ctx, 31, 0x2878B4u);
    ctx->pc = 0x2878B0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2878B4u; }
    }
    if (ctx->pc != 0x2878B4u) { return; }
    ctx->pc = 0x2878B4u;
label_2878b4:
    // 0x2878b4: 0x2559021
    ctx->pc = 0x2878b4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2878b8:
    // 0x2878b8: 0x200202d
    ctx->pc = 0x2878b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2878bc:
    // 0x2878bc: 0x240282d
    ctx->pc = 0x2878bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2878c0:
    // 0x2878c0: 0x280302d
    ctx->pc = 0x2878c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2878c4:
    // 0x2878c4: 0x3c0700ff
    ctx->pc = 0x2878c4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2878c8:
    // 0x2878c8: 0x34e7ffff
    ctx->pc = 0x2878c8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2878cc:
    // 0x2878cc: 0x4600a306
    ctx->pc = 0x2878ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2878d0:
    // 0x2878d0: 0x3c08003b
    ctx->pc = 0x2878d0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2878d4:
    // 0x2878d4: 0xc080510
label_2878d8:
    if (ctx->pc == 0x2878D8u) {
        ctx->pc = 0x2878D8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956496));
        ctx->pc = 0x2878DCu;
        goto label_2878dc;
    }
    ctx->pc = 0x2878D4u;
    SET_GPR_U32(ctx, 31, 0x2878DCu);
    ctx->pc = 0x2878D8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956496));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2878DCu; }
    }
    if (ctx->pc != 0x2878DCu) { return; }
    ctx->pc = 0x2878DCu;
label_2878dc:
    // 0x2878dc: 0x2559021
    ctx->pc = 0x2878dcu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2878e0:
    // 0x2878e0: 0x2559021
    ctx->pc = 0x2878e0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2878e4:
    // 0x2878e4: 0x8e242ae8
    ctx->pc = 0x2878e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 10984)));
label_2878e8:
    // 0x2878e8: 0xc082380
label_2878ec:
    if (ctx->pc == 0x2878ECu) {
        ctx->pc = 0x2878ECu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 10988)));
        ctx->pc = 0x2878F0u;
        goto label_2878f0;
    }
    ctx->pc = 0x2878E8u;
    SET_GPR_U32(ctx, 31, 0x2878F0u);
    ctx->pc = 0x2878ECu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 10988)));
    ctx->pc = 0x208E00u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveGetFreeBytes_0x208e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2878F0u; }
    }
    if (ctx->pc != 0x2878F0u) { return; }
    ctx->pc = 0x2878F0u;
label_2878f0:
    // 0x2878f0: 0x3a0202d
    ctx->pc = 0x2878f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2878f4:
    // 0x2878f4: 0x3c05003b
    ctx->pc = 0x2878f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_2878f8:
    // 0x2878f8: 0x24a5d5e8
    ctx->pc = 0x2878f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294956520));
label_2878fc:
    // 0x2878fc: 0xc0b6252
label_287900:
    if (ctx->pc == 0x287900u) {
        ctx->pc = 0x287900u;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
        ctx->pc = 0x287904u;
        goto label_287904;
    }
    ctx->pc = 0x2878FCu;
    SET_GPR_U32(ctx, 31, 0x287904u);
    ctx->pc = 0x287900u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287904u; }
    }
    if (ctx->pc != 0x287904u) { return; }
    ctx->pc = 0x287904u;
label_287904:
    // 0x287904: 0x200202d
    ctx->pc = 0x287904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287908:
    // 0x287908: 0x240282d
    ctx->pc = 0x287908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28790c:
    // 0x28790c: 0x280302d
    ctx->pc = 0x28790cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287910:
    // 0x287910: 0x3c0700ff
    ctx->pc = 0x287910u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287914:
    // 0x287914: 0x34e7ffff
    ctx->pc = 0x287914u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287918:
    // 0x287918: 0x4600a306
    ctx->pc = 0x287918u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_28791c:
    // 0x28791c: 0xc080510
label_287920:
    if (ctx->pc == 0x287920u) {
        ctx->pc = 0x287920u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x287924u;
        goto label_287924;
    }
    ctx->pc = 0x28791Cu;
    SET_GPR_U32(ctx, 31, 0x287924u);
    ctx->pc = 0x287920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287924u; }
    }
    if (ctx->pc != 0x287924u) { return; }
    ctx->pc = 0x287924u;
label_287924:
    // 0x287924: 0x1000017f
label_287928:
    if (ctx->pc == 0x287928u) {
        ctx->pc = 0x287928u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
        ctx->pc = 0x28792Cu;
        goto label_28792c;
    }
    ctx->pc = 0x287924u;
    {
        const bool branch_taken_0x287924 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x287928u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
        if (branch_taken_0x287924) {
            ctx->pc = 0x287F24u;
            goto label_287f24;
        }
    }
    ctx->pc = 0x28792Cu;
label_28792c:
    // 0x28792c: 0x26700040
    ctx->pc = 0x28792cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
label_287930:
    // 0x287930: 0x108023
    ctx->pc = 0x287930u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_287934:
    // 0x287934: 0x200202d
    ctx->pc = 0x287934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287938:
    // 0x287938: 0x240282d
    ctx->pc = 0x287938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28793c:
    // 0x28793c: 0x280302d
    ctx->pc = 0x28793cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287940:
    // 0x287940: 0x3c0700ff
    ctx->pc = 0x287940u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287944:
    // 0x287944: 0x34e7ffff
    ctx->pc = 0x287944u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287948:
    // 0x287948: 0x4600a306
    ctx->pc = 0x287948u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_28794c:
    // 0x28794c: 0x3c08003b
    ctx->pc = 0x28794cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287950:
    // 0x287950: 0xc080510
label_287954:
    if (ctx->pc == 0x287954u) {
        ctx->pc = 0x287954u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956536));
        ctx->pc = 0x287958u;
        goto label_287958;
    }
    ctx->pc = 0x287950u;
    SET_GPR_U32(ctx, 31, 0x287958u);
    ctx->pc = 0x287954u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956536));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287958u; }
    }
    if (ctx->pc != 0x287958u) { return; }
    ctx->pc = 0x287958u;
label_287958:
    // 0x287958: 0x2559021
    ctx->pc = 0x287958u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_28795c:
    // 0x28795c: 0x200202d
    ctx->pc = 0x28795cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287960:
    // 0x287960: 0x240282d
    ctx->pc = 0x287960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287964:
    // 0x287964: 0x280302d
    ctx->pc = 0x287964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287968:
    // 0x287968: 0x3c0700ff
    ctx->pc = 0x287968u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_28796c:
    // 0x28796c: 0x34e7ffff
    ctx->pc = 0x28796cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287970:
    // 0x287970: 0x4600a306
    ctx->pc = 0x287970u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287974:
    // 0x287974: 0x3c08003b
    ctx->pc = 0x287974u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287978:
    // 0x287978: 0xc080510
label_28797c:
    if (ctx->pc == 0x28797Cu) {
        ctx->pc = 0x28797Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956552));
        ctx->pc = 0x287980u;
        goto label_287980;
    }
    ctx->pc = 0x287978u;
    SET_GPR_U32(ctx, 31, 0x287980u);
    ctx->pc = 0x28797Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956552));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287980u; }
    }
    if (ctx->pc != 0x287980u) { return; }
    ctx->pc = 0x287980u;
label_287980:
    // 0x287980: 0x2559021
    ctx->pc = 0x287980u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287984:
    // 0x287984: 0x200202d
    ctx->pc = 0x287984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287988:
    // 0x287988: 0x240282d
    ctx->pc = 0x287988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28798c:
    // 0x28798c: 0x280302d
    ctx->pc = 0x28798cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287990:
    // 0x287990: 0x3c0700ff
    ctx->pc = 0x287990u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287994:
    // 0x287994: 0x34e7ffff
    ctx->pc = 0x287994u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287998:
    // 0x287998: 0x4600a306
    ctx->pc = 0x287998u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_28799c:
    // 0x28799c: 0x3c08003b
    ctx->pc = 0x28799cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2879a0:
    // 0x2879a0: 0xc080510
label_2879a4:
    if (ctx->pc == 0x2879A4u) {
        ctx->pc = 0x2879A4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956568));
        ctx->pc = 0x2879A8u;
        goto label_2879a8;
    }
    ctx->pc = 0x2879A0u;
    SET_GPR_U32(ctx, 31, 0x2879A8u);
    ctx->pc = 0x2879A4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956568));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2879A8u; }
    }
    if (ctx->pc != 0x2879A8u) { return; }
    ctx->pc = 0x2879A8u;
label_2879a8:
    // 0x2879a8: 0x2559021
    ctx->pc = 0x2879a8u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2879ac:
    // 0x2879ac: 0x2559021
    ctx->pc = 0x2879acu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2879b0:
    // 0x2879b0: 0x200202d
    ctx->pc = 0x2879b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2879b4:
    // 0x2879b4: 0x240282d
    ctx->pc = 0x2879b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2879b8:
    // 0x2879b8: 0x280302d
    ctx->pc = 0x2879b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2879bc:
    // 0x2879bc: 0x3c0700ff
    ctx->pc = 0x2879bcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2879c0:
    // 0x2879c0: 0x34e7ffff
    ctx->pc = 0x2879c0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2879c4:
    // 0x2879c4: 0x4600a306
    ctx->pc = 0x2879c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2879c8:
    // 0x2879c8: 0x3c08003b
    ctx->pc = 0x2879c8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2879cc:
    // 0x2879cc: 0xc080510
label_2879d0:
    if (ctx->pc == 0x2879D0u) {
        ctx->pc = 0x2879D0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956376));
        ctx->pc = 0x2879D4u;
        goto label_2879d4;
    }
    ctx->pc = 0x2879CCu;
    SET_GPR_U32(ctx, 31, 0x2879D4u);
    ctx->pc = 0x2879D0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956376));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2879D4u; }
    }
    if (ctx->pc != 0x2879D4u) { return; }
    ctx->pc = 0x2879D4u;
label_2879d4:
    // 0x2879d4: 0x2559021
    ctx->pc = 0x2879d4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2879d8:
    // 0x2879d8: 0x200202d
    ctx->pc = 0x2879d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2879dc:
    // 0x2879dc: 0x240282d
    ctx->pc = 0x2879dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2879e0:
    // 0x2879e0: 0x280302d
    ctx->pc = 0x2879e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2879e4:
    // 0x2879e4: 0x3c0700ff
    ctx->pc = 0x2879e4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_2879e8:
    // 0x2879e8: 0x34e7ffff
    ctx->pc = 0x2879e8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_2879ec:
    // 0x2879ec: 0x4600a306
    ctx->pc = 0x2879ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2879f0:
    // 0x2879f0: 0x3c08003b
    ctx->pc = 0x2879f0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2879f4:
    // 0x2879f4: 0x100000b2
label_2879f8:
    if (ctx->pc == 0x2879F8u) {
        ctx->pc = 0x2879F8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955960));
        ctx->pc = 0x2879FCu;
        goto label_2879fc;
    }
    ctx->pc = 0x2879F4u;
    {
        const bool branch_taken_0x2879f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2879F8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955960));
        if (branch_taken_0x2879f4) {
            ctx->pc = 0x287CC0u;
            goto label_287cc0;
        }
    }
    ctx->pc = 0x2879FCu;
label_2879fc:
    // 0x2879fc: 0x3c020035
    ctx->pc = 0x2879fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_287a00:
    // 0x287a00: 0x8c52aaa8
    ctx->pc = 0x287a00u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
label_287a04:
    // 0x287a04: 0x8e222ae4
    ctx->pc = 0x287a04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 10980)));
label_287a08:
    // 0x287a08: 0x284203e8
    ctx->pc = 0x287a08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1000));
label_287a0c:
    // 0x287a0c: 0x54400015
label_287a10:
    if (ctx->pc == 0x287A10u) {
        ctx->pc = 0x287A10u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 10980)));
        ctx->pc = 0x287A14u;
        goto label_287a14;
    }
    ctx->pc = 0x287A0Cu;
    {
        const bool branch_taken_0x287a0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x287a0c) {
            ctx->pc = 0x287A10u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 10980)));
            ctx->pc = 0x287A64u;
            goto label_287a64;
        }
    }
    ctx->pc = 0x287A14u;
label_287a14:
    // 0x287a14: 0x26700040
    ctx->pc = 0x287a14u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
label_287a18:
    // 0x287a18: 0x108023
    ctx->pc = 0x287a18u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_287a1c:
    // 0x287a1c: 0x200202d
    ctx->pc = 0x287a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287a20:
    // 0x287a20: 0x240282d
    ctx->pc = 0x287a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287a24:
    // 0x287a24: 0x280302d
    ctx->pc = 0x287a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287a28:
    // 0x287a28: 0x3c0700ff
    ctx->pc = 0x287a28u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287a2c:
    // 0x287a2c: 0x34e7ffff
    ctx->pc = 0x287a2cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287a30:
    // 0x287a30: 0x4600a306
    ctx->pc = 0x287a30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287a34:
    // 0x287a34: 0x3c08003b
    ctx->pc = 0x287a34u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287a38:
    // 0x287a38: 0xc080510
label_287a3c:
    if (ctx->pc == 0x287A3Cu) {
        ctx->pc = 0x287A3Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956584));
        ctx->pc = 0x287A40u;
        goto label_287a40;
    }
    ctx->pc = 0x287A38u;
    SET_GPR_U32(ctx, 31, 0x287A40u);
    ctx->pc = 0x287A3Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956584));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287A40u; }
    }
    if (ctx->pc != 0x287A40u) { return; }
    ctx->pc = 0x287A40u;
label_287a40:
    // 0x287a40: 0x200202d
    ctx->pc = 0x287a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287a44:
    // 0x287a44: 0x2552821
    ctx->pc = 0x287a44u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287a48:
    // 0x287a48: 0x280302d
    ctx->pc = 0x287a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287a4c:
    // 0x287a4c: 0x3c0700ff
    ctx->pc = 0x287a4cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287a50:
    // 0x287a50: 0x34e7ffff
    ctx->pc = 0x287a50u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287a54:
    // 0x287a54: 0x4600a306
    ctx->pc = 0x287a54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287a58:
    // 0x287a58: 0x3c08003b
    ctx->pc = 0x287a58u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287a5c:
    // 0x287a5c: 0x100000b5
label_287a60:
    if (ctx->pc == 0x287A60u) {
        ctx->pc = 0x287A60u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956600));
        ctx->pc = 0x287A64u;
        goto label_287a64;
    }
    ctx->pc = 0x287A5Cu;
    {
        const bool branch_taken_0x287a5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x287A60u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956600));
        if (branch_taken_0x287a5c) {
            ctx->pc = 0x287D34u;
            goto label_287d34;
        }
    }
    ctx->pc = 0x287A64u;
label_287a64:
    // 0x287a64: 0x4400014
label_287a68:
    if (ctx->pc == 0x287A68u) {
        ctx->pc = 0x287A68u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
        ctx->pc = 0x287A6Cu;
        goto label_287a6c;
    }
    ctx->pc = 0x287A64u;
    {
        const bool branch_taken_0x287a64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x287A68u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
        if (branch_taken_0x287a64) {
            ctx->pc = 0x287AB8u;
            goto label_287ab8;
        }
    }
    ctx->pc = 0x287A6Cu;
label_287a6c:
    // 0x287a6c: 0x108023
    ctx->pc = 0x287a6cu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_287a70:
    // 0x287a70: 0x200202d
    ctx->pc = 0x287a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287a74:
    // 0x287a74: 0x240282d
    ctx->pc = 0x287a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287a78:
    // 0x287a78: 0x280302d
    ctx->pc = 0x287a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287a7c:
    // 0x287a7c: 0x3c0700ff
    ctx->pc = 0x287a7cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287a80:
    // 0x287a80: 0x34e7ffff
    ctx->pc = 0x287a80u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287a84:
    // 0x287a84: 0x4600a306
    ctx->pc = 0x287a84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287a88:
    // 0x287a88: 0x3c08003b
    ctx->pc = 0x287a88u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287a8c:
    // 0x287a8c: 0xc080510
label_287a90:
    if (ctx->pc == 0x287A90u) {
        ctx->pc = 0x287A90u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956616));
        ctx->pc = 0x287A94u;
        goto label_287a94;
    }
    ctx->pc = 0x287A8Cu;
    SET_GPR_U32(ctx, 31, 0x287A94u);
    ctx->pc = 0x287A90u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956616));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287A94u; }
    }
    if (ctx->pc != 0x287A94u) { return; }
    ctx->pc = 0x287A94u;
label_287a94:
    // 0x287a94: 0x200202d
    ctx->pc = 0x287a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287a98:
    // 0x287a98: 0x2552821
    ctx->pc = 0x287a98u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287a9c:
    // 0x287a9c: 0x280302d
    ctx->pc = 0x287a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287aa0:
    // 0x287aa0: 0x3c0700ff
    ctx->pc = 0x287aa0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287aa4:
    // 0x287aa4: 0x34e7ffff
    ctx->pc = 0x287aa4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287aa8:
    // 0x287aa8: 0x4600a306
    ctx->pc = 0x287aa8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287aac:
    // 0x287aac: 0x3c08003b
    ctx->pc = 0x287aacu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287ab0:
    // 0x287ab0: 0x100000a0
label_287ab4:
    if (ctx->pc == 0x287AB4u) {
        ctx->pc = 0x287AB4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956632));
        ctx->pc = 0x287AB8u;
        goto label_287ab8;
    }
    ctx->pc = 0x287AB0u;
    {
        const bool branch_taken_0x287ab0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x287AB4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956632));
        if (branch_taken_0x287ab0) {
            ctx->pc = 0x287D34u;
            goto label_287d34;
        }
    }
    ctx->pc = 0x287AB8u;
label_287ab8:
    // 0x287ab8: 0x108023
    ctx->pc = 0x287ab8u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_287abc:
    // 0x287abc: 0x200202d
    ctx->pc = 0x287abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287ac0:
    // 0x287ac0: 0x240282d
    ctx->pc = 0x287ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287ac4:
    // 0x287ac4: 0x280302d
    ctx->pc = 0x287ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287ac8:
    // 0x287ac8: 0x3c0700ff
    ctx->pc = 0x287ac8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287acc:
    // 0x287acc: 0x34e7ffff
    ctx->pc = 0x287accu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287ad0:
    // 0x287ad0: 0x4600a306
    ctx->pc = 0x287ad0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287ad4:
    // 0x287ad4: 0x3c08003b
    ctx->pc = 0x287ad4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287ad8:
    // 0x287ad8: 0xc080510
label_287adc:
    if (ctx->pc == 0x287ADCu) {
        ctx->pc = 0x287ADCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956512));
        ctx->pc = 0x287AE0u;
        goto label_287ae0;
    }
    ctx->pc = 0x287AD8u;
    SET_GPR_U32(ctx, 31, 0x287AE0u);
    ctx->pc = 0x287ADCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956512));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287AE0u; }
    }
    if (ctx->pc != 0x287AE0u) { return; }
    ctx->pc = 0x287AE0u;
label_287ae0:
    // 0x287ae0: 0x2559021
    ctx->pc = 0x287ae0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287ae4:
    // 0x287ae4: 0x200202d
    ctx->pc = 0x287ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287ae8:
    // 0x287ae8: 0x240282d
    ctx->pc = 0x287ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287aec:
    // 0x287aec: 0x280302d
    ctx->pc = 0x287aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287af0:
    // 0x287af0: 0x3c0700ff
    ctx->pc = 0x287af0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287af4:
    // 0x287af4: 0x34e7ffff
    ctx->pc = 0x287af4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287af8:
    // 0x287af8: 0x4600a306
    ctx->pc = 0x287af8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287afc:
    // 0x287afc: 0x3c08003b
    ctx->pc = 0x287afcu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287b00:
    // 0x287b00: 0xc080510
label_287b04:
    if (ctx->pc == 0x287B04u) {
        ctx->pc = 0x287B04u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956616));
        ctx->pc = 0x287B08u;
        goto label_287b08;
    }
    ctx->pc = 0x287B00u;
    SET_GPR_U32(ctx, 31, 0x287B08u);
    ctx->pc = 0x287B04u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956616));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287B08u; }
    }
    if (ctx->pc != 0x287B08u) { return; }
    ctx->pc = 0x287B08u;
label_287b08:
    // 0x287b08: 0x200202d
    ctx->pc = 0x287b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287b0c:
    // 0x287b0c: 0x2552821
    ctx->pc = 0x287b0cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287b10:
    // 0x287b10: 0x280302d
    ctx->pc = 0x287b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287b14:
    // 0x287b14: 0x3c0700ff
    ctx->pc = 0x287b14u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287b18:
    // 0x287b18: 0x34e7ffff
    ctx->pc = 0x287b18u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287b1c:
    // 0x287b1c: 0x4600a306
    ctx->pc = 0x287b1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287b20:
    // 0x287b20: 0x3c08003b
    ctx->pc = 0x287b20u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287b24:
    // 0x287b24: 0x10000083
label_287b28:
    if (ctx->pc == 0x287B28u) {
        ctx->pc = 0x287B28u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956448));
        ctx->pc = 0x287B2Cu;
        goto label_287b2c;
    }
    ctx->pc = 0x287B24u;
    {
        const bool branch_taken_0x287b24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x287B28u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956448));
        if (branch_taken_0x287b24) {
            ctx->pc = 0x287D34u;
            goto label_287d34;
        }
    }
    ctx->pc = 0x287B2Cu;
label_287b2c:
    // 0x287b2c: 0x38a2000e
    ctx->pc = 0x287b2cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 14));
label_287b30:
    // 0x287b30: 0x2c430001
    ctx->pc = 0x287b30u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 1));
label_287b34:
    // 0x287b34: 0x8e222ae4
    ctx->pc = 0x287b34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 10980)));
label_287b38:
    // 0x287b38: 0x14400024
label_287b3c:
    if (ctx->pc == 0x287B3Cu) {
        ctx->pc = 0x287B40u;
        goto label_287b40;
    }
    ctx->pc = 0x287B38u;
    {
        const bool branch_taken_0x287b38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x287b38) {
            ctx->pc = 0x287BCCu;
            goto label_287bcc;
        }
    }
    ctx->pc = 0x287B40u;
label_287b40:
    // 0x287b40: 0x3c020035
    ctx->pc = 0x287b40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_287b44:
    // 0x287b44: 0x10600025
label_287b48:
    if (ctx->pc == 0x287B48u) {
        ctx->pc = 0x287B48u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
        ctx->pc = 0x287B4Cu;
        goto label_287b4c;
    }
    ctx->pc = 0x287B44u;
    {
        const bool branch_taken_0x287b44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x287B48u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
        if (branch_taken_0x287b44) {
            ctx->pc = 0x287BDCu;
            goto label_287bdc;
        }
    }
    ctx->pc = 0x287B4Cu;
label_287b4c:
    // 0x287b4c: 0x26700040
    ctx->pc = 0x287b4cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
label_287b50:
    // 0x287b50: 0x108023
    ctx->pc = 0x287b50u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_287b54:
    // 0x287b54: 0x200202d
    ctx->pc = 0x287b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287b58:
    // 0x287b58: 0x240282d
    ctx->pc = 0x287b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287b5c:
    // 0x287b5c: 0x280302d
    ctx->pc = 0x287b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287b60:
    // 0x287b60: 0x3c0700ff
    ctx->pc = 0x287b60u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287b64:
    // 0x287b64: 0x34e7ffff
    ctx->pc = 0x287b64u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287b68:
    // 0x287b68: 0x4600a306
    ctx->pc = 0x287b68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287b6c:
    // 0x287b6c: 0x3c08003b
    ctx->pc = 0x287b6cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287b70:
    // 0x287b70: 0xc080510
label_287b74:
    if (ctx->pc == 0x287B74u) {
        ctx->pc = 0x287B74u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956648));
        ctx->pc = 0x287B78u;
        goto label_287b78;
    }
    ctx->pc = 0x287B70u;
    SET_GPR_U32(ctx, 31, 0x287B78u);
    ctx->pc = 0x287B74u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956648));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287B78u; }
    }
    if (ctx->pc != 0x287B78u) { return; }
    ctx->pc = 0x287B78u;
label_287b78:
    // 0x287b78: 0x2559021
    ctx->pc = 0x287b78u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287b7c:
    // 0x287b7c: 0x200202d
    ctx->pc = 0x287b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287b80:
    // 0x287b80: 0x240282d
    ctx->pc = 0x287b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287b84:
    // 0x287b84: 0x280302d
    ctx->pc = 0x287b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287b88:
    // 0x287b88: 0x3c0700ff
    ctx->pc = 0x287b88u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287b8c:
    // 0x287b8c: 0x34e7ffff
    ctx->pc = 0x287b8cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287b90:
    // 0x287b90: 0x4600a306
    ctx->pc = 0x287b90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287b94:
    // 0x287b94: 0x3c08003b
    ctx->pc = 0x287b94u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287b98:
    // 0x287b98: 0xc080510
label_287b9c:
    if (ctx->pc == 0x287B9Cu) {
        ctx->pc = 0x287B9Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956664));
        ctx->pc = 0x287BA0u;
        goto label_287ba0;
    }
    ctx->pc = 0x287B98u;
    SET_GPR_U32(ctx, 31, 0x287BA0u);
    ctx->pc = 0x287B9Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956664));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287BA0u; }
    }
    if (ctx->pc != 0x287BA0u) { return; }
    ctx->pc = 0x287BA0u;
label_287ba0:
    // 0x287ba0: 0x200202d
    ctx->pc = 0x287ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287ba4:
    // 0x287ba4: 0x2552821
    ctx->pc = 0x287ba4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287ba8:
    // 0x287ba8: 0x280302d
    ctx->pc = 0x287ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287bac:
    // 0x287bac: 0x3c0700ff
    ctx->pc = 0x287bacu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287bb0:
    // 0x287bb0: 0x34e7ffff
    ctx->pc = 0x287bb0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287bb4:
    // 0x287bb4: 0x4600a306
    ctx->pc = 0x287bb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287bb8:
    // 0x287bb8: 0x3c08003b
    ctx->pc = 0x287bb8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287bbc:
    // 0x287bbc: 0xc080510
label_287bc0:
    if (ctx->pc == 0x287BC0u) {
        ctx->pc = 0x287BC0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956680));
        ctx->pc = 0x287BC4u;
        goto label_287bc4;
    }
    ctx->pc = 0x287BBCu;
    SET_GPR_U32(ctx, 31, 0x287BC4u);
    ctx->pc = 0x287BC0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956680));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287BC4u; }
    }
    if (ctx->pc != 0x287BC4u) { return; }
    ctx->pc = 0x287BC4u;
label_287bc4:
    // 0x287bc4: 0x100000d7
label_287bc8:
    if (ctx->pc == 0x287BC8u) {
        ctx->pc = 0x287BC8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
        ctx->pc = 0x287BCCu;
        goto label_287bcc;
    }
    ctx->pc = 0x287BC4u;
    {
        const bool branch_taken_0x287bc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x287BC8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
        if (branch_taken_0x287bc4) {
            ctx->pc = 0x287F24u;
            goto label_287f24;
        }
    }
    ctx->pc = 0x287BCCu;
label_287bcc:
    // 0x287bcc: 0x440005d
label_287bd0:
    if (ctx->pc == 0x287BD0u) {
        ctx->pc = 0x287BD0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
        ctx->pc = 0x287BD4u;
        goto label_287bd4;
    }
    ctx->pc = 0x287BCCu;
    {
        const bool branch_taken_0x287bcc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x287BD0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
        if (branch_taken_0x287bcc) {
            ctx->pc = 0x287D44u;
            goto label_287d44;
        }
    }
    ctx->pc = 0x287BD4u;
label_287bd4:
    // 0x287bd4: 0x1040005c
label_287bd8:
    if (ctx->pc == 0x287BD8u) {
        ctx->pc = 0x287BD8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x287BDCu;
        goto label_287bdc;
    }
    ctx->pc = 0x287BD4u;
    {
        const bool branch_taken_0x287bd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x287BD8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x287bd4) {
            ctx->pc = 0x287D48u;
            goto label_287d48;
        }
    }
    ctx->pc = 0x287BDCu;
label_287bdc:
    // 0x287bdc: 0x8c52aaa8
    ctx->pc = 0x287bdcu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
label_287be0:
    // 0x287be0: 0x26620040
    ctx->pc = 0x287be0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 64));
label_287be4:
    // 0x287be4: 0x10600004
label_287be8:
    if (ctx->pc == 0x287BE8u) {
        ctx->pc = 0x287BE8u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = 0x287BECu;
        goto label_287bec;
    }
    ctx->pc = 0x287BE4u;
    {
        const bool branch_taken_0x287be4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x287BE8u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        if (branch_taken_0x287be4) {
            ctx->pc = 0x287BF8u;
            goto label_287bf8;
        }
    }
    ctx->pc = 0x287BECu;
label_287bec:
    // 0x287bec: 0x3c02003b
    ctx->pc = 0x287becu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_287bf0:
    // 0x287bf0: 0x10000003
label_287bf4:
    if (ctx->pc == 0x287BF4u) {
        ctx->pc = 0x287BF4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294956688));
        ctx->pc = 0x287BF8u;
        goto label_287bf8;
    }
    ctx->pc = 0x287BF0u;
    {
        const bool branch_taken_0x287bf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x287BF4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294956688));
        if (branch_taken_0x287bf0) {
            ctx->pc = 0x287C00u;
            goto label_287c00;
        }
    }
    ctx->pc = 0x287BF8u;
label_287bf8:
    // 0x287bf8: 0x3c02003b
    ctx->pc = 0x287bf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_287bfc:
    // 0x287bfc: 0x2448d6a0
    ctx->pc = 0x287bfcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294956704));
label_287c00:
    // 0x287c00: 0x240282d
    ctx->pc = 0x287c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287c04:
    // 0x287c04: 0x280302d
    ctx->pc = 0x287c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287c08:
    // 0x287c08: 0x3c0700ff
    ctx->pc = 0x287c08u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287c0c:
    // 0x287c0c: 0x34e7ffff
    ctx->pc = 0x287c0cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287c10:
    // 0x287c10: 0xc080510
label_287c14:
    if (ctx->pc == 0x287C14u) {
        ctx->pc = 0x287C14u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x287C18u;
        goto label_287c18;
    }
    ctx->pc = 0x287C10u;
    SET_GPR_U32(ctx, 31, 0x287C18u);
    ctx->pc = 0x287C14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287C18u; }
    }
    if (ctx->pc != 0x287C18u) { return; }
    ctx->pc = 0x287C18u;
label_287c18:
    // 0x287c18: 0x2559021
    ctx->pc = 0x287c18u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287c1c:
    // 0x287c1c: 0x26700040
    ctx->pc = 0x287c1cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
label_287c20:
    // 0x287c20: 0x108023
    ctx->pc = 0x287c20u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_287c24:
    // 0x287c24: 0x200202d
    ctx->pc = 0x287c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287c28:
    // 0x287c28: 0x240282d
    ctx->pc = 0x287c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287c2c:
    // 0x287c2c: 0x280302d
    ctx->pc = 0x287c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287c30:
    // 0x287c30: 0x3c0700ff
    ctx->pc = 0x287c30u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287c34:
    // 0x287c34: 0x34e7ffff
    ctx->pc = 0x287c34u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287c38:
    // 0x287c38: 0x4600a306
    ctx->pc = 0x287c38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287c3c:
    // 0x287c3c: 0x3c11003b
    ctx->pc = 0x287c3cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
label_287c40:
    // 0x287c40: 0xc080510
label_287c44:
    if (ctx->pc == 0x287C44u) {
        ctx->pc = 0x287C44u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 4294955960));
        ctx->pc = 0x287C48u;
        goto label_287c48;
    }
    ctx->pc = 0x287C40u;
    SET_GPR_U32(ctx, 31, 0x287C48u);
    ctx->pc = 0x287C44u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 4294955960));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287C48u; }
    }
    if (ctx->pc != 0x287C48u) { return; }
    ctx->pc = 0x287C48u;
label_287c48:
    // 0x287c48: 0x2559021
    ctx->pc = 0x287c48u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287c4c:
    // 0x287c4c: 0x200202d
    ctx->pc = 0x287c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287c50:
    // 0x287c50: 0x240282d
    ctx->pc = 0x287c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287c54:
    // 0x287c54: 0x280302d
    ctx->pc = 0x287c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287c58:
    // 0x287c58: 0x3c0700ff
    ctx->pc = 0x287c58u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287c5c:
    // 0x287c5c: 0x34e7ffff
    ctx->pc = 0x287c5cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287c60:
    // 0x287c60: 0x4600a306
    ctx->pc = 0x287c60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287c64:
    // 0x287c64: 0x3c08003b
    ctx->pc = 0x287c64u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287c68:
    // 0x287c68: 0xc080510
label_287c6c:
    if (ctx->pc == 0x287C6Cu) {
        ctx->pc = 0x287C6Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956720));
        ctx->pc = 0x287C70u;
        goto label_287c70;
    }
    ctx->pc = 0x287C68u;
    SET_GPR_U32(ctx, 31, 0x287C70u);
    ctx->pc = 0x287C6Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956720));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287C70u; }
    }
    if (ctx->pc != 0x287C70u) { return; }
    ctx->pc = 0x287C70u;
label_287c70:
    // 0x287c70: 0x2559021
    ctx->pc = 0x287c70u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287c74:
    // 0x287c74: 0x2559021
    ctx->pc = 0x287c74u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287c78:
    // 0x287c78: 0x200202d
    ctx->pc = 0x287c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287c7c:
    // 0x287c7c: 0x240282d
    ctx->pc = 0x287c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287c80:
    // 0x287c80: 0x280302d
    ctx->pc = 0x287c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287c84:
    // 0x287c84: 0x3c0700ff
    ctx->pc = 0x287c84u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287c88:
    // 0x287c88: 0x34e7ffff
    ctx->pc = 0x287c88u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287c8c:
    // 0x287c8c: 0x4600a306
    ctx->pc = 0x287c8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287c90:
    // 0x287c90: 0x3c08003b
    ctx->pc = 0x287c90u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287c94:
    // 0x287c94: 0xc080510
label_287c98:
    if (ctx->pc == 0x287C98u) {
        ctx->pc = 0x287C98u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956376));
        ctx->pc = 0x287C9Cu;
        goto label_287c9c;
    }
    ctx->pc = 0x287C94u;
    SET_GPR_U32(ctx, 31, 0x287C9Cu);
    ctx->pc = 0x287C98u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956376));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287C9Cu; }
    }
    if (ctx->pc != 0x287C9Cu) { return; }
    ctx->pc = 0x287C9Cu;
label_287c9c:
    // 0x287c9c: 0x2559021
    ctx->pc = 0x287c9cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287ca0:
    // 0x287ca0: 0x200202d
    ctx->pc = 0x287ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287ca4:
    // 0x287ca4: 0x240282d
    ctx->pc = 0x287ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287ca8:
    // 0x287ca8: 0x280302d
    ctx->pc = 0x287ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287cac:
    // 0x287cac: 0x3c0700ff
    ctx->pc = 0x287cacu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287cb0:
    // 0x287cb0: 0x34e7ffff
    ctx->pc = 0x287cb0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287cb4:
    // 0x287cb4: 0x4600a306
    ctx->pc = 0x287cb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287cb8:
    // 0x287cb8: 0x3c08003b
    ctx->pc = 0x287cb8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287cbc:
    // 0x287cbc: 0x2508d3b8
    ctx->pc = 0x287cbcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955960));
label_287cc0:
    // 0x287cc0: 0xc080510
label_287cc4:
    if (ctx->pc == 0x287CC4u) {
        ctx->pc = 0x287CC4u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->pc = 0x287CC8u;
        goto label_287cc8;
    }
    ctx->pc = 0x287CC0u;
    SET_GPR_U32(ctx, 31, 0x287CC8u);
    ctx->pc = 0x287CC4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287CC8u; }
    }
    if (ctx->pc != 0x287CC8u) { return; }
    ctx->pc = 0x287CC8u;
label_287cc8:
    // 0x287cc8: 0x200202d
    ctx->pc = 0x287cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287ccc:
    // 0x287ccc: 0x240282d
    ctx->pc = 0x287cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287cd0:
    // 0x287cd0: 0x280302d
    ctx->pc = 0x287cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287cd4:
    // 0x287cd4: 0x3c0700ff
    ctx->pc = 0x287cd4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287cd8:
    // 0x287cd8: 0x34e7ffff
    ctx->pc = 0x287cd8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287cdc:
    // 0x287cdc: 0x4600a306
    ctx->pc = 0x287cdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287ce0:
    // 0x287ce0: 0x3c08003b
    ctx->pc = 0x287ce0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287ce4:
    // 0x287ce4: 0xc080510
label_287ce8:
    if (ctx->pc == 0x287CE8u) {
        ctx->pc = 0x287CE8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956192));
        ctx->pc = 0x287CECu;
        goto label_287cec;
    }
    ctx->pc = 0x287CE4u;
    SET_GPR_U32(ctx, 31, 0x287CECu);
    ctx->pc = 0x287CE8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956192));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287CECu; }
    }
    if (ctx->pc != 0x287CECu) { return; }
    ctx->pc = 0x287CECu;
label_287cec:
    // 0x287cec: 0x2559021
    ctx->pc = 0x287cecu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287cf0:
    // 0x287cf0: 0x200202d
    ctx->pc = 0x287cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287cf4:
    // 0x287cf4: 0x240282d
    ctx->pc = 0x287cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287cf8:
    // 0x287cf8: 0x280302d
    ctx->pc = 0x287cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287cfc:
    // 0x287cfc: 0x3c0700ff
    ctx->pc = 0x287cfcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287d00:
    // 0x287d00: 0x34e7ffff
    ctx->pc = 0x287d00u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287d04:
    // 0x287d04: 0x4600a306
    ctx->pc = 0x287d04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287d08:
    // 0x287d08: 0x3c08003b
    ctx->pc = 0x287d08u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287d0c:
    // 0x287d0c: 0xc080510
label_287d10:
    if (ctx->pc == 0x287D10u) {
        ctx->pc = 0x287D10u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956392));
        ctx->pc = 0x287D14u;
        goto label_287d14;
    }
    ctx->pc = 0x287D0Cu;
    SET_GPR_U32(ctx, 31, 0x287D14u);
    ctx->pc = 0x287D10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956392));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287D14u; }
    }
    if (ctx->pc != 0x287D14u) { return; }
    ctx->pc = 0x287D14u;
label_287d14:
    // 0x287d14: 0x200202d
    ctx->pc = 0x287d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287d18:
    // 0x287d18: 0x2552821
    ctx->pc = 0x287d18u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287d1c:
    // 0x287d1c: 0x280302d
    ctx->pc = 0x287d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287d20:
    // 0x287d20: 0x3c0700ff
    ctx->pc = 0x287d20u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287d24:
    // 0x287d24: 0x34e7ffff
    ctx->pc = 0x287d24u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287d28:
    // 0x287d28: 0x4600a306
    ctx->pc = 0x287d28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287d2c:
    // 0x287d2c: 0x3c08003b
    ctx->pc = 0x287d2cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287d30:
    // 0x287d30: 0x2508d578
    ctx->pc = 0x287d30u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956408));
label_287d34:
    // 0x287d34: 0xc080510
label_287d38:
    if (ctx->pc == 0x287D38u) {
        ctx->pc = 0x287D3Cu;
        goto label_287d3c;
    }
    ctx->pc = 0x287D34u;
    SET_GPR_U32(ctx, 31, 0x287D3Cu);
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287D3Cu; }
    }
    if (ctx->pc != 0x287D3Cu) { return; }
    ctx->pc = 0x287D3Cu;
label_287d3c:
    // 0x287d3c: 0x10000078
label_287d40:
    if (ctx->pc == 0x287D40u) {
        ctx->pc = 0x287D40u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x287D44u;
        goto label_287d44;
    }
    ctx->pc = 0x287D3Cu;
    {
        const bool branch_taken_0x287d3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x287D40u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        if (branch_taken_0x287d3c) {
            ctx->pc = 0x287F20u;
            goto label_287f20;
        }
    }
    ctx->pc = 0x287D44u;
label_287d44:
    // 0x287d44: 0x3c020035
    ctx->pc = 0x287d44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_287d48:
    // 0x287d48: 0x8c52aaa8
    ctx->pc = 0x287d48u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
label_287d4c:
    // 0x287d4c: 0x8e222ae4
    ctx->pc = 0x287d4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 10980)));
label_287d50:
    // 0x287d50: 0x4400018
label_287d54:
    if (ctx->pc == 0x287D54u) {
        ctx->pc = 0x287D54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 64));
        ctx->pc = 0x287D58u;
        goto label_287d58;
    }
    ctx->pc = 0x287D50u;
    {
        const bool branch_taken_0x287d50 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x287D54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 64));
        if (branch_taken_0x287d50) {
            ctx->pc = 0x287DB4u;
            goto label_287db4;
        }
    }
    ctx->pc = 0x287D58u;
label_287d58:
    // 0x287d58: 0x10600004
label_287d5c:
    if (ctx->pc == 0x287D5Cu) {
        ctx->pc = 0x287D5Cu;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = 0x287D60u;
        goto label_287d60;
    }
    ctx->pc = 0x287D58u;
    {
        const bool branch_taken_0x287d58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x287D5Cu;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        if (branch_taken_0x287d58) {
            ctx->pc = 0x287D6Cu;
            goto label_287d6c;
        }
    }
    ctx->pc = 0x287D60u;
label_287d60:
    // 0x287d60: 0x3c02003b
    ctx->pc = 0x287d60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_287d64:
    // 0x287d64: 0x10000003
label_287d68:
    if (ctx->pc == 0x287D68u) {
        ctx->pc = 0x287D68u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294955776));
        ctx->pc = 0x287D6Cu;
        goto label_287d6c;
    }
    ctx->pc = 0x287D64u;
    {
        const bool branch_taken_0x287d64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x287D68u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294955776));
        if (branch_taken_0x287d64) {
            ctx->pc = 0x287D74u;
            goto label_287d74;
        }
    }
    ctx->pc = 0x287D6Cu;
label_287d6c:
    // 0x287d6c: 0x3c02003b
    ctx->pc = 0x287d6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_287d70:
    // 0x287d70: 0x2448d2d8
    ctx->pc = 0x287d70u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294955736));
label_287d74:
    // 0x287d74: 0x240282d
    ctx->pc = 0x287d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287d78:
    // 0x287d78: 0x280302d
    ctx->pc = 0x287d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287d7c:
    // 0x287d7c: 0x3c0700ff
    ctx->pc = 0x287d7cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287d80:
    // 0x287d80: 0x34e7ffff
    ctx->pc = 0x287d80u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287d84:
    // 0x287d84: 0xc080510
label_287d88:
    if (ctx->pc == 0x287D88u) {
        ctx->pc = 0x287D88u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x287D8Cu;
        goto label_287d8c;
    }
    ctx->pc = 0x287D84u;
    SET_GPR_U32(ctx, 31, 0x287D8Cu);
    ctx->pc = 0x287D88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287D8Cu; }
    }
    if (ctx->pc != 0x287D8Cu) { return; }
    ctx->pc = 0x287D8Cu;
label_287d8c:
    // 0x287d8c: 0x26640040
    ctx->pc = 0x287d8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 64));
label_287d90:
    // 0x287d90: 0x42023
    ctx->pc = 0x287d90u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_287d94:
    // 0x287d94: 0x2552821
    ctx->pc = 0x287d94u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287d98:
    // 0x287d98: 0x280302d
    ctx->pc = 0x287d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287d9c:
    // 0x287d9c: 0x3c0700ff
    ctx->pc = 0x287d9cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287da0:
    // 0x287da0: 0x34e7ffff
    ctx->pc = 0x287da0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287da4:
    // 0x287da4: 0x4600a306
    ctx->pc = 0x287da4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287da8:
    // 0x287da8: 0x3c08003b
    ctx->pc = 0x287da8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287dac:
    // 0x287dac: 0x1000ffe1
label_287db0:
    if (ctx->pc == 0x287DB0u) {
        ctx->pc = 0x287DB0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956736));
        ctx->pc = 0x287DB4u;
        goto label_287db4;
    }
    ctx->pc = 0x287DACu;
    {
        const bool branch_taken_0x287dac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x287DB0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956736));
        if (branch_taken_0x287dac) {
            ctx->pc = 0x287D34u;
            goto label_287d34;
        }
    }
    ctx->pc = 0x287DB4u;
label_287db4:
    // 0x287db4: 0x10600004
label_287db8:
    if (ctx->pc == 0x287DB8u) {
        ctx->pc = 0x287DB8u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = 0x287DBCu;
        goto label_287dbc;
    }
    ctx->pc = 0x287DB4u;
    {
        const bool branch_taken_0x287db4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x287DB8u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        if (branch_taken_0x287db4) {
            ctx->pc = 0x287DC8u;
            goto label_287dc8;
        }
    }
    ctx->pc = 0x287DBCu;
label_287dbc:
    // 0x287dbc: 0x3c02003b
    ctx->pc = 0x287dbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_287dc0:
    // 0x287dc0: 0x10000003
label_287dc4:
    if (ctx->pc == 0x287DC4u) {
        ctx->pc = 0x287DC4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294955776));
        ctx->pc = 0x287DC8u;
        goto label_287dc8;
    }
    ctx->pc = 0x287DC0u;
    {
        const bool branch_taken_0x287dc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x287DC4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294955776));
        if (branch_taken_0x287dc0) {
            ctx->pc = 0x287DD0u;
            goto label_287dd0;
        }
    }
    ctx->pc = 0x287DC8u;
label_287dc8:
    // 0x287dc8: 0x3c02003b
    ctx->pc = 0x287dc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_287dcc:
    // 0x287dcc: 0x2448d2d8
    ctx->pc = 0x287dccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294955736));
label_287dd0:
    // 0x287dd0: 0x240282d
    ctx->pc = 0x287dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287dd4:
    // 0x287dd4: 0x280302d
    ctx->pc = 0x287dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287dd8:
    // 0x287dd8: 0x3c0700ff
    ctx->pc = 0x287dd8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287ddc:
    // 0x287ddc: 0x34e7ffff
    ctx->pc = 0x287ddcu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287de0:
    // 0x287de0: 0xc080510
label_287de4:
    if (ctx->pc == 0x287DE4u) {
        ctx->pc = 0x287DE4u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x287DE8u;
        goto label_287de8;
    }
    ctx->pc = 0x287DE0u;
    SET_GPR_U32(ctx, 31, 0x287DE8u);
    ctx->pc = 0x287DE4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287DE8u; }
    }
    if (ctx->pc != 0x287DE8u) { return; }
    ctx->pc = 0x287DE8u;
label_287de8:
    // 0x287de8: 0x26640040
    ctx->pc = 0x287de8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 64));
label_287dec:
    // 0x287dec: 0x42023
    ctx->pc = 0x287decu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_287df0:
    // 0x287df0: 0x2552821
    ctx->pc = 0x287df0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287df4:
    // 0x287df4: 0x280302d
    ctx->pc = 0x287df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287df8:
    // 0x287df8: 0x3c0700ff
    ctx->pc = 0x287df8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287dfc:
    // 0x287dfc: 0x34e7ffff
    ctx->pc = 0x287dfcu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287e00:
    // 0x287e00: 0x4600a306
    ctx->pc = 0x287e00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287e04:
    // 0x287e04: 0x3c08003b
    ctx->pc = 0x287e04u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287e08:
    // 0x287e08: 0xc080510
label_287e0c:
    if (ctx->pc == 0x287E0Cu) {
        ctx->pc = 0x287E0Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956448));
        ctx->pc = 0x287E10u;
        goto label_287e10;
    }
    ctx->pc = 0x287E08u;
    SET_GPR_U32(ctx, 31, 0x287E10u);
    ctx->pc = 0x287E0Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956448));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287E10u; }
    }
    if (ctx->pc != 0x287E10u) { return; }
    ctx->pc = 0x287E10u;
label_287e10:
    // 0x287e10: 0x10000043
label_287e14:
    if (ctx->pc == 0x287E14u) {
        ctx->pc = 0x287E14u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x287E18u;
        goto label_287e18;
    }
    ctx->pc = 0x287E10u;
    {
        const bool branch_taken_0x287e10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x287E14u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        if (branch_taken_0x287e10) {
            ctx->pc = 0x287F20u;
            goto label_287f20;
        }
    }
    ctx->pc = 0x287E18u;
label_287e18:
    // 0x287e18: 0x3c020035
    ctx->pc = 0x287e18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_287e1c:
    // 0x287e1c: 0x8c52aaa8
    ctx->pc = 0x287e1cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
label_287e20:
    // 0x287e20: 0x3c020031
    ctx->pc = 0x287e20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_287e24:
    // 0x287e24: 0x8c42f184
    ctx->pc = 0x287e24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_287e28:
    // 0x287e28: 0x10400020
label_287e2c:
    if (ctx->pc == 0x287E2Cu) {
        ctx->pc = 0x287E2Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
        ctx->pc = 0x287E30u;
        goto label_287e30;
    }
    ctx->pc = 0x287E28u;
    {
        const bool branch_taken_0x287e28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x287E2Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 64));
        if (branch_taken_0x287e28) {
            ctx->pc = 0x287EACu;
            goto label_287eac;
        }
    }
    ctx->pc = 0x287E30u;
label_287e30:
    // 0x287e30: 0x108023
    ctx->pc = 0x287e30u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_287e34:
    // 0x287e34: 0x200202d
    ctx->pc = 0x287e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287e38:
    // 0x287e38: 0x240282d
    ctx->pc = 0x287e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287e3c:
    // 0x287e3c: 0x280302d
    ctx->pc = 0x287e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287e40:
    // 0x287e40: 0x3c0700ff
    ctx->pc = 0x287e40u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287e44:
    // 0x287e44: 0x34e7ffff
    ctx->pc = 0x287e44u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287e48:
    // 0x287e48: 0x4600a306
    ctx->pc = 0x287e48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287e4c:
    // 0x287e4c: 0x3c08003b
    ctx->pc = 0x287e4cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287e50:
    // 0x287e50: 0xc080510
label_287e54:
    if (ctx->pc == 0x287E54u) {
        ctx->pc = 0x287E54u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956752));
        ctx->pc = 0x287E58u;
        goto label_287e58;
    }
    ctx->pc = 0x287E50u;
    SET_GPR_U32(ctx, 31, 0x287E58u);
    ctx->pc = 0x287E54u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956752));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287E58u; }
    }
    if (ctx->pc != 0x287E58u) { return; }
    ctx->pc = 0x287E58u;
label_287e58:
    // 0x287e58: 0x2559021
    ctx->pc = 0x287e58u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287e5c:
    // 0x287e5c: 0x200202d
    ctx->pc = 0x287e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287e60:
    // 0x287e60: 0x240282d
    ctx->pc = 0x287e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287e64:
    // 0x287e64: 0x280302d
    ctx->pc = 0x287e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287e68:
    // 0x287e68: 0x3c0700ff
    ctx->pc = 0x287e68u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287e6c:
    // 0x287e6c: 0x34e7ffff
    ctx->pc = 0x287e6cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287e70:
    // 0x287e70: 0x4600a306
    ctx->pc = 0x287e70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287e74:
    // 0x287e74: 0x3c08003b
    ctx->pc = 0x287e74u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287e78:
    // 0x287e78: 0xc080510
label_287e7c:
    if (ctx->pc == 0x287E7Cu) {
        ctx->pc = 0x287E7Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956768));
        ctx->pc = 0x287E80u;
        goto label_287e80;
    }
    ctx->pc = 0x287E78u;
    SET_GPR_U32(ctx, 31, 0x287E80u);
    ctx->pc = 0x287E7Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956768));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287E80u; }
    }
    if (ctx->pc != 0x287E80u) { return; }
    ctx->pc = 0x287E80u;
label_287e80:
    // 0x287e80: 0x200202d
    ctx->pc = 0x287e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287e84:
    // 0x287e84: 0x2552821
    ctx->pc = 0x287e84u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287e88:
    // 0x287e88: 0x280302d
    ctx->pc = 0x287e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287e8c:
    // 0x287e8c: 0x3c0700ff
    ctx->pc = 0x287e8cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287e90:
    // 0x287e90: 0x34e7ffff
    ctx->pc = 0x287e90u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287e94:
    // 0x287e94: 0x4600a306
    ctx->pc = 0x287e94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287e98:
    // 0x287e98: 0x3c08003b
    ctx->pc = 0x287e98u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287e9c:
    // 0x287e9c: 0xc080510
label_287ea0:
    if (ctx->pc == 0x287EA0u) {
        ctx->pc = 0x287EA0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956784));
        ctx->pc = 0x287EA4u;
        goto label_287ea4;
    }
    ctx->pc = 0x287E9Cu;
    SET_GPR_U32(ctx, 31, 0x287EA4u);
    ctx->pc = 0x287EA0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956784));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287EA4u; }
    }
    if (ctx->pc != 0x287EA4u) { return; }
    ctx->pc = 0x287EA4u;
label_287ea4:
    // 0x287ea4: 0x1000001f
label_287ea8:
    if (ctx->pc == 0x287EA8u) {
        ctx->pc = 0x287EA8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
        ctx->pc = 0x287EACu;
        goto label_287eac;
    }
    ctx->pc = 0x287EA4u;
    {
        const bool branch_taken_0x287ea4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x287EA8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
        if (branch_taken_0x287ea4) {
            ctx->pc = 0x287F24u;
            goto label_287f24;
        }
    }
    ctx->pc = 0x287EACu;
label_287eac:
    // 0x287eac: 0x108023
    ctx->pc = 0x287eacu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_287eb0:
    // 0x287eb0: 0x200202d
    ctx->pc = 0x287eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287eb4:
    // 0x287eb4: 0x240282d
    ctx->pc = 0x287eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287eb8:
    // 0x287eb8: 0x280302d
    ctx->pc = 0x287eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287ebc:
    // 0x287ebc: 0x3c0700ff
    ctx->pc = 0x287ebcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287ec0:
    // 0x287ec0: 0x34e7ffff
    ctx->pc = 0x287ec0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287ec4:
    // 0x287ec4: 0x4600a306
    ctx->pc = 0x287ec4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287ec8:
    // 0x287ec8: 0x3c08003b
    ctx->pc = 0x287ec8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287ecc:
    // 0x287ecc: 0xc080510
label_287ed0:
    if (ctx->pc == 0x287ED0u) {
        ctx->pc = 0x287ED0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956120));
        ctx->pc = 0x287ED4u;
        goto label_287ed4;
    }
    ctx->pc = 0x287ECCu;
    SET_GPR_U32(ctx, 31, 0x287ED4u);
    ctx->pc = 0x287ED0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956120));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287ED4u; }
    }
    if (ctx->pc != 0x287ED4u) { return; }
    ctx->pc = 0x287ED4u;
label_287ed4:
    // 0x287ed4: 0x2559021
    ctx->pc = 0x287ed4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287ed8:
    // 0x287ed8: 0x200202d
    ctx->pc = 0x287ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287edc:
    // 0x287edc: 0x240282d
    ctx->pc = 0x287edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287ee0:
    // 0x287ee0: 0x280302d
    ctx->pc = 0x287ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287ee4:
    // 0x287ee4: 0x3c0700ff
    ctx->pc = 0x287ee4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287ee8:
    // 0x287ee8: 0x34e7ffff
    ctx->pc = 0x287ee8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287eec:
    // 0x287eec: 0x4600a306
    ctx->pc = 0x287eecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287ef0:
    // 0x287ef0: 0x3c08003b
    ctx->pc = 0x287ef0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287ef4:
    // 0x287ef4: 0xc080510
label_287ef8:
    if (ctx->pc == 0x287EF8u) {
        ctx->pc = 0x287EF8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956136));
        ctx->pc = 0x287EFCu;
        goto label_287efc;
    }
    ctx->pc = 0x287EF4u;
    SET_GPR_U32(ctx, 31, 0x287EFCu);
    ctx->pc = 0x287EF8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956136));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287EFCu; }
    }
    if (ctx->pc != 0x287EFCu) { return; }
    ctx->pc = 0x287EFCu;
label_287efc:
    // 0x287efc: 0x200202d
    ctx->pc = 0x287efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287f00:
    // 0x287f00: 0x2552821
    ctx->pc = 0x287f00u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287f04:
    // 0x287f04: 0x280302d
    ctx->pc = 0x287f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287f08:
    // 0x287f08: 0x3c0700ff
    ctx->pc = 0x287f08u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287f0c:
    // 0x287f0c: 0x34e7ffff
    ctx->pc = 0x287f0cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287f10:
    // 0x287f10: 0x4600a306
    ctx->pc = 0x287f10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287f14:
    // 0x287f14: 0x3c08003b
    ctx->pc = 0x287f14u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287f18:
    // 0x287f18: 0xc080510
label_287f1c:
    if (ctx->pc == 0x287F1Cu) {
        ctx->pc = 0x287F1Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956800));
        ctx->pc = 0x287F20u;
        goto label_287f20;
    }
    ctx->pc = 0x287F18u;
    SET_GPR_U32(ctx, 31, 0x287F20u);
    ctx->pc = 0x287F1Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956800));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F20u; }
    }
    if (ctx->pc != 0x287F20u) { return; }
    ctx->pc = 0x287F20u;
label_287f20:
    // 0x287f20: 0x241200fc
    ctx->pc = 0x287f20u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 252));
label_287f24:
    // 0x287f24: 0x8fa20020
    ctx->pc = 0x287f24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_287f28:
    // 0x287f28: 0x10400017
label_287f2c:
    if (ctx->pc == 0x287F2Cu) {
        ctx->pc = 0x287F2Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        ctx->pc = 0x287F30u;
        goto label_287f30;
    }
    ctx->pc = 0x287F28u;
    {
        const bool branch_taken_0x287f28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x287F2Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x287f28) {
            ctx->pc = 0x287F88u;
            goto label_287f88;
        }
    }
    ctx->pc = 0x287F30u;
label_287f30:
    // 0x287f30: 0x2463a2f0
    ctx->pc = 0x287f30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943472));
label_287f34:
    // 0x287f34: 0x171080
    ctx->pc = 0x287f34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 2));
label_287f38:
    // 0x287f38: 0x431021
    ctx->pc = 0x287f38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_287f3c:
    // 0x287f3c: 0x8c420000
    ctx->pc = 0x287f3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_287f40:
    // 0x287f40: 0x24530014
    ctx->pc = 0x287f40u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 20));
label_287f44:
    // 0x287f44: 0x3c020038
    ctx->pc = 0x287f44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_287f48:
    // 0x287f48: 0x8c44b154
    ctx->pc = 0x287f48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947156)));
label_287f4c:
    // 0x287f4c: 0x260282d
    ctx->pc = 0x287f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_287f50:
    // 0x287f50: 0x240600fc
    ctx->pc = 0x287f50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 252));
label_287f54:
    // 0x287f54: 0x2c0382d
    ctx->pc = 0x287f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_287f58:
    // 0x287f58: 0xc0b0c6a
label_287f5c:
    if (ctx->pc == 0x287F5Cu) {
        ctx->pc = 0x287F5Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x287F60u;
        goto label_287f60;
    }
    ctx->pc = 0x287F58u;
    SET_GPR_U32(ctx, 31, 0x287F60u);
    ctx->pc = 0x287F5Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F60u; }
    }
    if (ctx->pc != 0x287F60u) { return; }
    ctx->pc = 0x287F60u;
label_287f60:
    // 0x287f60: 0x2762021
    ctx->pc = 0x287f60u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
label_287f64:
    // 0x287f64: 0x24840008
    ctx->pc = 0x287f64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
label_287f68:
    // 0x287f68: 0x24050100
    ctx->pc = 0x287f68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 256));
label_287f6c:
    // 0x287f6c: 0x280302d
    ctx->pc = 0x287f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287f70:
    // 0x287f70: 0x3c0700ff
    ctx->pc = 0x287f70u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287f74:
    // 0x287f74: 0x34e7ffff
    ctx->pc = 0x287f74u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287f78:
    // 0x287f78: 0x4600a306
    ctx->pc = 0x287f78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287f7c:
    // 0x287f7c: 0x3c08003b
    ctx->pc = 0x287f7cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_287f80:
    // 0x287f80: 0xc080510
label_287f84:
    if (ctx->pc == 0x287F84u) {
        ctx->pc = 0x287F84u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956816));
        ctx->pc = 0x287F88u;
        goto label_287f88;
    }
    ctx->pc = 0x287F80u;
    SET_GPR_U32(ctx, 31, 0x287F88u);
    ctx->pc = 0x287F84u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956816));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F88u; }
    }
    if (ctx->pc != 0x287F88u) { return; }
    ctx->pc = 0x287F88u;
label_287f88:
    // 0x287f88: 0x8fa30024
    ctx->pc = 0x287f88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_287f8c:
    // 0x287f8c: 0x1060001e
label_287f90:
    if (ctx->pc == 0x287F90u) {
        ctx->pc = 0x287F90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x287F94u;
        goto label_287f94;
    }
    ctx->pc = 0x287F8Cu;
    {
        const bool branch_taken_0x287f8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x287F90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x287f8c) {
            ctx->pc = 0x288008u;
            goto label_288008;
        }
    }
    ctx->pc = 0x287F94u;
label_287f94:
    // 0x287f94: 0x54620004
label_287f98:
    if (ctx->pc == 0x287F98u) {
        ctx->pc = 0x287F98u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 10));
        ctx->pc = 0x287F9Cu;
        goto label_287f9c;
    }
    ctx->pc = 0x287F94u;
    {
        const bool branch_taken_0x287f94 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x287f94) {
            ctx->pc = 0x287F98u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 10));
            ctx->pc = 0x287FA8u;
            goto label_287fa8;
        }
    }
    ctx->pc = 0x287F9Cu;
label_287f9c:
    // 0x287f9c: 0x2652fff6
    ctx->pc = 0x287f9cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967286));
label_287fa0:
    // 0x287fa0: 0x10000002
label_287fa4:
    if (ctx->pc == 0x287FA4u) {
        ctx->pc = 0x287FA4u;
        SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->pc = 0x287FA8u;
        goto label_287fa8;
    }
    ctx->pc = 0x287FA0u;
    {
        const bool branch_taken_0x287fa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x287FA4u;
        SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        if (branch_taken_0x287fa0) {
            ctx->pc = 0x287FACu;
            goto label_287fac;
        }
    }
    ctx->pc = 0x287FA8u;
label_287fa8:
    // 0x287fa8: 0x2559021
    ctx->pc = 0x287fa8u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_287fac:
    // 0x287fac: 0x3c030035
    ctx->pc = 0x287facu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_287fb0:
    // 0x287fb0: 0x2463a2f0
    ctx->pc = 0x287fb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943472));
label_287fb4:
    // 0x287fb4: 0x171080
    ctx->pc = 0x287fb4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 2));
label_287fb8:
    // 0x287fb8: 0x431021
    ctx->pc = 0x287fb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_287fbc:
    // 0x287fbc: 0x8c420000
    ctx->pc = 0x287fbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_287fc0:
    // 0x287fc0: 0x24530014
    ctx->pc = 0x287fc0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 20));
label_287fc4:
    // 0x287fc4: 0x3c020038
    ctx->pc = 0x287fc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_287fc8:
    // 0x287fc8: 0x8c44b150
    ctx->pc = 0x287fc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947152)));
label_287fcc:
    // 0x287fcc: 0x260282d
    ctx->pc = 0x287fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_287fd0:
    // 0x287fd0: 0x240302d
    ctx->pc = 0x287fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287fd4:
    // 0x287fd4: 0x2c0382d
    ctx->pc = 0x287fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_287fd8:
    // 0x287fd8: 0xc0b0c6a
label_287fdc:
    if (ctx->pc == 0x287FDCu) {
        ctx->pc = 0x287FDCu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x287FE0u;
        goto label_287fe0;
    }
    ctx->pc = 0x287FD8u;
    SET_GPR_U32(ctx, 31, 0x287FE0u);
    ctx->pc = 0x287FDCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287FE0u; }
    }
    if (ctx->pc != 0x287FE0u) { return; }
    ctx->pc = 0x287FE0u;
label_287fe0:
    // 0x287fe0: 0x2762021
    ctx->pc = 0x287fe0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
label_287fe4:
    // 0x287fe4: 0x24840008
    ctx->pc = 0x287fe4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
label_287fe8:
    // 0x287fe8: 0x26450004
    ctx->pc = 0x287fe8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4));
label_287fec:
    // 0x287fec: 0x280302d
    ctx->pc = 0x287fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287ff0:
    // 0x287ff0: 0x3c0700ff
    ctx->pc = 0x287ff0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_287ff4:
    // 0x287ff4: 0x34e7ffff
    ctx->pc = 0x287ff4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_287ff8:
    // 0x287ff8: 0x4600a306
    ctx->pc = 0x287ff8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_287ffc:
    // 0x287ffc: 0x3c08003b
    ctx->pc = 0x287ffcu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_288000:
    // 0x288000: 0xc080510
label_288004:
    if (ctx->pc == 0x288004u) {
        ctx->pc = 0x288004u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956824));
        ctx->pc = 0x288008u;
        goto label_288008;
    }
    ctx->pc = 0x288000u;
    SET_GPR_U32(ctx, 31, 0x288008u);
    ctx->pc = 0x288004u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294956824));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288008u; }
    }
    if (ctx->pc != 0x288008u) { return; }
    ctx->pc = 0x288008u;
label_288008:
    // 0x288008: 0xdfbf00c0
    ctx->pc = 0x288008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_28800c:
    // 0x28800c: 0xdfbe00b0
    ctx->pc = 0x28800cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_288010:
    // 0x288010: 0xdfb700a0
    ctx->pc = 0x288010u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_288014:
    // 0x288014: 0xdfb60090
    ctx->pc = 0x288014u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_288018:
    // 0x288018: 0xdfb50080
    ctx->pc = 0x288018u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_28801c:
    // 0x28801c: 0xdfb40070
    ctx->pc = 0x28801cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_288020:
    // 0x288020: 0xdfb30060
    ctx->pc = 0x288020u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_288024:
    // 0x288024: 0xdfb20050
    ctx->pc = 0x288024u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_288028:
    // 0x288028: 0xdfb10040
    ctx->pc = 0x288028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28802c:
    // 0x28802c: 0xdfb00030
    ctx->pc = 0x28802cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_288030:
    // 0x288030: 0xc7b400d0
    ctx->pc = 0x288030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_288034:
    // 0x288034: 0x3e00008
label_288038:
    if (ctx->pc == 0x288038u) {
        ctx->pc = 0x288038u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x28803Cu;
        goto label_fallthrough_0x288034;
    }
    ctx->pc = 0x288034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288038u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286AC8u: goto label_286ac8;
            case 0x286ACCu: goto label_286acc;
            case 0x286AD0u: goto label_286ad0;
            case 0x286AD4u: goto label_286ad4;
            case 0x286AD8u: goto label_286ad8;
            case 0x286ADCu: goto label_286adc;
            case 0x286AE0u: goto label_286ae0;
            case 0x286AE4u: goto label_286ae4;
            case 0x286AE8u: goto label_286ae8;
            case 0x286AECu: goto label_286aec;
            case 0x286AF0u: goto label_286af0;
            case 0x286AF4u: goto label_286af4;
            case 0x286AF8u: goto label_286af8;
            case 0x286AFCu: goto label_286afc;
            case 0x286B00u: goto label_286b00;
            case 0x286B04u: goto label_286b04;
            case 0x286B08u: goto label_286b08;
            case 0x286B0Cu: goto label_286b0c;
            case 0x286B10u: goto label_286b10;
            case 0x286B14u: goto label_286b14;
            case 0x286B18u: goto label_286b18;
            case 0x286B1Cu: goto label_286b1c;
            case 0x286B20u: goto label_286b20;
            case 0x286B24u: goto label_286b24;
            case 0x286B28u: goto label_286b28;
            case 0x286B2Cu: goto label_286b2c;
            case 0x286B30u: goto label_286b30;
            case 0x286B34u: goto label_286b34;
            case 0x286B38u: goto label_286b38;
            case 0x286B3Cu: goto label_286b3c;
            case 0x286B40u: goto label_286b40;
            case 0x286B44u: goto label_286b44;
            case 0x286B48u: goto label_286b48;
            case 0x286B4Cu: goto label_286b4c;
            case 0x286B50u: goto label_286b50;
            case 0x286B54u: goto label_286b54;
            case 0x286B58u: goto label_286b58;
            case 0x286B5Cu: goto label_286b5c;
            case 0x286B60u: goto label_286b60;
            case 0x286B64u: goto label_286b64;
            case 0x286B68u: goto label_286b68;
            case 0x286B6Cu: goto label_286b6c;
            case 0x286B70u: goto label_286b70;
            case 0x286B74u: goto label_286b74;
            case 0x286B78u: goto label_286b78;
            case 0x286B7Cu: goto label_286b7c;
            case 0x286B80u: goto label_286b80;
            case 0x286B84u: goto label_286b84;
            case 0x286B88u: goto label_286b88;
            case 0x286B8Cu: goto label_286b8c;
            case 0x286B90u: goto label_286b90;
            case 0x286B94u: goto label_286b94;
            case 0x286B98u: goto label_286b98;
            case 0x286B9Cu: goto label_286b9c;
            case 0x286BA0u: goto label_286ba0;
            case 0x286BA4u: goto label_286ba4;
            case 0x286BA8u: goto label_286ba8;
            case 0x286BACu: goto label_286bac;
            case 0x286BB0u: goto label_286bb0;
            case 0x286BB4u: goto label_286bb4;
            case 0x286BB8u: goto label_286bb8;
            case 0x286BBCu: goto label_286bbc;
            case 0x286BC0u: goto label_286bc0;
            case 0x286BC4u: goto label_286bc4;
            case 0x286BC8u: goto label_286bc8;
            case 0x286BCCu: goto label_286bcc;
            case 0x286BD0u: goto label_286bd0;
            case 0x286BD4u: goto label_286bd4;
            case 0x286BD8u: goto label_286bd8;
            case 0x286BDCu: goto label_286bdc;
            case 0x286BE0u: goto label_286be0;
            case 0x286BE4u: goto label_286be4;
            case 0x286BE8u: goto label_286be8;
            case 0x286BECu: goto label_286bec;
            case 0x286BF0u: goto label_286bf0;
            case 0x286BF4u: goto label_286bf4;
            case 0x286BF8u: goto label_286bf8;
            case 0x286BFCu: goto label_286bfc;
            case 0x286C00u: goto label_286c00;
            case 0x286C04u: goto label_286c04;
            case 0x286C08u: goto label_286c08;
            case 0x286C0Cu: goto label_286c0c;
            case 0x286C10u: goto label_286c10;
            case 0x286C14u: goto label_286c14;
            case 0x286C18u: goto label_286c18;
            case 0x286C1Cu: goto label_286c1c;
            case 0x286C20u: goto label_286c20;
            case 0x286C24u: goto label_286c24;
            case 0x286C28u: goto label_286c28;
            case 0x286C2Cu: goto label_286c2c;
            case 0x286C30u: goto label_286c30;
            case 0x286C34u: goto label_286c34;
            case 0x286C38u: goto label_286c38;
            case 0x286C3Cu: goto label_286c3c;
            case 0x286C40u: goto label_286c40;
            case 0x286C44u: goto label_286c44;
            case 0x286C48u: goto label_286c48;
            case 0x286C4Cu: goto label_286c4c;
            case 0x286C50u: goto label_286c50;
            case 0x286C54u: goto label_286c54;
            case 0x286C58u: goto label_286c58;
            case 0x286C5Cu: goto label_286c5c;
            case 0x286C60u: goto label_286c60;
            case 0x286C64u: goto label_286c64;
            case 0x286C68u: goto label_286c68;
            case 0x286C6Cu: goto label_286c6c;
            case 0x286C70u: goto label_286c70;
            case 0x286C74u: goto label_286c74;
            case 0x286C78u: goto label_286c78;
            case 0x286C7Cu: goto label_286c7c;
            case 0x286C80u: goto label_286c80;
            case 0x286C84u: goto label_286c84;
            case 0x286C88u: goto label_286c88;
            case 0x286C8Cu: goto label_286c8c;
            case 0x286C90u: goto label_286c90;
            case 0x286C94u: goto label_286c94;
            case 0x286C98u: goto label_286c98;
            case 0x286C9Cu: goto label_286c9c;
            case 0x286CA0u: goto label_286ca0;
            case 0x286CA4u: goto label_286ca4;
            case 0x286CA8u: goto label_286ca8;
            case 0x286CACu: goto label_286cac;
            case 0x286CB0u: goto label_286cb0;
            case 0x286CB4u: goto label_286cb4;
            case 0x286CB8u: goto label_286cb8;
            case 0x286CBCu: goto label_286cbc;
            case 0x286CC0u: goto label_286cc0;
            case 0x286CC4u: goto label_286cc4;
            case 0x286CC8u: goto label_286cc8;
            case 0x286CCCu: goto label_286ccc;
            case 0x286CD0u: goto label_286cd0;
            case 0x286CD4u: goto label_286cd4;
            case 0x286CD8u: goto label_286cd8;
            case 0x286CDCu: goto label_286cdc;
            case 0x286CE0u: goto label_286ce0;
            case 0x286CE4u: goto label_286ce4;
            case 0x286CE8u: goto label_286ce8;
            case 0x286CECu: goto label_286cec;
            case 0x286CF0u: goto label_286cf0;
            case 0x286CF4u: goto label_286cf4;
            case 0x286CF8u: goto label_286cf8;
            case 0x286CFCu: goto label_286cfc;
            case 0x286D00u: goto label_286d00;
            case 0x286D04u: goto label_286d04;
            case 0x286D08u: goto label_286d08;
            case 0x286D0Cu: goto label_286d0c;
            case 0x286D10u: goto label_286d10;
            case 0x286D14u: goto label_286d14;
            case 0x286D18u: goto label_286d18;
            case 0x286D1Cu: goto label_286d1c;
            case 0x286D20u: goto label_286d20;
            case 0x286D24u: goto label_286d24;
            case 0x286D28u: goto label_286d28;
            case 0x286D2Cu: goto label_286d2c;
            case 0x286D30u: goto label_286d30;
            case 0x286D34u: goto label_286d34;
            case 0x286D38u: goto label_286d38;
            case 0x286D3Cu: goto label_286d3c;
            case 0x286D40u: goto label_286d40;
            case 0x286D44u: goto label_286d44;
            case 0x286D48u: goto label_286d48;
            case 0x286D4Cu: goto label_286d4c;
            case 0x286D50u: goto label_286d50;
            case 0x286D54u: goto label_286d54;
            case 0x286D58u: goto label_286d58;
            case 0x286D5Cu: goto label_286d5c;
            case 0x286D60u: goto label_286d60;
            case 0x286D64u: goto label_286d64;
            case 0x286D68u: goto label_286d68;
            case 0x286D6Cu: goto label_286d6c;
            case 0x286D70u: goto label_286d70;
            case 0x286D74u: goto label_286d74;
            case 0x286D78u: goto label_286d78;
            case 0x286D7Cu: goto label_286d7c;
            case 0x286D80u: goto label_286d80;
            case 0x286D84u: goto label_286d84;
            case 0x286D88u: goto label_286d88;
            case 0x286D8Cu: goto label_286d8c;
            case 0x286D90u: goto label_286d90;
            case 0x286D94u: goto label_286d94;
            case 0x286D98u: goto label_286d98;
            case 0x286D9Cu: goto label_286d9c;
            case 0x286DA0u: goto label_286da0;
            case 0x286DA4u: goto label_286da4;
            case 0x286DA8u: goto label_286da8;
            case 0x286DACu: goto label_286dac;
            case 0x286DB0u: goto label_286db0;
            case 0x286DB4u: goto label_286db4;
            case 0x286DB8u: goto label_286db8;
            case 0x286DBCu: goto label_286dbc;
            case 0x286DC0u: goto label_286dc0;
            case 0x286DC4u: goto label_286dc4;
            case 0x286DC8u: goto label_286dc8;
            case 0x286DCCu: goto label_286dcc;
            case 0x286DD0u: goto label_286dd0;
            case 0x286DD4u: goto label_286dd4;
            case 0x286DD8u: goto label_286dd8;
            case 0x286DDCu: goto label_286ddc;
            case 0x286DE0u: goto label_286de0;
            case 0x286DE4u: goto label_286de4;
            case 0x286DE8u: goto label_286de8;
            case 0x286DECu: goto label_286dec;
            case 0x286DF0u: goto label_286df0;
            case 0x286DF4u: goto label_286df4;
            case 0x286DF8u: goto label_286df8;
            case 0x286DFCu: goto label_286dfc;
            case 0x286E00u: goto label_286e00;
            case 0x286E04u: goto label_286e04;
            case 0x286E08u: goto label_286e08;
            case 0x286E0Cu: goto label_286e0c;
            case 0x286E10u: goto label_286e10;
            case 0x286E14u: goto label_286e14;
            case 0x286E18u: goto label_286e18;
            case 0x286E1Cu: goto label_286e1c;
            case 0x286E20u: goto label_286e20;
            case 0x286E24u: goto label_286e24;
            case 0x286E28u: goto label_286e28;
            case 0x286E2Cu: goto label_286e2c;
            case 0x286E30u: goto label_286e30;
            case 0x286E34u: goto label_286e34;
            case 0x286E38u: goto label_286e38;
            case 0x286E3Cu: goto label_286e3c;
            case 0x286E40u: goto label_286e40;
            case 0x286E44u: goto label_286e44;
            case 0x286E48u: goto label_286e48;
            case 0x286E4Cu: goto label_286e4c;
            case 0x286E50u: goto label_286e50;
            case 0x286E54u: goto label_286e54;
            case 0x286E58u: goto label_286e58;
            case 0x286E5Cu: goto label_286e5c;
            case 0x286E60u: goto label_286e60;
            case 0x286E64u: goto label_286e64;
            case 0x286E68u: goto label_286e68;
            case 0x286E6Cu: goto label_286e6c;
            case 0x286E70u: goto label_286e70;
            case 0x286E74u: goto label_286e74;
            case 0x286E78u: goto label_286e78;
            case 0x286E7Cu: goto label_286e7c;
            case 0x286E80u: goto label_286e80;
            case 0x286E84u: goto label_286e84;
            case 0x286E88u: goto label_286e88;
            case 0x286E8Cu: goto label_286e8c;
            case 0x286E90u: goto label_286e90;
            case 0x286E94u: goto label_286e94;
            case 0x286E98u: goto label_286e98;
            case 0x286E9Cu: goto label_286e9c;
            case 0x286EA0u: goto label_286ea0;
            case 0x286EA4u: goto label_286ea4;
            case 0x286EA8u: goto label_286ea8;
            case 0x286EACu: goto label_286eac;
            case 0x286EB0u: goto label_286eb0;
            case 0x286EB4u: goto label_286eb4;
            case 0x286EB8u: goto label_286eb8;
            case 0x286EBCu: goto label_286ebc;
            case 0x286EC0u: goto label_286ec0;
            case 0x286EC4u: goto label_286ec4;
            case 0x286EC8u: goto label_286ec8;
            case 0x286ECCu: goto label_286ecc;
            case 0x286ED0u: goto label_286ed0;
            case 0x286ED4u: goto label_286ed4;
            case 0x286ED8u: goto label_286ed8;
            case 0x286EDCu: goto label_286edc;
            case 0x286EE0u: goto label_286ee0;
            case 0x286EE4u: goto label_286ee4;
            case 0x286EE8u: goto label_286ee8;
            case 0x286EECu: goto label_286eec;
            case 0x286EF0u: goto label_286ef0;
            case 0x286EF4u: goto label_286ef4;
            case 0x286EF8u: goto label_286ef8;
            case 0x286EFCu: goto label_286efc;
            case 0x286F00u: goto label_286f00;
            case 0x286F04u: goto label_286f04;
            case 0x286F08u: goto label_286f08;
            case 0x286F0Cu: goto label_286f0c;
            case 0x286F10u: goto label_286f10;
            case 0x286F14u: goto label_286f14;
            case 0x286F18u: goto label_286f18;
            case 0x286F1Cu: goto label_286f1c;
            case 0x286F20u: goto label_286f20;
            case 0x286F24u: goto label_286f24;
            case 0x286F28u: goto label_286f28;
            case 0x286F2Cu: goto label_286f2c;
            case 0x286F30u: goto label_286f30;
            case 0x286F34u: goto label_286f34;
            case 0x286F38u: goto label_286f38;
            case 0x286F3Cu: goto label_286f3c;
            case 0x286F40u: goto label_286f40;
            case 0x286F44u: goto label_286f44;
            case 0x286F48u: goto label_286f48;
            case 0x286F4Cu: goto label_286f4c;
            case 0x286F50u: goto label_286f50;
            case 0x286F54u: goto label_286f54;
            case 0x286F58u: goto label_286f58;
            case 0x286F5Cu: goto label_286f5c;
            case 0x286F60u: goto label_286f60;
            case 0x286F64u: goto label_286f64;
            case 0x286F68u: goto label_286f68;
            case 0x286F6Cu: goto label_286f6c;
            case 0x286F70u: goto label_286f70;
            case 0x286F74u: goto label_286f74;
            case 0x286F78u: goto label_286f78;
            case 0x286F7Cu: goto label_286f7c;
            case 0x286F80u: goto label_286f80;
            case 0x286F84u: goto label_286f84;
            case 0x286F88u: goto label_286f88;
            case 0x286F8Cu: goto label_286f8c;
            case 0x286F90u: goto label_286f90;
            case 0x286F94u: goto label_286f94;
            case 0x286F98u: goto label_286f98;
            case 0x286F9Cu: goto label_286f9c;
            case 0x286FA0u: goto label_286fa0;
            case 0x286FA4u: goto label_286fa4;
            case 0x286FA8u: goto label_286fa8;
            case 0x286FACu: goto label_286fac;
            case 0x286FB0u: goto label_286fb0;
            case 0x286FB4u: goto label_286fb4;
            case 0x286FB8u: goto label_286fb8;
            case 0x286FBCu: goto label_286fbc;
            case 0x286FC0u: goto label_286fc0;
            case 0x286FC4u: goto label_286fc4;
            case 0x286FC8u: goto label_286fc8;
            case 0x286FCCu: goto label_286fcc;
            case 0x286FD0u: goto label_286fd0;
            case 0x286FD4u: goto label_286fd4;
            case 0x286FD8u: goto label_286fd8;
            case 0x286FDCu: goto label_286fdc;
            case 0x286FE0u: goto label_286fe0;
            case 0x286FE4u: goto label_286fe4;
            case 0x286FE8u: goto label_286fe8;
            case 0x286FECu: goto label_286fec;
            case 0x286FF0u: goto label_286ff0;
            case 0x286FF4u: goto label_286ff4;
            case 0x286FF8u: goto label_286ff8;
            case 0x286FFCu: goto label_286ffc;
            case 0x287000u: goto label_287000;
            case 0x287004u: goto label_287004;
            case 0x287008u: goto label_287008;
            case 0x28700Cu: goto label_28700c;
            case 0x287010u: goto label_287010;
            case 0x287014u: goto label_287014;
            case 0x287018u: goto label_287018;
            case 0x28701Cu: goto label_28701c;
            case 0x287020u: goto label_287020;
            case 0x287024u: goto label_287024;
            case 0x287028u: goto label_287028;
            case 0x28702Cu: goto label_28702c;
            case 0x287030u: goto label_287030;
            case 0x287034u: goto label_287034;
            case 0x287038u: goto label_287038;
            case 0x28703Cu: goto label_28703c;
            case 0x287040u: goto label_287040;
            case 0x287044u: goto label_287044;
            case 0x287048u: goto label_287048;
            case 0x28704Cu: goto label_28704c;
            case 0x287050u: goto label_287050;
            case 0x287054u: goto label_287054;
            case 0x287058u: goto label_287058;
            case 0x28705Cu: goto label_28705c;
            case 0x287060u: goto label_287060;
            case 0x287064u: goto label_287064;
            case 0x287068u: goto label_287068;
            case 0x28706Cu: goto label_28706c;
            case 0x287070u: goto label_287070;
            case 0x287074u: goto label_287074;
            case 0x287078u: goto label_287078;
            case 0x28707Cu: goto label_28707c;
            case 0x287080u: goto label_287080;
            case 0x287084u: goto label_287084;
            case 0x287088u: goto label_287088;
            case 0x28708Cu: goto label_28708c;
            case 0x287090u: goto label_287090;
            case 0x287094u: goto label_287094;
            case 0x287098u: goto label_287098;
            case 0x28709Cu: goto label_28709c;
            case 0x2870A0u: goto label_2870a0;
            case 0x2870A4u: goto label_2870a4;
            case 0x2870A8u: goto label_2870a8;
            case 0x2870ACu: goto label_2870ac;
            case 0x2870B0u: goto label_2870b0;
            case 0x2870B4u: goto label_2870b4;
            case 0x2870B8u: goto label_2870b8;
            case 0x2870BCu: goto label_2870bc;
            case 0x2870C0u: goto label_2870c0;
            case 0x2870C4u: goto label_2870c4;
            case 0x2870C8u: goto label_2870c8;
            case 0x2870CCu: goto label_2870cc;
            case 0x2870D0u: goto label_2870d0;
            case 0x2870D4u: goto label_2870d4;
            case 0x2870D8u: goto label_2870d8;
            case 0x2870DCu: goto label_2870dc;
            case 0x2870E0u: goto label_2870e0;
            case 0x2870E4u: goto label_2870e4;
            case 0x2870E8u: goto label_2870e8;
            case 0x2870ECu: goto label_2870ec;
            case 0x2870F0u: goto label_2870f0;
            case 0x2870F4u: goto label_2870f4;
            case 0x2870F8u: goto label_2870f8;
            case 0x2870FCu: goto label_2870fc;
            case 0x287100u: goto label_287100;
            case 0x287104u: goto label_287104;
            case 0x287108u: goto label_287108;
            case 0x28710Cu: goto label_28710c;
            case 0x287110u: goto label_287110;
            case 0x287114u: goto label_287114;
            case 0x287118u: goto label_287118;
            case 0x28711Cu: goto label_28711c;
            case 0x287120u: goto label_287120;
            case 0x287124u: goto label_287124;
            case 0x287128u: goto label_287128;
            case 0x28712Cu: goto label_28712c;
            case 0x287130u: goto label_287130;
            case 0x287134u: goto label_287134;
            case 0x287138u: goto label_287138;
            case 0x28713Cu: goto label_28713c;
            case 0x287140u: goto label_287140;
            case 0x287144u: goto label_287144;
            case 0x287148u: goto label_287148;
            case 0x28714Cu: goto label_28714c;
            case 0x287150u: goto label_287150;
            case 0x287154u: goto label_287154;
            case 0x287158u: goto label_287158;
            case 0x28715Cu: goto label_28715c;
            case 0x287160u: goto label_287160;
            case 0x287164u: goto label_287164;
            case 0x287168u: goto label_287168;
            case 0x28716Cu: goto label_28716c;
            case 0x287170u: goto label_287170;
            case 0x287174u: goto label_287174;
            case 0x287178u: goto label_287178;
            case 0x28717Cu: goto label_28717c;
            case 0x287180u: goto label_287180;
            case 0x287184u: goto label_287184;
            case 0x287188u: goto label_287188;
            case 0x28718Cu: goto label_28718c;
            case 0x287190u: goto label_287190;
            case 0x287194u: goto label_287194;
            case 0x287198u: goto label_287198;
            case 0x28719Cu: goto label_28719c;
            case 0x2871A0u: goto label_2871a0;
            case 0x2871A4u: goto label_2871a4;
            case 0x2871A8u: goto label_2871a8;
            case 0x2871ACu: goto label_2871ac;
            case 0x2871B0u: goto label_2871b0;
            case 0x2871B4u: goto label_2871b4;
            case 0x2871B8u: goto label_2871b8;
            case 0x2871BCu: goto label_2871bc;
            case 0x2871C0u: goto label_2871c0;
            case 0x2871C4u: goto label_2871c4;
            case 0x2871C8u: goto label_2871c8;
            case 0x2871CCu: goto label_2871cc;
            case 0x2871D0u: goto label_2871d0;
            case 0x2871D4u: goto label_2871d4;
            case 0x2871D8u: goto label_2871d8;
            case 0x2871DCu: goto label_2871dc;
            case 0x2871E0u: goto label_2871e0;
            case 0x2871E4u: goto label_2871e4;
            case 0x2871E8u: goto label_2871e8;
            case 0x2871ECu: goto label_2871ec;
            case 0x2871F0u: goto label_2871f0;
            case 0x2871F4u: goto label_2871f4;
            case 0x2871F8u: goto label_2871f8;
            case 0x2871FCu: goto label_2871fc;
            case 0x287200u: goto label_287200;
            case 0x287204u: goto label_287204;
            case 0x287208u: goto label_287208;
            case 0x28720Cu: goto label_28720c;
            case 0x287210u: goto label_287210;
            case 0x287214u: goto label_287214;
            case 0x287218u: goto label_287218;
            case 0x28721Cu: goto label_28721c;
            case 0x287220u: goto label_287220;
            case 0x287224u: goto label_287224;
            case 0x287228u: goto label_287228;
            case 0x28722Cu: goto label_28722c;
            case 0x287230u: goto label_287230;
            case 0x287234u: goto label_287234;
            case 0x287238u: goto label_287238;
            case 0x28723Cu: goto label_28723c;
            case 0x287240u: goto label_287240;
            case 0x287244u: goto label_287244;
            case 0x287248u: goto label_287248;
            case 0x28724Cu: goto label_28724c;
            case 0x287250u: goto label_287250;
            case 0x287254u: goto label_287254;
            case 0x287258u: goto label_287258;
            case 0x28725Cu: goto label_28725c;
            case 0x287260u: goto label_287260;
            case 0x287264u: goto label_287264;
            case 0x287268u: goto label_287268;
            case 0x28726Cu: goto label_28726c;
            case 0x287270u: goto label_287270;
            case 0x287274u: goto label_287274;
            case 0x287278u: goto label_287278;
            case 0x28727Cu: goto label_28727c;
            case 0x287280u: goto label_287280;
            case 0x287284u: goto label_287284;
            case 0x287288u: goto label_287288;
            case 0x28728Cu: goto label_28728c;
            case 0x287290u: goto label_287290;
            case 0x287294u: goto label_287294;
            case 0x287298u: goto label_287298;
            case 0x28729Cu: goto label_28729c;
            case 0x2872A0u: goto label_2872a0;
            case 0x2872A4u: goto label_2872a4;
            case 0x2872A8u: goto label_2872a8;
            case 0x2872ACu: goto label_2872ac;
            case 0x2872B0u: goto label_2872b0;
            case 0x2872B4u: goto label_2872b4;
            case 0x2872B8u: goto label_2872b8;
            case 0x2872BCu: goto label_2872bc;
            case 0x2872C0u: goto label_2872c0;
            case 0x2872C4u: goto label_2872c4;
            case 0x2872C8u: goto label_2872c8;
            case 0x2872CCu: goto label_2872cc;
            case 0x2872D0u: goto label_2872d0;
            case 0x2872D4u: goto label_2872d4;
            case 0x2872D8u: goto label_2872d8;
            case 0x2872DCu: goto label_2872dc;
            case 0x2872E0u: goto label_2872e0;
            case 0x2872E4u: goto label_2872e4;
            case 0x2872E8u: goto label_2872e8;
            case 0x2872ECu: goto label_2872ec;
            case 0x2872F0u: goto label_2872f0;
            case 0x2872F4u: goto label_2872f4;
            case 0x2872F8u: goto label_2872f8;
            case 0x2872FCu: goto label_2872fc;
            case 0x287300u: goto label_287300;
            case 0x287304u: goto label_287304;
            case 0x287308u: goto label_287308;
            case 0x28730Cu: goto label_28730c;
            case 0x287310u: goto label_287310;
            case 0x287314u: goto label_287314;
            case 0x287318u: goto label_287318;
            case 0x28731Cu: goto label_28731c;
            case 0x287320u: goto label_287320;
            case 0x287324u: goto label_287324;
            case 0x287328u: goto label_287328;
            case 0x28732Cu: goto label_28732c;
            case 0x287330u: goto label_287330;
            case 0x287334u: goto label_287334;
            case 0x287338u: goto label_287338;
            case 0x28733Cu: goto label_28733c;
            case 0x287340u: goto label_287340;
            case 0x287344u: goto label_287344;
            case 0x287348u: goto label_287348;
            case 0x28734Cu: goto label_28734c;
            case 0x287350u: goto label_287350;
            case 0x287354u: goto label_287354;
            case 0x287358u: goto label_287358;
            case 0x28735Cu: goto label_28735c;
            case 0x287360u: goto label_287360;
            case 0x287364u: goto label_287364;
            case 0x287368u: goto label_287368;
            case 0x28736Cu: goto label_28736c;
            case 0x287370u: goto label_287370;
            case 0x287374u: goto label_287374;
            case 0x287378u: goto label_287378;
            case 0x28737Cu: goto label_28737c;
            case 0x287380u: goto label_287380;
            case 0x287384u: goto label_287384;
            case 0x287388u: goto label_287388;
            case 0x28738Cu: goto label_28738c;
            case 0x287390u: goto label_287390;
            case 0x287394u: goto label_287394;
            case 0x287398u: goto label_287398;
            case 0x28739Cu: goto label_28739c;
            case 0x2873A0u: goto label_2873a0;
            case 0x2873A4u: goto label_2873a4;
            case 0x2873A8u: goto label_2873a8;
            case 0x2873ACu: goto label_2873ac;
            case 0x2873B0u: goto label_2873b0;
            case 0x2873B4u: goto label_2873b4;
            case 0x2873B8u: goto label_2873b8;
            case 0x2873BCu: goto label_2873bc;
            case 0x2873C0u: goto label_2873c0;
            case 0x2873C4u: goto label_2873c4;
            case 0x2873C8u: goto label_2873c8;
            case 0x2873CCu: goto label_2873cc;
            case 0x2873D0u: goto label_2873d0;
            case 0x2873D4u: goto label_2873d4;
            case 0x2873D8u: goto label_2873d8;
            case 0x2873DCu: goto label_2873dc;
            case 0x2873E0u: goto label_2873e0;
            case 0x2873E4u: goto label_2873e4;
            case 0x2873E8u: goto label_2873e8;
            case 0x2873ECu: goto label_2873ec;
            case 0x2873F0u: goto label_2873f0;
            case 0x2873F4u: goto label_2873f4;
            case 0x2873F8u: goto label_2873f8;
            case 0x2873FCu: goto label_2873fc;
            case 0x287400u: goto label_287400;
            case 0x287404u: goto label_287404;
            case 0x287408u: goto label_287408;
            case 0x28740Cu: goto label_28740c;
            case 0x287410u: goto label_287410;
            case 0x287414u: goto label_287414;
            case 0x287418u: goto label_287418;
            case 0x28741Cu: goto label_28741c;
            case 0x287420u: goto label_287420;
            case 0x287424u: goto label_287424;
            case 0x287428u: goto label_287428;
            case 0x28742Cu: goto label_28742c;
            case 0x287430u: goto label_287430;
            case 0x287434u: goto label_287434;
            case 0x287438u: goto label_287438;
            case 0x28743Cu: goto label_28743c;
            case 0x287440u: goto label_287440;
            case 0x287444u: goto label_287444;
            case 0x287448u: goto label_287448;
            case 0x28744Cu: goto label_28744c;
            case 0x287450u: goto label_287450;
            case 0x287454u: goto label_287454;
            case 0x287458u: goto label_287458;
            case 0x28745Cu: goto label_28745c;
            case 0x287460u: goto label_287460;
            case 0x287464u: goto label_287464;
            case 0x287468u: goto label_287468;
            case 0x28746Cu: goto label_28746c;
            case 0x287470u: goto label_287470;
            case 0x287474u: goto label_287474;
            case 0x287478u: goto label_287478;
            case 0x28747Cu: goto label_28747c;
            case 0x287480u: goto label_287480;
            case 0x287484u: goto label_287484;
            case 0x287488u: goto label_287488;
            case 0x28748Cu: goto label_28748c;
            case 0x287490u: goto label_287490;
            case 0x287494u: goto label_287494;
            case 0x287498u: goto label_287498;
            case 0x28749Cu: goto label_28749c;
            case 0x2874A0u: goto label_2874a0;
            case 0x2874A4u: goto label_2874a4;
            case 0x2874A8u: goto label_2874a8;
            case 0x2874ACu: goto label_2874ac;
            case 0x2874B0u: goto label_2874b0;
            case 0x2874B4u: goto label_2874b4;
            case 0x2874B8u: goto label_2874b8;
            case 0x2874BCu: goto label_2874bc;
            case 0x2874C0u: goto label_2874c0;
            case 0x2874C4u: goto label_2874c4;
            case 0x2874C8u: goto label_2874c8;
            case 0x2874CCu: goto label_2874cc;
            case 0x2874D0u: goto label_2874d0;
            case 0x2874D4u: goto label_2874d4;
            case 0x2874D8u: goto label_2874d8;
            case 0x2874DCu: goto label_2874dc;
            case 0x2874E0u: goto label_2874e0;
            case 0x2874E4u: goto label_2874e4;
            case 0x2874E8u: goto label_2874e8;
            case 0x2874ECu: goto label_2874ec;
            case 0x2874F0u: goto label_2874f0;
            case 0x2874F4u: goto label_2874f4;
            case 0x2874F8u: goto label_2874f8;
            case 0x2874FCu: goto label_2874fc;
            case 0x287500u: goto label_287500;
            case 0x287504u: goto label_287504;
            case 0x287508u: goto label_287508;
            case 0x28750Cu: goto label_28750c;
            case 0x287510u: goto label_287510;
            case 0x287514u: goto label_287514;
            case 0x287518u: goto label_287518;
            case 0x28751Cu: goto label_28751c;
            case 0x287520u: goto label_287520;
            case 0x287524u: goto label_287524;
            case 0x287528u: goto label_287528;
            case 0x28752Cu: goto label_28752c;
            case 0x287530u: goto label_287530;
            case 0x287534u: goto label_287534;
            case 0x287538u: goto label_287538;
            case 0x28753Cu: goto label_28753c;
            case 0x287540u: goto label_287540;
            case 0x287544u: goto label_287544;
            case 0x287548u: goto label_287548;
            case 0x28754Cu: goto label_28754c;
            case 0x287550u: goto label_287550;
            case 0x287554u: goto label_287554;
            case 0x287558u: goto label_287558;
            case 0x28755Cu: goto label_28755c;
            case 0x287560u: goto label_287560;
            case 0x287564u: goto label_287564;
            case 0x287568u: goto label_287568;
            case 0x28756Cu: goto label_28756c;
            case 0x287570u: goto label_287570;
            case 0x287574u: goto label_287574;
            case 0x287578u: goto label_287578;
            case 0x28757Cu: goto label_28757c;
            case 0x287580u: goto label_287580;
            case 0x287584u: goto label_287584;
            case 0x287588u: goto label_287588;
            case 0x28758Cu: goto label_28758c;
            case 0x287590u: goto label_287590;
            case 0x287594u: goto label_287594;
            case 0x287598u: goto label_287598;
            case 0x28759Cu: goto label_28759c;
            case 0x2875A0u: goto label_2875a0;
            case 0x2875A4u: goto label_2875a4;
            case 0x2875A8u: goto label_2875a8;
            case 0x2875ACu: goto label_2875ac;
            case 0x2875B0u: goto label_2875b0;
            case 0x2875B4u: goto label_2875b4;
            case 0x2875B8u: goto label_2875b8;
            case 0x2875BCu: goto label_2875bc;
            case 0x2875C0u: goto label_2875c0;
            case 0x2875C4u: goto label_2875c4;
            case 0x2875C8u: goto label_2875c8;
            case 0x2875CCu: goto label_2875cc;
            case 0x2875D0u: goto label_2875d0;
            case 0x2875D4u: goto label_2875d4;
            case 0x2875D8u: goto label_2875d8;
            case 0x2875DCu: goto label_2875dc;
            case 0x2875E0u: goto label_2875e0;
            case 0x2875E4u: goto label_2875e4;
            case 0x2875E8u: goto label_2875e8;
            case 0x2875ECu: goto label_2875ec;
            case 0x2875F0u: goto label_2875f0;
            case 0x2875F4u: goto label_2875f4;
            case 0x2875F8u: goto label_2875f8;
            case 0x2875FCu: goto label_2875fc;
            case 0x287600u: goto label_287600;
            case 0x287604u: goto label_287604;
            case 0x287608u: goto label_287608;
            case 0x28760Cu: goto label_28760c;
            case 0x287610u: goto label_287610;
            case 0x287614u: goto label_287614;
            case 0x287618u: goto label_287618;
            case 0x28761Cu: goto label_28761c;
            case 0x287620u: goto label_287620;
            case 0x287624u: goto label_287624;
            case 0x287628u: goto label_287628;
            case 0x28762Cu: goto label_28762c;
            case 0x287630u: goto label_287630;
            case 0x287634u: goto label_287634;
            case 0x287638u: goto label_287638;
            case 0x28763Cu: goto label_28763c;
            case 0x287640u: goto label_287640;
            case 0x287644u: goto label_287644;
            case 0x287648u: goto label_287648;
            case 0x28764Cu: goto label_28764c;
            case 0x287650u: goto label_287650;
            case 0x287654u: goto label_287654;
            case 0x287658u: goto label_287658;
            case 0x28765Cu: goto label_28765c;
            case 0x287660u: goto label_287660;
            case 0x287664u: goto label_287664;
            case 0x287668u: goto label_287668;
            case 0x28766Cu: goto label_28766c;
            case 0x287670u: goto label_287670;
            case 0x287674u: goto label_287674;
            case 0x287678u: goto label_287678;
            case 0x28767Cu: goto label_28767c;
            case 0x287680u: goto label_287680;
            case 0x287684u: goto label_287684;
            case 0x287688u: goto label_287688;
            case 0x28768Cu: goto label_28768c;
            case 0x287690u: goto label_287690;
            case 0x287694u: goto label_287694;
            case 0x287698u: goto label_287698;
            case 0x28769Cu: goto label_28769c;
            case 0x2876A0u: goto label_2876a0;
            case 0x2876A4u: goto label_2876a4;
            case 0x2876A8u: goto label_2876a8;
            case 0x2876ACu: goto label_2876ac;
            case 0x2876B0u: goto label_2876b0;
            case 0x2876B4u: goto label_2876b4;
            case 0x2876B8u: goto label_2876b8;
            case 0x2876BCu: goto label_2876bc;
            case 0x2876C0u: goto label_2876c0;
            case 0x2876C4u: goto label_2876c4;
            case 0x2876C8u: goto label_2876c8;
            case 0x2876CCu: goto label_2876cc;
            case 0x2876D0u: goto label_2876d0;
            case 0x2876D4u: goto label_2876d4;
            case 0x2876D8u: goto label_2876d8;
            case 0x2876DCu: goto label_2876dc;
            case 0x2876E0u: goto label_2876e0;
            case 0x2876E4u: goto label_2876e4;
            case 0x2876E8u: goto label_2876e8;
            case 0x2876ECu: goto label_2876ec;
            case 0x2876F0u: goto label_2876f0;
            case 0x2876F4u: goto label_2876f4;
            case 0x2876F8u: goto label_2876f8;
            case 0x2876FCu: goto label_2876fc;
            case 0x287700u: goto label_287700;
            case 0x287704u: goto label_287704;
            case 0x287708u: goto label_287708;
            case 0x28770Cu: goto label_28770c;
            case 0x287710u: goto label_287710;
            case 0x287714u: goto label_287714;
            case 0x287718u: goto label_287718;
            case 0x28771Cu: goto label_28771c;
            case 0x287720u: goto label_287720;
            case 0x287724u: goto label_287724;
            case 0x287728u: goto label_287728;
            case 0x28772Cu: goto label_28772c;
            case 0x287730u: goto label_287730;
            case 0x287734u: goto label_287734;
            case 0x287738u: goto label_287738;
            case 0x28773Cu: goto label_28773c;
            case 0x287740u: goto label_287740;
            case 0x287744u: goto label_287744;
            case 0x287748u: goto label_287748;
            case 0x28774Cu: goto label_28774c;
            case 0x287750u: goto label_287750;
            case 0x287754u: goto label_287754;
            case 0x287758u: goto label_287758;
            case 0x28775Cu: goto label_28775c;
            case 0x287760u: goto label_287760;
            case 0x287764u: goto label_287764;
            case 0x287768u: goto label_287768;
            case 0x28776Cu: goto label_28776c;
            case 0x287770u: goto label_287770;
            case 0x287774u: goto label_287774;
            case 0x287778u: goto label_287778;
            case 0x28777Cu: goto label_28777c;
            case 0x287780u: goto label_287780;
            case 0x287784u: goto label_287784;
            case 0x287788u: goto label_287788;
            case 0x28778Cu: goto label_28778c;
            case 0x287790u: goto label_287790;
            case 0x287794u: goto label_287794;
            case 0x287798u: goto label_287798;
            case 0x28779Cu: goto label_28779c;
            case 0x2877A0u: goto label_2877a0;
            case 0x2877A4u: goto label_2877a4;
            case 0x2877A8u: goto label_2877a8;
            case 0x2877ACu: goto label_2877ac;
            case 0x2877B0u: goto label_2877b0;
            case 0x2877B4u: goto label_2877b4;
            case 0x2877B8u: goto label_2877b8;
            case 0x2877BCu: goto label_2877bc;
            case 0x2877C0u: goto label_2877c0;
            case 0x2877C4u: goto label_2877c4;
            case 0x2877C8u: goto label_2877c8;
            case 0x2877CCu: goto label_2877cc;
            case 0x2877D0u: goto label_2877d0;
            case 0x2877D4u: goto label_2877d4;
            case 0x2877D8u: goto label_2877d8;
            case 0x2877DCu: goto label_2877dc;
            case 0x2877E0u: goto label_2877e0;
            case 0x2877E4u: goto label_2877e4;
            case 0x2877E8u: goto label_2877e8;
            case 0x2877ECu: goto label_2877ec;
            case 0x2877F0u: goto label_2877f0;
            case 0x2877F4u: goto label_2877f4;
            case 0x2877F8u: goto label_2877f8;
            case 0x2877FCu: goto label_2877fc;
            case 0x287800u: goto label_287800;
            case 0x287804u: goto label_287804;
            case 0x287808u: goto label_287808;
            case 0x28780Cu: goto label_28780c;
            case 0x287810u: goto label_287810;
            case 0x287814u: goto label_287814;
            case 0x287818u: goto label_287818;
            case 0x28781Cu: goto label_28781c;
            case 0x287820u: goto label_287820;
            case 0x287824u: goto label_287824;
            case 0x287828u: goto label_287828;
            case 0x28782Cu: goto label_28782c;
            case 0x287830u: goto label_287830;
            case 0x287834u: goto label_287834;
            case 0x287838u: goto label_287838;
            case 0x28783Cu: goto label_28783c;
            case 0x287840u: goto label_287840;
            case 0x287844u: goto label_287844;
            case 0x287848u: goto label_287848;
            case 0x28784Cu: goto label_28784c;
            case 0x287850u: goto label_287850;
            case 0x287854u: goto label_287854;
            case 0x287858u: goto label_287858;
            case 0x28785Cu: goto label_28785c;
            case 0x287860u: goto label_287860;
            case 0x287864u: goto label_287864;
            case 0x287868u: goto label_287868;
            case 0x28786Cu: goto label_28786c;
            case 0x287870u: goto label_287870;
            case 0x287874u: goto label_287874;
            case 0x287878u: goto label_287878;
            case 0x28787Cu: goto label_28787c;
            case 0x287880u: goto label_287880;
            case 0x287884u: goto label_287884;
            case 0x287888u: goto label_287888;
            case 0x28788Cu: goto label_28788c;
            case 0x287890u: goto label_287890;
            case 0x287894u: goto label_287894;
            case 0x287898u: goto label_287898;
            case 0x28789Cu: goto label_28789c;
            case 0x2878A0u: goto label_2878a0;
            case 0x2878A4u: goto label_2878a4;
            case 0x2878A8u: goto label_2878a8;
            case 0x2878ACu: goto label_2878ac;
            case 0x2878B0u: goto label_2878b0;
            case 0x2878B4u: goto label_2878b4;
            case 0x2878B8u: goto label_2878b8;
            case 0x2878BCu: goto label_2878bc;
            case 0x2878C0u: goto label_2878c0;
            case 0x2878C4u: goto label_2878c4;
            case 0x2878C8u: goto label_2878c8;
            case 0x2878CCu: goto label_2878cc;
            case 0x2878D0u: goto label_2878d0;
            case 0x2878D4u: goto label_2878d4;
            case 0x2878D8u: goto label_2878d8;
            case 0x2878DCu: goto label_2878dc;
            case 0x2878E0u: goto label_2878e0;
            case 0x2878E4u: goto label_2878e4;
            case 0x2878E8u: goto label_2878e8;
            case 0x2878ECu: goto label_2878ec;
            case 0x2878F0u: goto label_2878f0;
            case 0x2878F4u: goto label_2878f4;
            case 0x2878F8u: goto label_2878f8;
            case 0x2878FCu: goto label_2878fc;
            case 0x287900u: goto label_287900;
            case 0x287904u: goto label_287904;
            case 0x287908u: goto label_287908;
            case 0x28790Cu: goto label_28790c;
            case 0x287910u: goto label_287910;
            case 0x287914u: goto label_287914;
            case 0x287918u: goto label_287918;
            case 0x28791Cu: goto label_28791c;
            case 0x287920u: goto label_287920;
            case 0x287924u: goto label_287924;
            case 0x287928u: goto label_287928;
            case 0x28792Cu: goto label_28792c;
            case 0x287930u: goto label_287930;
            case 0x287934u: goto label_287934;
            case 0x287938u: goto label_287938;
            case 0x28793Cu: goto label_28793c;
            case 0x287940u: goto label_287940;
            case 0x287944u: goto label_287944;
            case 0x287948u: goto label_287948;
            case 0x28794Cu: goto label_28794c;
            case 0x287950u: goto label_287950;
            case 0x287954u: goto label_287954;
            case 0x287958u: goto label_287958;
            case 0x28795Cu: goto label_28795c;
            case 0x287960u: goto label_287960;
            case 0x287964u: goto label_287964;
            case 0x287968u: goto label_287968;
            case 0x28796Cu: goto label_28796c;
            case 0x287970u: goto label_287970;
            case 0x287974u: goto label_287974;
            case 0x287978u: goto label_287978;
            case 0x28797Cu: goto label_28797c;
            case 0x287980u: goto label_287980;
            case 0x287984u: goto label_287984;
            case 0x287988u: goto label_287988;
            case 0x28798Cu: goto label_28798c;
            case 0x287990u: goto label_287990;
            case 0x287994u: goto label_287994;
            case 0x287998u: goto label_287998;
            case 0x28799Cu: goto label_28799c;
            case 0x2879A0u: goto label_2879a0;
            case 0x2879A4u: goto label_2879a4;
            case 0x2879A8u: goto label_2879a8;
            case 0x2879ACu: goto label_2879ac;
            case 0x2879B0u: goto label_2879b0;
            case 0x2879B4u: goto label_2879b4;
            case 0x2879B8u: goto label_2879b8;
            case 0x2879BCu: goto label_2879bc;
            case 0x2879C0u: goto label_2879c0;
            case 0x2879C4u: goto label_2879c4;
            case 0x2879C8u: goto label_2879c8;
            case 0x2879CCu: goto label_2879cc;
            case 0x2879D0u: goto label_2879d0;
            case 0x2879D4u: goto label_2879d4;
            case 0x2879D8u: goto label_2879d8;
            case 0x2879DCu: goto label_2879dc;
            case 0x2879E0u: goto label_2879e0;
            case 0x2879E4u: goto label_2879e4;
            case 0x2879E8u: goto label_2879e8;
            case 0x2879ECu: goto label_2879ec;
            case 0x2879F0u: goto label_2879f0;
            case 0x2879F4u: goto label_2879f4;
            case 0x2879F8u: goto label_2879f8;
            case 0x2879FCu: goto label_2879fc;
            case 0x287A00u: goto label_287a00;
            case 0x287A04u: goto label_287a04;
            case 0x287A08u: goto label_287a08;
            case 0x287A0Cu: goto label_287a0c;
            case 0x287A10u: goto label_287a10;
            case 0x287A14u: goto label_287a14;
            case 0x287A18u: goto label_287a18;
            case 0x287A1Cu: goto label_287a1c;
            case 0x287A20u: goto label_287a20;
            case 0x287A24u: goto label_287a24;
            case 0x287A28u: goto label_287a28;
            case 0x287A2Cu: goto label_287a2c;
            case 0x287A30u: goto label_287a30;
            case 0x287A34u: goto label_287a34;
            case 0x287A38u: goto label_287a38;
            case 0x287A3Cu: goto label_287a3c;
            case 0x287A40u: goto label_287a40;
            case 0x287A44u: goto label_287a44;
            case 0x287A48u: goto label_287a48;
            case 0x287A4Cu: goto label_287a4c;
            case 0x287A50u: goto label_287a50;
            case 0x287A54u: goto label_287a54;
            case 0x287A58u: goto label_287a58;
            case 0x287A5Cu: goto label_287a5c;
            case 0x287A60u: goto label_287a60;
            case 0x287A64u: goto label_287a64;
            case 0x287A68u: goto label_287a68;
            case 0x287A6Cu: goto label_287a6c;
            case 0x287A70u: goto label_287a70;
            case 0x287A74u: goto label_287a74;
            case 0x287A78u: goto label_287a78;
            case 0x287A7Cu: goto label_287a7c;
            case 0x287A80u: goto label_287a80;
            case 0x287A84u: goto label_287a84;
            case 0x287A88u: goto label_287a88;
            case 0x287A8Cu: goto label_287a8c;
            case 0x287A90u: goto label_287a90;
            case 0x287A94u: goto label_287a94;
            case 0x287A98u: goto label_287a98;
            case 0x287A9Cu: goto label_287a9c;
            case 0x287AA0u: goto label_287aa0;
            case 0x287AA4u: goto label_287aa4;
            case 0x287AA8u: goto label_287aa8;
            case 0x287AACu: goto label_287aac;
            case 0x287AB0u: goto label_287ab0;
            case 0x287AB4u: goto label_287ab4;
            case 0x287AB8u: goto label_287ab8;
            case 0x287ABCu: goto label_287abc;
            case 0x287AC0u: goto label_287ac0;
            case 0x287AC4u: goto label_287ac4;
            case 0x287AC8u: goto label_287ac8;
            case 0x287ACCu: goto label_287acc;
            case 0x287AD0u: goto label_287ad0;
            case 0x287AD4u: goto label_287ad4;
            case 0x287AD8u: goto label_287ad8;
            case 0x287ADCu: goto label_287adc;
            case 0x287AE0u: goto label_287ae0;
            case 0x287AE4u: goto label_287ae4;
            case 0x287AE8u: goto label_287ae8;
            case 0x287AECu: goto label_287aec;
            case 0x287AF0u: goto label_287af0;
            case 0x287AF4u: goto label_287af4;
            case 0x287AF8u: goto label_287af8;
            case 0x287AFCu: goto label_287afc;
            case 0x287B00u: goto label_287b00;
            case 0x287B04u: goto label_287b04;
            case 0x287B08u: goto label_287b08;
            case 0x287B0Cu: goto label_287b0c;
            case 0x287B10u: goto label_287b10;
            case 0x287B14u: goto label_287b14;
            case 0x287B18u: goto label_287b18;
            case 0x287B1Cu: goto label_287b1c;
            case 0x287B20u: goto label_287b20;
            case 0x287B24u: goto label_287b24;
            case 0x287B28u: goto label_287b28;
            case 0x287B2Cu: goto label_287b2c;
            case 0x287B30u: goto label_287b30;
            case 0x287B34u: goto label_287b34;
            case 0x287B38u: goto label_287b38;
            case 0x287B3Cu: goto label_287b3c;
            case 0x287B40u: goto label_287b40;
            case 0x287B44u: goto label_287b44;
            case 0x287B48u: goto label_287b48;
            case 0x287B4Cu: goto label_287b4c;
            case 0x287B50u: goto label_287b50;
            case 0x287B54u: goto label_287b54;
            case 0x287B58u: goto label_287b58;
            case 0x287B5Cu: goto label_287b5c;
            case 0x287B60u: goto label_287b60;
            case 0x287B64u: goto label_287b64;
            case 0x287B68u: goto label_287b68;
            case 0x287B6Cu: goto label_287b6c;
            case 0x287B70u: goto label_287b70;
            case 0x287B74u: goto label_287b74;
            case 0x287B78u: goto label_287b78;
            case 0x287B7Cu: goto label_287b7c;
            case 0x287B80u: goto label_287b80;
            case 0x287B84u: goto label_287b84;
            case 0x287B88u: goto label_287b88;
            case 0x287B8Cu: goto label_287b8c;
            case 0x287B90u: goto label_287b90;
            case 0x287B94u: goto label_287b94;
            case 0x287B98u: goto label_287b98;
            case 0x287B9Cu: goto label_287b9c;
            case 0x287BA0u: goto label_287ba0;
            case 0x287BA4u: goto label_287ba4;
            case 0x287BA8u: goto label_287ba8;
            case 0x287BACu: goto label_287bac;
            case 0x287BB0u: goto label_287bb0;
            case 0x287BB4u: goto label_287bb4;
            case 0x287BB8u: goto label_287bb8;
            case 0x287BBCu: goto label_287bbc;
            case 0x287BC0u: goto label_287bc0;
            case 0x287BC4u: goto label_287bc4;
            case 0x287BC8u: goto label_287bc8;
            case 0x287BCCu: goto label_287bcc;
            case 0x287BD0u: goto label_287bd0;
            case 0x287BD4u: goto label_287bd4;
            case 0x287BD8u: goto label_287bd8;
            case 0x287BDCu: goto label_287bdc;
            case 0x287BE0u: goto label_287be0;
            case 0x287BE4u: goto label_287be4;
            case 0x287BE8u: goto label_287be8;
            case 0x287BECu: goto label_287bec;
            case 0x287BF0u: goto label_287bf0;
            case 0x287BF4u: goto label_287bf4;
            case 0x287BF8u: goto label_287bf8;
            case 0x287BFCu: goto label_287bfc;
            case 0x287C00u: goto label_287c00;
            case 0x287C04u: goto label_287c04;
            case 0x287C08u: goto label_287c08;
            case 0x287C0Cu: goto label_287c0c;
            case 0x287C10u: goto label_287c10;
            case 0x287C14u: goto label_287c14;
            case 0x287C18u: goto label_287c18;
            case 0x287C1Cu: goto label_287c1c;
            case 0x287C20u: goto label_287c20;
            case 0x287C24u: goto label_287c24;
            case 0x287C28u: goto label_287c28;
            case 0x287C2Cu: goto label_287c2c;
            case 0x287C30u: goto label_287c30;
            case 0x287C34u: goto label_287c34;
            case 0x287C38u: goto label_287c38;
            case 0x287C3Cu: goto label_287c3c;
            case 0x287C40u: goto label_287c40;
            case 0x287C44u: goto label_287c44;
            case 0x287C48u: goto label_287c48;
            case 0x287C4Cu: goto label_287c4c;
            case 0x287C50u: goto label_287c50;
            case 0x287C54u: goto label_287c54;
            case 0x287C58u: goto label_287c58;
            case 0x287C5Cu: goto label_287c5c;
            case 0x287C60u: goto label_287c60;
            case 0x287C64u: goto label_287c64;
            case 0x287C68u: goto label_287c68;
            case 0x287C6Cu: goto label_287c6c;
            case 0x287C70u: goto label_287c70;
            case 0x287C74u: goto label_287c74;
            case 0x287C78u: goto label_287c78;
            case 0x287C7Cu: goto label_287c7c;
            case 0x287C80u: goto label_287c80;
            case 0x287C84u: goto label_287c84;
            case 0x287C88u: goto label_287c88;
            case 0x287C8Cu: goto label_287c8c;
            case 0x287C90u: goto label_287c90;
            case 0x287C94u: goto label_287c94;
            case 0x287C98u: goto label_287c98;
            case 0x287C9Cu: goto label_287c9c;
            case 0x287CA0u: goto label_287ca0;
            case 0x287CA4u: goto label_287ca4;
            case 0x287CA8u: goto label_287ca8;
            case 0x287CACu: goto label_287cac;
            case 0x287CB0u: goto label_287cb0;
            case 0x287CB4u: goto label_287cb4;
            case 0x287CB8u: goto label_287cb8;
            case 0x287CBCu: goto label_287cbc;
            case 0x287CC0u: goto label_287cc0;
            case 0x287CC4u: goto label_287cc4;
            case 0x287CC8u: goto label_287cc8;
            case 0x287CCCu: goto label_287ccc;
            case 0x287CD0u: goto label_287cd0;
            case 0x287CD4u: goto label_287cd4;
            case 0x287CD8u: goto label_287cd8;
            case 0x287CDCu: goto label_287cdc;
            case 0x287CE0u: goto label_287ce0;
            case 0x287CE4u: goto label_287ce4;
            case 0x287CE8u: goto label_287ce8;
            case 0x287CECu: goto label_287cec;
            case 0x287CF0u: goto label_287cf0;
            case 0x287CF4u: goto label_287cf4;
            case 0x287CF8u: goto label_287cf8;
            case 0x287CFCu: goto label_287cfc;
            case 0x287D00u: goto label_287d00;
            case 0x287D04u: goto label_287d04;
            case 0x287D08u: goto label_287d08;
            case 0x287D0Cu: goto label_287d0c;
            case 0x287D10u: goto label_287d10;
            case 0x287D14u: goto label_287d14;
            case 0x287D18u: goto label_287d18;
            case 0x287D1Cu: goto label_287d1c;
            case 0x287D20u: goto label_287d20;
            case 0x287D24u: goto label_287d24;
            case 0x287D28u: goto label_287d28;
            case 0x287D2Cu: goto label_287d2c;
            case 0x287D30u: goto label_287d30;
            case 0x287D34u: goto label_287d34;
            case 0x287D38u: goto label_287d38;
            case 0x287D3Cu: goto label_287d3c;
            case 0x287D40u: goto label_287d40;
            case 0x287D44u: goto label_287d44;
            case 0x287D48u: goto label_287d48;
            case 0x287D4Cu: goto label_287d4c;
            case 0x287D50u: goto label_287d50;
            case 0x287D54u: goto label_287d54;
            case 0x287D58u: goto label_287d58;
            case 0x287D5Cu: goto label_287d5c;
            case 0x287D60u: goto label_287d60;
            case 0x287D64u: goto label_287d64;
            case 0x287D68u: goto label_287d68;
            case 0x287D6Cu: goto label_287d6c;
            case 0x287D70u: goto label_287d70;
            case 0x287D74u: goto label_287d74;
            case 0x287D78u: goto label_287d78;
            case 0x287D7Cu: goto label_287d7c;
            case 0x287D80u: goto label_287d80;
            case 0x287D84u: goto label_287d84;
            case 0x287D88u: goto label_287d88;
            case 0x287D8Cu: goto label_287d8c;
            case 0x287D90u: goto label_287d90;
            case 0x287D94u: goto label_287d94;
            case 0x287D98u: goto label_287d98;
            case 0x287D9Cu: goto label_287d9c;
            case 0x287DA0u: goto label_287da0;
            case 0x287DA4u: goto label_287da4;
            case 0x287DA8u: goto label_287da8;
            case 0x287DACu: goto label_287dac;
            case 0x287DB0u: goto label_287db0;
            case 0x287DB4u: goto label_287db4;
            case 0x287DB8u: goto label_287db8;
            case 0x287DBCu: goto label_287dbc;
            case 0x287DC0u: goto label_287dc0;
            case 0x287DC4u: goto label_287dc4;
            case 0x287DC8u: goto label_287dc8;
            case 0x287DCCu: goto label_287dcc;
            case 0x287DD0u: goto label_287dd0;
            case 0x287DD4u: goto label_287dd4;
            case 0x287DD8u: goto label_287dd8;
            case 0x287DDCu: goto label_287ddc;
            case 0x287DE0u: goto label_287de0;
            case 0x287DE4u: goto label_287de4;
            case 0x287DE8u: goto label_287de8;
            case 0x287DECu: goto label_287dec;
            case 0x287DF0u: goto label_287df0;
            case 0x287DF4u: goto label_287df4;
            case 0x287DF8u: goto label_287df8;
            case 0x287DFCu: goto label_287dfc;
            case 0x287E00u: goto label_287e00;
            case 0x287E04u: goto label_287e04;
            case 0x287E08u: goto label_287e08;
            case 0x287E0Cu: goto label_287e0c;
            case 0x287E10u: goto label_287e10;
            case 0x287E14u: goto label_287e14;
            case 0x287E18u: goto label_287e18;
            case 0x287E1Cu: goto label_287e1c;
            case 0x287E20u: goto label_287e20;
            case 0x287E24u: goto label_287e24;
            case 0x287E28u: goto label_287e28;
            case 0x287E2Cu: goto label_287e2c;
            case 0x287E30u: goto label_287e30;
            case 0x287E34u: goto label_287e34;
            case 0x287E38u: goto label_287e38;
            case 0x287E3Cu: goto label_287e3c;
            case 0x287E40u: goto label_287e40;
            case 0x287E44u: goto label_287e44;
            case 0x287E48u: goto label_287e48;
            case 0x287E4Cu: goto label_287e4c;
            case 0x287E50u: goto label_287e50;
            case 0x287E54u: goto label_287e54;
            case 0x287E58u: goto label_287e58;
            case 0x287E5Cu: goto label_287e5c;
            case 0x287E60u: goto label_287e60;
            case 0x287E64u: goto label_287e64;
            case 0x287E68u: goto label_287e68;
            case 0x287E6Cu: goto label_287e6c;
            case 0x287E70u: goto label_287e70;
            case 0x287E74u: goto label_287e74;
            case 0x287E78u: goto label_287e78;
            case 0x287E7Cu: goto label_287e7c;
            case 0x287E80u: goto label_287e80;
            case 0x287E84u: goto label_287e84;
            case 0x287E88u: goto label_287e88;
            case 0x287E8Cu: goto label_287e8c;
            case 0x287E90u: goto label_287e90;
            case 0x287E94u: goto label_287e94;
            case 0x287E98u: goto label_287e98;
            case 0x287E9Cu: goto label_287e9c;
            case 0x287EA0u: goto label_287ea0;
            case 0x287EA4u: goto label_287ea4;
            case 0x287EA8u: goto label_287ea8;
            case 0x287EACu: goto label_287eac;
            case 0x287EB0u: goto label_287eb0;
            case 0x287EB4u: goto label_287eb4;
            case 0x287EB8u: goto label_287eb8;
            case 0x287EBCu: goto label_287ebc;
            case 0x287EC0u: goto label_287ec0;
            case 0x287EC4u: goto label_287ec4;
            case 0x287EC8u: goto label_287ec8;
            case 0x287ECCu: goto label_287ecc;
            case 0x287ED0u: goto label_287ed0;
            case 0x287ED4u: goto label_287ed4;
            case 0x287ED8u: goto label_287ed8;
            case 0x287EDCu: goto label_287edc;
            case 0x287EE0u: goto label_287ee0;
            case 0x287EE4u: goto label_287ee4;
            case 0x287EE8u: goto label_287ee8;
            case 0x287EECu: goto label_287eec;
            case 0x287EF0u: goto label_287ef0;
            case 0x287EF4u: goto label_287ef4;
            case 0x287EF8u: goto label_287ef8;
            case 0x287EFCu: goto label_287efc;
            case 0x287F00u: goto label_287f00;
            case 0x287F04u: goto label_287f04;
            case 0x287F08u: goto label_287f08;
            case 0x287F0Cu: goto label_287f0c;
            case 0x287F10u: goto label_287f10;
            case 0x287F14u: goto label_287f14;
            case 0x287F18u: goto label_287f18;
            case 0x287F1Cu: goto label_287f1c;
            case 0x287F20u: goto label_287f20;
            case 0x287F24u: goto label_287f24;
            case 0x287F28u: goto label_287f28;
            case 0x287F2Cu: goto label_287f2c;
            case 0x287F30u: goto label_287f30;
            case 0x287F34u: goto label_287f34;
            case 0x287F38u: goto label_287f38;
            case 0x287F3Cu: goto label_287f3c;
            case 0x287F40u: goto label_287f40;
            case 0x287F44u: goto label_287f44;
            case 0x287F48u: goto label_287f48;
            case 0x287F4Cu: goto label_287f4c;
            case 0x287F50u: goto label_287f50;
            case 0x287F54u: goto label_287f54;
            case 0x287F58u: goto label_287f58;
            case 0x287F5Cu: goto label_287f5c;
            case 0x287F60u: goto label_287f60;
            case 0x287F64u: goto label_287f64;
            case 0x287F68u: goto label_287f68;
            case 0x287F6Cu: goto label_287f6c;
            case 0x287F70u: goto label_287f70;
            case 0x287F74u: goto label_287f74;
            case 0x287F78u: goto label_287f78;
            case 0x287F7Cu: goto label_287f7c;
            case 0x287F80u: goto label_287f80;
            case 0x287F84u: goto label_287f84;
            case 0x287F88u: goto label_287f88;
            case 0x287F8Cu: goto label_287f8c;
            case 0x287F90u: goto label_287f90;
            case 0x287F94u: goto label_287f94;
            case 0x287F98u: goto label_287f98;
            case 0x287F9Cu: goto label_287f9c;
            case 0x287FA0u: goto label_287fa0;
            case 0x287FA4u: goto label_287fa4;
            case 0x287FA8u: goto label_287fa8;
            case 0x287FACu: goto label_287fac;
            case 0x287FB0u: goto label_287fb0;
            case 0x287FB4u: goto label_287fb4;
            case 0x287FB8u: goto label_287fb8;
            case 0x287FBCu: goto label_287fbc;
            case 0x287FC0u: goto label_287fc0;
            case 0x287FC4u: goto label_287fc4;
            case 0x287FC8u: goto label_287fc8;
            case 0x287FCCu: goto label_287fcc;
            case 0x287FD0u: goto label_287fd0;
            case 0x287FD4u: goto label_287fd4;
            case 0x287FD8u: goto label_287fd8;
            case 0x287FDCu: goto label_287fdc;
            case 0x287FE0u: goto label_287fe0;
            case 0x287FE4u: goto label_287fe4;
            case 0x287FE8u: goto label_287fe8;
            case 0x287FECu: goto label_287fec;
            case 0x287FF0u: goto label_287ff0;
            case 0x287FF4u: goto label_287ff4;
            case 0x287FF8u: goto label_287ff8;
            case 0x287FFCu: goto label_287ffc;
            case 0x288000u: goto label_288000;
            case 0x288004u: goto label_288004;
            case 0x288008u: goto label_288008;
            case 0x28800Cu: goto label_28800c;
            case 0x288010u: goto label_288010;
            case 0x288014u: goto label_288014;
            case 0x288018u: goto label_288018;
            case 0x28801Cu: goto label_28801c;
            case 0x288020u: goto label_288020;
            case 0x288024u: goto label_288024;
            case 0x288028u: goto label_288028;
            case 0x28802Cu: goto label_28802c;
            case 0x288030u: goto label_288030;
            case 0x288034u: goto label_288034;
            case 0x288038u: goto label_288038;
            default: break;
        }
        return;
    }
label_fallthrough_0x288034:
    ctx->pc = 0x28803Cu;
}
