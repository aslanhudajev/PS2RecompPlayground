#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TowerCheckMessages
// Address: 0x275ce0 - 0x276680
void TowerCheckMessages_0x275ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x275ce0u;

label_275ce0:
    // 0x275ce0: 0x27bdff30
    ctx->pc = 0x275ce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
label_275ce4:
    // 0x275ce4: 0xffbf00c0
    ctx->pc = 0x275ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_275ce8:
    // 0x275ce8: 0xffb700b0
    ctx->pc = 0x275ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_275cec:
    // 0x275cec: 0xffb600a0
    ctx->pc = 0x275cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_275cf0:
    // 0x275cf0: 0xffb50090
    ctx->pc = 0x275cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_275cf4:
    // 0x275cf4: 0xffb40080
    ctx->pc = 0x275cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_275cf8:
    // 0x275cf8: 0xffb30070
    ctx->pc = 0x275cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_275cfc:
    // 0x275cfc: 0xffb20060
    ctx->pc = 0x275cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_275d00:
    // 0x275d00: 0xffb10050
    ctx->pc = 0x275d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_275d04:
    // 0x275d04: 0xffb00040
    ctx->pc = 0x275d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_275d08:
    // 0x275d08: 0x3c020034
    ctx->pc = 0x275d08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_275d0c:
    // 0x275d0c: 0x8c43e7f0
    ctx->pc = 0x275d0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_275d10:
    // 0x275d10: 0x2402000d
    ctx->pc = 0x275d10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_275d14:
    // 0x275d14: 0x1462024f
label_275d18:
    if (ctx->pc == 0x275D18u) {
        ctx->pc = 0x275D18u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x275D1Cu;
        goto label_275d1c;
    }
    ctx->pc = 0x275D14u;
    {
        const bool branch_taken_0x275d14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x275D18u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x275d14) {
            ctx->pc = 0x276654u;
            goto label_276654;
        }
    }
    ctx->pc = 0x275D1Cu;
label_275d1c:
    // 0x275d1c: 0x3c020031
    ctx->pc = 0x275d1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_275d20:
    // 0x275d20: 0x8c430018
    ctx->pc = 0x275d20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_275d24:
    // 0x275d24: 0x24024010
    ctx->pc = 0x275d24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_275d28:
    // 0x275d28: 0x14620006
label_275d2c:
    if (ctx->pc == 0x275D2Cu) {
        ctx->pc = 0x275D2Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x275D30u;
        goto label_275d30;
    }
    ctx->pc = 0x275D28u;
    {
        const bool branch_taken_0x275d28 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x275D2Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x275d28) {
            ctx->pc = 0x275D44u;
            goto label_275d44;
        }
    }
    ctx->pc = 0x275D30u;
label_275d30:
    // 0x275d30: 0xc09d3ec
label_275d34:
    if (ctx->pc == 0x275D34u) {
        ctx->pc = 0x275D38u;
        goto label_275d38;
    }
    ctx->pc = 0x275D30u;
    SET_GPR_U32(ctx, 31, 0x275D38u);
    ctx->pc = 0x274FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerDoSpeech_0x274fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D38u; }
    }
    if (ctx->pc != 0x275D38u) { return; }
    ctx->pc = 0x275D38u;
label_275d38:
    // 0x275d38: 0xc09d1e2
label_275d3c:
    if (ctx->pc == 0x275D3Cu) {
        ctx->pc = 0x275D40u;
        goto label_275d40;
    }
    ctx->pc = 0x275D38u;
    SET_GPR_U32(ctx, 31, 0x275D40u);
    ctx->pc = 0x274788u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerAnimate_0x274788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D40u; }
    }
    if (ctx->pc != 0x275D40u) { return; }
    ctx->pc = 0x275D40u;
label_275d40:
    // 0x275d40: 0x3c020032
    ctx->pc = 0x275d40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_275d44:
    // 0x275d44: 0x8c420808
    ctx->pc = 0x275d44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2056)));
label_275d48:
    // 0x275d48: 0x14400243
label_275d4c:
    if (ctx->pc == 0x275D4Cu) {
        ctx->pc = 0x275D4Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x275D50u;
        goto label_275d50;
    }
    ctx->pc = 0x275D48u;
    {
        const bool branch_taken_0x275d48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x275D4Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x275d48) {
            ctx->pc = 0x276658u;
            goto label_276658;
        }
    }
    ctx->pc = 0x275D50u;
label_275d50:
    // 0x275d50: 0x3c020032
    ctx->pc = 0x275d50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_275d54:
    // 0x275d54: 0x8c42080c
    ctx->pc = 0x275d54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
label_275d58:
    // 0x275d58: 0x14400240
label_275d5c:
    if (ctx->pc == 0x275D5Cu) {
        ctx->pc = 0x275D5Cu;
        SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x275D60u;
        goto label_275d60;
    }
    ctx->pc = 0x275D58u;
    {
        const bool branch_taken_0x275d58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x275D5Cu;
        SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x275d58) {
            ctx->pc = 0x27665Cu;
            goto label_27665c;
        }
    }
    ctx->pc = 0x275D60u;
label_275d60:
    // 0x275d60: 0x3c020034
    ctx->pc = 0x275d60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_275d64:
    // 0x275d64: 0x8c43fbe4
    ctx->pc = 0x275d64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966244)));
label_275d68:
    // 0x275d68: 0x2c620025
    ctx->pc = 0x275d68u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 37));
label_275d6c:
    // 0x275d6c: 0x104000b2
label_275d70:
    if (ctx->pc == 0x275D70u) {
        ctx->pc = 0x275D70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x275D74u;
        goto label_275d74;
    }
    ctx->pc = 0x275D6Cu;
    {
        const bool branch_taken_0x275d6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x275D70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x275d6c) {
            ctx->pc = 0x276038u;
            goto label_276038;
        }
    }
    ctx->pc = 0x275D74u;
label_275d74:
    // 0x275d74: 0x2442a940
    ctx->pc = 0x275d74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945088));
label_275d78:
    // 0x275d78: 0x31880
    ctx->pc = 0x275d78u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_275d7c:
    // 0x275d7c: 0x621821
    ctx->pc = 0x275d7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_275d80:
    // 0x275d80: 0x8c620000
    ctx->pc = 0x275d80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_275d84:
    // 0x275d84: 0x400008
label_275d88:
    if (ctx->pc == 0x275D88u) {
        ctx->pc = 0x275D8Cu;
        goto label_275d8c;
    }
    ctx->pc = 0x275D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x275CE0u: goto label_275ce0;
            case 0x275CE4u: goto label_275ce4;
            case 0x275CE8u: goto label_275ce8;
            case 0x275CECu: goto label_275cec;
            case 0x275CF0u: goto label_275cf0;
            case 0x275CF4u: goto label_275cf4;
            case 0x275CF8u: goto label_275cf8;
            case 0x275CFCu: goto label_275cfc;
            case 0x275D00u: goto label_275d00;
            case 0x275D04u: goto label_275d04;
            case 0x275D08u: goto label_275d08;
            case 0x275D0Cu: goto label_275d0c;
            case 0x275D10u: goto label_275d10;
            case 0x275D14u: goto label_275d14;
            case 0x275D18u: goto label_275d18;
            case 0x275D1Cu: goto label_275d1c;
            case 0x275D20u: goto label_275d20;
            case 0x275D24u: goto label_275d24;
            case 0x275D28u: goto label_275d28;
            case 0x275D2Cu: goto label_275d2c;
            case 0x275D30u: goto label_275d30;
            case 0x275D34u: goto label_275d34;
            case 0x275D38u: goto label_275d38;
            case 0x275D3Cu: goto label_275d3c;
            case 0x275D40u: goto label_275d40;
            case 0x275D44u: goto label_275d44;
            case 0x275D48u: goto label_275d48;
            case 0x275D4Cu: goto label_275d4c;
            case 0x275D50u: goto label_275d50;
            case 0x275D54u: goto label_275d54;
            case 0x275D58u: goto label_275d58;
            case 0x275D5Cu: goto label_275d5c;
            case 0x275D60u: goto label_275d60;
            case 0x275D64u: goto label_275d64;
            case 0x275D68u: goto label_275d68;
            case 0x275D6Cu: goto label_275d6c;
            case 0x275D70u: goto label_275d70;
            case 0x275D74u: goto label_275d74;
            case 0x275D78u: goto label_275d78;
            case 0x275D7Cu: goto label_275d7c;
            case 0x275D80u: goto label_275d80;
            case 0x275D84u: goto label_275d84;
            case 0x275D88u: goto label_275d88;
            case 0x275D8Cu: goto label_275d8c;
            case 0x275D90u: goto label_275d90;
            case 0x275D94u: goto label_275d94;
            case 0x275D98u: goto label_275d98;
            case 0x275D9Cu: goto label_275d9c;
            case 0x275DA0u: goto label_275da0;
            case 0x275DA4u: goto label_275da4;
            case 0x275DA8u: goto label_275da8;
            case 0x275DACu: goto label_275dac;
            case 0x275DB0u: goto label_275db0;
            case 0x275DB4u: goto label_275db4;
            case 0x275DB8u: goto label_275db8;
            case 0x275DBCu: goto label_275dbc;
            case 0x275DC0u: goto label_275dc0;
            case 0x275DC4u: goto label_275dc4;
            case 0x275DC8u: goto label_275dc8;
            case 0x275DCCu: goto label_275dcc;
            case 0x275DD0u: goto label_275dd0;
            case 0x275DD4u: goto label_275dd4;
            case 0x275DD8u: goto label_275dd8;
            case 0x275DDCu: goto label_275ddc;
            case 0x275DE0u: goto label_275de0;
            case 0x275DE4u: goto label_275de4;
            case 0x275DE8u: goto label_275de8;
            case 0x275DECu: goto label_275dec;
            case 0x275DF0u: goto label_275df0;
            case 0x275DF4u: goto label_275df4;
            case 0x275DF8u: goto label_275df8;
            case 0x275DFCu: goto label_275dfc;
            case 0x275E00u: goto label_275e00;
            case 0x275E04u: goto label_275e04;
            case 0x275E08u: goto label_275e08;
            case 0x275E0Cu: goto label_275e0c;
            case 0x275E10u: goto label_275e10;
            case 0x275E14u: goto label_275e14;
            case 0x275E18u: goto label_275e18;
            case 0x275E1Cu: goto label_275e1c;
            case 0x275E20u: goto label_275e20;
            case 0x275E24u: goto label_275e24;
            case 0x275E28u: goto label_275e28;
            case 0x275E2Cu: goto label_275e2c;
            case 0x275E30u: goto label_275e30;
            case 0x275E34u: goto label_275e34;
            case 0x275E38u: goto label_275e38;
            case 0x275E3Cu: goto label_275e3c;
            case 0x275E40u: goto label_275e40;
            case 0x275E44u: goto label_275e44;
            case 0x275E48u: goto label_275e48;
            case 0x275E4Cu: goto label_275e4c;
            case 0x275E50u: goto label_275e50;
            case 0x275E54u: goto label_275e54;
            case 0x275E58u: goto label_275e58;
            case 0x275E5Cu: goto label_275e5c;
            case 0x275E60u: goto label_275e60;
            case 0x275E64u: goto label_275e64;
            case 0x275E68u: goto label_275e68;
            case 0x275E6Cu: goto label_275e6c;
            case 0x275E70u: goto label_275e70;
            case 0x275E74u: goto label_275e74;
            case 0x275E78u: goto label_275e78;
            case 0x275E7Cu: goto label_275e7c;
            case 0x275E80u: goto label_275e80;
            case 0x275E84u: goto label_275e84;
            case 0x275E88u: goto label_275e88;
            case 0x275E8Cu: goto label_275e8c;
            case 0x275E90u: goto label_275e90;
            case 0x275E94u: goto label_275e94;
            case 0x275E98u: goto label_275e98;
            case 0x275E9Cu: goto label_275e9c;
            case 0x275EA0u: goto label_275ea0;
            case 0x275EA4u: goto label_275ea4;
            case 0x275EA8u: goto label_275ea8;
            case 0x275EACu: goto label_275eac;
            case 0x275EB0u: goto label_275eb0;
            case 0x275EB4u: goto label_275eb4;
            case 0x275EB8u: goto label_275eb8;
            case 0x275EBCu: goto label_275ebc;
            case 0x275EC0u: goto label_275ec0;
            case 0x275EC4u: goto label_275ec4;
            case 0x275EC8u: goto label_275ec8;
            case 0x275ECCu: goto label_275ecc;
            case 0x275ED0u: goto label_275ed0;
            case 0x275ED4u: goto label_275ed4;
            case 0x275ED8u: goto label_275ed8;
            case 0x275EDCu: goto label_275edc;
            case 0x275EE0u: goto label_275ee0;
            case 0x275EE4u: goto label_275ee4;
            case 0x275EE8u: goto label_275ee8;
            case 0x275EECu: goto label_275eec;
            case 0x275EF0u: goto label_275ef0;
            case 0x275EF4u: goto label_275ef4;
            case 0x275EF8u: goto label_275ef8;
            case 0x275EFCu: goto label_275efc;
            case 0x275F00u: goto label_275f00;
            case 0x275F04u: goto label_275f04;
            case 0x275F08u: goto label_275f08;
            case 0x275F0Cu: goto label_275f0c;
            case 0x275F10u: goto label_275f10;
            case 0x275F14u: goto label_275f14;
            case 0x275F18u: goto label_275f18;
            case 0x275F1Cu: goto label_275f1c;
            case 0x275F20u: goto label_275f20;
            case 0x275F24u: goto label_275f24;
            case 0x275F28u: goto label_275f28;
            case 0x275F2Cu: goto label_275f2c;
            case 0x275F30u: goto label_275f30;
            case 0x275F34u: goto label_275f34;
            case 0x275F38u: goto label_275f38;
            case 0x275F3Cu: goto label_275f3c;
            case 0x275F40u: goto label_275f40;
            case 0x275F44u: goto label_275f44;
            case 0x275F48u: goto label_275f48;
            case 0x275F4Cu: goto label_275f4c;
            case 0x275F50u: goto label_275f50;
            case 0x275F54u: goto label_275f54;
            case 0x275F58u: goto label_275f58;
            case 0x275F5Cu: goto label_275f5c;
            case 0x275F60u: goto label_275f60;
            case 0x275F64u: goto label_275f64;
            case 0x275F68u: goto label_275f68;
            case 0x275F6Cu: goto label_275f6c;
            case 0x275F70u: goto label_275f70;
            case 0x275F74u: goto label_275f74;
            case 0x275F78u: goto label_275f78;
            case 0x275F7Cu: goto label_275f7c;
            case 0x275F80u: goto label_275f80;
            case 0x275F84u: goto label_275f84;
            case 0x275F88u: goto label_275f88;
            case 0x275F8Cu: goto label_275f8c;
            case 0x275F90u: goto label_275f90;
            case 0x275F94u: goto label_275f94;
            case 0x275F98u: goto label_275f98;
            case 0x275F9Cu: goto label_275f9c;
            case 0x275FA0u: goto label_275fa0;
            case 0x275FA4u: goto label_275fa4;
            case 0x275FA8u: goto label_275fa8;
            case 0x275FACu: goto label_275fac;
            case 0x275FB0u: goto label_275fb0;
            case 0x275FB4u: goto label_275fb4;
            case 0x275FB8u: goto label_275fb8;
            case 0x275FBCu: goto label_275fbc;
            case 0x275FC0u: goto label_275fc0;
            case 0x275FC4u: goto label_275fc4;
            case 0x275FC8u: goto label_275fc8;
            case 0x275FCCu: goto label_275fcc;
            case 0x275FD0u: goto label_275fd0;
            case 0x275FD4u: goto label_275fd4;
            case 0x275FD8u: goto label_275fd8;
            case 0x275FDCu: goto label_275fdc;
            case 0x275FE0u: goto label_275fe0;
            case 0x275FE4u: goto label_275fe4;
            case 0x275FE8u: goto label_275fe8;
            case 0x275FECu: goto label_275fec;
            case 0x275FF0u: goto label_275ff0;
            case 0x275FF4u: goto label_275ff4;
            case 0x275FF8u: goto label_275ff8;
            case 0x275FFCu: goto label_275ffc;
            case 0x276000u: goto label_276000;
            case 0x276004u: goto label_276004;
            case 0x276008u: goto label_276008;
            case 0x27600Cu: goto label_27600c;
            case 0x276010u: goto label_276010;
            case 0x276014u: goto label_276014;
            case 0x276018u: goto label_276018;
            case 0x27601Cu: goto label_27601c;
            case 0x276020u: goto label_276020;
            case 0x276024u: goto label_276024;
            case 0x276028u: goto label_276028;
            case 0x27602Cu: goto label_27602c;
            case 0x276030u: goto label_276030;
            case 0x276034u: goto label_276034;
            case 0x276038u: goto label_276038;
            case 0x27603Cu: goto label_27603c;
            case 0x276040u: goto label_276040;
            case 0x276044u: goto label_276044;
            case 0x276048u: goto label_276048;
            case 0x27604Cu: goto label_27604c;
            case 0x276050u: goto label_276050;
            case 0x276054u: goto label_276054;
            case 0x276058u: goto label_276058;
            case 0x27605Cu: goto label_27605c;
            case 0x276060u: goto label_276060;
            case 0x276064u: goto label_276064;
            case 0x276068u: goto label_276068;
            case 0x27606Cu: goto label_27606c;
            case 0x276070u: goto label_276070;
            case 0x276074u: goto label_276074;
            case 0x276078u: goto label_276078;
            case 0x27607Cu: goto label_27607c;
            case 0x276080u: goto label_276080;
            case 0x276084u: goto label_276084;
            case 0x276088u: goto label_276088;
            case 0x27608Cu: goto label_27608c;
            case 0x276090u: goto label_276090;
            case 0x276094u: goto label_276094;
            case 0x276098u: goto label_276098;
            case 0x27609Cu: goto label_27609c;
            case 0x2760A0u: goto label_2760a0;
            case 0x2760A4u: goto label_2760a4;
            case 0x2760A8u: goto label_2760a8;
            case 0x2760ACu: goto label_2760ac;
            case 0x2760B0u: goto label_2760b0;
            case 0x2760B4u: goto label_2760b4;
            case 0x2760B8u: goto label_2760b8;
            case 0x2760BCu: goto label_2760bc;
            case 0x2760C0u: goto label_2760c0;
            case 0x2760C4u: goto label_2760c4;
            case 0x2760C8u: goto label_2760c8;
            case 0x2760CCu: goto label_2760cc;
            case 0x2760D0u: goto label_2760d0;
            case 0x2760D4u: goto label_2760d4;
            case 0x2760D8u: goto label_2760d8;
            case 0x2760DCu: goto label_2760dc;
            case 0x2760E0u: goto label_2760e0;
            case 0x2760E4u: goto label_2760e4;
            case 0x2760E8u: goto label_2760e8;
            case 0x2760ECu: goto label_2760ec;
            case 0x2760F0u: goto label_2760f0;
            case 0x2760F4u: goto label_2760f4;
            case 0x2760F8u: goto label_2760f8;
            case 0x2760FCu: goto label_2760fc;
            case 0x276100u: goto label_276100;
            case 0x276104u: goto label_276104;
            case 0x276108u: goto label_276108;
            case 0x27610Cu: goto label_27610c;
            case 0x276110u: goto label_276110;
            case 0x276114u: goto label_276114;
            case 0x276118u: goto label_276118;
            case 0x27611Cu: goto label_27611c;
            case 0x276120u: goto label_276120;
            case 0x276124u: goto label_276124;
            case 0x276128u: goto label_276128;
            case 0x27612Cu: goto label_27612c;
            case 0x276130u: goto label_276130;
            case 0x276134u: goto label_276134;
            case 0x276138u: goto label_276138;
            case 0x27613Cu: goto label_27613c;
            case 0x276140u: goto label_276140;
            case 0x276144u: goto label_276144;
            case 0x276148u: goto label_276148;
            case 0x27614Cu: goto label_27614c;
            case 0x276150u: goto label_276150;
            case 0x276154u: goto label_276154;
            case 0x276158u: goto label_276158;
            case 0x27615Cu: goto label_27615c;
            case 0x276160u: goto label_276160;
            case 0x276164u: goto label_276164;
            case 0x276168u: goto label_276168;
            case 0x27616Cu: goto label_27616c;
            case 0x276170u: goto label_276170;
            case 0x276174u: goto label_276174;
            case 0x276178u: goto label_276178;
            case 0x27617Cu: goto label_27617c;
            case 0x276180u: goto label_276180;
            case 0x276184u: goto label_276184;
            case 0x276188u: goto label_276188;
            case 0x27618Cu: goto label_27618c;
            case 0x276190u: goto label_276190;
            case 0x276194u: goto label_276194;
            case 0x276198u: goto label_276198;
            case 0x27619Cu: goto label_27619c;
            case 0x2761A0u: goto label_2761a0;
            case 0x2761A4u: goto label_2761a4;
            case 0x2761A8u: goto label_2761a8;
            case 0x2761ACu: goto label_2761ac;
            case 0x2761B0u: goto label_2761b0;
            case 0x2761B4u: goto label_2761b4;
            case 0x2761B8u: goto label_2761b8;
            case 0x2761BCu: goto label_2761bc;
            case 0x2761C0u: goto label_2761c0;
            case 0x2761C4u: goto label_2761c4;
            case 0x2761C8u: goto label_2761c8;
            case 0x2761CCu: goto label_2761cc;
            case 0x2761D0u: goto label_2761d0;
            case 0x2761D4u: goto label_2761d4;
            case 0x2761D8u: goto label_2761d8;
            case 0x2761DCu: goto label_2761dc;
            case 0x2761E0u: goto label_2761e0;
            case 0x2761E4u: goto label_2761e4;
            case 0x2761E8u: goto label_2761e8;
            case 0x2761ECu: goto label_2761ec;
            case 0x2761F0u: goto label_2761f0;
            case 0x2761F4u: goto label_2761f4;
            case 0x2761F8u: goto label_2761f8;
            case 0x2761FCu: goto label_2761fc;
            case 0x276200u: goto label_276200;
            case 0x276204u: goto label_276204;
            case 0x276208u: goto label_276208;
            case 0x27620Cu: goto label_27620c;
            case 0x276210u: goto label_276210;
            case 0x276214u: goto label_276214;
            case 0x276218u: goto label_276218;
            case 0x27621Cu: goto label_27621c;
            case 0x276220u: goto label_276220;
            case 0x276224u: goto label_276224;
            case 0x276228u: goto label_276228;
            case 0x27622Cu: goto label_27622c;
            case 0x276230u: goto label_276230;
            case 0x276234u: goto label_276234;
            case 0x276238u: goto label_276238;
            case 0x27623Cu: goto label_27623c;
            case 0x276240u: goto label_276240;
            case 0x276244u: goto label_276244;
            case 0x276248u: goto label_276248;
            case 0x27624Cu: goto label_27624c;
            case 0x276250u: goto label_276250;
            case 0x276254u: goto label_276254;
            case 0x276258u: goto label_276258;
            case 0x27625Cu: goto label_27625c;
            case 0x276260u: goto label_276260;
            case 0x276264u: goto label_276264;
            case 0x276268u: goto label_276268;
            case 0x27626Cu: goto label_27626c;
            case 0x276270u: goto label_276270;
            case 0x276274u: goto label_276274;
            case 0x276278u: goto label_276278;
            case 0x27627Cu: goto label_27627c;
            case 0x276280u: goto label_276280;
            case 0x276284u: goto label_276284;
            case 0x276288u: goto label_276288;
            case 0x27628Cu: goto label_27628c;
            case 0x276290u: goto label_276290;
            case 0x276294u: goto label_276294;
            case 0x276298u: goto label_276298;
            case 0x27629Cu: goto label_27629c;
            case 0x2762A0u: goto label_2762a0;
            case 0x2762A4u: goto label_2762a4;
            case 0x2762A8u: goto label_2762a8;
            case 0x2762ACu: goto label_2762ac;
            case 0x2762B0u: goto label_2762b0;
            case 0x2762B4u: goto label_2762b4;
            case 0x2762B8u: goto label_2762b8;
            case 0x2762BCu: goto label_2762bc;
            case 0x2762C0u: goto label_2762c0;
            case 0x2762C4u: goto label_2762c4;
            case 0x2762C8u: goto label_2762c8;
            case 0x2762CCu: goto label_2762cc;
            case 0x2762D0u: goto label_2762d0;
            case 0x2762D4u: goto label_2762d4;
            case 0x2762D8u: goto label_2762d8;
            case 0x2762DCu: goto label_2762dc;
            case 0x2762E0u: goto label_2762e0;
            case 0x2762E4u: goto label_2762e4;
            case 0x2762E8u: goto label_2762e8;
            case 0x2762ECu: goto label_2762ec;
            case 0x2762F0u: goto label_2762f0;
            case 0x2762F4u: goto label_2762f4;
            case 0x2762F8u: goto label_2762f8;
            case 0x2762FCu: goto label_2762fc;
            case 0x276300u: goto label_276300;
            case 0x276304u: goto label_276304;
            case 0x276308u: goto label_276308;
            case 0x27630Cu: goto label_27630c;
            case 0x276310u: goto label_276310;
            case 0x276314u: goto label_276314;
            case 0x276318u: goto label_276318;
            case 0x27631Cu: goto label_27631c;
            case 0x276320u: goto label_276320;
            case 0x276324u: goto label_276324;
            case 0x276328u: goto label_276328;
            case 0x27632Cu: goto label_27632c;
            case 0x276330u: goto label_276330;
            case 0x276334u: goto label_276334;
            case 0x276338u: goto label_276338;
            case 0x27633Cu: goto label_27633c;
            case 0x276340u: goto label_276340;
            case 0x276344u: goto label_276344;
            case 0x276348u: goto label_276348;
            case 0x27634Cu: goto label_27634c;
            case 0x276350u: goto label_276350;
            case 0x276354u: goto label_276354;
            case 0x276358u: goto label_276358;
            case 0x27635Cu: goto label_27635c;
            case 0x276360u: goto label_276360;
            case 0x276364u: goto label_276364;
            case 0x276368u: goto label_276368;
            case 0x27636Cu: goto label_27636c;
            case 0x276370u: goto label_276370;
            case 0x276374u: goto label_276374;
            case 0x276378u: goto label_276378;
            case 0x27637Cu: goto label_27637c;
            case 0x276380u: goto label_276380;
            case 0x276384u: goto label_276384;
            case 0x276388u: goto label_276388;
            case 0x27638Cu: goto label_27638c;
            case 0x276390u: goto label_276390;
            case 0x276394u: goto label_276394;
            case 0x276398u: goto label_276398;
            case 0x27639Cu: goto label_27639c;
            case 0x2763A0u: goto label_2763a0;
            case 0x2763A4u: goto label_2763a4;
            case 0x2763A8u: goto label_2763a8;
            case 0x2763ACu: goto label_2763ac;
            case 0x2763B0u: goto label_2763b0;
            case 0x2763B4u: goto label_2763b4;
            case 0x2763B8u: goto label_2763b8;
            case 0x2763BCu: goto label_2763bc;
            case 0x2763C0u: goto label_2763c0;
            case 0x2763C4u: goto label_2763c4;
            case 0x2763C8u: goto label_2763c8;
            case 0x2763CCu: goto label_2763cc;
            case 0x2763D0u: goto label_2763d0;
            case 0x2763D4u: goto label_2763d4;
            case 0x2763D8u: goto label_2763d8;
            case 0x2763DCu: goto label_2763dc;
            case 0x2763E0u: goto label_2763e0;
            case 0x2763E4u: goto label_2763e4;
            case 0x2763E8u: goto label_2763e8;
            case 0x2763ECu: goto label_2763ec;
            case 0x2763F0u: goto label_2763f0;
            case 0x2763F4u: goto label_2763f4;
            case 0x2763F8u: goto label_2763f8;
            case 0x2763FCu: goto label_2763fc;
            case 0x276400u: goto label_276400;
            case 0x276404u: goto label_276404;
            case 0x276408u: goto label_276408;
            case 0x27640Cu: goto label_27640c;
            case 0x276410u: goto label_276410;
            case 0x276414u: goto label_276414;
            case 0x276418u: goto label_276418;
            case 0x27641Cu: goto label_27641c;
            case 0x276420u: goto label_276420;
            case 0x276424u: goto label_276424;
            case 0x276428u: goto label_276428;
            case 0x27642Cu: goto label_27642c;
            case 0x276430u: goto label_276430;
            case 0x276434u: goto label_276434;
            case 0x276438u: goto label_276438;
            case 0x27643Cu: goto label_27643c;
            case 0x276440u: goto label_276440;
            case 0x276444u: goto label_276444;
            case 0x276448u: goto label_276448;
            case 0x27644Cu: goto label_27644c;
            case 0x276450u: goto label_276450;
            case 0x276454u: goto label_276454;
            case 0x276458u: goto label_276458;
            case 0x27645Cu: goto label_27645c;
            case 0x276460u: goto label_276460;
            case 0x276464u: goto label_276464;
            case 0x276468u: goto label_276468;
            case 0x27646Cu: goto label_27646c;
            case 0x276470u: goto label_276470;
            case 0x276474u: goto label_276474;
            case 0x276478u: goto label_276478;
            case 0x27647Cu: goto label_27647c;
            case 0x276480u: goto label_276480;
            case 0x276484u: goto label_276484;
            case 0x276488u: goto label_276488;
            case 0x27648Cu: goto label_27648c;
            case 0x276490u: goto label_276490;
            case 0x276494u: goto label_276494;
            case 0x276498u: goto label_276498;
            case 0x27649Cu: goto label_27649c;
            case 0x2764A0u: goto label_2764a0;
            case 0x2764A4u: goto label_2764a4;
            case 0x2764A8u: goto label_2764a8;
            case 0x2764ACu: goto label_2764ac;
            case 0x2764B0u: goto label_2764b0;
            case 0x2764B4u: goto label_2764b4;
            case 0x2764B8u: goto label_2764b8;
            case 0x2764BCu: goto label_2764bc;
            case 0x2764C0u: goto label_2764c0;
            case 0x2764C4u: goto label_2764c4;
            case 0x2764C8u: goto label_2764c8;
            case 0x2764CCu: goto label_2764cc;
            case 0x2764D0u: goto label_2764d0;
            case 0x2764D4u: goto label_2764d4;
            case 0x2764D8u: goto label_2764d8;
            case 0x2764DCu: goto label_2764dc;
            case 0x2764E0u: goto label_2764e0;
            case 0x2764E4u: goto label_2764e4;
            case 0x2764E8u: goto label_2764e8;
            case 0x2764ECu: goto label_2764ec;
            case 0x2764F0u: goto label_2764f0;
            case 0x2764F4u: goto label_2764f4;
            case 0x2764F8u: goto label_2764f8;
            case 0x2764FCu: goto label_2764fc;
            case 0x276500u: goto label_276500;
            case 0x276504u: goto label_276504;
            case 0x276508u: goto label_276508;
            case 0x27650Cu: goto label_27650c;
            case 0x276510u: goto label_276510;
            case 0x276514u: goto label_276514;
            case 0x276518u: goto label_276518;
            case 0x27651Cu: goto label_27651c;
            case 0x276520u: goto label_276520;
            case 0x276524u: goto label_276524;
            case 0x276528u: goto label_276528;
            case 0x27652Cu: goto label_27652c;
            case 0x276530u: goto label_276530;
            case 0x276534u: goto label_276534;
            case 0x276538u: goto label_276538;
            case 0x27653Cu: goto label_27653c;
            case 0x276540u: goto label_276540;
            case 0x276544u: goto label_276544;
            case 0x276548u: goto label_276548;
            case 0x27654Cu: goto label_27654c;
            case 0x276550u: goto label_276550;
            case 0x276554u: goto label_276554;
            case 0x276558u: goto label_276558;
            case 0x27655Cu: goto label_27655c;
            case 0x276560u: goto label_276560;
            case 0x276564u: goto label_276564;
            case 0x276568u: goto label_276568;
            case 0x27656Cu: goto label_27656c;
            case 0x276570u: goto label_276570;
            case 0x276574u: goto label_276574;
            case 0x276578u: goto label_276578;
            case 0x27657Cu: goto label_27657c;
            case 0x276580u: goto label_276580;
            case 0x276584u: goto label_276584;
            case 0x276588u: goto label_276588;
            case 0x27658Cu: goto label_27658c;
            case 0x276590u: goto label_276590;
            case 0x276594u: goto label_276594;
            case 0x276598u: goto label_276598;
            case 0x27659Cu: goto label_27659c;
            case 0x2765A0u: goto label_2765a0;
            case 0x2765A4u: goto label_2765a4;
            case 0x2765A8u: goto label_2765a8;
            case 0x2765ACu: goto label_2765ac;
            case 0x2765B0u: goto label_2765b0;
            case 0x2765B4u: goto label_2765b4;
            case 0x2765B8u: goto label_2765b8;
            case 0x2765BCu: goto label_2765bc;
            case 0x2765C0u: goto label_2765c0;
            case 0x2765C4u: goto label_2765c4;
            case 0x2765C8u: goto label_2765c8;
            case 0x2765CCu: goto label_2765cc;
            case 0x2765D0u: goto label_2765d0;
            case 0x2765D4u: goto label_2765d4;
            case 0x2765D8u: goto label_2765d8;
            case 0x2765DCu: goto label_2765dc;
            case 0x2765E0u: goto label_2765e0;
            case 0x2765E4u: goto label_2765e4;
            case 0x2765E8u: goto label_2765e8;
            case 0x2765ECu: goto label_2765ec;
            case 0x2765F0u: goto label_2765f0;
            case 0x2765F4u: goto label_2765f4;
            case 0x2765F8u: goto label_2765f8;
            case 0x2765FCu: goto label_2765fc;
            case 0x276600u: goto label_276600;
            case 0x276604u: goto label_276604;
            case 0x276608u: goto label_276608;
            case 0x27660Cu: goto label_27660c;
            case 0x276610u: goto label_276610;
            case 0x276614u: goto label_276614;
            case 0x276618u: goto label_276618;
            case 0x27661Cu: goto label_27661c;
            case 0x276620u: goto label_276620;
            case 0x276624u: goto label_276624;
            case 0x276628u: goto label_276628;
            case 0x27662Cu: goto label_27662c;
            case 0x276630u: goto label_276630;
            case 0x276634u: goto label_276634;
            case 0x276638u: goto label_276638;
            case 0x27663Cu: goto label_27663c;
            case 0x276640u: goto label_276640;
            case 0x276644u: goto label_276644;
            case 0x276648u: goto label_276648;
            case 0x27664Cu: goto label_27664c;
            case 0x276650u: goto label_276650;
            case 0x276654u: goto label_276654;
            case 0x276658u: goto label_276658;
            case 0x27665Cu: goto label_27665c;
            case 0x276660u: goto label_276660;
            case 0x276664u: goto label_276664;
            case 0x276668u: goto label_276668;
            case 0x27666Cu: goto label_27666c;
            case 0x276670u: goto label_276670;
            case 0x276674u: goto label_276674;
            case 0x276678u: goto label_276678;
            case 0x27667Cu: goto label_27667c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x275D8Cu;
label_275d8c:
    // 0x275d8c: 0x3c020036
    ctx->pc = 0x275d8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_275d90:
    // 0x275d90: 0x8c42dbb8
    ctx->pc = 0x275d90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958008)));
label_275d94:
    // 0x275d94: 0x284200fa
    ctx->pc = 0x275d94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 250));
label_275d98:
    // 0x275d98: 0x14400067
label_275d9c:
    if (ctx->pc == 0x275D9Cu) {
        ctx->pc = 0x275D9Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x275DA0u;
        goto label_275da0;
    }
    ctx->pc = 0x275D98u;
    {
        const bool branch_taken_0x275d98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x275D9Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x275d98) {
            ctx->pc = 0x275F38u;
            goto label_275f38;
        }
    }
    ctx->pc = 0x275DA0u;
label_275da0:
    // 0x275da0: 0x3c020036
    ctx->pc = 0x275da0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_275da4:
    // 0x275da4: 0x8c42dbb4
    ctx->pc = 0x275da4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958004)));
label_275da8:
    // 0x275da8: 0x28420005
    ctx->pc = 0x275da8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
label_275dac:
    // 0x275dac: 0x104000c8
label_275db0:
    if (ctx->pc == 0x275DB0u) {
        ctx->pc = 0x275DB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x275DB4u;
        goto label_275db4;
    }
    ctx->pc = 0x275DACu;
    {
        const bool branch_taken_0x275dac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x275DB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x275dac) {
            ctx->pc = 0x2760D0u;
            goto label_2760d0;
        }
    }
    ctx->pc = 0x275DB4u;
label_275db4:
    // 0x275db4: 0x8c42dbb8
    ctx->pc = 0x275db4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958008)));
label_275db8:
    // 0x275db8: 0x28420005
    ctx->pc = 0x275db8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
label_275dbc:
    // 0x275dbc: 0x104000c5
label_275dc0:
    if (ctx->pc == 0x275DC0u) {
        ctx->pc = 0x275DC0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x275DC4u;
        goto label_275dc4;
    }
    ctx->pc = 0x275DBCu;
    {
        const bool branch_taken_0x275dbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x275DC0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x275dbc) {
            ctx->pc = 0x2760D4u;
            goto label_2760d4;
        }
    }
    ctx->pc = 0x275DC4u;
label_275dc4:
    // 0x275dc4: 0xc0941a0
label_275dc8:
    if (ctx->pc == 0x275DC8u) {
        ctx->pc = 0x275DC8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x275DCCu;
        goto label_275dcc;
    }
    ctx->pc = 0x275DC4u;
    SET_GPR_U32(ctx, 31, 0x275DCCu);
    ctx->pc = 0x275DC8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x250680u;
    {
        const uint32_t __entryPc = ctx->pc;
        WindowCamActivate_0x250680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275DCCu; }
    }
    if (ctx->pc != 0x275DCCu) { return; }
    ctx->pc = 0x275DCCu;
label_275dcc:
    // 0x275dcc: 0xc096e58
label_275dd0:
    if (ctx->pc == 0x275DD0u) {
        ctx->pc = 0x275DD0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1280));
        ctx->pc = 0x275DD4u;
        goto label_275dd4;
    }
    ctx->pc = 0x275DCCu;
    SET_GPR_U32(ctx, 31, 0x275DD4u);
    ctx->pc = 0x275DD0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1280));
    ctx->pc = 0x25B960u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindExit_0x25b960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275DD4u; }
    }
    if (ctx->pc != 0x275DD4u) { return; }
    ctx->pc = 0x275DD4u;
label_275dd4:
    // 0x275dd4: 0x3c030034
    ctx->pc = 0x275dd4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_275dd8:
    // 0x275dd8: 0xac62fbf0
    ctx->pc = 0x275dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966256), GPR_U32(ctx, 2));
label_275ddc:
    // 0x275ddc: 0x8c440070
    ctx->pc = 0x275ddcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_275de0:
    // 0x275de0: 0x240500ff
    ctx->pc = 0x275de0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
label_275de4:
    // 0x275de4: 0xc0b40c0
label_275de8:
    if (ctx->pc == 0x275DE8u) {
        ctx->pc = 0x275DE8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x275DECu;
        goto label_275dec;
    }
    ctx->pc = 0x275DE4u;
    SET_GPR_U32(ctx, 31, 0x275DECu);
    ctx->pc = 0x275DE8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275DECu; }
    }
    if (ctx->pc != 0x275DECu) { return; }
    ctx->pc = 0x275DECu;
label_275dec:
    // 0x275dec: 0x3c04003b
    ctx->pc = 0x275decu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_275df0:
    // 0x275df0: 0xc0870d4
label_275df4:
    if (ctx->pc == 0x275DF4u) {
        ctx->pc = 0x275DF4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944888));
        ctx->pc = 0x275DF8u;
        goto label_275df8;
    }
    ctx->pc = 0x275DF0u;
    SET_GPR_U32(ctx, 31, 0x275DF8u);
    ctx->pc = 0x275DF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944888));
    ctx->pc = 0x21C350u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWorldObject_0x21c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275DF8u; }
    }
    if (ctx->pc != 0x275DF8u) { return; }
    ctx->pc = 0x275DF8u;
label_275df8:
    // 0x275df8: 0x40802d
    ctx->pc = 0x275df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_275dfc:
    // 0x275dfc: 0x12000004
label_275e00:
    if (ctx->pc == 0x275E00u) {
        ctx->pc = 0x275E00u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x275E04u;
        goto label_275e04;
    }
    ctx->pc = 0x275DFCu;
    {
        const bool branch_taken_0x275dfc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x275E00u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x275dfc) {
            ctx->pc = 0x275E10u;
            goto label_275e10;
        }
    }
    ctx->pc = 0x275E04u;
label_275e04:
    // 0x275e04: 0x8e040028
    ctx->pc = 0x275e04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_275e08:
    // 0x275e08: 0xc0b41e4
label_275e0c:
    if (ctx->pc == 0x275E0Cu) {
        ctx->pc = 0x275E0Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x275E10u;
        goto label_275e10;
    }
    ctx->pc = 0x275E08u;
    SET_GPR_U32(ctx, 31, 0x275E10u);
    ctx->pc = 0x275E0Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275E10u; }
    }
    if (ctx->pc != 0x275E10u) { return; }
    ctx->pc = 0x275E10u;
label_275e10:
    // 0x275e10: 0x3c020034
    ctx->pc = 0x275e10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_275e14:
    // 0x275e14: 0x8e040028
    ctx->pc = 0x275e14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_275e18:
    // 0x275e18: 0xac44fbec
    ctx->pc = 0x275e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966252), GPR_U32(ctx, 4));
label_275e1c:
    // 0x275e1c: 0x240500ff
    ctx->pc = 0x275e1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
label_275e20:
    // 0x275e20: 0xc0b40c0
label_275e24:
    if (ctx->pc == 0x275E24u) {
        ctx->pc = 0x275E24u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x275E28u;
        goto label_275e28;
    }
    ctx->pc = 0x275E20u;
    SET_GPR_U32(ctx, 31, 0x275E28u);
    ctx->pc = 0x275E24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275E28u; }
    }
    if (ctx->pc != 0x275E28u) { return; }
    ctx->pc = 0x275E28u;
label_275e28:
    // 0x275e28: 0x3c030034
    ctx->pc = 0x275e28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_275e2c:
    // 0x275e2c: 0x240200b4
    ctx->pc = 0x275e2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
label_275e30:
    // 0x275e30: 0xac62fbe8
    ctx->pc = 0x275e30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966248), GPR_U32(ctx, 2));
label_275e34:
    // 0x275e34: 0x3c030034
    ctx->pc = 0x275e34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_275e38:
    // 0x275e38: 0x24020074
    ctx->pc = 0x275e38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 116));
label_275e3c:
    // 0x275e3c: 0xac62fbe4
    ctx->pc = 0x275e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966244), GPR_U32(ctx, 2));
label_275e40:
    // 0x275e40: 0xc0984d0
label_275e44:
    if (ctx->pc == 0x275E44u) {
        ctx->pc = 0x275E44u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x275E48u;
        goto label_275e48;
    }
    ctx->pc = 0x275E40u;
    SET_GPR_U32(ctx, 31, 0x275E48u);
    ctx->pc = 0x275E44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x261340u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTowerFX_0x261340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275E48u; }
    }
    if (ctx->pc != 0x275E48u) { return; }
    ctx->pc = 0x275E48u;
label_275e48:
    // 0x275e48: 0x100000a2
label_275e4c:
    if (ctx->pc == 0x275E4Cu) {
        ctx->pc = 0x275E4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x275E50u;
        goto label_275e50;
    }
    ctx->pc = 0x275E48u;
    {
        const bool branch_taken_0x275e48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x275E4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x275e48) {
            ctx->pc = 0x2760D4u;
            goto label_2760d4;
        }
    }
    ctx->pc = 0x275E50u;
label_275e50:
    // 0x275e50: 0x3c020036
    ctx->pc = 0x275e50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_275e54:
    // 0x275e54: 0x8c42dbb8
    ctx->pc = 0x275e54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958008)));
label_275e58:
    // 0x275e58: 0x284200fa
    ctx->pc = 0x275e58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 250));
label_275e5c:
    // 0x275e5c: 0x14400036
label_275e60:
    if (ctx->pc == 0x275E60u) {
        ctx->pc = 0x275E60u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x275E64u;
        goto label_275e64;
    }
    ctx->pc = 0x275E5Cu;
    {
        const bool branch_taken_0x275e5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x275E60u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x275e5c) {
            ctx->pc = 0x275F38u;
            goto label_275f38;
        }
    }
    ctx->pc = 0x275E64u;
label_275e64:
    // 0x275e64: 0x3c020036
    ctx->pc = 0x275e64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_275e68:
    // 0x275e68: 0x8c42dbb4
    ctx->pc = 0x275e68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958004)));
label_275e6c:
    // 0x275e6c: 0x28420005
    ctx->pc = 0x275e6cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
label_275e70:
    // 0x275e70: 0x10400097
label_275e74:
    if (ctx->pc == 0x275E74u) {
        ctx->pc = 0x275E74u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x275E78u;
        goto label_275e78;
    }
    ctx->pc = 0x275E70u;
    {
        const bool branch_taken_0x275e70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x275E74u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x275e70) {
            ctx->pc = 0x2760D0u;
            goto label_2760d0;
        }
    }
    ctx->pc = 0x275E78u;
label_275e78:
    // 0x275e78: 0x8c42dbb8
    ctx->pc = 0x275e78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958008)));
label_275e7c:
    // 0x275e7c: 0x28420005
    ctx->pc = 0x275e7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
label_275e80:
    // 0x275e80: 0x10400093
label_275e84:
    if (ctx->pc == 0x275E84u) {
        ctx->pc = 0x275E84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x275E88u;
        goto label_275e88;
    }
    ctx->pc = 0x275E80u;
    {
        const bool branch_taken_0x275e80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x275E84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x275e80) {
            ctx->pc = 0x2760D0u;
            goto label_2760d0;
        }
    }
    ctx->pc = 0x275E88u;
label_275e88:
    // 0x275e88: 0x3c014000
    ctx->pc = 0x275e88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_275e8c:
    // 0x275e8c: 0x44810000
    ctx->pc = 0x275e8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_275e90:
    // 0x275e90: 0xe440fbc0
    ctx->pc = 0x275e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966208), bits); }
label_275e94:
    // 0x275e94: 0x3c030034
    ctx->pc = 0x275e94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_275e98:
    // 0x275e98: 0x3c040034
    ctx->pc = 0x275e98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
label_275e9c:
    // 0x275e9c: 0x10000040
label_275ea0:
    if (ctx->pc == 0x275EA0u) {
        ctx->pc = 0x275EA0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294966244)));
        ctx->pc = 0x275EA4u;
        goto label_275ea4;
    }
    ctx->pc = 0x275E9Cu;
    {
        const bool branch_taken_0x275e9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x275EA0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294966244)));
        if (branch_taken_0x275e9c) {
            ctx->pc = 0x275FA0u;
            goto label_275fa0;
        }
    }
    ctx->pc = 0x275EA4u;
label_275ea4:
    // 0x275ea4: 0xc096e58
label_275ea8:
    if (ctx->pc == 0x275EA8u) {
        ctx->pc = 0x275EA8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1536));
        ctx->pc = 0x275EACu;
        goto label_275eac;
    }
    ctx->pc = 0x275EA4u;
    SET_GPR_U32(ctx, 31, 0x275EACu);
    ctx->pc = 0x275EA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1536));
    ctx->pc = 0x25B960u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindExit_0x25b960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275EACu; }
    }
    if (ctx->pc != 0x275EACu) { return; }
    ctx->pc = 0x275EACu;
label_275eac:
    // 0x275eac: 0x3c030034
    ctx->pc = 0x275eacu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_275eb0:
    // 0x275eb0: 0xac62fbf0
    ctx->pc = 0x275eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966256), GPR_U32(ctx, 2));
label_275eb4:
    // 0x275eb4: 0x8c440070
    ctx->pc = 0x275eb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_275eb8:
    // 0x275eb8: 0x240500ff
    ctx->pc = 0x275eb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
label_275ebc:
    // 0x275ebc: 0xc0b40c0
label_275ec0:
    if (ctx->pc == 0x275EC0u) {
        ctx->pc = 0x275EC0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x275EC4u;
        goto label_275ec4;
    }
    ctx->pc = 0x275EBCu;
    SET_GPR_U32(ctx, 31, 0x275EC4u);
    ctx->pc = 0x275EC0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275EC4u; }
    }
    if (ctx->pc != 0x275EC4u) { return; }
    ctx->pc = 0x275EC4u;
label_275ec4:
    // 0x275ec4: 0x3c020036
    ctx->pc = 0x275ec4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_275ec8:
    // 0x275ec8: 0x8c42dbb4
    ctx->pc = 0x275ec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958004)));
label_275ecc:
    // 0x275ecc: 0x28420005
    ctx->pc = 0x275eccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
label_275ed0:
    // 0x275ed0: 0x1040007f
label_275ed4:
    if (ctx->pc == 0x275ED4u) {
        ctx->pc = 0x275ED4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x275ED8u;
        goto label_275ed8;
    }
    ctx->pc = 0x275ED0u;
    {
        const bool branch_taken_0x275ed0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x275ED4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x275ed0) {
            ctx->pc = 0x2760D0u;
            goto label_2760d0;
        }
    }
    ctx->pc = 0x275ED8u;
label_275ed8:
    // 0x275ed8: 0x8c42dbb8
    ctx->pc = 0x275ed8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958008)));
label_275edc:
    // 0x275edc: 0x28420005
    ctx->pc = 0x275edcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
label_275ee0:
    // 0x275ee0: 0x1040007c
label_275ee4:
    if (ctx->pc == 0x275EE4u) {
        ctx->pc = 0x275EE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x275EE8u;
        goto label_275ee8;
    }
    ctx->pc = 0x275EE0u;
    {
        const bool branch_taken_0x275ee0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x275EE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x275ee0) {
            ctx->pc = 0x2760D4u;
            goto label_2760d4;
        }
    }
    ctx->pc = 0x275EE8u;
label_275ee8:
    // 0x275ee8: 0xc094176
label_275eec:
    if (ctx->pc == 0x275EECu) {
        ctx->pc = 0x275EECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x275EF0u;
        goto label_275ef0;
    }
    ctx->pc = 0x275EE8u;
    SET_GPR_U32(ctx, 31, 0x275EF0u);
    ctx->pc = 0x275EECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2505D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        RuneCamActivate_0x2505d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275EF0u; }
    }
    if (ctx->pc != 0x275EF0u) { return; }
    ctx->pc = 0x275EF0u;
label_275ef0:
    // 0x275ef0: 0x3c020034
    ctx->pc = 0x275ef0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_275ef4:
    // 0x275ef4: 0xac40fbec
    ctx->pc = 0x275ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966252), GPR_U32(ctx, 0));
label_275ef8:
    // 0x275ef8: 0x3c030034
    ctx->pc = 0x275ef8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_275efc:
    // 0x275efc: 0x240200b4
    ctx->pc = 0x275efcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
label_275f00:
    // 0x275f00: 0xac62fbe8
    ctx->pc = 0x275f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966248), GPR_U32(ctx, 2));
label_275f04:
    // 0x275f04: 0x3c030034
    ctx->pc = 0x275f04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_275f08:
    // 0x275f08: 0x2402007e
    ctx->pc = 0x275f08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 126));
label_275f0c:
    // 0x275f0c: 0x10000070
label_275f10:
    if (ctx->pc == 0x275F10u) {
        ctx->pc = 0x275F10u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966244), GPR_U32(ctx, 2));
        ctx->pc = 0x275F14u;
        goto label_275f14;
    }
    ctx->pc = 0x275F0Cu;
    {
        const bool branch_taken_0x275f0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x275F10u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966244), GPR_U32(ctx, 2));
        if (branch_taken_0x275f0c) {
            ctx->pc = 0x2760D0u;
            goto label_2760d0;
        }
    }
    ctx->pc = 0x275F14u;
label_275f14:
    // 0x275f14: 0x3c020036
    ctx->pc = 0x275f14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_275f18:
    // 0x275f18: 0x8c42dbb8
    ctx->pc = 0x275f18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958008)));
label_275f1c:
    // 0x275f1c: 0x10000004
label_275f20:
    if (ctx->pc == 0x275F20u) {
        ctx->pc = 0x275F20u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 250));
        ctx->pc = 0x275F24u;
        goto label_275f24;
    }
    ctx->pc = 0x275F1Cu;
    {
        const bool branch_taken_0x275f1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x275F20u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 250));
        if (branch_taken_0x275f1c) {
            ctx->pc = 0x275F30u;
            goto label_275f30;
        }
    }
    ctx->pc = 0x275F24u;
label_275f24:
    // 0x275f24: 0x3c020036
    ctx->pc = 0x275f24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_275f28:
    // 0x275f28: 0x8c42dbb8
    ctx->pc = 0x275f28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958008)));
label_275f2c:
    // 0x275f2c: 0x284200dc
    ctx->pc = 0x275f2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 220));
label_275f30:
    // 0x275f30: 0x10400067
label_275f34:
    if (ctx->pc == 0x275F34u) {
        ctx->pc = 0x275F34u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x275F38u;
        goto label_275f38;
    }
    ctx->pc = 0x275F30u;
    {
        const bool branch_taken_0x275f30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x275F34u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x275f30) {
            ctx->pc = 0x2760D0u;
            goto label_2760d0;
        }
    }
    ctx->pc = 0x275F38u;
label_275f38:
    // 0x275f38: 0xc0984d0
label_275f3c:
    if (ctx->pc == 0x275F3Cu) {
        ctx->pc = 0x275F40u;
        goto label_275f40;
    }
    ctx->pc = 0x275F38u;
    SET_GPR_U32(ctx, 31, 0x275F40u);
    ctx->pc = 0x261340u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTowerFX_0x261340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275F40u; }
    }
    if (ctx->pc != 0x275F40u) { return; }
    ctx->pc = 0x275F40u;
label_275f40:
    // 0x275f40: 0x3c030034
    ctx->pc = 0x275f40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_275f44:
    // 0x275f44: 0x8c62fbe4
    ctx->pc = 0x275f44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966244)));
label_275f48:
    // 0x275f48: 0x24420001
    ctx->pc = 0x275f48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_275f4c:
    // 0x275f4c: 0x10000060
label_275f50:
    if (ctx->pc == 0x275F50u) {
        ctx->pc = 0x275F50u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966244), GPR_U32(ctx, 2));
        ctx->pc = 0x275F54u;
        goto label_275f54;
    }
    ctx->pc = 0x275F4Cu;
    {
        const bool branch_taken_0x275f4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x275F50u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966244), GPR_U32(ctx, 2));
        if (branch_taken_0x275f4c) {
            ctx->pc = 0x2760D0u;
            goto label_2760d0;
        }
    }
    ctx->pc = 0x275F54u;
label_275f54:
    // 0x275f54: 0x3c020034
    ctx->pc = 0x275f54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_275f58:
    // 0x275f58: 0x1000005d
label_275f5c:
    if (ctx->pc == 0x275F5Cu) {
        ctx->pc = 0x275F5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966244), GPR_U32(ctx, 0));
        ctx->pc = 0x275F60u;
        goto label_275f60;
    }
    ctx->pc = 0x275F58u;
    {
        const bool branch_taken_0x275f58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x275F5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966244), GPR_U32(ctx, 0));
        if (branch_taken_0x275f58) {
            ctx->pc = 0x2760D0u;
            goto label_2760d0;
        }
    }
    ctx->pc = 0x275F60u;
label_275f60:
    // 0x275f60: 0x3c020036
    ctx->pc = 0x275f60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_275f64:
    // 0x275f64: 0x8c42dbb4
    ctx->pc = 0x275f64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958004)));
label_275f68:
    // 0x275f68: 0x28420005
    ctx->pc = 0x275f68u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
label_275f6c:
    // 0x275f6c: 0x10400058
label_275f70:
    if (ctx->pc == 0x275F70u) {
        ctx->pc = 0x275F70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x275F74u;
        goto label_275f74;
    }
    ctx->pc = 0x275F6Cu;
    {
        const bool branch_taken_0x275f6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x275F70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x275f6c) {
            ctx->pc = 0x2760D0u;
            goto label_2760d0;
        }
    }
    ctx->pc = 0x275F74u;
label_275f74:
    // 0x275f74: 0x8c42dbb8
    ctx->pc = 0x275f74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958008)));
label_275f78:
    // 0x275f78: 0x28420005
    ctx->pc = 0x275f78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
label_275f7c:
    // 0x275f7c: 0x10400054
label_275f80:
    if (ctx->pc == 0x275F80u) {
        ctx->pc = 0x275F80u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x275F84u;
        goto label_275f84;
    }
    ctx->pc = 0x275F7Cu;
    {
        const bool branch_taken_0x275f7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x275F80u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x275f7c) {
            ctx->pc = 0x2760D0u;
            goto label_2760d0;
        }
    }
    ctx->pc = 0x275F84u;
label_275f84:
    // 0x275f84: 0x3c014000
    ctx->pc = 0x275f84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_275f88:
    // 0x275f88: 0x44810000
    ctx->pc = 0x275f88u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_275f8c:
    // 0x275f8c: 0xe440fbc0
    ctx->pc = 0x275f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966208), bits); }
label_275f90:
    // 0x275f90: 0x3c030034
    ctx->pc = 0x275f90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_275f94:
    // 0x275f94: 0x3c040034
    ctx->pc = 0x275f94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
label_275f98:
    // 0x275f98: 0x8c82fbe4
    ctx->pc = 0x275f98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294966244)));
label_275f9c:
    // 0x275f9c: 0x24420064
    ctx->pc = 0x275f9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 100));
label_275fa0:
    // 0x275fa0: 0xac62fbc4
    ctx->pc = 0x275fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966212), GPR_U32(ctx, 2));
label_275fa4:
    // 0x275fa4: 0x3c020034
    ctx->pc = 0x275fa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_275fa8:
    // 0x275fa8: 0xac40fbc8
    ctx->pc = 0x275fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966216), GPR_U32(ctx, 0));
label_275fac:
    // 0x275fac: 0xc099576
label_275fb0:
    if (ctx->pc == 0x275FB0u) {
        ctx->pc = 0x275FB0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294966244), GPR_U32(ctx, 0));
        ctx->pc = 0x275FB4u;
        goto label_275fb4;
    }
    ctx->pc = 0x275FACu;
    SET_GPR_U32(ctx, 31, 0x275FB4u);
    ctx->pc = 0x275FB0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966244), GPR_U32(ctx, 0));
    ctx->pc = 0x2655D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CaptionTextReset_0x2655d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275FB4u; }
    }
    if (ctx->pc != 0x275FB4u) { return; }
    ctx->pc = 0x275FB4u;
label_275fb4:
    // 0x275fb4: 0x10000047
label_275fb8:
    if (ctx->pc == 0x275FB8u) {
        ctx->pc = 0x275FB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x275FBCu;
        goto label_275fbc;
    }
    ctx->pc = 0x275FB4u;
    {
        const bool branch_taken_0x275fb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x275FB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x275fb4) {
            ctx->pc = 0x2760D4u;
            goto label_2760d4;
        }
    }
    ctx->pc = 0x275FBCu;
label_275fbc:
    // 0x275fbc: 0x3c020036
    ctx->pc = 0x275fbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_275fc0:
    // 0x275fc0: 0x8c42dbb4
    ctx->pc = 0x275fc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958004)));
label_275fc4:
    // 0x275fc4: 0x28420005
    ctx->pc = 0x275fc4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
label_275fc8:
    // 0x275fc8: 0x10400041
label_275fcc:
    if (ctx->pc == 0x275FCCu) {
        ctx->pc = 0x275FCCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x275FD0u;
        goto label_275fd0;
    }
    ctx->pc = 0x275FC8u;
    {
        const bool branch_taken_0x275fc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x275FCCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x275fc8) {
            ctx->pc = 0x2760D0u;
            goto label_2760d0;
        }
    }
    ctx->pc = 0x275FD0u;
label_275fd0:
    // 0x275fd0: 0x8c42dbb8
    ctx->pc = 0x275fd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958008)));
label_275fd4:
    // 0x275fd4: 0x28420005
    ctx->pc = 0x275fd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
label_275fd8:
    // 0x275fd8: 0x1040003e
label_275fdc:
    if (ctx->pc == 0x275FDCu) {
        ctx->pc = 0x275FDCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x275FE0u;
        goto label_275fe0;
    }
    ctx->pc = 0x275FD8u;
    {
        const bool branch_taken_0x275fd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x275FDCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x275fd8) {
            ctx->pc = 0x2760D4u;
            goto label_2760d4;
        }
    }
    ctx->pc = 0x275FE0u;
label_275fe0:
    // 0x275fe0: 0xc094176
label_275fe4:
    if (ctx->pc == 0x275FE4u) {
        ctx->pc = 0x275FE4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x275FE8u;
        goto label_275fe8;
    }
    ctx->pc = 0x275FE0u;
    SET_GPR_U32(ctx, 31, 0x275FE8u);
    ctx->pc = 0x275FE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2505D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        RuneCamActivate_0x2505d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275FE8u; }
    }
    if (ctx->pc != 0x275FE8u) { return; }
    ctx->pc = 0x275FE8u;
label_275fe8:
    // 0x275fe8: 0x240400ff
    ctx->pc = 0x275fe8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 255));
label_275fec:
    // 0x275fec: 0xc095cca
label_275ff0:
    if (ctx->pc == 0x275FF0u) {
        ctx->pc = 0x275FF0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x275FF4u;
        goto label_275ff4;
    }
    ctx->pc = 0x275FECu;
    SET_GPR_U32(ctx, 31, 0x275FF4u);
    ctx->pc = 0x275FF0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x257328u;
    {
        const uint32_t __entryPc = ctx->pc;
        ActivateSpecialTrigger_0x257328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275FF4u; }
    }
    if (ctx->pc != 0x275FF4u) { return; }
    ctx->pc = 0x275FF4u;
label_275ff4:
    // 0x275ff4: 0xc096e58
label_275ff8:
    if (ctx->pc == 0x275FF8u) {
        ctx->pc = 0x275FF8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2051));
        ctx->pc = 0x275FFCu;
        goto label_275ffc;
    }
    ctx->pc = 0x275FF4u;
    SET_GPR_U32(ctx, 31, 0x275FFCu);
    ctx->pc = 0x275FF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2051));
    ctx->pc = 0x25B960u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindExit_0x25b960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275FFCu; }
    }
    if (ctx->pc != 0x275FFCu) { return; }
    ctx->pc = 0x275FFCu;
label_275ffc:
    // 0x275ffc: 0x3c030034
    ctx->pc = 0x275ffcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_276000:
    // 0x276000: 0xac62fbf0
    ctx->pc = 0x276000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966256), GPR_U32(ctx, 2));
label_276004:
    // 0x276004: 0x8c440070
    ctx->pc = 0x276004u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_276008:
    // 0x276008: 0x240500ff
    ctx->pc = 0x276008u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
label_27600c:
    // 0x27600c: 0xc0b40c0
label_276010:
    if (ctx->pc == 0x276010u) {
        ctx->pc = 0x276010u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x276014u;
        goto label_276014;
    }
    ctx->pc = 0x27600Cu;
    SET_GPR_U32(ctx, 31, 0x276014u);
    ctx->pc = 0x276010u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276014u; }
    }
    if (ctx->pc != 0x276014u) { return; }
    ctx->pc = 0x276014u;
label_276014:
    // 0x276014: 0x3c020034
    ctx->pc = 0x276014u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_276018:
    // 0x276018: 0xac40fbec
    ctx->pc = 0x276018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966252), GPR_U32(ctx, 0));
label_27601c:
    // 0x27601c: 0x3c030034
    ctx->pc = 0x27601cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_276020:
    // 0x276020: 0x240200b4
    ctx->pc = 0x276020u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
label_276024:
    // 0x276024: 0xac62fbe8
    ctx->pc = 0x276024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966248), GPR_U32(ctx, 2));
label_276028:
    // 0x276028: 0x3c030034
    ctx->pc = 0x276028u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_27602c:
    // 0x27602c: 0x24020088
    ctx->pc = 0x27602cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 136));
label_276030:
    // 0x276030: 0x10000027
label_276034:
    if (ctx->pc == 0x276034u) {
        ctx->pc = 0x276034u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966244), GPR_U32(ctx, 2));
        ctx->pc = 0x276038u;
        goto label_276038;
    }
    ctx->pc = 0x276030u;
    {
        const bool branch_taken_0x276030 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x276034u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966244), GPR_U32(ctx, 2));
        if (branch_taken_0x276030) {
            ctx->pc = 0x2760D0u;
            goto label_2760d0;
        }
    }
    ctx->pc = 0x276038u;
label_276038:
    // 0x276038: 0x3c030034
    ctx->pc = 0x276038u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_27603c:
    // 0x27603c: 0x8c62fbe4
    ctx->pc = 0x27603cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966244)));
label_276040:
    // 0x276040: 0x4410003
label_276044:
    if (ctx->pc == 0x276044u) {
        ctx->pc = 0x276044u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        ctx->pc = 0x276048u;
        goto label_276048;
    }
    ctx->pc = 0x276040u;
    {
        const bool branch_taken_0x276040 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x276044u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x276040) {
            ctx->pc = 0x276050u;
            goto label_276050;
        }
    }
    ctx->pc = 0x276048u;
label_276048:
    // 0x276048: 0x10000021
label_27604c:
    if (ctx->pc == 0x27604Cu) {
        ctx->pc = 0x27604Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966244), GPR_U32(ctx, 0));
        ctx->pc = 0x276050u;
        goto label_276050;
    }
    ctx->pc = 0x276048u;
    {
        const bool branch_taken_0x276048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27604Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966244), GPR_U32(ctx, 0));
        if (branch_taken_0x276048) {
            ctx->pc = 0x2760D0u;
            goto label_2760d0;
        }
    }
    ctx->pc = 0x276050u;
label_276050:
    // 0x276050: 0x3c020031
    ctx->pc = 0x276050u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_276054:
    // 0x276054: 0x8c83fbe8
    ctx->pc = 0x276054u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294966248)));
label_276058:
    // 0x276058: 0x8c42ffbc
    ctx->pc = 0x276058u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_27605c:
    // 0x27605c: 0x621823
    ctx->pc = 0x27605cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_276060:
    // 0x276060: 0x1c600006
label_276064:
    if (ctx->pc == 0x276064u) {
        ctx->pc = 0x276064u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294966248), GPR_U32(ctx, 3));
        ctx->pc = 0x276068u;
        goto label_276068;
    }
    ctx->pc = 0x276060u;
    {
        const bool branch_taken_0x276060 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x276064u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294966248), GPR_U32(ctx, 3));
        if (branch_taken_0x276060) {
            ctx->pc = 0x27607Cu;
            goto label_27607c;
        }
    }
    ctx->pc = 0x276068u;
label_276068:
    // 0x276068: 0x3c030034
    ctx->pc = 0x276068u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_27606c:
    // 0x27606c: 0x8c62fbe4
    ctx->pc = 0x27606cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966244)));
label_276070:
    // 0x276070: 0x2442ff9c
    ctx->pc = 0x276070u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967196));
label_276074:
    // 0x276074: 0xac62fbe4
    ctx->pc = 0x276074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966244), GPR_U32(ctx, 2));
label_276078:
    // 0x276078: 0xac80fbe8
    ctx->pc = 0x276078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966248), GPR_U32(ctx, 0));
label_27607c:
    // 0x27607c: 0x3c020034
    ctx->pc = 0x27607cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_276080:
    // 0x276080: 0x8c42fbe8
    ctx->pc = 0x276080u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966248)));
label_276084:
    // 0x276084: 0x21a00
    ctx->pc = 0x276084u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
label_276088:
    // 0x276088: 0x621823
    ctx->pc = 0x276088u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27608c:
    // 0x27608c: 0x240200b4
    ctx->pc = 0x27608cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
label_276090:
    // 0x276090: 0x62001a
    ctx->pc = 0x276090u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_276094:
    // 0x276094: 0x8012
    ctx->pc = 0x276094u;
    SET_GPR_U32(ctx, 16, ctx->lo);
label_276098:
    // 0x276098: 0x50400001
label_27609c:
    if (ctx->pc == 0x27609Cu) {
        ctx->pc = 0x27609Cu;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x2760A0u;
        goto label_2760a0;
    }
    ctx->pc = 0x276098u;
    {
        const bool branch_taken_0x276098 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x276098) {
            ctx->pc = 0x27609Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2760A0u;
            goto label_2760a0;
        }
    }
    ctx->pc = 0x2760A0u;
label_2760a0:
    // 0x2760a0: 0x3c020034
    ctx->pc = 0x2760a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2760a4:
    // 0x2760a4: 0x8c44fbec
    ctx->pc = 0x2760a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966252)));
label_2760a8:
    // 0x2760a8: 0x200282d
    ctx->pc = 0x2760a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2760ac:
    // 0x2760ac: 0xc0b40c0
label_2760b0:
    if (ctx->pc == 0x2760B0u) {
        ctx->pc = 0x2760B0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2760B4u;
        goto label_2760b4;
    }
    ctx->pc = 0x2760ACu;
    SET_GPR_U32(ctx, 31, 0x2760B4u);
    ctx->pc = 0x2760B0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2760B4u; }
    }
    if (ctx->pc != 0x2760B4u) { return; }
    ctx->pc = 0x2760B4u;
label_2760b4:
    // 0x2760b4: 0x3c020034
    ctx->pc = 0x2760b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2760b8:
    // 0x2760b8: 0x8c42fbf0
    ctx->pc = 0x2760b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966256)));
label_2760bc:
    // 0x2760bc: 0x10400004
label_2760c0:
    if (ctx->pc == 0x2760C0u) {
        ctx->pc = 0x2760C0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2760C4u;
        goto label_2760c4;
    }
    ctx->pc = 0x2760BCu;
    {
        const bool branch_taken_0x2760bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2760C0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2760bc) {
            ctx->pc = 0x2760D0u;
            goto label_2760d0;
        }
    }
    ctx->pc = 0x2760C4u;
label_2760c4:
    // 0x2760c4: 0x8c440070
    ctx->pc = 0x2760c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_2760c8:
    // 0x2760c8: 0xc0b40c0
label_2760cc:
    if (ctx->pc == 0x2760CCu) {
        ctx->pc = 0x2760CCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2760D0u;
        goto label_2760d0;
    }
    ctx->pc = 0x2760C8u;
    SET_GPR_U32(ctx, 31, 0x2760D0u);
    ctx->pc = 0x2760CCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2760D0u; }
    }
    if (ctx->pc != 0x2760D0u) { return; }
    ctx->pc = 0x2760D0u;
label_2760d0:
    // 0x2760d0: 0x3c020036
    ctx->pc = 0x2760d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2760d4:
    // 0x2760d4: 0x8c42dbac
    ctx->pc = 0x2760d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957996)));
label_2760d8:
    // 0x2760d8: 0x1440015f
label_2760dc:
    if (ctx->pc == 0x2760DCu) {
        ctx->pc = 0x2760DCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x2760E0u;
        goto label_2760e0;
    }
    ctx->pc = 0x2760D8u;
    {
        const bool branch_taken_0x2760d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2760DCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x2760d8) {
            ctx->pc = 0x276658u;
            goto label_276658;
        }
    }
    ctx->pc = 0x2760E0u;
label_2760e0:
    // 0x2760e0: 0x3c020031
    ctx->pc = 0x2760e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2760e4:
    // 0x2760e4: 0x8c42ff9c
    ctx->pc = 0x2760e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
label_2760e8:
    // 0x2760e8: 0x1440015c
label_2760ec:
    if (ctx->pc == 0x2760ECu) {
        ctx->pc = 0x2760ECu;
        SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x2760F0u;
        goto label_2760f0;
    }
    ctx->pc = 0x2760E8u;
    {
        const bool branch_taken_0x2760e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2760ECu;
        SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x2760e8) {
            ctx->pc = 0x27665Cu;
            goto label_27665c;
        }
    }
    ctx->pc = 0x2760F0u;
label_2760f0:
    // 0x2760f0: 0x3c020035
    ctx->pc = 0x2760f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2760f4:
    // 0x2760f4: 0x8c429b88
    ctx->pc = 0x2760f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941576)));
label_2760f8:
    // 0x2760f8: 0x14400159
label_2760fc:
    if (ctx->pc == 0x2760FCu) {
        ctx->pc = 0x2760FCu;
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x276100u;
        goto label_276100;
    }
    ctx->pc = 0x2760F8u;
    {
        const bool branch_taken_0x2760f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2760FCu;
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x2760f8) {
            ctx->pc = 0x276660u;
            goto label_276660;
        }
    }
    ctx->pc = 0x276100u;
label_276100:
    // 0x276100: 0xc09d292
label_276104:
    if (ctx->pc == 0x276104u) {
        ctx->pc = 0x276108u;
        goto label_276108;
    }
    ctx->pc = 0x276100u;
    SET_GPR_U32(ctx, 31, 0x276108u);
    ctx->pc = 0x274A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerLevelSpeechStart_0x274a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276108u; }
    }
    if (ctx->pc != 0x276108u) { return; }
    ctx->pc = 0x276108u;
label_276108:
    // 0x276108: 0x1220007c
label_27610c:
    if (ctx->pc == 0x27610Cu) {
        ctx->pc = 0x27610Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x276110u;
        goto label_276110;
    }
    ctx->pc = 0x276108u;
    {
        const bool branch_taken_0x276108 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x27610Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x276108) {
            ctx->pc = 0x2762FCu;
            goto label_2762fc;
        }
    }
    ctx->pc = 0x276110u;
label_276110:
    // 0x276110: 0x902d
    ctx->pc = 0x276110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276114:
    // 0x276114: 0x982d
    ctx->pc = 0x276114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276118:
    // 0x276118: 0x802d
    ctx->pc = 0x276118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27611c:
    // 0x27611c: 0x302d
    ctx->pc = 0x27611cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276120:
    // 0x276120: 0x240a2b00
    ctx->pc = 0x276120u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 11008));
label_276124:
    // 0x276124: 0x3c020032
    ctx->pc = 0x276124u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_276128:
    // 0x276128: 0x244b1bc0
    ctx->pc = 0x276128u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 7104));
label_27612c:
    // 0x27612c: 0x3c020032
    ctx->pc = 0x27612cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_276130:
    // 0x276130: 0x8c491540
    ctx->pc = 0x276130u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 5440)));
label_276134:
    // 0x276134: 0x240700b4
    ctx->pc = 0x276134u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 180));
label_276138:
    // 0x276138: 0xca1018
    ctx->pc = 0x276138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_27613c:
    // 0x27613c: 0x0
    ctx->pc = 0x27613cu;
    // NOP
label_276140:
    // 0x276140: 0x4b2821
    ctx->pc = 0x276140u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_276144:
    // 0x276144: 0x8ca200fc
    ctx->pc = 0x276144u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 252)));
label_276148:
    // 0x276148: 0x10400015
label_27614c:
    if (ctx->pc == 0x27614Cu) {
        ctx->pc = 0x27614Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x276150u;
        goto label_276150;
    }
    ctx->pc = 0x276148u;
    {
        const bool branch_taken_0x276148 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27614Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x276148) {
            ctx->pc = 0x2761A0u;
            goto label_2761a0;
        }
    }
    ctx->pc = 0x276150u;
label_276150:
    // 0x276150: 0x8ca20104
    ctx->pc = 0x276150u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 260)));
label_276154:
    // 0x276154: 0x10490012
label_276158:
    if (ctx->pc == 0x276158u) {
        ctx->pc = 0x27615Cu;
        goto label_27615c;
    }
    ctx->pc = 0x276154u;
    {
        const bool branch_taken_0x276154 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 9));
        if (branch_taken_0x276154) {
            ctx->pc = 0x2761A0u;
            goto label_2761a0;
        }
    }
    ctx->pc = 0x27615Cu;
label_27615c:
    // 0x27615c: 0x8ca3000c
    ctx->pc = 0x27615cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_276160:
    // 0x276160: 0x671018
    ctx->pc = 0x276160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_276164:
    // 0x276164: 0x451821
    ctx->pc = 0x276164u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_276168:
    // 0x276168: 0x94621d7c
    ctx->pc = 0x276168u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 7548)));
label_27616c:
    // 0x27616c: 0x484025
    ctx->pc = 0x27616cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_276170:
    // 0x276170: 0x94a41a24
    ctx->pc = 0x276170u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6692)));
label_276174:
    // 0x276174: 0x929025
    ctx->pc = 0x276174u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_276178:
    // 0x276178: 0x94620cf0
    ctx->pc = 0x276178u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3312)));
label_27617c:
    // 0x27617c: 0x441025
    ctx->pc = 0x27617cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_276180:
    // 0x276180: 0xa4620cf0
    ctx->pc = 0x276180u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3312), (uint16_t)GPR_U32(ctx, 2));
label_276184:
    // 0x276184: 0x8ca4000c
    ctx->pc = 0x276184u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_276188:
    // 0x276188: 0x871018
    ctx->pc = 0x276188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_27618c:
    // 0x27618c: 0x452021
    ctx->pc = 0x27618cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_276190:
    // 0x276190: 0x94821d7c
    ctx->pc = 0x276190u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 7548)));
label_276194:
    // 0x276194: 0x94a31a24
    ctx->pc = 0x276194u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6692)));
label_276198:
    // 0x276198: 0x431025
    ctx->pc = 0x276198u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27619c:
    // 0x27619c: 0xa4821d7c
    ctx->pc = 0x27619cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7548), (uint16_t)GPR_U32(ctx, 2));
label_2761a0:
    // 0x2761a0: 0x28c20004
    ctx->pc = 0x2761a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
label_2761a4:
    // 0x2761a4: 0x1440ffe6
label_2761a8:
    if (ctx->pc == 0x2761A8u) {
        ctx->pc = 0x2761A8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x2761ACu;
        goto label_2761ac;
    }
    ctx->pc = 0x2761A4u;
    {
        const bool branch_taken_0x2761a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2761A8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2761a4) {
            ctx->pc = 0x276140u;
            goto label_276140;
        }
    }
    ctx->pc = 0x2761ACu;
label_2761ac:
    // 0x2761ac: 0x2481026
    ctx->pc = 0x2761acu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_2761b0:
    // 0x2761b0: 0x2429024
    ctx->pc = 0x2761b0u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2761b4:
    // 0x2761b4: 0x24110001
    ctx->pc = 0x2761b4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_2761b8:
    // 0x2761b8: 0x2a220009
    ctx->pc = 0x2761b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 9));
label_2761bc:
    // 0x2761bc: 0x10400006
label_2761c0:
    if (ctx->pc == 0x2761C0u) {
        ctx->pc = 0x2761C0u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 17) & 0x1F));
        ctx->pc = 0x2761C4u;
        goto label_2761c4;
    }
    ctx->pc = 0x2761BCu;
    {
        const bool branch_taken_0x2761bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2761C0u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 17) & 0x1F));
        if (branch_taken_0x2761bc) {
            ctx->pc = 0x2761D8u;
            goto label_2761d8;
        }
    }
    ctx->pc = 0x2761C4u;
label_2761c4:
    // 0x2761c4: 0x30420001
    ctx->pc = 0x2761c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_2761c8:
    // 0x2761c8: 0x5040fffb
label_2761cc:
    if (ctx->pc == 0x2761CCu) {
        ctx->pc = 0x2761CCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x2761D0u;
        goto label_2761d0;
    }
    ctx->pc = 0x2761C8u;
    {
        const bool branch_taken_0x2761c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2761c8) {
            ctx->pc = 0x2761CCu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x2761B8u;
            goto label_2761b8;
        }
    }
    ctx->pc = 0x2761D0u;
label_2761d0:
    // 0x2761d0: 0xc09d25e
label_2761d4:
    if (ctx->pc == 0x2761D4u) {
        ctx->pc = 0x2761D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2761D8u;
        goto label_2761d8;
    }
    ctx->pc = 0x2761D0u;
    SET_GPR_U32(ctx, 31, 0x2761D8u);
    ctx->pc = 0x2761D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x274978u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerShardSpeechStart_0x274978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2761D8u; }
    }
    if (ctx->pc != 0x2761D8u) { return; }
    ctx->pc = 0x2761D8u;
label_2761d8:
    // 0x2761d8: 0x302d
    ctx->pc = 0x2761d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2761dc:
    // 0x2761dc: 0x24092b00
    ctx->pc = 0x2761dcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 11008));
label_2761e0:
    // 0x2761e0: 0x3c020032
    ctx->pc = 0x2761e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2761e4:
    // 0x2761e4: 0x244a1bc0
    ctx->pc = 0x2761e4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 7104));
label_2761e8:
    // 0x2761e8: 0x3c020032
    ctx->pc = 0x2761e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2761ec:
    // 0x2761ec: 0x8c481540
    ctx->pc = 0x2761ecu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 5440)));
label_2761f0:
    // 0x2761f0: 0x240700b4
    ctx->pc = 0x2761f0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 180));
label_2761f4:
    // 0x2761f4: 0xc91018
    ctx->pc = 0x2761f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2761f8:
    // 0x2761f8: 0x4a2821
    ctx->pc = 0x2761f8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_2761fc:
    // 0x2761fc: 0x8ca200fc
    ctx->pc = 0x2761fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 252)));
label_276200:
    // 0x276200: 0x10400015
label_276204:
    if (ctx->pc == 0x276204u) {
        ctx->pc = 0x276204u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x276208u;
        goto label_276208;
    }
    ctx->pc = 0x276200u;
    {
        const bool branch_taken_0x276200 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x276204u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x276200) {
            ctx->pc = 0x276258u;
            goto label_276258;
        }
    }
    ctx->pc = 0x276208u;
label_276208:
    // 0x276208: 0x8ca20104
    ctx->pc = 0x276208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 260)));
label_27620c:
    // 0x27620c: 0x10480012
label_276210:
    if (ctx->pc == 0x276210u) {
        ctx->pc = 0x276214u;
        goto label_276214;
    }
    ctx->pc = 0x27620Cu;
    {
        const bool branch_taken_0x27620c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 8));
        if (branch_taken_0x27620c) {
            ctx->pc = 0x276258u;
            goto label_276258;
        }
    }
    ctx->pc = 0x276214u;
label_276214:
    // 0x276214: 0x8ca3000c
    ctx->pc = 0x276214u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_276218:
    // 0x276218: 0x671018
    ctx->pc = 0x276218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_27621c:
    // 0x27621c: 0x451821
    ctx->pc = 0x27621cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_276220:
    // 0x276220: 0x94621d7e
    ctx->pc = 0x276220u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 7550)));
label_276224:
    // 0x276224: 0x539825
    ctx->pc = 0x276224u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_276228:
    // 0x276228: 0x94a41a26
    ctx->pc = 0x276228u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6694)));
label_27622c:
    // 0x27622c: 0x908025
    ctx->pc = 0x27622cu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_276230:
    // 0x276230: 0x94620cf2
    ctx->pc = 0x276230u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3314)));
label_276234:
    // 0x276234: 0x441025
    ctx->pc = 0x276234u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_276238:
    // 0x276238: 0xa4620cf2
    ctx->pc = 0x276238u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3314), (uint16_t)GPR_U32(ctx, 2));
label_27623c:
    // 0x27623c: 0x8ca4000c
    ctx->pc = 0x27623cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_276240:
    // 0x276240: 0x871018
    ctx->pc = 0x276240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_276244:
    // 0x276244: 0x452021
    ctx->pc = 0x276244u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_276248:
    // 0x276248: 0x94821d7e
    ctx->pc = 0x276248u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 7550)));
label_27624c:
    // 0x27624c: 0x94a31a26
    ctx->pc = 0x27624cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6694)));
label_276250:
    // 0x276250: 0x431025
    ctx->pc = 0x276250u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_276254:
    // 0x276254: 0xa4821d7e
    ctx->pc = 0x276254u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7550), (uint16_t)GPR_U32(ctx, 2));
label_276258:
    // 0x276258: 0x28c20004
    ctx->pc = 0x276258u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
label_27625c:
    // 0x27625c: 0x1440ffe6
label_276260:
    if (ctx->pc == 0x276260u) {
        ctx->pc = 0x276260u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x276264u;
        goto label_276264;
    }
    ctx->pc = 0x27625Cu;
    {
        const bool branch_taken_0x27625c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x276260u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x27625c) {
            ctx->pc = 0x2761F8u;
            goto label_2761f8;
        }
    }
    ctx->pc = 0x276264u;
label_276264:
    // 0x276264: 0x2131026
    ctx->pc = 0x276264u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_276268:
    // 0x276268: 0x2028024
    ctx->pc = 0x276268u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_27626c:
    // 0x27626c: 0x882d
    ctx->pc = 0x27626cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276270:
    // 0x276270: 0x2a22000d
    ctx->pc = 0x276270u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 13));
label_276274:
    // 0x276274: 0x10400006
label_276278:
    if (ctx->pc == 0x276278u) {
        ctx->pc = 0x276278u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 17) & 0x1F));
        ctx->pc = 0x27627Cu;
        goto label_27627c;
    }
    ctx->pc = 0x276274u;
    {
        const bool branch_taken_0x276274 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x276278u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 17) & 0x1F));
        if (branch_taken_0x276274) {
            ctx->pc = 0x276290u;
            goto label_276290;
        }
    }
    ctx->pc = 0x27627Cu;
label_27627c:
    // 0x27627c: 0x30420001
    ctx->pc = 0x27627cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_276280:
    // 0x276280: 0x5040fffb
label_276284:
    if (ctx->pc == 0x276284u) {
        ctx->pc = 0x276284u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x276288u;
        goto label_276288;
    }
    ctx->pc = 0x276280u;
    {
        const bool branch_taken_0x276280 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x276280) {
            ctx->pc = 0x276284u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x276270u;
            goto label_276270;
        }
    }
    ctx->pc = 0x276288u;
label_276288:
    // 0x276288: 0xc09d272
label_27628c:
    if (ctx->pc == 0x27628Cu) {
        ctx->pc = 0x27628Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x276290u;
        goto label_276290;
    }
    ctx->pc = 0x276288u;
    SET_GPR_U32(ctx, 31, 0x276290u);
    ctx->pc = 0x27628Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2749C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerRuneSpeechStart_0x2749c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276290u; }
    }
    if (ctx->pc != 0x276290u) { return; }
    ctx->pc = 0x276290u;
label_276290:
    // 0x276290: 0x2402000d
    ctx->pc = 0x276290u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_276294:
    // 0x276294: 0x1622001a
label_276298:
    if (ctx->pc == 0x276298u) {
        ctx->pc = 0x276298u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x27629Cu;
        goto label_27629c;
    }
    ctx->pc = 0x276294u;
    {
        const bool branch_taken_0x276294 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x276298u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x276294) {
            ctx->pc = 0x276300u;
            goto label_276300;
        }
    }
    ctx->pc = 0x27629Cu;
label_27629c:
    // 0x27629c: 0x3c020034
    ctx->pc = 0x27629cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2762a0:
    // 0x2762a0: 0x8c43e800
    ctx->pc = 0x2762a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961152)));
label_2762a4:
    // 0x2762a4: 0x24020008
    ctx->pc = 0x2762a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_2762a8:
    // 0x2762a8: 0x1462000c
label_2762ac:
    if (ctx->pc == 0x2762ACu) {
        ctx->pc = 0x2762ACu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 4095));
        ctx->pc = 0x2762B0u;
        goto label_2762b0;
    }
    ctx->pc = 0x2762A8u;
    {
        const bool branch_taken_0x2762a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2762ACu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 4095));
        if (branch_taken_0x2762a8) {
            ctx->pc = 0x2762DCu;
            goto label_2762dc;
        }
    }
    ctx->pc = 0x2762B0u;
label_2762b0:
    // 0x2762b0: 0x3c020034
    ctx->pc = 0x2762b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2762b4:
    // 0x2762b4: 0x8c43e804
    ctx->pc = 0x2762b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961156)));
label_2762b8:
    // 0x2762b8: 0x24020002
    ctx->pc = 0x2762b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2762bc:
    // 0x2762bc: 0x14620007
label_2762c0:
    if (ctx->pc == 0x2762C0u) {
        ctx->pc = 0x2762C0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 4095));
        ctx->pc = 0x2762C4u;
        goto label_2762c4;
    }
    ctx->pc = 0x2762BCu;
    {
        const bool branch_taken_0x2762bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2762C0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 4095));
        if (branch_taken_0x2762bc) {
            ctx->pc = 0x2762DCu;
            goto label_2762dc;
        }
    }
    ctx->pc = 0x2762C4u;
label_2762c4:
    // 0x2762c4: 0x32621000
    ctx->pc = 0x2762c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 4096));
label_2762c8:
    // 0x2762c8: 0x14400005
label_2762cc:
    if (ctx->pc == 0x2762CCu) {
        ctx->pc = 0x2762CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4095));
        ctx->pc = 0x2762D0u;
        goto label_2762d0;
    }
    ctx->pc = 0x2762C8u;
    {
        const bool branch_taken_0x2762c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2762CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4095));
        if (branch_taken_0x2762c8) {
            ctx->pc = 0x2762E0u;
            goto label_2762e0;
        }
    }
    ctx->pc = 0x2762D0u;
label_2762d0:
    // 0x2762d0: 0xc09d272
label_2762d4:
    if (ctx->pc == 0x2762D4u) {
        ctx->pc = 0x2762D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x2762D8u;
        goto label_2762d8;
    }
    ctx->pc = 0x2762D0u;
    SET_GPR_U32(ctx, 31, 0x2762D8u);
    ctx->pc = 0x2762D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x2749C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerRuneSpeechStart_0x2749c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2762D8u; }
    }
    if (ctx->pc != 0x2762D8u) { return; }
    ctx->pc = 0x2762D8u;
label_2762d8:
    // 0x2762d8: 0x32630fff
    ctx->pc = 0x2762d8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 4095));
label_2762dc:
    // 0x2762dc: 0x24020fff
    ctx->pc = 0x2762dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4095));
label_2762e0:
    // 0x2762e0: 0x14620007
label_2762e4:
    if (ctx->pc == 0x2762E4u) {
        ctx->pc = 0x2762E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2762E8u;
        goto label_2762e8;
    }
    ctx->pc = 0x2762E0u;
    {
        const bool branch_taken_0x2762e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2762E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2762e0) {
            ctx->pc = 0x276300u;
            goto label_276300;
        }
    }
    ctx->pc = 0x2762E8u;
label_2762e8:
    // 0x2762e8: 0x32420200
    ctx->pc = 0x2762e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 512));
label_2762ec:
    // 0x2762ec: 0x10400004
label_2762f0:
    if (ctx->pc == 0x2762F0u) {
        ctx->pc = 0x2762F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2762F4u;
        goto label_2762f4;
    }
    ctx->pc = 0x2762ECu;
    {
        const bool branch_taken_0x2762ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2762F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2762ec) {
            ctx->pc = 0x276300u;
            goto label_276300;
        }
    }
    ctx->pc = 0x2762F4u;
label_2762f4:
    // 0x2762f4: 0xc09d272
label_2762f8:
    if (ctx->pc == 0x2762F8u) {
        ctx->pc = 0x2762F8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x2762FCu;
        goto label_2762fc;
    }
    ctx->pc = 0x2762F4u;
    SET_GPR_U32(ctx, 31, 0x2762FCu);
    ctx->pc = 0x2762F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x2749C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerRuneSpeechStart_0x2749c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2762FCu; }
    }
    if (ctx->pc != 0x2762FCu) { return; }
    ctx->pc = 0x2762FCu;
label_2762fc:
    // 0x2762fc: 0x3c020031
    ctx->pc = 0x2762fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_276300:
    // 0x276300: 0x3c03003c
    ctx->pc = 0x276300u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_276304:
    // 0x276304: 0xc440ffa4
    ctx->pc = 0x276304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276308:
    // 0x276308: 0xc4613a00
    ctx->pc = 0x276308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27630c:
    // 0x27630c: 0x46010001
    ctx->pc = 0x27630cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_276310:
    // 0x276310: 0x3c014040
    ctx->pc = 0x276310u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
label_276314:
    // 0x276314: 0x44810800
    ctx->pc = 0x276314u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_276318:
    // 0x276318: 0x46010034
    ctx->pc = 0x276318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27631c:
    // 0x27631c: 0x0
    ctx->pc = 0x27631cu;
    // NOP
label_276320:
    // 0x276320: 0x450100cd
label_276324:
    if (ctx->pc == 0x276324u) {
        ctx->pc = 0x276324u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x276328u;
        goto label_276328;
    }
    ctx->pc = 0x276320u;
    {
        const bool branch_taken_0x276320 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x276324u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x276320) {
            ctx->pc = 0x276658u;
            goto label_276658;
        }
    }
    ctx->pc = 0x276328u;
label_276328:
    // 0x276328: 0x882d
    ctx->pc = 0x276328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27632c:
    // 0x27632c: 0x24142b00
    ctx->pc = 0x27632cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 11008));
label_276330:
    // 0x276330: 0x3c020032
    ctx->pc = 0x276330u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_276334:
    // 0x276334: 0x24531bc0
    ctx->pc = 0x276334u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 7104));
label_276338:
    // 0x276338: 0x3c170032
    ctx->pc = 0x276338u;
    SET_GPR_U32(ctx, 23, ((uint32_t)50 << 16));
label_27633c:
    // 0x27633c: 0x241200b4
    ctx->pc = 0x27633cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 180));
label_276340:
    // 0x276340: 0x3c020034
    ctx->pc = 0x276340u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_276344:
    // 0x276344: 0x2456fb00
    ctx->pc = 0x276344u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294966016));
label_276348:
    // 0x276348: 0x60a82d
    ctx->pc = 0x276348u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27634c:
    // 0x27634c: 0x111080
    ctx->pc = 0x27634cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_276350:
    // 0x276350: 0x3a21021
    ctx->pc = 0x276350u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_276354:
    // 0x276354: 0xac400000
    ctx->pc = 0x276354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_276358:
    // 0x276358: 0x302d
    ctx->pc = 0x276358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27635c:
    // 0x27635c: 0x8ee51540
    ctx->pc = 0x27635cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 23), 5440)));
label_276360:
    // 0x276360: 0x114040
    ctx->pc = 0x276360u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 17), 1));
label_276364:
    // 0x276364: 0x111080
    ctx->pc = 0x276364u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_276368:
    // 0x276368: 0x3a22021
    ctx->pc = 0x276368u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_27636c:
    // 0x27636c: 0xd41018
    ctx->pc = 0x27636cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_276370:
    // 0x276370: 0x531821
    ctx->pc = 0x276370u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_276374:
    // 0x276374: 0x8c6200fc
    ctx->pc = 0x276374u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_276378:
    // 0x276378: 0x50400012
label_27637c:
    if (ctx->pc == 0x27637Cu) {
        ctx->pc = 0x27637Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x276380u;
        goto label_276380;
    }
    ctx->pc = 0x276378u;
    {
        const bool branch_taken_0x276378 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x276378) {
            ctx->pc = 0x27637Cu;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x2763C4u;
            goto label_2763c4;
        }
    }
    ctx->pc = 0x276380u;
label_276380:
    // 0x276380: 0x8c620104
    ctx->pc = 0x276380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_276384:
    // 0x276384: 0x5045000f
label_276388:
    if (ctx->pc == 0x276388u) {
        ctx->pc = 0x276388u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x27638Cu;
        goto label_27638c;
    }
    ctx->pc = 0x276384u;
    {
        const bool branch_taken_0x276384 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        if (branch_taken_0x276384) {
            ctx->pc = 0x276388u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x2763C4u;
            goto label_2763c4;
        }
    }
    ctx->pc = 0x27638Cu;
label_27638c:
    // 0x27638c: 0x8c62000c
    ctx->pc = 0x27638cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_276390:
    // 0x276390: 0x523818
    ctx->pc = 0x276390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_276394:
    // 0x276394: 0xe81021
    ctx->pc = 0x276394u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_276398:
    // 0x276398: 0x621021
    ctx->pc = 0x276398u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27639c:
    // 0x27639c: 0x84430d04
    ctx->pc = 0x27639cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 3332)));
label_2763a0:
    // 0x2763a0: 0x8c820000
    ctx->pc = 0x2763a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2763a4:
    // 0x2763a4: 0x4420007
label_2763a8:
    if (ctx->pc == 0x2763A8u) {
        ctx->pc = 0x2763A8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x2763ACu;
        goto label_2763ac;
    }
    ctx->pc = 0x2763A4u;
    {
        const bool branch_taken_0x2763a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2763a4) {
            ctx->pc = 0x2763A8u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x2763C4u;
            goto label_2763c4;
        }
    }
    ctx->pc = 0x2763ACu;
label_2763ac:
    // 0x2763ac: 0x4600003
label_2763b0:
    if (ctx->pc == 0x2763B0u) {
        ctx->pc = 0x2763B0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
        ctx->pc = 0x2763B4u;
        goto label_2763b4;
    }
    ctx->pc = 0x2763ACu;
    {
        const bool branch_taken_0x2763ac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2763B0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
        if (branch_taken_0x2763ac) {
            ctx->pc = 0x2763BCu;
            goto label_2763bc;
        }
    }
    ctx->pc = 0x2763B4u;
label_2763b4:
    // 0x2763b4: 0x50400003
label_2763b8:
    if (ctx->pc == 0x2763B8u) {
        ctx->pc = 0x2763B8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x2763BCu;
        goto label_2763bc;
    }
    ctx->pc = 0x2763B4u;
    {
        const bool branch_taken_0x2763b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2763b4) {
            ctx->pc = 0x2763B8u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x2763C4u;
            goto label_2763c4;
        }
    }
    ctx->pc = 0x2763BCu;
label_2763bc:
    // 0x2763bc: 0xac830000
    ctx->pc = 0x2763bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2763c0:
    // 0x2763c0: 0x24c60001
    ctx->pc = 0x2763c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_2763c4:
    // 0x2763c4: 0x28c20004
    ctx->pc = 0x2763c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
label_2763c8:
    // 0x2763c8: 0x1440ffe9
label_2763cc:
    if (ctx->pc == 0x2763CCu) {
        ctx->pc = 0x2763CCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x2763D0u;
        goto label_2763d0;
    }
    ctx->pc = 0x2763C8u;
    {
        const bool branch_taken_0x2763c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2763CCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2763c8) {
            ctx->pc = 0x276370u;
            goto label_276370;
        }
    }
    ctx->pc = 0x2763D0u;
label_2763d0:
    // 0x2763d0: 0x111080
    ctx->pc = 0x2763d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_2763d4:
    // 0x2763d4: 0x3a21821
    ctx->pc = 0x2763d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2763d8:
    // 0x2763d8: 0x561021
    ctx->pc = 0x2763d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2763dc:
    // 0x2763dc: 0x8c630000
    ctx->pc = 0x2763dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2763e0:
    // 0x2763e0: 0x8c420000
    ctx->pc = 0x2763e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2763e4:
    // 0x2763e4: 0x54620030
label_2763e8:
    if (ctx->pc == 0x2763E8u) {
        ctx->pc = 0x2763E8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x2763ECu;
        goto label_2763ec;
    }
    ctx->pc = 0x2763E4u;
    {
        const bool branch_taken_0x2763e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2763e4) {
            ctx->pc = 0x2763E8u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x2764A8u;
            goto label_2764a8;
        }
    }
    ctx->pc = 0x2763ECu;
label_2763ec:
    // 0x2763ec: 0x3c05003b
    ctx->pc = 0x2763ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_2763f0:
    // 0x2763f0: 0x202d
    ctx->pc = 0x2763f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2763f4:
    // 0x2763f4: 0xc080726
label_2763f8:
    if (ctx->pc == 0x2763F8u) {
        ctx->pc = 0x2763F8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294945056));
        ctx->pc = 0x2763FCu;
        goto label_2763fc;
    }
    ctx->pc = 0x2763F4u;
    SET_GPR_U32(ctx, 31, 0x2763FCu);
    ctx->pc = 0x2763F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294945056));
    ctx->pc = 0x201C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindScrollMessage_0x201c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2763FCu; }
    }
    if (ctx->pc != 0x2763FCu) { return; }
    ctx->pc = 0x2763FCu;
label_2763fc:
    // 0x2763fc: 0x40802d
    ctx->pc = 0x2763fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_276400:
    // 0x276400: 0xc09848c
label_276404:
    if (ctx->pc == 0x276404u) {
        ctx->pc = 0x276404u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x276408u;
        goto label_276408;
    }
    ctx->pc = 0x276400u;
    SET_GPR_U32(ctx, 31, 0x276408u);
    ctx->pc = 0x276404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x261230u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioGargSpeech_0x261230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276408u; }
    }
    if (ctx->pc != 0x276408u) { return; }
    ctx->pc = 0x276408u;
label_276408:
    // 0x276408: 0x2404ffff
    ctx->pc = 0x276408u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_27640c:
    // 0x27640c: 0x200282d
    ctx->pc = 0x27640cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_276410:
    // 0x276410: 0x220302d
    ctx->pc = 0x276410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_276414:
    // 0x276414: 0xc08a0b4
label_276418:
    if (ctx->pc == 0x276418u) {
        ctx->pc = 0x276418u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27641Cu;
        goto label_27641c;
    }
    ctx->pc = 0x276414u;
    SET_GPR_U32(ctx, 31, 0x27641Cu);
    ctx->pc = 0x276418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2282D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollMessageBox_0x2282d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27641Cu; }
    }
    if (ctx->pc != 0x27641Cu) { return; }
    ctx->pc = 0x27641Cu;
label_27641c:
    // 0x27641c: 0x302d
    ctx->pc = 0x27641cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276420:
    // 0x276420: 0x24092b00
    ctx->pc = 0x276420u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 11008));
label_276424:
    // 0x276424: 0x3c020032
    ctx->pc = 0x276424u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_276428:
    // 0x276428: 0x244a1bc0
    ctx->pc = 0x276428u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 7104));
label_27642c:
    // 0x27642c: 0x115840
    ctx->pc = 0x27642cu;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 17), 1));
label_276430:
    // 0x276430: 0x240800b4
    ctx->pc = 0x276430u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 180));
label_276434:
    // 0x276434: 0x3c030034
    ctx->pc = 0x276434u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_276438:
    // 0x276438: 0x2463fb00
    ctx->pc = 0x276438u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966016));
label_27643c:
    // 0x27643c: 0x111080
    ctx->pc = 0x27643cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_276440:
    // 0x276440: 0x431021
    ctx->pc = 0x276440u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_276444:
    // 0x276444: 0x8c470000
    ctx->pc = 0x276444u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_276448:
    // 0x276448: 0x2405ffff
    ctx->pc = 0x276448u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_27644c:
    // 0x27644c: 0xc91018
    ctx->pc = 0x27644cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_276450:
    // 0x276450: 0x4a2021
    ctx->pc = 0x276450u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_276454:
    // 0x276454: 0x8c82000c
    ctx->pc = 0x276454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_276458:
    // 0x276458: 0x481818
    ctx->pc = 0x276458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_27645c:
    // 0x27645c: 0x6b1021
    ctx->pc = 0x27645cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_276460:
    // 0x276460: 0x24830d04
    ctx->pc = 0x276460u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 3332));
label_276464:
    // 0x276464: 0x621821
    ctx->pc = 0x276464u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_276468:
    // 0x276468: 0x84620000
    ctx->pc = 0x276468u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_27646c:
    // 0x27646c: 0x14470007
label_276470:
    if (ctx->pc == 0x276470u) {
        ctx->pc = 0x276470u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x276474u;
        goto label_276474;
    }
    ctx->pc = 0x27646Cu;
    {
        const bool branch_taken_0x27646c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        ctx->pc = 0x276470u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x27646c) {
            ctx->pc = 0x27648Cu;
            goto label_27648c;
        }
    }
    ctx->pc = 0x276474u;
label_276474:
    // 0x276474: 0xa4650000
    ctx->pc = 0x276474u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_276478:
    // 0x276478: 0x8c82000c
    ctx->pc = 0x276478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_27647c:
    // 0x27647c: 0x481818
    ctx->pc = 0x27647cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_276480:
    // 0x276480: 0x6b1021
    ctx->pc = 0x276480u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_276484:
    // 0x276484: 0x821021
    ctx->pc = 0x276484u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_276488:
    // 0x276488: 0xa4451d90
    ctx->pc = 0x276488u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 7568), (uint16_t)GPR_U32(ctx, 5));
label_27648c:
    // 0x27648c: 0x28c20004
    ctx->pc = 0x27648cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
label_276490:
    // 0x276490: 0x1440ffef
label_276494:
    if (ctx->pc == 0x276494u) {
        ctx->pc = 0x276494u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x276498u;
        goto label_276498;
    }
    ctx->pc = 0x276490u;
    {
        const bool branch_taken_0x276490 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x276494u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x276490) {
            ctx->pc = 0x276450u;
            goto label_276450;
        }
    }
    ctx->pc = 0x276498u;
label_276498:
    // 0x276498: 0x3c020031
    ctx->pc = 0x276498u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_27649c:
    // 0x27649c: 0xc440ffa4
    ctx->pc = 0x27649cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2764a0:
    // 0x2764a0: 0xe6a03a00
    ctx->pc = 0x2764a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 14848), bits); }
label_2764a4:
    // 0x2764a4: 0x26310001
    ctx->pc = 0x2764a4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2764a8:
    // 0x2764a8: 0x2a220003
    ctx->pc = 0x2764a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 3));
label_2764ac:
    // 0x2764ac: 0x1440ffa8
label_2764b0:
    if (ctx->pc == 0x2764B0u) {
        ctx->pc = 0x2764B0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x2764B4u;
        goto label_2764b4;
    }
    ctx->pc = 0x2764ACu;
    {
        const bool branch_taken_0x2764ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2764B0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x2764ac) {
            ctx->pc = 0x276350u;
            goto label_276350;
        }
    }
    ctx->pc = 0x2764B4u;
label_2764b4:
    // 0x2764b4: 0x882d
    ctx->pc = 0x2764b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2764b8:
    // 0x2764b8: 0x3c020034
    ctx->pc = 0x2764b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2764bc:
    // 0x2764bc: 0x2453fa90
    ctx->pc = 0x2764bcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294965904));
label_2764c0:
    // 0x2764c0: 0x27b20010
    ctx->pc = 0x2764c0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
label_2764c4:
    // 0x2764c4: 0x3c14003c
    ctx->pc = 0x2764c4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)60 << 16));
label_2764c8:
    // 0x2764c8: 0x111880
    ctx->pc = 0x2764c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_2764cc:
    // 0x2764cc: 0x0
    ctx->pc = 0x2764ccu;
    // NOP
label_2764d0:
    // 0x2764d0: 0x731021
    ctx->pc = 0x2764d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2764d4:
    // 0x2764d4: 0x8c420000
    ctx->pc = 0x2764d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2764d8:
    // 0x2764d8: 0x1040005a
label_2764dc:
    if (ctx->pc == 0x2764DCu) {
        ctx->pc = 0x2764DCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x2764E0u;
        goto label_2764e0;
    }
    ctx->pc = 0x2764D8u;
    {
        const bool branch_taken_0x2764d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2764DCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        if (branch_taken_0x2764d8) {
            ctx->pc = 0x276644u;
            goto label_276644;
        }
    }
    ctx->pc = 0x2764E0u;
label_2764e0:
    // 0x2764e0: 0xac400000
    ctx->pc = 0x2764e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2764e4:
    // 0x2764e4: 0x302d
    ctx->pc = 0x2764e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2764e8:
    // 0x2764e8: 0x24082b00
    ctx->pc = 0x2764e8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 11008));
label_2764ec:
    // 0x2764ec: 0x3c020032
    ctx->pc = 0x2764ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2764f0:
    // 0x2764f0: 0x244a1bc0
    ctx->pc = 0x2764f0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 7104));
label_2764f4:
    // 0x2764f4: 0x3c020032
    ctx->pc = 0x2764f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2764f8:
    // 0x2764f8: 0x8c451540
    ctx->pc = 0x2764f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 5440)));
label_2764fc:
    // 0x2764fc: 0x115840
    ctx->pc = 0x2764fcu;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 17), 1));
label_276500:
    // 0x276500: 0x240700b4
    ctx->pc = 0x276500u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 180));
label_276504:
    // 0x276504: 0x27a20010
    ctx->pc = 0x276504u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 16));
label_276508:
    // 0x276508: 0x432021
    ctx->pc = 0x276508u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27650c:
    // 0x27650c: 0xc81018
    ctx->pc = 0x27650cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_276510:
    // 0x276510: 0x4a1821
    ctx->pc = 0x276510u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_276514:
    // 0x276514: 0x8c6200fc
    ctx->pc = 0x276514u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_276518:
    // 0x276518: 0x50400012
label_27651c:
    if (ctx->pc == 0x27651Cu) {
        ctx->pc = 0x27651Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x276520u;
        goto label_276520;
    }
    ctx->pc = 0x276518u;
    {
        const bool branch_taken_0x276518 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x276518) {
            ctx->pc = 0x27651Cu;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x276564u;
            goto label_276564;
        }
    }
    ctx->pc = 0x276520u;
label_276520:
    // 0x276520: 0x8c620104
    ctx->pc = 0x276520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_276524:
    // 0x276524: 0x5045000f
label_276528:
    if (ctx->pc == 0x276528u) {
        ctx->pc = 0x276528u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x27652Cu;
        goto label_27652c;
    }
    ctx->pc = 0x276524u;
    {
        const bool branch_taken_0x276524 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        if (branch_taken_0x276524) {
            ctx->pc = 0x276528u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x276564u;
            goto label_276564;
        }
    }
    ctx->pc = 0x27652Cu;
label_27652c:
    // 0x27652c: 0x8c62000c
    ctx->pc = 0x27652cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_276530:
    // 0x276530: 0x474818
    ctx->pc = 0x276530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_276534:
    // 0x276534: 0x12b1021
    ctx->pc = 0x276534u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_276538:
    // 0x276538: 0x621021
    ctx->pc = 0x276538u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27653c:
    // 0x27653c: 0x84430d0a
    ctx->pc = 0x27653cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 3338)));
label_276540:
    // 0x276540: 0x8c820000
    ctx->pc = 0x276540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_276544:
    // 0x276544: 0x4420007
label_276548:
    if (ctx->pc == 0x276548u) {
        ctx->pc = 0x276548u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x27654Cu;
        goto label_27654c;
    }
    ctx->pc = 0x276544u;
    {
        const bool branch_taken_0x276544 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x276544) {
            ctx->pc = 0x276548u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x276564u;
            goto label_276564;
        }
    }
    ctx->pc = 0x27654Cu;
label_27654c:
    // 0x27654c: 0x4600003
label_276550:
    if (ctx->pc == 0x276550u) {
        ctx->pc = 0x276550u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
        ctx->pc = 0x276554u;
        goto label_276554;
    }
    ctx->pc = 0x27654Cu;
    {
        const bool branch_taken_0x27654c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x276550u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
        if (branch_taken_0x27654c) {
            ctx->pc = 0x27655Cu;
            goto label_27655c;
        }
    }
    ctx->pc = 0x276554u;
label_276554:
    // 0x276554: 0x50400003
label_276558:
    if (ctx->pc == 0x276558u) {
        ctx->pc = 0x276558u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x27655Cu;
        goto label_27655c;
    }
    ctx->pc = 0x276554u;
    {
        const bool branch_taken_0x276554 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x276554) {
            ctx->pc = 0x276558u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x276564u;
            goto label_276564;
        }
    }
    ctx->pc = 0x27655Cu;
label_27655c:
    // 0x27655c: 0xac830000
    ctx->pc = 0x27655cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_276560:
    // 0x276560: 0x24c60001
    ctx->pc = 0x276560u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_276564:
    // 0x276564: 0x28c20004
    ctx->pc = 0x276564u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
label_276568:
    // 0x276568: 0x1440ffe9
label_27656c:
    if (ctx->pc == 0x27656Cu) {
        ctx->pc = 0x27656Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x276570u;
        goto label_276570;
    }
    ctx->pc = 0x276568u;
    {
        const bool branch_taken_0x276568 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27656Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x276568) {
            ctx->pc = 0x276510u;
            goto label_276510;
        }
    }
    ctx->pc = 0x276570u;
label_276570:
    // 0x276570: 0x111080
    ctx->pc = 0x276570u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_276574:
    // 0x276574: 0x2421821
    ctx->pc = 0x276574u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_276578:
    // 0x276578: 0x531021
    ctx->pc = 0x276578u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_27657c:
    // 0x27657c: 0x8c630000
    ctx->pc = 0x27657cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_276580:
    // 0x276580: 0x8c420000
    ctx->pc = 0x276580u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_276584:
    // 0x276584: 0x54620030
label_276588:
    if (ctx->pc == 0x276588u) {
        ctx->pc = 0x276588u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x27658Cu;
        goto label_27658c;
    }
    ctx->pc = 0x276584u;
    {
        const bool branch_taken_0x276584 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x276584) {
            ctx->pc = 0x276588u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x276648u;
            goto label_276648;
        }
    }
    ctx->pc = 0x27658Cu;
label_27658c:
    // 0x27658c: 0x202d
    ctx->pc = 0x27658cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276590:
    // 0x276590: 0x3c05003b
    ctx->pc = 0x276590u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_276594:
    // 0x276594: 0xc080726
label_276598:
    if (ctx->pc == 0x276598u) {
        ctx->pc = 0x276598u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294945072));
        ctx->pc = 0x27659Cu;
        goto label_27659c;
    }
    ctx->pc = 0x276594u;
    SET_GPR_U32(ctx, 31, 0x27659Cu);
    ctx->pc = 0x276598u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294945072));
    ctx->pc = 0x201C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindScrollMessage_0x201c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27659Cu; }
    }
    if (ctx->pc != 0x27659Cu) { return; }
    ctx->pc = 0x27659Cu;
label_27659c:
    // 0x27659c: 0x40802d
    ctx->pc = 0x27659cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2765a0:
    // 0x2765a0: 0xc098474
label_2765a4:
    if (ctx->pc == 0x2765A4u) {
        ctx->pc = 0x2765A4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2765A8u;
        goto label_2765a8;
    }
    ctx->pc = 0x2765A0u;
    SET_GPR_U32(ctx, 31, 0x2765A8u);
    ctx->pc = 0x2765A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2611D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCrystalSpeech_0x2611d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2765A8u; }
    }
    if (ctx->pc != 0x2765A8u) { return; }
    ctx->pc = 0x2765A8u;
label_2765a8:
    // 0x2765a8: 0x2404ffff
    ctx->pc = 0x2765a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2765ac:
    // 0x2765ac: 0x200282d
    ctx->pc = 0x2765acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2765b0:
    // 0x2765b0: 0x220302d
    ctx->pc = 0x2765b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2765b4:
    // 0x2765b4: 0xc08a0b4
label_2765b8:
    if (ctx->pc == 0x2765B8u) {
        ctx->pc = 0x2765B8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2765BCu;
        goto label_2765bc;
    }
    ctx->pc = 0x2765B4u;
    SET_GPR_U32(ctx, 31, 0x2765BCu);
    ctx->pc = 0x2765B8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2282D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollMessageBox_0x2282d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2765BCu; }
    }
    if (ctx->pc != 0x2765BCu) { return; }
    ctx->pc = 0x2765BCu;
label_2765bc:
    // 0x2765bc: 0x302d
    ctx->pc = 0x2765bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2765c0:
    // 0x2765c0: 0x24092b00
    ctx->pc = 0x2765c0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 11008));
label_2765c4:
    // 0x2765c4: 0x3c020032
    ctx->pc = 0x2765c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2765c8:
    // 0x2765c8: 0x244a1bc0
    ctx->pc = 0x2765c8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 7104));
label_2765cc:
    // 0x2765cc: 0x115840
    ctx->pc = 0x2765ccu;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 17), 1));
label_2765d0:
    // 0x2765d0: 0x240800b4
    ctx->pc = 0x2765d0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 180));
label_2765d4:
    // 0x2765d4: 0x3c030034
    ctx->pc = 0x2765d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_2765d8:
    // 0x2765d8: 0x2463fa90
    ctx->pc = 0x2765d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965904));
label_2765dc:
    // 0x2765dc: 0x111080
    ctx->pc = 0x2765dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_2765e0:
    // 0x2765e0: 0x431021
    ctx->pc = 0x2765e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2765e4:
    // 0x2765e4: 0x8c470000
    ctx->pc = 0x2765e4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2765e8:
    // 0x2765e8: 0x2405ffff
    ctx->pc = 0x2765e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2765ec:
    // 0x2765ec: 0xc91018
    ctx->pc = 0x2765ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2765f0:
    // 0x2765f0: 0x4a2021
    ctx->pc = 0x2765f0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_2765f4:
    // 0x2765f4: 0x8c82000c
    ctx->pc = 0x2765f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2765f8:
    // 0x2765f8: 0x481818
    ctx->pc = 0x2765f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2765fc:
    // 0x2765fc: 0x6b1021
    ctx->pc = 0x2765fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_276600:
    // 0x276600: 0x24830d0a
    ctx->pc = 0x276600u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 3338));
label_276604:
    // 0x276604: 0x621821
    ctx->pc = 0x276604u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_276608:
    // 0x276608: 0x84620000
    ctx->pc = 0x276608u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_27660c:
    // 0x27660c: 0x14470007
label_276610:
    if (ctx->pc == 0x276610u) {
        ctx->pc = 0x276610u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x276614u;
        goto label_276614;
    }
    ctx->pc = 0x27660Cu;
    {
        const bool branch_taken_0x27660c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        ctx->pc = 0x276610u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x27660c) {
            ctx->pc = 0x27662Cu;
            goto label_27662c;
        }
    }
    ctx->pc = 0x276614u;
label_276614:
    // 0x276614: 0xa4650000
    ctx->pc = 0x276614u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_276618:
    // 0x276618: 0x8c82000c
    ctx->pc = 0x276618u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_27661c:
    // 0x27661c: 0x481818
    ctx->pc = 0x27661cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_276620:
    // 0x276620: 0x6b1021
    ctx->pc = 0x276620u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_276624:
    // 0x276624: 0x821021
    ctx->pc = 0x276624u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_276628:
    // 0x276628: 0xa4451d96
    ctx->pc = 0x276628u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 7574), (uint16_t)GPR_U32(ctx, 5));
label_27662c:
    // 0x27662c: 0x28c20004
    ctx->pc = 0x27662cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
label_276630:
    // 0x276630: 0x1440ffef
label_276634:
    if (ctx->pc == 0x276634u) {
        ctx->pc = 0x276634u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x276638u;
        goto label_276638;
    }
    ctx->pc = 0x276630u;
    {
        const bool branch_taken_0x276630 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x276634u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x276630) {
            ctx->pc = 0x2765F0u;
            goto label_2765f0;
        }
    }
    ctx->pc = 0x276638u;
label_276638:
    // 0x276638: 0x3c020031
    ctx->pc = 0x276638u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_27663c:
    // 0x27663c: 0xc440ffa4
    ctx->pc = 0x27663cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276640:
    // 0x276640: 0xe6803a00
    ctx->pc = 0x276640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 14848), bits); }
label_276644:
    // 0x276644: 0x26310001
    ctx->pc = 0x276644u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_276648:
    // 0x276648: 0x2a220009
    ctx->pc = 0x276648u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 9));
label_27664c:
    // 0x27664c: 0x1440ffa0
label_276650:
    if (ctx->pc == 0x276650u) {
        ctx->pc = 0x276650u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x276654u;
        goto label_276654;
    }
    ctx->pc = 0x27664Cu;
    {
        const bool branch_taken_0x27664c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x276650u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x27664c) {
            ctx->pc = 0x2764D0u;
            goto label_2764d0;
        }
    }
    ctx->pc = 0x276654u;
label_276654:
    // 0x276654: 0xdfbf00c0
    ctx->pc = 0x276654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_276658:
    // 0x276658: 0xdfb700b0
    ctx->pc = 0x276658u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_27665c:
    // 0x27665c: 0xdfb600a0
    ctx->pc = 0x27665cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_276660:
    // 0x276660: 0xdfb50090
    ctx->pc = 0x276660u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_276664:
    // 0x276664: 0xdfb40080
    ctx->pc = 0x276664u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_276668:
    // 0x276668: 0xdfb30070
    ctx->pc = 0x276668u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_27666c:
    // 0x27666c: 0xdfb20060
    ctx->pc = 0x27666cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_276670:
    // 0x276670: 0xdfb10050
    ctx->pc = 0x276670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_276674:
    // 0x276674: 0xdfb00040
    ctx->pc = 0x276674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_276678:
    // 0x276678: 0x3e00008
label_27667c:
    if (ctx->pc == 0x27667Cu) {
        ctx->pc = 0x27667Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x276680u;
        goto label_fallthrough_0x276678;
    }
    ctx->pc = 0x276678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27667Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x275CE0u: goto label_275ce0;
            case 0x275CE4u: goto label_275ce4;
            case 0x275CE8u: goto label_275ce8;
            case 0x275CECu: goto label_275cec;
            case 0x275CF0u: goto label_275cf0;
            case 0x275CF4u: goto label_275cf4;
            case 0x275CF8u: goto label_275cf8;
            case 0x275CFCu: goto label_275cfc;
            case 0x275D00u: goto label_275d00;
            case 0x275D04u: goto label_275d04;
            case 0x275D08u: goto label_275d08;
            case 0x275D0Cu: goto label_275d0c;
            case 0x275D10u: goto label_275d10;
            case 0x275D14u: goto label_275d14;
            case 0x275D18u: goto label_275d18;
            case 0x275D1Cu: goto label_275d1c;
            case 0x275D20u: goto label_275d20;
            case 0x275D24u: goto label_275d24;
            case 0x275D28u: goto label_275d28;
            case 0x275D2Cu: goto label_275d2c;
            case 0x275D30u: goto label_275d30;
            case 0x275D34u: goto label_275d34;
            case 0x275D38u: goto label_275d38;
            case 0x275D3Cu: goto label_275d3c;
            case 0x275D40u: goto label_275d40;
            case 0x275D44u: goto label_275d44;
            case 0x275D48u: goto label_275d48;
            case 0x275D4Cu: goto label_275d4c;
            case 0x275D50u: goto label_275d50;
            case 0x275D54u: goto label_275d54;
            case 0x275D58u: goto label_275d58;
            case 0x275D5Cu: goto label_275d5c;
            case 0x275D60u: goto label_275d60;
            case 0x275D64u: goto label_275d64;
            case 0x275D68u: goto label_275d68;
            case 0x275D6Cu: goto label_275d6c;
            case 0x275D70u: goto label_275d70;
            case 0x275D74u: goto label_275d74;
            case 0x275D78u: goto label_275d78;
            case 0x275D7Cu: goto label_275d7c;
            case 0x275D80u: goto label_275d80;
            case 0x275D84u: goto label_275d84;
            case 0x275D88u: goto label_275d88;
            case 0x275D8Cu: goto label_275d8c;
            case 0x275D90u: goto label_275d90;
            case 0x275D94u: goto label_275d94;
            case 0x275D98u: goto label_275d98;
            case 0x275D9Cu: goto label_275d9c;
            case 0x275DA0u: goto label_275da0;
            case 0x275DA4u: goto label_275da4;
            case 0x275DA8u: goto label_275da8;
            case 0x275DACu: goto label_275dac;
            case 0x275DB0u: goto label_275db0;
            case 0x275DB4u: goto label_275db4;
            case 0x275DB8u: goto label_275db8;
            case 0x275DBCu: goto label_275dbc;
            case 0x275DC0u: goto label_275dc0;
            case 0x275DC4u: goto label_275dc4;
            case 0x275DC8u: goto label_275dc8;
            case 0x275DCCu: goto label_275dcc;
            case 0x275DD0u: goto label_275dd0;
            case 0x275DD4u: goto label_275dd4;
            case 0x275DD8u: goto label_275dd8;
            case 0x275DDCu: goto label_275ddc;
            case 0x275DE0u: goto label_275de0;
            case 0x275DE4u: goto label_275de4;
            case 0x275DE8u: goto label_275de8;
            case 0x275DECu: goto label_275dec;
            case 0x275DF0u: goto label_275df0;
            case 0x275DF4u: goto label_275df4;
            case 0x275DF8u: goto label_275df8;
            case 0x275DFCu: goto label_275dfc;
            case 0x275E00u: goto label_275e00;
            case 0x275E04u: goto label_275e04;
            case 0x275E08u: goto label_275e08;
            case 0x275E0Cu: goto label_275e0c;
            case 0x275E10u: goto label_275e10;
            case 0x275E14u: goto label_275e14;
            case 0x275E18u: goto label_275e18;
            case 0x275E1Cu: goto label_275e1c;
            case 0x275E20u: goto label_275e20;
            case 0x275E24u: goto label_275e24;
            case 0x275E28u: goto label_275e28;
            case 0x275E2Cu: goto label_275e2c;
            case 0x275E30u: goto label_275e30;
            case 0x275E34u: goto label_275e34;
            case 0x275E38u: goto label_275e38;
            case 0x275E3Cu: goto label_275e3c;
            case 0x275E40u: goto label_275e40;
            case 0x275E44u: goto label_275e44;
            case 0x275E48u: goto label_275e48;
            case 0x275E4Cu: goto label_275e4c;
            case 0x275E50u: goto label_275e50;
            case 0x275E54u: goto label_275e54;
            case 0x275E58u: goto label_275e58;
            case 0x275E5Cu: goto label_275e5c;
            case 0x275E60u: goto label_275e60;
            case 0x275E64u: goto label_275e64;
            case 0x275E68u: goto label_275e68;
            case 0x275E6Cu: goto label_275e6c;
            case 0x275E70u: goto label_275e70;
            case 0x275E74u: goto label_275e74;
            case 0x275E78u: goto label_275e78;
            case 0x275E7Cu: goto label_275e7c;
            case 0x275E80u: goto label_275e80;
            case 0x275E84u: goto label_275e84;
            case 0x275E88u: goto label_275e88;
            case 0x275E8Cu: goto label_275e8c;
            case 0x275E90u: goto label_275e90;
            case 0x275E94u: goto label_275e94;
            case 0x275E98u: goto label_275e98;
            case 0x275E9Cu: goto label_275e9c;
            case 0x275EA0u: goto label_275ea0;
            case 0x275EA4u: goto label_275ea4;
            case 0x275EA8u: goto label_275ea8;
            case 0x275EACu: goto label_275eac;
            case 0x275EB0u: goto label_275eb0;
            case 0x275EB4u: goto label_275eb4;
            case 0x275EB8u: goto label_275eb8;
            case 0x275EBCu: goto label_275ebc;
            case 0x275EC0u: goto label_275ec0;
            case 0x275EC4u: goto label_275ec4;
            case 0x275EC8u: goto label_275ec8;
            case 0x275ECCu: goto label_275ecc;
            case 0x275ED0u: goto label_275ed0;
            case 0x275ED4u: goto label_275ed4;
            case 0x275ED8u: goto label_275ed8;
            case 0x275EDCu: goto label_275edc;
            case 0x275EE0u: goto label_275ee0;
            case 0x275EE4u: goto label_275ee4;
            case 0x275EE8u: goto label_275ee8;
            case 0x275EECu: goto label_275eec;
            case 0x275EF0u: goto label_275ef0;
            case 0x275EF4u: goto label_275ef4;
            case 0x275EF8u: goto label_275ef8;
            case 0x275EFCu: goto label_275efc;
            case 0x275F00u: goto label_275f00;
            case 0x275F04u: goto label_275f04;
            case 0x275F08u: goto label_275f08;
            case 0x275F0Cu: goto label_275f0c;
            case 0x275F10u: goto label_275f10;
            case 0x275F14u: goto label_275f14;
            case 0x275F18u: goto label_275f18;
            case 0x275F1Cu: goto label_275f1c;
            case 0x275F20u: goto label_275f20;
            case 0x275F24u: goto label_275f24;
            case 0x275F28u: goto label_275f28;
            case 0x275F2Cu: goto label_275f2c;
            case 0x275F30u: goto label_275f30;
            case 0x275F34u: goto label_275f34;
            case 0x275F38u: goto label_275f38;
            case 0x275F3Cu: goto label_275f3c;
            case 0x275F40u: goto label_275f40;
            case 0x275F44u: goto label_275f44;
            case 0x275F48u: goto label_275f48;
            case 0x275F4Cu: goto label_275f4c;
            case 0x275F50u: goto label_275f50;
            case 0x275F54u: goto label_275f54;
            case 0x275F58u: goto label_275f58;
            case 0x275F5Cu: goto label_275f5c;
            case 0x275F60u: goto label_275f60;
            case 0x275F64u: goto label_275f64;
            case 0x275F68u: goto label_275f68;
            case 0x275F6Cu: goto label_275f6c;
            case 0x275F70u: goto label_275f70;
            case 0x275F74u: goto label_275f74;
            case 0x275F78u: goto label_275f78;
            case 0x275F7Cu: goto label_275f7c;
            case 0x275F80u: goto label_275f80;
            case 0x275F84u: goto label_275f84;
            case 0x275F88u: goto label_275f88;
            case 0x275F8Cu: goto label_275f8c;
            case 0x275F90u: goto label_275f90;
            case 0x275F94u: goto label_275f94;
            case 0x275F98u: goto label_275f98;
            case 0x275F9Cu: goto label_275f9c;
            case 0x275FA0u: goto label_275fa0;
            case 0x275FA4u: goto label_275fa4;
            case 0x275FA8u: goto label_275fa8;
            case 0x275FACu: goto label_275fac;
            case 0x275FB0u: goto label_275fb0;
            case 0x275FB4u: goto label_275fb4;
            case 0x275FB8u: goto label_275fb8;
            case 0x275FBCu: goto label_275fbc;
            case 0x275FC0u: goto label_275fc0;
            case 0x275FC4u: goto label_275fc4;
            case 0x275FC8u: goto label_275fc8;
            case 0x275FCCu: goto label_275fcc;
            case 0x275FD0u: goto label_275fd0;
            case 0x275FD4u: goto label_275fd4;
            case 0x275FD8u: goto label_275fd8;
            case 0x275FDCu: goto label_275fdc;
            case 0x275FE0u: goto label_275fe0;
            case 0x275FE4u: goto label_275fe4;
            case 0x275FE8u: goto label_275fe8;
            case 0x275FECu: goto label_275fec;
            case 0x275FF0u: goto label_275ff0;
            case 0x275FF4u: goto label_275ff4;
            case 0x275FF8u: goto label_275ff8;
            case 0x275FFCu: goto label_275ffc;
            case 0x276000u: goto label_276000;
            case 0x276004u: goto label_276004;
            case 0x276008u: goto label_276008;
            case 0x27600Cu: goto label_27600c;
            case 0x276010u: goto label_276010;
            case 0x276014u: goto label_276014;
            case 0x276018u: goto label_276018;
            case 0x27601Cu: goto label_27601c;
            case 0x276020u: goto label_276020;
            case 0x276024u: goto label_276024;
            case 0x276028u: goto label_276028;
            case 0x27602Cu: goto label_27602c;
            case 0x276030u: goto label_276030;
            case 0x276034u: goto label_276034;
            case 0x276038u: goto label_276038;
            case 0x27603Cu: goto label_27603c;
            case 0x276040u: goto label_276040;
            case 0x276044u: goto label_276044;
            case 0x276048u: goto label_276048;
            case 0x27604Cu: goto label_27604c;
            case 0x276050u: goto label_276050;
            case 0x276054u: goto label_276054;
            case 0x276058u: goto label_276058;
            case 0x27605Cu: goto label_27605c;
            case 0x276060u: goto label_276060;
            case 0x276064u: goto label_276064;
            case 0x276068u: goto label_276068;
            case 0x27606Cu: goto label_27606c;
            case 0x276070u: goto label_276070;
            case 0x276074u: goto label_276074;
            case 0x276078u: goto label_276078;
            case 0x27607Cu: goto label_27607c;
            case 0x276080u: goto label_276080;
            case 0x276084u: goto label_276084;
            case 0x276088u: goto label_276088;
            case 0x27608Cu: goto label_27608c;
            case 0x276090u: goto label_276090;
            case 0x276094u: goto label_276094;
            case 0x276098u: goto label_276098;
            case 0x27609Cu: goto label_27609c;
            case 0x2760A0u: goto label_2760a0;
            case 0x2760A4u: goto label_2760a4;
            case 0x2760A8u: goto label_2760a8;
            case 0x2760ACu: goto label_2760ac;
            case 0x2760B0u: goto label_2760b0;
            case 0x2760B4u: goto label_2760b4;
            case 0x2760B8u: goto label_2760b8;
            case 0x2760BCu: goto label_2760bc;
            case 0x2760C0u: goto label_2760c0;
            case 0x2760C4u: goto label_2760c4;
            case 0x2760C8u: goto label_2760c8;
            case 0x2760CCu: goto label_2760cc;
            case 0x2760D0u: goto label_2760d0;
            case 0x2760D4u: goto label_2760d4;
            case 0x2760D8u: goto label_2760d8;
            case 0x2760DCu: goto label_2760dc;
            case 0x2760E0u: goto label_2760e0;
            case 0x2760E4u: goto label_2760e4;
            case 0x2760E8u: goto label_2760e8;
            case 0x2760ECu: goto label_2760ec;
            case 0x2760F0u: goto label_2760f0;
            case 0x2760F4u: goto label_2760f4;
            case 0x2760F8u: goto label_2760f8;
            case 0x2760FCu: goto label_2760fc;
            case 0x276100u: goto label_276100;
            case 0x276104u: goto label_276104;
            case 0x276108u: goto label_276108;
            case 0x27610Cu: goto label_27610c;
            case 0x276110u: goto label_276110;
            case 0x276114u: goto label_276114;
            case 0x276118u: goto label_276118;
            case 0x27611Cu: goto label_27611c;
            case 0x276120u: goto label_276120;
            case 0x276124u: goto label_276124;
            case 0x276128u: goto label_276128;
            case 0x27612Cu: goto label_27612c;
            case 0x276130u: goto label_276130;
            case 0x276134u: goto label_276134;
            case 0x276138u: goto label_276138;
            case 0x27613Cu: goto label_27613c;
            case 0x276140u: goto label_276140;
            case 0x276144u: goto label_276144;
            case 0x276148u: goto label_276148;
            case 0x27614Cu: goto label_27614c;
            case 0x276150u: goto label_276150;
            case 0x276154u: goto label_276154;
            case 0x276158u: goto label_276158;
            case 0x27615Cu: goto label_27615c;
            case 0x276160u: goto label_276160;
            case 0x276164u: goto label_276164;
            case 0x276168u: goto label_276168;
            case 0x27616Cu: goto label_27616c;
            case 0x276170u: goto label_276170;
            case 0x276174u: goto label_276174;
            case 0x276178u: goto label_276178;
            case 0x27617Cu: goto label_27617c;
            case 0x276180u: goto label_276180;
            case 0x276184u: goto label_276184;
            case 0x276188u: goto label_276188;
            case 0x27618Cu: goto label_27618c;
            case 0x276190u: goto label_276190;
            case 0x276194u: goto label_276194;
            case 0x276198u: goto label_276198;
            case 0x27619Cu: goto label_27619c;
            case 0x2761A0u: goto label_2761a0;
            case 0x2761A4u: goto label_2761a4;
            case 0x2761A8u: goto label_2761a8;
            case 0x2761ACu: goto label_2761ac;
            case 0x2761B0u: goto label_2761b0;
            case 0x2761B4u: goto label_2761b4;
            case 0x2761B8u: goto label_2761b8;
            case 0x2761BCu: goto label_2761bc;
            case 0x2761C0u: goto label_2761c0;
            case 0x2761C4u: goto label_2761c4;
            case 0x2761C8u: goto label_2761c8;
            case 0x2761CCu: goto label_2761cc;
            case 0x2761D0u: goto label_2761d0;
            case 0x2761D4u: goto label_2761d4;
            case 0x2761D8u: goto label_2761d8;
            case 0x2761DCu: goto label_2761dc;
            case 0x2761E0u: goto label_2761e0;
            case 0x2761E4u: goto label_2761e4;
            case 0x2761E8u: goto label_2761e8;
            case 0x2761ECu: goto label_2761ec;
            case 0x2761F0u: goto label_2761f0;
            case 0x2761F4u: goto label_2761f4;
            case 0x2761F8u: goto label_2761f8;
            case 0x2761FCu: goto label_2761fc;
            case 0x276200u: goto label_276200;
            case 0x276204u: goto label_276204;
            case 0x276208u: goto label_276208;
            case 0x27620Cu: goto label_27620c;
            case 0x276210u: goto label_276210;
            case 0x276214u: goto label_276214;
            case 0x276218u: goto label_276218;
            case 0x27621Cu: goto label_27621c;
            case 0x276220u: goto label_276220;
            case 0x276224u: goto label_276224;
            case 0x276228u: goto label_276228;
            case 0x27622Cu: goto label_27622c;
            case 0x276230u: goto label_276230;
            case 0x276234u: goto label_276234;
            case 0x276238u: goto label_276238;
            case 0x27623Cu: goto label_27623c;
            case 0x276240u: goto label_276240;
            case 0x276244u: goto label_276244;
            case 0x276248u: goto label_276248;
            case 0x27624Cu: goto label_27624c;
            case 0x276250u: goto label_276250;
            case 0x276254u: goto label_276254;
            case 0x276258u: goto label_276258;
            case 0x27625Cu: goto label_27625c;
            case 0x276260u: goto label_276260;
            case 0x276264u: goto label_276264;
            case 0x276268u: goto label_276268;
            case 0x27626Cu: goto label_27626c;
            case 0x276270u: goto label_276270;
            case 0x276274u: goto label_276274;
            case 0x276278u: goto label_276278;
            case 0x27627Cu: goto label_27627c;
            case 0x276280u: goto label_276280;
            case 0x276284u: goto label_276284;
            case 0x276288u: goto label_276288;
            case 0x27628Cu: goto label_27628c;
            case 0x276290u: goto label_276290;
            case 0x276294u: goto label_276294;
            case 0x276298u: goto label_276298;
            case 0x27629Cu: goto label_27629c;
            case 0x2762A0u: goto label_2762a0;
            case 0x2762A4u: goto label_2762a4;
            case 0x2762A8u: goto label_2762a8;
            case 0x2762ACu: goto label_2762ac;
            case 0x2762B0u: goto label_2762b0;
            case 0x2762B4u: goto label_2762b4;
            case 0x2762B8u: goto label_2762b8;
            case 0x2762BCu: goto label_2762bc;
            case 0x2762C0u: goto label_2762c0;
            case 0x2762C4u: goto label_2762c4;
            case 0x2762C8u: goto label_2762c8;
            case 0x2762CCu: goto label_2762cc;
            case 0x2762D0u: goto label_2762d0;
            case 0x2762D4u: goto label_2762d4;
            case 0x2762D8u: goto label_2762d8;
            case 0x2762DCu: goto label_2762dc;
            case 0x2762E0u: goto label_2762e0;
            case 0x2762E4u: goto label_2762e4;
            case 0x2762E8u: goto label_2762e8;
            case 0x2762ECu: goto label_2762ec;
            case 0x2762F0u: goto label_2762f0;
            case 0x2762F4u: goto label_2762f4;
            case 0x2762F8u: goto label_2762f8;
            case 0x2762FCu: goto label_2762fc;
            case 0x276300u: goto label_276300;
            case 0x276304u: goto label_276304;
            case 0x276308u: goto label_276308;
            case 0x27630Cu: goto label_27630c;
            case 0x276310u: goto label_276310;
            case 0x276314u: goto label_276314;
            case 0x276318u: goto label_276318;
            case 0x27631Cu: goto label_27631c;
            case 0x276320u: goto label_276320;
            case 0x276324u: goto label_276324;
            case 0x276328u: goto label_276328;
            case 0x27632Cu: goto label_27632c;
            case 0x276330u: goto label_276330;
            case 0x276334u: goto label_276334;
            case 0x276338u: goto label_276338;
            case 0x27633Cu: goto label_27633c;
            case 0x276340u: goto label_276340;
            case 0x276344u: goto label_276344;
            case 0x276348u: goto label_276348;
            case 0x27634Cu: goto label_27634c;
            case 0x276350u: goto label_276350;
            case 0x276354u: goto label_276354;
            case 0x276358u: goto label_276358;
            case 0x27635Cu: goto label_27635c;
            case 0x276360u: goto label_276360;
            case 0x276364u: goto label_276364;
            case 0x276368u: goto label_276368;
            case 0x27636Cu: goto label_27636c;
            case 0x276370u: goto label_276370;
            case 0x276374u: goto label_276374;
            case 0x276378u: goto label_276378;
            case 0x27637Cu: goto label_27637c;
            case 0x276380u: goto label_276380;
            case 0x276384u: goto label_276384;
            case 0x276388u: goto label_276388;
            case 0x27638Cu: goto label_27638c;
            case 0x276390u: goto label_276390;
            case 0x276394u: goto label_276394;
            case 0x276398u: goto label_276398;
            case 0x27639Cu: goto label_27639c;
            case 0x2763A0u: goto label_2763a0;
            case 0x2763A4u: goto label_2763a4;
            case 0x2763A8u: goto label_2763a8;
            case 0x2763ACu: goto label_2763ac;
            case 0x2763B0u: goto label_2763b0;
            case 0x2763B4u: goto label_2763b4;
            case 0x2763B8u: goto label_2763b8;
            case 0x2763BCu: goto label_2763bc;
            case 0x2763C0u: goto label_2763c0;
            case 0x2763C4u: goto label_2763c4;
            case 0x2763C8u: goto label_2763c8;
            case 0x2763CCu: goto label_2763cc;
            case 0x2763D0u: goto label_2763d0;
            case 0x2763D4u: goto label_2763d4;
            case 0x2763D8u: goto label_2763d8;
            case 0x2763DCu: goto label_2763dc;
            case 0x2763E0u: goto label_2763e0;
            case 0x2763E4u: goto label_2763e4;
            case 0x2763E8u: goto label_2763e8;
            case 0x2763ECu: goto label_2763ec;
            case 0x2763F0u: goto label_2763f0;
            case 0x2763F4u: goto label_2763f4;
            case 0x2763F8u: goto label_2763f8;
            case 0x2763FCu: goto label_2763fc;
            case 0x276400u: goto label_276400;
            case 0x276404u: goto label_276404;
            case 0x276408u: goto label_276408;
            case 0x27640Cu: goto label_27640c;
            case 0x276410u: goto label_276410;
            case 0x276414u: goto label_276414;
            case 0x276418u: goto label_276418;
            case 0x27641Cu: goto label_27641c;
            case 0x276420u: goto label_276420;
            case 0x276424u: goto label_276424;
            case 0x276428u: goto label_276428;
            case 0x27642Cu: goto label_27642c;
            case 0x276430u: goto label_276430;
            case 0x276434u: goto label_276434;
            case 0x276438u: goto label_276438;
            case 0x27643Cu: goto label_27643c;
            case 0x276440u: goto label_276440;
            case 0x276444u: goto label_276444;
            case 0x276448u: goto label_276448;
            case 0x27644Cu: goto label_27644c;
            case 0x276450u: goto label_276450;
            case 0x276454u: goto label_276454;
            case 0x276458u: goto label_276458;
            case 0x27645Cu: goto label_27645c;
            case 0x276460u: goto label_276460;
            case 0x276464u: goto label_276464;
            case 0x276468u: goto label_276468;
            case 0x27646Cu: goto label_27646c;
            case 0x276470u: goto label_276470;
            case 0x276474u: goto label_276474;
            case 0x276478u: goto label_276478;
            case 0x27647Cu: goto label_27647c;
            case 0x276480u: goto label_276480;
            case 0x276484u: goto label_276484;
            case 0x276488u: goto label_276488;
            case 0x27648Cu: goto label_27648c;
            case 0x276490u: goto label_276490;
            case 0x276494u: goto label_276494;
            case 0x276498u: goto label_276498;
            case 0x27649Cu: goto label_27649c;
            case 0x2764A0u: goto label_2764a0;
            case 0x2764A4u: goto label_2764a4;
            case 0x2764A8u: goto label_2764a8;
            case 0x2764ACu: goto label_2764ac;
            case 0x2764B0u: goto label_2764b0;
            case 0x2764B4u: goto label_2764b4;
            case 0x2764B8u: goto label_2764b8;
            case 0x2764BCu: goto label_2764bc;
            case 0x2764C0u: goto label_2764c0;
            case 0x2764C4u: goto label_2764c4;
            case 0x2764C8u: goto label_2764c8;
            case 0x2764CCu: goto label_2764cc;
            case 0x2764D0u: goto label_2764d0;
            case 0x2764D4u: goto label_2764d4;
            case 0x2764D8u: goto label_2764d8;
            case 0x2764DCu: goto label_2764dc;
            case 0x2764E0u: goto label_2764e0;
            case 0x2764E4u: goto label_2764e4;
            case 0x2764E8u: goto label_2764e8;
            case 0x2764ECu: goto label_2764ec;
            case 0x2764F0u: goto label_2764f0;
            case 0x2764F4u: goto label_2764f4;
            case 0x2764F8u: goto label_2764f8;
            case 0x2764FCu: goto label_2764fc;
            case 0x276500u: goto label_276500;
            case 0x276504u: goto label_276504;
            case 0x276508u: goto label_276508;
            case 0x27650Cu: goto label_27650c;
            case 0x276510u: goto label_276510;
            case 0x276514u: goto label_276514;
            case 0x276518u: goto label_276518;
            case 0x27651Cu: goto label_27651c;
            case 0x276520u: goto label_276520;
            case 0x276524u: goto label_276524;
            case 0x276528u: goto label_276528;
            case 0x27652Cu: goto label_27652c;
            case 0x276530u: goto label_276530;
            case 0x276534u: goto label_276534;
            case 0x276538u: goto label_276538;
            case 0x27653Cu: goto label_27653c;
            case 0x276540u: goto label_276540;
            case 0x276544u: goto label_276544;
            case 0x276548u: goto label_276548;
            case 0x27654Cu: goto label_27654c;
            case 0x276550u: goto label_276550;
            case 0x276554u: goto label_276554;
            case 0x276558u: goto label_276558;
            case 0x27655Cu: goto label_27655c;
            case 0x276560u: goto label_276560;
            case 0x276564u: goto label_276564;
            case 0x276568u: goto label_276568;
            case 0x27656Cu: goto label_27656c;
            case 0x276570u: goto label_276570;
            case 0x276574u: goto label_276574;
            case 0x276578u: goto label_276578;
            case 0x27657Cu: goto label_27657c;
            case 0x276580u: goto label_276580;
            case 0x276584u: goto label_276584;
            case 0x276588u: goto label_276588;
            case 0x27658Cu: goto label_27658c;
            case 0x276590u: goto label_276590;
            case 0x276594u: goto label_276594;
            case 0x276598u: goto label_276598;
            case 0x27659Cu: goto label_27659c;
            case 0x2765A0u: goto label_2765a0;
            case 0x2765A4u: goto label_2765a4;
            case 0x2765A8u: goto label_2765a8;
            case 0x2765ACu: goto label_2765ac;
            case 0x2765B0u: goto label_2765b0;
            case 0x2765B4u: goto label_2765b4;
            case 0x2765B8u: goto label_2765b8;
            case 0x2765BCu: goto label_2765bc;
            case 0x2765C0u: goto label_2765c0;
            case 0x2765C4u: goto label_2765c4;
            case 0x2765C8u: goto label_2765c8;
            case 0x2765CCu: goto label_2765cc;
            case 0x2765D0u: goto label_2765d0;
            case 0x2765D4u: goto label_2765d4;
            case 0x2765D8u: goto label_2765d8;
            case 0x2765DCu: goto label_2765dc;
            case 0x2765E0u: goto label_2765e0;
            case 0x2765E4u: goto label_2765e4;
            case 0x2765E8u: goto label_2765e8;
            case 0x2765ECu: goto label_2765ec;
            case 0x2765F0u: goto label_2765f0;
            case 0x2765F4u: goto label_2765f4;
            case 0x2765F8u: goto label_2765f8;
            case 0x2765FCu: goto label_2765fc;
            case 0x276600u: goto label_276600;
            case 0x276604u: goto label_276604;
            case 0x276608u: goto label_276608;
            case 0x27660Cu: goto label_27660c;
            case 0x276610u: goto label_276610;
            case 0x276614u: goto label_276614;
            case 0x276618u: goto label_276618;
            case 0x27661Cu: goto label_27661c;
            case 0x276620u: goto label_276620;
            case 0x276624u: goto label_276624;
            case 0x276628u: goto label_276628;
            case 0x27662Cu: goto label_27662c;
            case 0x276630u: goto label_276630;
            case 0x276634u: goto label_276634;
            case 0x276638u: goto label_276638;
            case 0x27663Cu: goto label_27663c;
            case 0x276640u: goto label_276640;
            case 0x276644u: goto label_276644;
            case 0x276648u: goto label_276648;
            case 0x27664Cu: goto label_27664c;
            case 0x276650u: goto label_276650;
            case 0x276654u: goto label_276654;
            case 0x276658u: goto label_276658;
            case 0x27665Cu: goto label_27665c;
            case 0x276660u: goto label_276660;
            case 0x276664u: goto label_276664;
            case 0x276668u: goto label_276668;
            case 0x27666Cu: goto label_27666c;
            case 0x276670u: goto label_276670;
            case 0x276674u: goto label_276674;
            case 0x276678u: goto label_276678;
            case 0x27667Cu: goto label_27667c;
            default: break;
        }
        return;
    }
label_fallthrough_0x276678:
    ctx->pc = 0x276680u;
}
