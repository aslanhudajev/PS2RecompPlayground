#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GrabPowerup
// Address: 0x258c80 - 0x25972c
void GrabPowerup_0x258c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x258c80u;

label_258c80:
    // 0x258c80: 0x27bdff80
    ctx->pc = 0x258c80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_258c84:
    // 0x258c84: 0xffbf0060
    ctx->pc = 0x258c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_258c88:
    // 0x258c88: 0xffb50050
    ctx->pc = 0x258c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_258c8c:
    // 0x258c8c: 0xffb40040
    ctx->pc = 0x258c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_258c90:
    // 0x258c90: 0xffb30030
    ctx->pc = 0x258c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_258c94:
    // 0x258c94: 0xffb20020
    ctx->pc = 0x258c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_258c98:
    // 0x258c98: 0xffb10010
    ctx->pc = 0x258c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_258c9c:
    // 0x258c9c: 0xffb00000
    ctx->pc = 0x258c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_258ca0:
    // 0x258ca0: 0xe7b40070
    ctx->pc = 0x258ca0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_258ca4:
    // 0x258ca4: 0x80882d
    ctx->pc = 0x258ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_258ca8:
    // 0x258ca8: 0xa0982d
    ctx->pc = 0x258ca8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_258cac:
    // 0x258cac: 0x12600295
label_258cb0:
    if (ctx->pc == 0x258CB0u) {
        ctx->pc = 0x258CB0u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x258CB4u;
        goto label_258cb4;
    }
    ctx->pc = 0x258CACu;
    {
        const bool branch_taken_0x258cac = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x258CB0u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x258cac) {
            ctx->pc = 0x259704u;
            goto label_259704;
        }
    }
    ctx->pc = 0x258CB4u;
label_258cb4:
    // 0x258cb4: 0x8e620000
    ctx->pc = 0x258cb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_258cb8:
    // 0x258cb8: 0x10400293
label_258cbc:
    if (ctx->pc == 0x258CBCu) {
        ctx->pc = 0x258CBCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x258CC0u;
        goto label_258cc0;
    }
    ctx->pc = 0x258CB8u;
    {
        const bool branch_taken_0x258cb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x258CBCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x258cb8) {
            ctx->pc = 0x259708u;
            goto label_259708;
        }
    }
    ctx->pc = 0x258CC0u;
label_258cc0:
    // 0x258cc0: 0x12200291
label_258cc4:
    if (ctx->pc == 0x258CC4u) {
        ctx->pc = 0x258CC4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x258CC8u;
        goto label_258cc8;
    }
    ctx->pc = 0x258CC0u;
    {
        const bool branch_taken_0x258cc0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x258CC4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x258cc0) {
            ctx->pc = 0x259708u;
            goto label_259708;
        }
    }
    ctx->pc = 0x258CC8u;
label_258cc8:
    // 0x258cc8: 0x8c420004
    ctx->pc = 0x258cc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_258ccc:
    // 0x258ccc: 0x2443ffff
    ctx->pc = 0x258cccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
label_258cd0:
    // 0x258cd0: 0x2c620010
    ctx->pc = 0x258cd0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16));
label_258cd4:
    // 0x258cd4: 0x10400273
label_258cd8:
    if (ctx->pc == 0x258CD8u) {
        ctx->pc = 0x258CD8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x258CDCu;
        goto label_258cdc;
    }
    ctx->pc = 0x258CD4u;
    {
        const bool branch_taken_0x258cd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x258CD8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x258cd4) {
            ctx->pc = 0x2596A4u;
            goto label_2596a4;
        }
    }
    ctx->pc = 0x258CDCu;
label_258cdc:
    // 0x258cdc: 0x24428cd0
    ctx->pc = 0x258cdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937808));
label_258ce0:
    // 0x258ce0: 0x31880
    ctx->pc = 0x258ce0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_258ce4:
    // 0x258ce4: 0x621821
    ctx->pc = 0x258ce4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_258ce8:
    // 0x258ce8: 0x8c620000
    ctx->pc = 0x258ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_258cec:
    // 0x258cec: 0x400008
label_258cf0:
    if (ctx->pc == 0x258CF0u) {
        ctx->pc = 0x258CF4u;
        goto label_258cf4;
    }
    ctx->pc = 0x258CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x258C80u: goto label_258c80;
            case 0x258C84u: goto label_258c84;
            case 0x258C88u: goto label_258c88;
            case 0x258C8Cu: goto label_258c8c;
            case 0x258C90u: goto label_258c90;
            case 0x258C94u: goto label_258c94;
            case 0x258C98u: goto label_258c98;
            case 0x258C9Cu: goto label_258c9c;
            case 0x258CA0u: goto label_258ca0;
            case 0x258CA4u: goto label_258ca4;
            case 0x258CA8u: goto label_258ca8;
            case 0x258CACu: goto label_258cac;
            case 0x258CB0u: goto label_258cb0;
            case 0x258CB4u: goto label_258cb4;
            case 0x258CB8u: goto label_258cb8;
            case 0x258CBCu: goto label_258cbc;
            case 0x258CC0u: goto label_258cc0;
            case 0x258CC4u: goto label_258cc4;
            case 0x258CC8u: goto label_258cc8;
            case 0x258CCCu: goto label_258ccc;
            case 0x258CD0u: goto label_258cd0;
            case 0x258CD4u: goto label_258cd4;
            case 0x258CD8u: goto label_258cd8;
            case 0x258CDCu: goto label_258cdc;
            case 0x258CE0u: goto label_258ce0;
            case 0x258CE4u: goto label_258ce4;
            case 0x258CE8u: goto label_258ce8;
            case 0x258CECu: goto label_258cec;
            case 0x258CF0u: goto label_258cf0;
            case 0x258CF4u: goto label_258cf4;
            case 0x258CF8u: goto label_258cf8;
            case 0x258CFCu: goto label_258cfc;
            case 0x258D00u: goto label_258d00;
            case 0x258D04u: goto label_258d04;
            case 0x258D08u: goto label_258d08;
            case 0x258D0Cu: goto label_258d0c;
            case 0x258D10u: goto label_258d10;
            case 0x258D14u: goto label_258d14;
            case 0x258D18u: goto label_258d18;
            case 0x258D1Cu: goto label_258d1c;
            case 0x258D20u: goto label_258d20;
            case 0x258D24u: goto label_258d24;
            case 0x258D28u: goto label_258d28;
            case 0x258D2Cu: goto label_258d2c;
            case 0x258D30u: goto label_258d30;
            case 0x258D34u: goto label_258d34;
            case 0x258D38u: goto label_258d38;
            case 0x258D3Cu: goto label_258d3c;
            case 0x258D40u: goto label_258d40;
            case 0x258D44u: goto label_258d44;
            case 0x258D48u: goto label_258d48;
            case 0x258D4Cu: goto label_258d4c;
            case 0x258D50u: goto label_258d50;
            case 0x258D54u: goto label_258d54;
            case 0x258D58u: goto label_258d58;
            case 0x258D5Cu: goto label_258d5c;
            case 0x258D60u: goto label_258d60;
            case 0x258D64u: goto label_258d64;
            case 0x258D68u: goto label_258d68;
            case 0x258D6Cu: goto label_258d6c;
            case 0x258D70u: goto label_258d70;
            case 0x258D74u: goto label_258d74;
            case 0x258D78u: goto label_258d78;
            case 0x258D7Cu: goto label_258d7c;
            case 0x258D80u: goto label_258d80;
            case 0x258D84u: goto label_258d84;
            case 0x258D88u: goto label_258d88;
            case 0x258D8Cu: goto label_258d8c;
            case 0x258D90u: goto label_258d90;
            case 0x258D94u: goto label_258d94;
            case 0x258D98u: goto label_258d98;
            case 0x258D9Cu: goto label_258d9c;
            case 0x258DA0u: goto label_258da0;
            case 0x258DA4u: goto label_258da4;
            case 0x258DA8u: goto label_258da8;
            case 0x258DACu: goto label_258dac;
            case 0x258DB0u: goto label_258db0;
            case 0x258DB4u: goto label_258db4;
            case 0x258DB8u: goto label_258db8;
            case 0x258DBCu: goto label_258dbc;
            case 0x258DC0u: goto label_258dc0;
            case 0x258DC4u: goto label_258dc4;
            case 0x258DC8u: goto label_258dc8;
            case 0x258DCCu: goto label_258dcc;
            case 0x258DD0u: goto label_258dd0;
            case 0x258DD4u: goto label_258dd4;
            case 0x258DD8u: goto label_258dd8;
            case 0x258DDCu: goto label_258ddc;
            case 0x258DE0u: goto label_258de0;
            case 0x258DE4u: goto label_258de4;
            case 0x258DE8u: goto label_258de8;
            case 0x258DECu: goto label_258dec;
            case 0x258DF0u: goto label_258df0;
            case 0x258DF4u: goto label_258df4;
            case 0x258DF8u: goto label_258df8;
            case 0x258DFCu: goto label_258dfc;
            case 0x258E00u: goto label_258e00;
            case 0x258E04u: goto label_258e04;
            case 0x258E08u: goto label_258e08;
            case 0x258E0Cu: goto label_258e0c;
            case 0x258E10u: goto label_258e10;
            case 0x258E14u: goto label_258e14;
            case 0x258E18u: goto label_258e18;
            case 0x258E1Cu: goto label_258e1c;
            case 0x258E20u: goto label_258e20;
            case 0x258E24u: goto label_258e24;
            case 0x258E28u: goto label_258e28;
            case 0x258E2Cu: goto label_258e2c;
            case 0x258E30u: goto label_258e30;
            case 0x258E34u: goto label_258e34;
            case 0x258E38u: goto label_258e38;
            case 0x258E3Cu: goto label_258e3c;
            case 0x258E40u: goto label_258e40;
            case 0x258E44u: goto label_258e44;
            case 0x258E48u: goto label_258e48;
            case 0x258E4Cu: goto label_258e4c;
            case 0x258E50u: goto label_258e50;
            case 0x258E54u: goto label_258e54;
            case 0x258E58u: goto label_258e58;
            case 0x258E5Cu: goto label_258e5c;
            case 0x258E60u: goto label_258e60;
            case 0x258E64u: goto label_258e64;
            case 0x258E68u: goto label_258e68;
            case 0x258E6Cu: goto label_258e6c;
            case 0x258E70u: goto label_258e70;
            case 0x258E74u: goto label_258e74;
            case 0x258E78u: goto label_258e78;
            case 0x258E7Cu: goto label_258e7c;
            case 0x258E80u: goto label_258e80;
            case 0x258E84u: goto label_258e84;
            case 0x258E88u: goto label_258e88;
            case 0x258E8Cu: goto label_258e8c;
            case 0x258E90u: goto label_258e90;
            case 0x258E94u: goto label_258e94;
            case 0x258E98u: goto label_258e98;
            case 0x258E9Cu: goto label_258e9c;
            case 0x258EA0u: goto label_258ea0;
            case 0x258EA4u: goto label_258ea4;
            case 0x258EA8u: goto label_258ea8;
            case 0x258EACu: goto label_258eac;
            case 0x258EB0u: goto label_258eb0;
            case 0x258EB4u: goto label_258eb4;
            case 0x258EB8u: goto label_258eb8;
            case 0x258EBCu: goto label_258ebc;
            case 0x258EC0u: goto label_258ec0;
            case 0x258EC4u: goto label_258ec4;
            case 0x258EC8u: goto label_258ec8;
            case 0x258ECCu: goto label_258ecc;
            case 0x258ED0u: goto label_258ed0;
            case 0x258ED4u: goto label_258ed4;
            case 0x258ED8u: goto label_258ed8;
            case 0x258EDCu: goto label_258edc;
            case 0x258EE0u: goto label_258ee0;
            case 0x258EE4u: goto label_258ee4;
            case 0x258EE8u: goto label_258ee8;
            case 0x258EECu: goto label_258eec;
            case 0x258EF0u: goto label_258ef0;
            case 0x258EF4u: goto label_258ef4;
            case 0x258EF8u: goto label_258ef8;
            case 0x258EFCu: goto label_258efc;
            case 0x258F00u: goto label_258f00;
            case 0x258F04u: goto label_258f04;
            case 0x258F08u: goto label_258f08;
            case 0x258F0Cu: goto label_258f0c;
            case 0x258F10u: goto label_258f10;
            case 0x258F14u: goto label_258f14;
            case 0x258F18u: goto label_258f18;
            case 0x258F1Cu: goto label_258f1c;
            case 0x258F20u: goto label_258f20;
            case 0x258F24u: goto label_258f24;
            case 0x258F28u: goto label_258f28;
            case 0x258F2Cu: goto label_258f2c;
            case 0x258F30u: goto label_258f30;
            case 0x258F34u: goto label_258f34;
            case 0x258F38u: goto label_258f38;
            case 0x258F3Cu: goto label_258f3c;
            case 0x258F40u: goto label_258f40;
            case 0x258F44u: goto label_258f44;
            case 0x258F48u: goto label_258f48;
            case 0x258F4Cu: goto label_258f4c;
            case 0x258F50u: goto label_258f50;
            case 0x258F54u: goto label_258f54;
            case 0x258F58u: goto label_258f58;
            case 0x258F5Cu: goto label_258f5c;
            case 0x258F60u: goto label_258f60;
            case 0x258F64u: goto label_258f64;
            case 0x258F68u: goto label_258f68;
            case 0x258F6Cu: goto label_258f6c;
            case 0x258F70u: goto label_258f70;
            case 0x258F74u: goto label_258f74;
            case 0x258F78u: goto label_258f78;
            case 0x258F7Cu: goto label_258f7c;
            case 0x258F80u: goto label_258f80;
            case 0x258F84u: goto label_258f84;
            case 0x258F88u: goto label_258f88;
            case 0x258F8Cu: goto label_258f8c;
            case 0x258F90u: goto label_258f90;
            case 0x258F94u: goto label_258f94;
            case 0x258F98u: goto label_258f98;
            case 0x258F9Cu: goto label_258f9c;
            case 0x258FA0u: goto label_258fa0;
            case 0x258FA4u: goto label_258fa4;
            case 0x258FA8u: goto label_258fa8;
            case 0x258FACu: goto label_258fac;
            case 0x258FB0u: goto label_258fb0;
            case 0x258FB4u: goto label_258fb4;
            case 0x258FB8u: goto label_258fb8;
            case 0x258FBCu: goto label_258fbc;
            case 0x258FC0u: goto label_258fc0;
            case 0x258FC4u: goto label_258fc4;
            case 0x258FC8u: goto label_258fc8;
            case 0x258FCCu: goto label_258fcc;
            case 0x258FD0u: goto label_258fd0;
            case 0x258FD4u: goto label_258fd4;
            case 0x258FD8u: goto label_258fd8;
            case 0x258FDCu: goto label_258fdc;
            case 0x258FE0u: goto label_258fe0;
            case 0x258FE4u: goto label_258fe4;
            case 0x258FE8u: goto label_258fe8;
            case 0x258FECu: goto label_258fec;
            case 0x258FF0u: goto label_258ff0;
            case 0x258FF4u: goto label_258ff4;
            case 0x258FF8u: goto label_258ff8;
            case 0x258FFCu: goto label_258ffc;
            case 0x259000u: goto label_259000;
            case 0x259004u: goto label_259004;
            case 0x259008u: goto label_259008;
            case 0x25900Cu: goto label_25900c;
            case 0x259010u: goto label_259010;
            case 0x259014u: goto label_259014;
            case 0x259018u: goto label_259018;
            case 0x25901Cu: goto label_25901c;
            case 0x259020u: goto label_259020;
            case 0x259024u: goto label_259024;
            case 0x259028u: goto label_259028;
            case 0x25902Cu: goto label_25902c;
            case 0x259030u: goto label_259030;
            case 0x259034u: goto label_259034;
            case 0x259038u: goto label_259038;
            case 0x25903Cu: goto label_25903c;
            case 0x259040u: goto label_259040;
            case 0x259044u: goto label_259044;
            case 0x259048u: goto label_259048;
            case 0x25904Cu: goto label_25904c;
            case 0x259050u: goto label_259050;
            case 0x259054u: goto label_259054;
            case 0x259058u: goto label_259058;
            case 0x25905Cu: goto label_25905c;
            case 0x259060u: goto label_259060;
            case 0x259064u: goto label_259064;
            case 0x259068u: goto label_259068;
            case 0x25906Cu: goto label_25906c;
            case 0x259070u: goto label_259070;
            case 0x259074u: goto label_259074;
            case 0x259078u: goto label_259078;
            case 0x25907Cu: goto label_25907c;
            case 0x259080u: goto label_259080;
            case 0x259084u: goto label_259084;
            case 0x259088u: goto label_259088;
            case 0x25908Cu: goto label_25908c;
            case 0x259090u: goto label_259090;
            case 0x259094u: goto label_259094;
            case 0x259098u: goto label_259098;
            case 0x25909Cu: goto label_25909c;
            case 0x2590A0u: goto label_2590a0;
            case 0x2590A4u: goto label_2590a4;
            case 0x2590A8u: goto label_2590a8;
            case 0x2590ACu: goto label_2590ac;
            case 0x2590B0u: goto label_2590b0;
            case 0x2590B4u: goto label_2590b4;
            case 0x2590B8u: goto label_2590b8;
            case 0x2590BCu: goto label_2590bc;
            case 0x2590C0u: goto label_2590c0;
            case 0x2590C4u: goto label_2590c4;
            case 0x2590C8u: goto label_2590c8;
            case 0x2590CCu: goto label_2590cc;
            case 0x2590D0u: goto label_2590d0;
            case 0x2590D4u: goto label_2590d4;
            case 0x2590D8u: goto label_2590d8;
            case 0x2590DCu: goto label_2590dc;
            case 0x2590E0u: goto label_2590e0;
            case 0x2590E4u: goto label_2590e4;
            case 0x2590E8u: goto label_2590e8;
            case 0x2590ECu: goto label_2590ec;
            case 0x2590F0u: goto label_2590f0;
            case 0x2590F4u: goto label_2590f4;
            case 0x2590F8u: goto label_2590f8;
            case 0x2590FCu: goto label_2590fc;
            case 0x259100u: goto label_259100;
            case 0x259104u: goto label_259104;
            case 0x259108u: goto label_259108;
            case 0x25910Cu: goto label_25910c;
            case 0x259110u: goto label_259110;
            case 0x259114u: goto label_259114;
            case 0x259118u: goto label_259118;
            case 0x25911Cu: goto label_25911c;
            case 0x259120u: goto label_259120;
            case 0x259124u: goto label_259124;
            case 0x259128u: goto label_259128;
            case 0x25912Cu: goto label_25912c;
            case 0x259130u: goto label_259130;
            case 0x259134u: goto label_259134;
            case 0x259138u: goto label_259138;
            case 0x25913Cu: goto label_25913c;
            case 0x259140u: goto label_259140;
            case 0x259144u: goto label_259144;
            case 0x259148u: goto label_259148;
            case 0x25914Cu: goto label_25914c;
            case 0x259150u: goto label_259150;
            case 0x259154u: goto label_259154;
            case 0x259158u: goto label_259158;
            case 0x25915Cu: goto label_25915c;
            case 0x259160u: goto label_259160;
            case 0x259164u: goto label_259164;
            case 0x259168u: goto label_259168;
            case 0x25916Cu: goto label_25916c;
            case 0x259170u: goto label_259170;
            case 0x259174u: goto label_259174;
            case 0x259178u: goto label_259178;
            case 0x25917Cu: goto label_25917c;
            case 0x259180u: goto label_259180;
            case 0x259184u: goto label_259184;
            case 0x259188u: goto label_259188;
            case 0x25918Cu: goto label_25918c;
            case 0x259190u: goto label_259190;
            case 0x259194u: goto label_259194;
            case 0x259198u: goto label_259198;
            case 0x25919Cu: goto label_25919c;
            case 0x2591A0u: goto label_2591a0;
            case 0x2591A4u: goto label_2591a4;
            case 0x2591A8u: goto label_2591a8;
            case 0x2591ACu: goto label_2591ac;
            case 0x2591B0u: goto label_2591b0;
            case 0x2591B4u: goto label_2591b4;
            case 0x2591B8u: goto label_2591b8;
            case 0x2591BCu: goto label_2591bc;
            case 0x2591C0u: goto label_2591c0;
            case 0x2591C4u: goto label_2591c4;
            case 0x2591C8u: goto label_2591c8;
            case 0x2591CCu: goto label_2591cc;
            case 0x2591D0u: goto label_2591d0;
            case 0x2591D4u: goto label_2591d4;
            case 0x2591D8u: goto label_2591d8;
            case 0x2591DCu: goto label_2591dc;
            case 0x2591E0u: goto label_2591e0;
            case 0x2591E4u: goto label_2591e4;
            case 0x2591E8u: goto label_2591e8;
            case 0x2591ECu: goto label_2591ec;
            case 0x2591F0u: goto label_2591f0;
            case 0x2591F4u: goto label_2591f4;
            case 0x2591F8u: goto label_2591f8;
            case 0x2591FCu: goto label_2591fc;
            case 0x259200u: goto label_259200;
            case 0x259204u: goto label_259204;
            case 0x259208u: goto label_259208;
            case 0x25920Cu: goto label_25920c;
            case 0x259210u: goto label_259210;
            case 0x259214u: goto label_259214;
            case 0x259218u: goto label_259218;
            case 0x25921Cu: goto label_25921c;
            case 0x259220u: goto label_259220;
            case 0x259224u: goto label_259224;
            case 0x259228u: goto label_259228;
            case 0x25922Cu: goto label_25922c;
            case 0x259230u: goto label_259230;
            case 0x259234u: goto label_259234;
            case 0x259238u: goto label_259238;
            case 0x25923Cu: goto label_25923c;
            case 0x259240u: goto label_259240;
            case 0x259244u: goto label_259244;
            case 0x259248u: goto label_259248;
            case 0x25924Cu: goto label_25924c;
            case 0x259250u: goto label_259250;
            case 0x259254u: goto label_259254;
            case 0x259258u: goto label_259258;
            case 0x25925Cu: goto label_25925c;
            case 0x259260u: goto label_259260;
            case 0x259264u: goto label_259264;
            case 0x259268u: goto label_259268;
            case 0x25926Cu: goto label_25926c;
            case 0x259270u: goto label_259270;
            case 0x259274u: goto label_259274;
            case 0x259278u: goto label_259278;
            case 0x25927Cu: goto label_25927c;
            case 0x259280u: goto label_259280;
            case 0x259284u: goto label_259284;
            case 0x259288u: goto label_259288;
            case 0x25928Cu: goto label_25928c;
            case 0x259290u: goto label_259290;
            case 0x259294u: goto label_259294;
            case 0x259298u: goto label_259298;
            case 0x25929Cu: goto label_25929c;
            case 0x2592A0u: goto label_2592a0;
            case 0x2592A4u: goto label_2592a4;
            case 0x2592A8u: goto label_2592a8;
            case 0x2592ACu: goto label_2592ac;
            case 0x2592B0u: goto label_2592b0;
            case 0x2592B4u: goto label_2592b4;
            case 0x2592B8u: goto label_2592b8;
            case 0x2592BCu: goto label_2592bc;
            case 0x2592C0u: goto label_2592c0;
            case 0x2592C4u: goto label_2592c4;
            case 0x2592C8u: goto label_2592c8;
            case 0x2592CCu: goto label_2592cc;
            case 0x2592D0u: goto label_2592d0;
            case 0x2592D4u: goto label_2592d4;
            case 0x2592D8u: goto label_2592d8;
            case 0x2592DCu: goto label_2592dc;
            case 0x2592E0u: goto label_2592e0;
            case 0x2592E4u: goto label_2592e4;
            case 0x2592E8u: goto label_2592e8;
            case 0x2592ECu: goto label_2592ec;
            case 0x2592F0u: goto label_2592f0;
            case 0x2592F4u: goto label_2592f4;
            case 0x2592F8u: goto label_2592f8;
            case 0x2592FCu: goto label_2592fc;
            case 0x259300u: goto label_259300;
            case 0x259304u: goto label_259304;
            case 0x259308u: goto label_259308;
            case 0x25930Cu: goto label_25930c;
            case 0x259310u: goto label_259310;
            case 0x259314u: goto label_259314;
            case 0x259318u: goto label_259318;
            case 0x25931Cu: goto label_25931c;
            case 0x259320u: goto label_259320;
            case 0x259324u: goto label_259324;
            case 0x259328u: goto label_259328;
            case 0x25932Cu: goto label_25932c;
            case 0x259330u: goto label_259330;
            case 0x259334u: goto label_259334;
            case 0x259338u: goto label_259338;
            case 0x25933Cu: goto label_25933c;
            case 0x259340u: goto label_259340;
            case 0x259344u: goto label_259344;
            case 0x259348u: goto label_259348;
            case 0x25934Cu: goto label_25934c;
            case 0x259350u: goto label_259350;
            case 0x259354u: goto label_259354;
            case 0x259358u: goto label_259358;
            case 0x25935Cu: goto label_25935c;
            case 0x259360u: goto label_259360;
            case 0x259364u: goto label_259364;
            case 0x259368u: goto label_259368;
            case 0x25936Cu: goto label_25936c;
            case 0x259370u: goto label_259370;
            case 0x259374u: goto label_259374;
            case 0x259378u: goto label_259378;
            case 0x25937Cu: goto label_25937c;
            case 0x259380u: goto label_259380;
            case 0x259384u: goto label_259384;
            case 0x259388u: goto label_259388;
            case 0x25938Cu: goto label_25938c;
            case 0x259390u: goto label_259390;
            case 0x259394u: goto label_259394;
            case 0x259398u: goto label_259398;
            case 0x25939Cu: goto label_25939c;
            case 0x2593A0u: goto label_2593a0;
            case 0x2593A4u: goto label_2593a4;
            case 0x2593A8u: goto label_2593a8;
            case 0x2593ACu: goto label_2593ac;
            case 0x2593B0u: goto label_2593b0;
            case 0x2593B4u: goto label_2593b4;
            case 0x2593B8u: goto label_2593b8;
            case 0x2593BCu: goto label_2593bc;
            case 0x2593C0u: goto label_2593c0;
            case 0x2593C4u: goto label_2593c4;
            case 0x2593C8u: goto label_2593c8;
            case 0x2593CCu: goto label_2593cc;
            case 0x2593D0u: goto label_2593d0;
            case 0x2593D4u: goto label_2593d4;
            case 0x2593D8u: goto label_2593d8;
            case 0x2593DCu: goto label_2593dc;
            case 0x2593E0u: goto label_2593e0;
            case 0x2593E4u: goto label_2593e4;
            case 0x2593E8u: goto label_2593e8;
            case 0x2593ECu: goto label_2593ec;
            case 0x2593F0u: goto label_2593f0;
            case 0x2593F4u: goto label_2593f4;
            case 0x2593F8u: goto label_2593f8;
            case 0x2593FCu: goto label_2593fc;
            case 0x259400u: goto label_259400;
            case 0x259404u: goto label_259404;
            case 0x259408u: goto label_259408;
            case 0x25940Cu: goto label_25940c;
            case 0x259410u: goto label_259410;
            case 0x259414u: goto label_259414;
            case 0x259418u: goto label_259418;
            case 0x25941Cu: goto label_25941c;
            case 0x259420u: goto label_259420;
            case 0x259424u: goto label_259424;
            case 0x259428u: goto label_259428;
            case 0x25942Cu: goto label_25942c;
            case 0x259430u: goto label_259430;
            case 0x259434u: goto label_259434;
            case 0x259438u: goto label_259438;
            case 0x25943Cu: goto label_25943c;
            case 0x259440u: goto label_259440;
            case 0x259444u: goto label_259444;
            case 0x259448u: goto label_259448;
            case 0x25944Cu: goto label_25944c;
            case 0x259450u: goto label_259450;
            case 0x259454u: goto label_259454;
            case 0x259458u: goto label_259458;
            case 0x25945Cu: goto label_25945c;
            case 0x259460u: goto label_259460;
            case 0x259464u: goto label_259464;
            case 0x259468u: goto label_259468;
            case 0x25946Cu: goto label_25946c;
            case 0x259470u: goto label_259470;
            case 0x259474u: goto label_259474;
            case 0x259478u: goto label_259478;
            case 0x25947Cu: goto label_25947c;
            case 0x259480u: goto label_259480;
            case 0x259484u: goto label_259484;
            case 0x259488u: goto label_259488;
            case 0x25948Cu: goto label_25948c;
            case 0x259490u: goto label_259490;
            case 0x259494u: goto label_259494;
            case 0x259498u: goto label_259498;
            case 0x25949Cu: goto label_25949c;
            case 0x2594A0u: goto label_2594a0;
            case 0x2594A4u: goto label_2594a4;
            case 0x2594A8u: goto label_2594a8;
            case 0x2594ACu: goto label_2594ac;
            case 0x2594B0u: goto label_2594b0;
            case 0x2594B4u: goto label_2594b4;
            case 0x2594B8u: goto label_2594b8;
            case 0x2594BCu: goto label_2594bc;
            case 0x2594C0u: goto label_2594c0;
            case 0x2594C4u: goto label_2594c4;
            case 0x2594C8u: goto label_2594c8;
            case 0x2594CCu: goto label_2594cc;
            case 0x2594D0u: goto label_2594d0;
            case 0x2594D4u: goto label_2594d4;
            case 0x2594D8u: goto label_2594d8;
            case 0x2594DCu: goto label_2594dc;
            case 0x2594E0u: goto label_2594e0;
            case 0x2594E4u: goto label_2594e4;
            case 0x2594E8u: goto label_2594e8;
            case 0x2594ECu: goto label_2594ec;
            case 0x2594F0u: goto label_2594f0;
            case 0x2594F4u: goto label_2594f4;
            case 0x2594F8u: goto label_2594f8;
            case 0x2594FCu: goto label_2594fc;
            case 0x259500u: goto label_259500;
            case 0x259504u: goto label_259504;
            case 0x259508u: goto label_259508;
            case 0x25950Cu: goto label_25950c;
            case 0x259510u: goto label_259510;
            case 0x259514u: goto label_259514;
            case 0x259518u: goto label_259518;
            case 0x25951Cu: goto label_25951c;
            case 0x259520u: goto label_259520;
            case 0x259524u: goto label_259524;
            case 0x259528u: goto label_259528;
            case 0x25952Cu: goto label_25952c;
            case 0x259530u: goto label_259530;
            case 0x259534u: goto label_259534;
            case 0x259538u: goto label_259538;
            case 0x25953Cu: goto label_25953c;
            case 0x259540u: goto label_259540;
            case 0x259544u: goto label_259544;
            case 0x259548u: goto label_259548;
            case 0x25954Cu: goto label_25954c;
            case 0x259550u: goto label_259550;
            case 0x259554u: goto label_259554;
            case 0x259558u: goto label_259558;
            case 0x25955Cu: goto label_25955c;
            case 0x259560u: goto label_259560;
            case 0x259564u: goto label_259564;
            case 0x259568u: goto label_259568;
            case 0x25956Cu: goto label_25956c;
            case 0x259570u: goto label_259570;
            case 0x259574u: goto label_259574;
            case 0x259578u: goto label_259578;
            case 0x25957Cu: goto label_25957c;
            case 0x259580u: goto label_259580;
            case 0x259584u: goto label_259584;
            case 0x259588u: goto label_259588;
            case 0x25958Cu: goto label_25958c;
            case 0x259590u: goto label_259590;
            case 0x259594u: goto label_259594;
            case 0x259598u: goto label_259598;
            case 0x25959Cu: goto label_25959c;
            case 0x2595A0u: goto label_2595a0;
            case 0x2595A4u: goto label_2595a4;
            case 0x2595A8u: goto label_2595a8;
            case 0x2595ACu: goto label_2595ac;
            case 0x2595B0u: goto label_2595b0;
            case 0x2595B4u: goto label_2595b4;
            case 0x2595B8u: goto label_2595b8;
            case 0x2595BCu: goto label_2595bc;
            case 0x2595C0u: goto label_2595c0;
            case 0x2595C4u: goto label_2595c4;
            case 0x2595C8u: goto label_2595c8;
            case 0x2595CCu: goto label_2595cc;
            case 0x2595D0u: goto label_2595d0;
            case 0x2595D4u: goto label_2595d4;
            case 0x2595D8u: goto label_2595d8;
            case 0x2595DCu: goto label_2595dc;
            case 0x2595E0u: goto label_2595e0;
            case 0x2595E4u: goto label_2595e4;
            case 0x2595E8u: goto label_2595e8;
            case 0x2595ECu: goto label_2595ec;
            case 0x2595F0u: goto label_2595f0;
            case 0x2595F4u: goto label_2595f4;
            case 0x2595F8u: goto label_2595f8;
            case 0x2595FCu: goto label_2595fc;
            case 0x259600u: goto label_259600;
            case 0x259604u: goto label_259604;
            case 0x259608u: goto label_259608;
            case 0x25960Cu: goto label_25960c;
            case 0x259610u: goto label_259610;
            case 0x259614u: goto label_259614;
            case 0x259618u: goto label_259618;
            case 0x25961Cu: goto label_25961c;
            case 0x259620u: goto label_259620;
            case 0x259624u: goto label_259624;
            case 0x259628u: goto label_259628;
            case 0x25962Cu: goto label_25962c;
            case 0x259630u: goto label_259630;
            case 0x259634u: goto label_259634;
            case 0x259638u: goto label_259638;
            case 0x25963Cu: goto label_25963c;
            case 0x259640u: goto label_259640;
            case 0x259644u: goto label_259644;
            case 0x259648u: goto label_259648;
            case 0x25964Cu: goto label_25964c;
            case 0x259650u: goto label_259650;
            case 0x259654u: goto label_259654;
            case 0x259658u: goto label_259658;
            case 0x25965Cu: goto label_25965c;
            case 0x259660u: goto label_259660;
            case 0x259664u: goto label_259664;
            case 0x259668u: goto label_259668;
            case 0x25966Cu: goto label_25966c;
            case 0x259670u: goto label_259670;
            case 0x259674u: goto label_259674;
            case 0x259678u: goto label_259678;
            case 0x25967Cu: goto label_25967c;
            case 0x259680u: goto label_259680;
            case 0x259684u: goto label_259684;
            case 0x259688u: goto label_259688;
            case 0x25968Cu: goto label_25968c;
            case 0x259690u: goto label_259690;
            case 0x259694u: goto label_259694;
            case 0x259698u: goto label_259698;
            case 0x25969Cu: goto label_25969c;
            case 0x2596A0u: goto label_2596a0;
            case 0x2596A4u: goto label_2596a4;
            case 0x2596A8u: goto label_2596a8;
            case 0x2596ACu: goto label_2596ac;
            case 0x2596B0u: goto label_2596b0;
            case 0x2596B4u: goto label_2596b4;
            case 0x2596B8u: goto label_2596b8;
            case 0x2596BCu: goto label_2596bc;
            case 0x2596C0u: goto label_2596c0;
            case 0x2596C4u: goto label_2596c4;
            case 0x2596C8u: goto label_2596c8;
            case 0x2596CCu: goto label_2596cc;
            case 0x2596D0u: goto label_2596d0;
            case 0x2596D4u: goto label_2596d4;
            case 0x2596D8u: goto label_2596d8;
            case 0x2596DCu: goto label_2596dc;
            case 0x2596E0u: goto label_2596e0;
            case 0x2596E4u: goto label_2596e4;
            case 0x2596E8u: goto label_2596e8;
            case 0x2596ECu: goto label_2596ec;
            case 0x2596F0u: goto label_2596f0;
            case 0x2596F4u: goto label_2596f4;
            case 0x2596F8u: goto label_2596f8;
            case 0x2596FCu: goto label_2596fc;
            case 0x259700u: goto label_259700;
            case 0x259704u: goto label_259704;
            case 0x259708u: goto label_259708;
            case 0x25970Cu: goto label_25970c;
            case 0x259710u: goto label_259710;
            case 0x259714u: goto label_259714;
            case 0x259718u: goto label_259718;
            case 0x25971Cu: goto label_25971c;
            case 0x259720u: goto label_259720;
            case 0x259724u: goto label_259724;
            case 0x259728u: goto label_259728;
            default: break;
        }
        return;
    }
    ctx->pc = 0x258CF4u;
label_258cf4:
    // 0x258cf4: 0x8e7000f4
    ctx->pc = 0x258cf4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_258cf8:
    // 0x258cf8: 0x8e240000
    ctx->pc = 0x258cf8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258cfc:
    // 0x258cfc: 0xc08d1e2
label_258d00:
    if (ctx->pc == 0x258D00u) {
        ctx->pc = 0x258D00u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x258D04u;
        goto label_258d04;
    }
    ctx->pc = 0x258CFCu;
    SET_GPR_U32(ctx, 31, 0x258D04u);
    ctx->pc = 0x258D00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234788u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerGiveGold_0x234788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D04u; }
    }
    if (ctx->pc != 0x258D04u) { return; }
    ctx->pc = 0x258D04u;
label_258d04:
    // 0x258d04: 0x8e23000c
    ctx->pc = 0x258d04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_258d08:
    // 0x258d08: 0x2402001c
    ctx->pc = 0x258d08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
label_258d0c:
    // 0x258d0c: 0x621818
    ctx->pc = 0x258d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_258d10:
    // 0x258d10: 0x26220b40
    ctx->pc = 0x258d10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 2880));
label_258d14:
    // 0x258d14: 0x431021
    ctx->pc = 0x258d14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_258d18:
    // 0x258d18: 0x8c430000
    ctx->pc = 0x258d18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_258d1c:
    // 0x258d1c: 0x2038021
    ctx->pc = 0x258d1cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_258d20:
    // 0x258d20: 0xac500000
    ctx->pc = 0x258d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_258d24:
    // 0x258d24: 0x8e240000
    ctx->pc = 0x258d24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258d28:
    // 0x258d28: 0xc098262
label_258d2c:
    if (ctx->pc == 0x258D2Cu) {
        ctx->pc = 0x258D2Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->pc = 0x258D30u;
        goto label_258d30;
    }
    ctx->pc = 0x258D28u;
    SET_GPR_U32(ctx, 31, 0x258D30u);
    ctx->pc = 0x258D2Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 244)));
    ctx->pc = 0x260988u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPickupGold_0x260988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D30u; }
    }
    if (ctx->pc != 0x258D30u) { return; }
    ctx->pc = 0x258D30u;
label_258d30:
    // 0x258d30: 0x8e240000
    ctx->pc = 0x258d30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258d34:
    // 0x258d34: 0x8e850000
    ctx->pc = 0x258d34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_258d38:
    // 0x258d38: 0xc08ac74
label_258d3c:
    if (ctx->pc == 0x258D3Cu) {
        ctx->pc = 0x258D3Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->pc = 0x258D40u;
        goto label_258d40;
    }
    ctx->pc = 0x258D38u;
    SET_GPR_U32(ctx, 31, 0x258D40u);
    ctx->pc = 0x258D3Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 244)));
    ctx->pc = 0x22B1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_got_it_0x22b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D40u; }
    }
    if (ctx->pc != 0x258D40u) { return; }
    ctx->pc = 0x258D40u;
label_258d40:
    // 0x258d40: 0x24020001
    ctx->pc = 0x258d40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_258d44:
    // 0x258d44: 0xa6220934
    ctx->pc = 0x258d44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2356), (uint16_t)GPR_U32(ctx, 2));
label_258d48:
    // 0x258d48: 0x3c020034
    ctx->pc = 0x258d48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_258d4c:
    // 0x258d4c: 0x8c43e7f0
    ctx->pc = 0x258d4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_258d50:
    // 0x258d50: 0x2402000c
    ctx->pc = 0x258d50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_258d54:
    // 0x258d54: 0x54620019
label_258d58:
    if (ctx->pc == 0x258D58u) {
        ctx->pc = 0x258D58u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->pc = 0x258D5Cu;
        goto label_258d5c;
    }
    ctx->pc = 0x258D54u;
    {
        const bool branch_taken_0x258d54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x258d54) {
            ctx->pc = 0x258D58u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 244)));
            ctx->pc = 0x258DBCu;
            goto label_258dbc;
        }
    }
    ctx->pc = 0x258D5Cu;
label_258d5c:
    // 0x258d5c: 0xc09dd3a
label_258d60:
    if (ctx->pc == 0x258D60u) {
        ctx->pc = 0x258D64u;
        goto label_258d64;
    }
    ctx->pc = 0x258D5Cu;
    SET_GPR_U32(ctx, 31, 0x258D64u);
    ctx->pc = 0x2774E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayersGiveSecretCoin_0x2774e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D64u; }
    }
    if (ctx->pc != 0x258D64u) { return; }
    ctx->pc = 0x258D64u;
label_258d64:
    // 0x258d64: 0x104001d5
label_258d68:
    if (ctx->pc == 0x258D68u) {
        ctx->pc = 0x258D68u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x258D6Cu;
        goto label_258d6c;
    }
    ctx->pc = 0x258D64u;
    {
        const bool branch_taken_0x258d64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x258D68u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x258d64) {
            ctx->pc = 0x2594BCu;
            goto label_2594bc;
        }
    }
    ctx->pc = 0x258D6Cu;
label_258d6c:
    // 0x258d6c: 0xc09786c
label_258d70:
    if (ctx->pc == 0x258D70u) {
        ctx->pc = 0x258D74u;
        goto label_258d74;
    }
    ctx->pc = 0x258D6Cu;
    SET_GPR_U32(ctx, 31, 0x258D74u);
    ctx->pc = 0x25E1B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSecretChar_0x25e1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D74u; }
    }
    if (ctx->pc != 0x258D74u) { return; }
    ctx->pc = 0x258D74u;
label_258d74:
    // 0x258d74: 0x40802d
    ctx->pc = 0x258d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258d78:
    // 0x258d78: 0x202d
    ctx->pc = 0x258d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_258d7c:
    // 0x258d7c: 0x3c05003b
    ctx->pc = 0x258d7cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_258d80:
    // 0x258d80: 0xc080726
label_258d84:
    if (ctx->pc == 0x258D84u) {
        ctx->pc = 0x258D84u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294937744));
        ctx->pc = 0x258D88u;
        goto label_258d88;
    }
    ctx->pc = 0x258D80u;
    SET_GPR_U32(ctx, 31, 0x258D88u);
    ctx->pc = 0x258D84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294937744));
    ctx->pc = 0x201C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindScrollMessage_0x201c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D88u; }
    }
    if (ctx->pc != 0x258D88u) { return; }
    ctx->pc = 0x258D88u;
label_258d88:
    // 0x258d88: 0x2404ffff
    ctx->pc = 0x258d88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_258d8c:
    // 0x258d8c: 0x40282d
    ctx->pc = 0x258d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258d90:
    // 0x258d90: 0x302d
    ctx->pc = 0x258d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_258d94:
    // 0x258d94: 0xc08a0b4
label_258d98:
    if (ctx->pc == 0x258D98u) {
        ctx->pc = 0x258D98u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x258D9Cu;
        goto label_258d9c;
    }
    ctx->pc = 0x258D94u;
    SET_GPR_U32(ctx, 31, 0x258D9Cu);
    ctx->pc = 0x258D98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2282D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollMessageBox_0x2282d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D9Cu; }
    }
    if (ctx->pc != 0x258D9Cu) { return; }
    ctx->pc = 0x258D9Cu;
label_258d9c:
    // 0x258d9c: 0x3c020032
    ctx->pc = 0x258d9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_258da0:
    // 0x258da0: 0x3c013f80
    ctx->pc = 0x258da0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_258da4:
    // 0x258da4: 0x44810000
    ctx->pc = 0x258da4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_258da8:
    // 0x258da8: 0xe44007c0
    ctx->pc = 0x258da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1984), bits); }
label_258dac:
    // 0x258dac: 0x3c030032
    ctx->pc = 0x258dacu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_258db0:
    // 0x258db0: 0x24020001
    ctx->pc = 0x258db0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_258db4:
    // 0x258db4: 0x100001c1
label_258db8:
    if (ctx->pc == 0x258DB8u) {
        ctx->pc = 0x258DB8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 1992), GPR_U32(ctx, 2));
        ctx->pc = 0x258DBCu;
        goto label_258dbc;
    }
    ctx->pc = 0x258DB4u;
    {
        const bool branch_taken_0x258db4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258DB8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 1992), GPR_U32(ctx, 2));
        if (branch_taken_0x258db4) {
            ctx->pc = 0x2594BCu;
            goto label_2594bc;
        }
    }
    ctx->pc = 0x258DBCu;
label_258dbc:
    // 0x258dbc: 0x28420019
    ctx->pc = 0x258dbcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 25));
label_258dc0:
    // 0x258dc0: 0x144001be
label_258dc4:
    if (ctx->pc == 0x258DC4u) {
        ctx->pc = 0x258DC4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x258DC8u;
        goto label_258dc8;
    }
    ctx->pc = 0x258DC0u;
    {
        const bool branch_taken_0x258dc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x258DC4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x258dc0) {
            ctx->pc = 0x2594BCu;
            goto label_2594bc;
        }
    }
    ctx->pc = 0x258DC8u;
label_258dc8:
    // 0x258dc8: 0x24040011
    ctx->pc = 0x258dc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17));
label_258dcc:
    // 0x258dcc: 0x8e250000
    ctx->pc = 0x258dccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258dd0:
    // 0x258dd0: 0xc0a3a1c
label_258dd4:
    if (ctx->pc == 0x258DD4u) {
        ctx->pc = 0x258DD4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x258DD8u;
        goto label_258dd8;
    }
    ctx->pc = 0x258DD0u;
    SET_GPR_U32(ctx, 31, 0x258DD8u);
    ctx->pc = 0x258DD4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258DD8u; }
    }
    if (ctx->pc != 0x258DD8u) { return; }
    ctx->pc = 0x258DD8u;
label_258dd8:
    // 0x258dd8: 0x826400df
    ctx->pc = 0x258dd8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
label_258ddc:
    // 0x258ddc: 0x48001b7
label_258de0:
    if (ctx->pc == 0x258DE0u) {
        ctx->pc = 0x258DE0u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x258DE4u;
        goto label_258de4;
    }
    ctx->pc = 0x258DDCu;
    {
        const bool branch_taken_0x258ddc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x258DE0u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x258ddc) {
            ctx->pc = 0x2594BCu;
            goto label_2594bc;
        }
    }
    ctx->pc = 0x258DE4u;
label_258de4:
    // 0x258de4: 0x8e250000
    ctx->pc = 0x258de4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258de8:
    // 0x258de8: 0x5085022f
label_258dec:
    if (ctx->pc == 0x258DECu) {
        ctx->pc = 0x258DECu;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
        ctx->pc = 0x258DF0u;
        goto label_258df0;
    }
    ctx->pc = 0x258DE8u;
    {
        const bool branch_taken_0x258de8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 5));
        if (branch_taken_0x258de8) {
            ctx->pc = 0x258DECu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
            ctx->pc = 0x2596A8u;
            goto label_2596a8;
        }
    }
    ctx->pc = 0x258DF0u;
label_258df0:
    // 0x258df0: 0xc09798e
label_258df4:
    if (ctx->pc == 0x258DF4u) {
        ctx->pc = 0x258DF8u;
        goto label_258df8;
    }
    ctx->pc = 0x258DF0u;
    SET_GPR_U32(ctx, 31, 0x258DF8u);
    ctx->pc = 0x25E638u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerStolen_0x25e638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258DF8u; }
    }
    if (ctx->pc != 0x258DF8u) { return; }
    ctx->pc = 0x258DF8u;
label_258df8:
    // 0x258df8: 0x1000022b
label_258dfc:
    if (ctx->pc == 0x258DFCu) {
        ctx->pc = 0x258DFCu;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
        ctx->pc = 0x258E00u;
        goto label_258e00;
    }
    ctx->pc = 0x258DF8u;
    {
        const bool branch_taken_0x258df8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258DFCu;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
        if (branch_taken_0x258df8) {
            ctx->pc = 0x2596A8u;
            goto label_2596a8;
        }
    }
    ctx->pc = 0x258E00u;
label_258e00:
    // 0x258e00: 0x8e231a14
    ctx->pc = 0x258e00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 6676)));
label_258e04:
    // 0x258e04: 0x8e6200f4
    ctx->pc = 0x258e04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_258e08:
    // 0x258e08: 0x621821
    ctx->pc = 0x258e08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_258e0c:
    // 0x258e0c: 0x3c020034
    ctx->pc = 0x258e0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_258e10:
    // 0x258e10: 0x8c42e814
    ctx->pc = 0x258e10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961172)));
label_258e14:
    // 0x258e14: 0x43102a
    ctx->pc = 0x258e14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_258e18:
    // 0x258e18: 0x14400020
label_258e1c:
    if (ctx->pc == 0x258E1Cu) {
        ctx->pc = 0x258E1Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x258E20u;
        goto label_258e20;
    }
    ctx->pc = 0x258E18u;
    {
        const bool branch_taken_0x258e18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x258E1Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x258e18) {
            ctx->pc = 0x258E9Cu;
            goto label_258e9c;
        }
    }
    ctx->pc = 0x258E20u;
label_258e20:
    // 0x258e20: 0x3c020034
    ctx->pc = 0x258e20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_258e24:
    // 0x258e24: 0x8c42e810
    ctx->pc = 0x258e24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961168)));
label_258e28:
    // 0x258e28: 0x10400006
label_258e2c:
    if (ctx->pc == 0x258E2Cu) {
        ctx->pc = 0x258E2Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x258E30u;
        goto label_258e30;
    }
    ctx->pc = 0x258E28u;
    {
        const bool branch_taken_0x258e28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x258E2Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x258e28) {
            ctx->pc = 0x258E44u;
            goto label_258e44;
        }
    }
    ctx->pc = 0x258E30u;
label_258e30:
    // 0x258e30: 0x8e250000
    ctx->pc = 0x258e30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258e34:
    // 0x258e34: 0xc0a3a1c
label_258e38:
    if (ctx->pc == 0x258E38u) {
        ctx->pc = 0x258E38u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x258E3Cu;
        goto label_258e3c;
    }
    ctx->pc = 0x258E34u;
    SET_GPR_U32(ctx, 31, 0x258E3Cu);
    ctx->pc = 0x258E38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258E3Cu; }
    }
    if (ctx->pc != 0x258E3Cu) { return; }
    ctx->pc = 0x258E3Cu;
label_258e3c:
    // 0x258e3c: 0x10000006
label_258e40:
    if (ctx->pc == 0x258E40u) {
        ctx->pc = 0x258E40u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 6676)));
        ctx->pc = 0x258E44u;
        goto label_258e44;
    }
    ctx->pc = 0x258E3Cu;
    {
        const bool branch_taken_0x258e3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258E40u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 6676)));
        if (branch_taken_0x258e3c) {
            ctx->pc = 0x258E58u;
            goto label_258e58;
        }
    }
    ctx->pc = 0x258E44u;
label_258e44:
    // 0x258e44: 0x24040002
    ctx->pc = 0x258e44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_258e48:
    // 0x258e48: 0x8e250000
    ctx->pc = 0x258e48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258e4c:
    // 0x258e4c: 0xc0a3a1c
label_258e50:
    if (ctx->pc == 0x258E50u) {
        ctx->pc = 0x258E50u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x258E54u;
        goto label_258e54;
    }
    ctx->pc = 0x258E4Cu;
    SET_GPR_U32(ctx, 31, 0x258E54u);
    ctx->pc = 0x258E50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258E54u; }
    }
    if (ctx->pc != 0x258E54u) { return; }
    ctx->pc = 0x258E54u;
label_258e54:
    // 0x258e54: 0x8e221a14
    ctx->pc = 0x258e54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 6676)));
label_258e58:
    // 0x258e58: 0x8e6300f4
    ctx->pc = 0x258e58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_258e5c:
    // 0x258e5c: 0x431021
    ctx->pc = 0x258e5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_258e60:
    // 0x258e60: 0xae221a14
    ctx->pc = 0x258e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6676), GPR_U32(ctx, 2));
label_258e64:
    // 0x258e64: 0x826400df
    ctx->pc = 0x258e64u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
label_258e68:
    // 0x258e68: 0x4800006
label_258e6c:
    if (ctx->pc == 0x258E6Cu) {
        ctx->pc = 0x258E70u;
        goto label_258e70;
    }
    ctx->pc = 0x258E68u;
    {
        const bool branch_taken_0x258e68 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x258e68) {
            ctx->pc = 0x258E84u;
            goto label_258e84;
        }
    }
    ctx->pc = 0x258E70u;
label_258e70:
    // 0x258e70: 0x8e250000
    ctx->pc = 0x258e70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258e74:
    // 0x258e74: 0x10850003
label_258e78:
    if (ctx->pc == 0x258E78u) {
        ctx->pc = 0x258E7Cu;
        goto label_258e7c;
    }
    ctx->pc = 0x258E74u;
    {
        const bool branch_taken_0x258e74 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 5));
        if (branch_taken_0x258e74) {
            ctx->pc = 0x258E84u;
            goto label_258e84;
        }
    }
    ctx->pc = 0x258E7Cu;
label_258e7c:
    // 0x258e7c: 0xc09798e
label_258e80:
    if (ctx->pc == 0x258E80u) {
        ctx->pc = 0x258E84u;
        goto label_258e84;
    }
    ctx->pc = 0x258E7Cu;
    SET_GPR_U32(ctx, 31, 0x258E84u);
    ctx->pc = 0x25E638u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerStolen_0x25e638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258E84u; }
    }
    if (ctx->pc != 0x258E84u) { return; }
    ctx->pc = 0x258E84u;
label_258e84:
    // 0x258e84: 0xc0982c8
label_258e88:
    if (ctx->pc == 0x258E88u) {
        ctx->pc = 0x258E88u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x258E8Cu;
        goto label_258e8c;
    }
    ctx->pc = 0x258E84u;
    SET_GPR_U32(ctx, 31, 0x258E8Cu);
    ctx->pc = 0x258E88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x260B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioKey_0x260b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258E8Cu; }
    }
    if (ctx->pc != 0x258E8Cu) { return; }
    ctx->pc = 0x258E8Cu;
label_258e8c:
    // 0x258e8c: 0x8e240000
    ctx->pc = 0x258e8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258e90:
    // 0x258e90: 0x8e850000
    ctx->pc = 0x258e90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_258e94:
    // 0x258e94: 0x10000185
label_258e98:
    if (ctx->pc == 0x258E98u) {
        ctx->pc = 0x258E98u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->pc = 0x258E9Cu;
        goto label_258e9c;
    }
    ctx->pc = 0x258E94u;
    {
        const bool branch_taken_0x258e94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258E98u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 244)));
        if (branch_taken_0x258e94) {
            ctx->pc = 0x2594ACu;
            goto label_2594ac;
        }
    }
    ctx->pc = 0x258E9Cu;
label_258e9c:
    // 0x258e9c: 0x8e241a14
    ctx->pc = 0x258e9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 6676)));
label_258ea0:
    // 0x258ea0: 0x8c43e814
    ctx->pc = 0x258ea0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961172)));
label_258ea4:
    // 0x258ea4: 0x83102a
    ctx->pc = 0x258ea4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
label_258ea8:
    // 0x258ea8: 0x1040001d
label_258eac:
    if (ctx->pc == 0x258EACu) {
        ctx->pc = 0x258EACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x258EB0u;
        goto label_258eb0;
    }
    ctx->pc = 0x258EA8u;
    {
        const bool branch_taken_0x258ea8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x258EACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x258ea8) {
            ctx->pc = 0x258F20u;
            goto label_258f20;
        }
    }
    ctx->pc = 0x258EB0u;
label_258eb0:
    // 0x258eb0: 0x8c42e810
    ctx->pc = 0x258eb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961168)));
label_258eb4:
    // 0x258eb4: 0x10400007
label_258eb8:
    if (ctx->pc == 0x258EB8u) {
        ctx->pc = 0x258EB8u;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x258EBCu;
        goto label_258ebc;
    }
    ctx->pc = 0x258EB4u;
    {
        const bool branch_taken_0x258eb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x258EB8u;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x258eb4) {
            ctx->pc = 0x258ED4u;
            goto label_258ed4;
        }
    }
    ctx->pc = 0x258EBCu;
label_258ebc:
    // 0x258ebc: 0x24040008
    ctx->pc = 0x258ebcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_258ec0:
    // 0x258ec0: 0x8e250000
    ctx->pc = 0x258ec0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258ec4:
    // 0x258ec4: 0xc0a3a1c
label_258ec8:
    if (ctx->pc == 0x258EC8u) {
        ctx->pc = 0x258EC8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x258ECCu;
        goto label_258ecc;
    }
    ctx->pc = 0x258EC4u;
    SET_GPR_U32(ctx, 31, 0x258ECCu);
    ctx->pc = 0x258EC8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258ECCu; }
    }
    if (ctx->pc != 0x258ECCu) { return; }
    ctx->pc = 0x258ECCu;
label_258ecc:
    // 0x258ecc: 0x10000006
label_258ed0:
    if (ctx->pc == 0x258ED0u) {
        ctx->pc = 0x258ED0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 6676)));
        ctx->pc = 0x258ED4u;
        goto label_258ed4;
    }
    ctx->pc = 0x258ECCu;
    {
        const bool branch_taken_0x258ecc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258ED0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 6676)));
        if (branch_taken_0x258ecc) {
            ctx->pc = 0x258EE8u;
            goto label_258ee8;
        }
    }
    ctx->pc = 0x258ED4u;
label_258ed4:
    // 0x258ed4: 0x24040002
    ctx->pc = 0x258ed4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_258ed8:
    // 0x258ed8: 0x8e250000
    ctx->pc = 0x258ed8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258edc:
    // 0x258edc: 0xc0a3a1c
label_258ee0:
    if (ctx->pc == 0x258EE0u) {
        ctx->pc = 0x258EE0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x258EE4u;
        goto label_258ee4;
    }
    ctx->pc = 0x258EDCu;
    SET_GPR_U32(ctx, 31, 0x258EE4u);
    ctx->pc = 0x258EE0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258EE4u; }
    }
    if (ctx->pc != 0x258EE4u) { return; }
    ctx->pc = 0x258EE4u;
label_258ee4:
    // 0x258ee4: 0x8e221a14
    ctx->pc = 0x258ee4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 6676)));
label_258ee8:
    // 0x258ee8: 0x2021021
    ctx->pc = 0x258ee8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_258eec:
    // 0x258eec: 0xae221a14
    ctx->pc = 0x258eecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6676), GPR_U32(ctx, 2));
label_258ef0:
    // 0x258ef0: 0x8e6200f4
    ctx->pc = 0x258ef0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_258ef4:
    // 0x258ef4: 0x501023
    ctx->pc = 0x258ef4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_258ef8:
    // 0x258ef8: 0xae6200f4
    ctx->pc = 0x258ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 244), GPR_U32(ctx, 2));
label_258efc:
    // 0x258efc: 0xc0982c8
label_258f00:
    if (ctx->pc == 0x258F00u) {
        ctx->pc = 0x258F00u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x258F04u;
        goto label_258f04;
    }
    ctx->pc = 0x258EFCu;
    SET_GPR_U32(ctx, 31, 0x258F04u);
    ctx->pc = 0x258F00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x260B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioKey_0x260b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258F04u; }
    }
    if (ctx->pc != 0x258F04u) { return; }
    ctx->pc = 0x258F04u;
label_258f04:
    // 0x258f04: 0x8e240000
    ctx->pc = 0x258f04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258f08:
    // 0x258f08: 0x8e850000
    ctx->pc = 0x258f08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_258f0c:
    // 0x258f0c: 0xc08ac74
label_258f10:
    if (ctx->pc == 0x258F10u) {
        ctx->pc = 0x258F10u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->pc = 0x258F14u;
        goto label_258f14;
    }
    ctx->pc = 0x258F0Cu;
    SET_GPR_U32(ctx, 31, 0x258F14u);
    ctx->pc = 0x258F10u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 244)));
    ctx->pc = 0x22B1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_got_it_0x22b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258F14u; }
    }
    if (ctx->pc != 0x258F14u) { return; }
    ctx->pc = 0x258F14u;
label_258f14:
    // 0x258f14: 0x24020001
    ctx->pc = 0x258f14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_258f18:
    // 0x258f18: 0x100001e2
label_258f1c:
    if (ctx->pc == 0x258F1Cu) {
        ctx->pc = 0x258F1Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 2356), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x258F20u;
        goto label_258f20;
    }
    ctx->pc = 0x258F18u;
    {
        const bool branch_taken_0x258f18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258F1Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 2356), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x258f18) {
            ctx->pc = 0x2596A4u;
            goto label_2596a4;
        }
    }
    ctx->pc = 0x258F20u;
label_258f20:
    // 0x258f20: 0x10000050
label_258f24:
    if (ctx->pc == 0x258F24u) {
        ctx->pc = 0x258F24u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x258F28u;
        goto label_258f28;
    }
    ctx->pc = 0x258F20u;
    {
        const bool branch_taken_0x258f20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258F24u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x258f20) {
            ctx->pc = 0x259064u;
            goto label_259064;
        }
    }
    ctx->pc = 0x258F28u;
label_258f28:
    // 0x258f28: 0x3c020034
    ctx->pc = 0x258f28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_258f2c:
    // 0x258f2c: 0x40302d
    ctx->pc = 0x258f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258f30:
    // 0x258f30: 0x8e231a18
    ctx->pc = 0x258f30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 6680)));
label_258f34:
    // 0x258f34: 0x60282d
    ctx->pc = 0x258f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_258f38:
    // 0x258f38: 0x8c42e818
    ctx->pc = 0x258f38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961176)));
label_258f3c:
    // 0x258f3c: 0x62182a
    ctx->pc = 0x258f3cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_258f40:
    // 0x258f40: 0x10600048
label_258f44:
    if (ctx->pc == 0x258F44u) {
        ctx->pc = 0x258F44u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x258F48u;
        goto label_258f48;
    }
    ctx->pc = 0x258F40u;
    {
        const bool branch_taken_0x258f40 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x258F44u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x258f40) {
            ctx->pc = 0x259064u;
            goto label_259064;
        }
    }
    ctx->pc = 0x258F48u;
label_258f48:
    // 0x258f48: 0x8e880038
    ctx->pc = 0x258f48u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_258f4c:
    // 0x258f4c: 0x8e6200f4
    ctx->pc = 0x258f4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_258f50:
    // 0x258f50: 0x18400010
label_258f54:
    if (ctx->pc == 0x258F54u) {
        ctx->pc = 0x258F54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x258F58u;
        goto label_258f58;
    }
    ctx->pc = 0x258F50u;
    {
        const bool branch_taken_0x258f50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x258F54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x258f50) {
            ctx->pc = 0x258F94u;
            goto label_258f94;
        }
    }
    ctx->pc = 0x258F58u;
label_258f58:
    // 0x258f58: 0x26272a9c
    ctx->pc = 0x258f58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 10908));
label_258f5c:
    // 0x258f5c: 0x8cc6e818
    ctx->pc = 0x258f5cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 4294961176)));
label_258f60:
    // 0x258f60: 0x51080
    ctx->pc = 0x258f60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
label_258f64:
    // 0x258f64: 0xe21021
    ctx->pc = 0x258f64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_258f68:
    // 0x258f68: 0xac480000
    ctx->pc = 0x258f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_258f6c:
    // 0x258f6c: 0x8e221a18
    ctx->pc = 0x258f6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 6680)));
label_258f70:
    // 0x258f70: 0x24430001
    ctx->pc = 0x258f70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
label_258f74:
    // 0x258f74: 0xae231a18
    ctx->pc = 0x258f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6680), GPR_U32(ctx, 3));
label_258f78:
    // 0x258f78: 0x24840001
    ctx->pc = 0x258f78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_258f7c:
    // 0x258f7c: 0x8e6200f4
    ctx->pc = 0x258f7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_258f80:
    // 0x258f80: 0x82102a
    ctx->pc = 0x258f80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
label_258f84:
    // 0x258f84: 0x10400003
label_258f88:
    if (ctx->pc == 0x258F88u) {
        ctx->pc = 0x258F88u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 6)));
        ctx->pc = 0x258F8Cu;
        goto label_258f8c;
    }
    ctx->pc = 0x258F84u;
    {
        const bool branch_taken_0x258f84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x258F88u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 6)));
        if (branch_taken_0x258f84) {
            ctx->pc = 0x258F94u;
            goto label_258f94;
        }
    }
    ctx->pc = 0x258F8Cu;
label_258f8c:
    // 0x258f8c: 0x1440fff4
label_258f90:
    if (ctx->pc == 0x258F90u) {
        ctx->pc = 0x258F90u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x258F94u;
        goto label_258f94;
    }
    ctx->pc = 0x258F8Cu;
    {
        const bool branch_taken_0x258f8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x258F90u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x258f8c) {
            ctx->pc = 0x258F60u;
            goto label_258f60;
        }
    }
    ctx->pc = 0x258F94u;
label_258f94:
    // 0x258f94: 0x26300060
    ctx->pc = 0x258f94u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 96));
label_258f98:
    // 0x258f98: 0x24040007
    ctx->pc = 0x258f98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
label_258f9c:
    // 0x258f9c: 0x8e250000
    ctx->pc = 0x258f9cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258fa0:
    // 0x258fa0: 0xc0a3a1c
label_258fa4:
    if (ctx->pc == 0x258FA4u) {
        ctx->pc = 0x258FA4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x258FA8u;
        goto label_258fa8;
    }
    ctx->pc = 0x258FA0u;
    SET_GPR_U32(ctx, 31, 0x258FA8u);
    ctx->pc = 0x258FA4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258FA8u; }
    }
    if (ctx->pc != 0x258FA8u) { return; }
    ctx->pc = 0x258FA8u;
label_258fa8:
    // 0x258fa8: 0x443000c
label_258fac:
    if (ctx->pc == 0x258FACu) {
        ctx->pc = 0x258FACu;
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
        ctx->pc = 0x258FB0u;
        goto label_258fb0;
    }
    ctx->pc = 0x258FA8u;
    {
        const bool branch_taken_0x258fa8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x258fa8) {
            ctx->pc = 0x258FACu;
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
            ctx->pc = 0x258FDCu;
            goto label_258fdc;
        }
    }
    ctx->pc = 0x258FB0u;
label_258fb0:
    // 0x258fb0: 0x2404005e
    ctx->pc = 0x258fb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
label_258fb4:
    // 0x258fb4: 0x8e250000
    ctx->pc = 0x258fb4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258fb8:
    // 0x258fb8: 0xc0a3a1c
label_258fbc:
    if (ctx->pc == 0x258FBCu) {
        ctx->pc = 0x258FBCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x258FC0u;
        goto label_258fc0;
    }
    ctx->pc = 0x258FB8u;
    SET_GPR_U32(ctx, 31, 0x258FC0u);
    ctx->pc = 0x258FBCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258FC0u; }
    }
    if (ctx->pc != 0x258FC0u) { return; }
    ctx->pc = 0x258FC0u;
label_258fc0:
    // 0x258fc0: 0x4430006
label_258fc4:
    if (ctx->pc == 0x258FC4u) {
        ctx->pc = 0x258FC4u;
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
        ctx->pc = 0x258FC8u;
        goto label_258fc8;
    }
    ctx->pc = 0x258FC0u;
    {
        const bool branch_taken_0x258fc0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x258fc0) {
            ctx->pc = 0x258FC4u;
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
            ctx->pc = 0x258FDCu;
            goto label_258fdc;
        }
    }
    ctx->pc = 0x258FC8u;
label_258fc8:
    // 0x258fc8: 0x2404005f
    ctx->pc = 0x258fc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 95));
label_258fcc:
    // 0x258fcc: 0x8e250000
    ctx->pc = 0x258fccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258fd0:
    // 0x258fd0: 0xc0a3a1c
label_258fd4:
    if (ctx->pc == 0x258FD4u) {
        ctx->pc = 0x258FD4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x258FD8u;
        goto label_258fd8;
    }
    ctx->pc = 0x258FD0u;
    SET_GPR_U32(ctx, 31, 0x258FD8u);
    ctx->pc = 0x258FD4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258FD8u; }
    }
    if (ctx->pc != 0x258FD8u) { return; }
    ctx->pc = 0x258FD8u;
label_258fd8:
    // 0x258fd8: 0x826400df
    ctx->pc = 0x258fd8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
label_258fdc:
    // 0x258fdc: 0x4800006
label_258fe0:
    if (ctx->pc == 0x258FE0u) {
        ctx->pc = 0x258FE4u;
        goto label_258fe4;
    }
    ctx->pc = 0x258FDCu;
    {
        const bool branch_taken_0x258fdc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x258fdc) {
            ctx->pc = 0x258FF8u;
            goto label_258ff8;
        }
    }
    ctx->pc = 0x258FE4u;
label_258fe4:
    // 0x258fe4: 0x8e250000
    ctx->pc = 0x258fe4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258fe8:
    // 0x258fe8: 0x10850003
label_258fec:
    if (ctx->pc == 0x258FECu) {
        ctx->pc = 0x258FF0u;
        goto label_258ff0;
    }
    ctx->pc = 0x258FE8u;
    {
        const bool branch_taken_0x258fe8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 5));
        if (branch_taken_0x258fe8) {
            ctx->pc = 0x258FF8u;
            goto label_258ff8;
        }
    }
    ctx->pc = 0x258FF0u;
label_258ff0:
    // 0x258ff0: 0xc09798e
label_258ff4:
    if (ctx->pc == 0x258FF4u) {
        ctx->pc = 0x258FF8u;
        goto label_258ff8;
    }
    ctx->pc = 0x258FF0u;
    SET_GPR_U32(ctx, 31, 0x258FF8u);
    ctx->pc = 0x25E638u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerStolen_0x25e638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258FF8u; }
    }
    if (ctx->pc != 0x258FF8u) { return; }
    ctx->pc = 0x258FF8u;
label_258ff8:
    // 0x258ff8: 0xc098258
label_258ffc:
    if (ctx->pc == 0x258FFCu) {
        ctx->pc = 0x258FFCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x259000u;
        goto label_259000;
    }
    ctx->pc = 0x258FF8u;
    SET_GPR_U32(ctx, 31, 0x259000u);
    ctx->pc = 0x258FFCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x260960u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPickup_0x260960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259000u; }
    }
    if (ctx->pc != 0x259000u) { return; }
    ctx->pc = 0x259000u;
label_259000:
    // 0x259000: 0x10000128
label_259004:
    if (ctx->pc == 0x259004u) {
        ctx->pc = 0x259004u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x259008u;
        goto label_259008;
    }
    ctx->pc = 0x259000u;
    {
        const bool branch_taken_0x259000 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259004u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x259000) {
            ctx->pc = 0x2594A4u;
            goto label_2594a4;
        }
    }
    ctx->pc = 0x259008u;
label_259008:
    // 0x259008: 0xc67400f4
    ctx->pc = 0x259008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25900c:
    // 0x25900c: 0x4680a520
    ctx->pc = 0x25900cu;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
label_259010:
    // 0x259010: 0x8e220138
    ctx->pc = 0x259010u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_259014:
    // 0x259014: 0x30420400
    ctx->pc = 0x259014u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
label_259018:
    // 0x259018: 0x10400008
label_25901c:
    if (ctx->pc == 0x25901Cu) {
        ctx->pc = 0x25901Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 36));
        ctx->pc = 0x259020u;
        goto label_259020;
    }
    ctx->pc = 0x259018u;
    {
        const bool branch_taken_0x259018 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25901Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 36));
        if (branch_taken_0x259018) {
            ctx->pc = 0x25903Cu;
            goto label_25903c;
        }
    }
    ctx->pc = 0x259020u;
label_259020:
    // 0x259020: 0x3c05003b
    ctx->pc = 0x259020u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_259024:
    // 0x259024: 0xc0bf270
label_259028:
    if (ctx->pc == 0x259028u) {
        ctx->pc = 0x259028u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294937760));
        ctx->pc = 0x25902Cu;
        goto label_25902c;
    }
    ctx->pc = 0x259024u;
    SET_GPR_U32(ctx, 31, 0x25902Cu);
    ctx->pc = 0x259028u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294937760));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25902Cu; }
    }
    if (ctx->pc != 0x25902Cu) { return; }
    ctx->pc = 0x25902Cu;
label_25902c:
    // 0x25902c: 0x14400003
label_259030:
    if (ctx->pc == 0x259030u) {
        ctx->pc = 0x259034u;
        goto label_259034;
    }
    ctx->pc = 0x25902Cu;
    {
        const bool branch_taken_0x25902c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25902c) {
            ctx->pc = 0x25903Cu;
            goto label_25903c;
        }
    }
    ctx->pc = 0x259034u;
label_259034:
    // 0x259034: 0x3c01c2c8
    ctx->pc = 0x259034u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49864 << 16));
label_259038:
    // 0x259038: 0x4481a000
    ctx->pc = 0x259038u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_25903c:
    // 0x25903c: 0x44800000
    ctx->pc = 0x25903cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_259040:
    // 0x259040: 0x46140036
    ctx->pc = 0x259040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259044:
    // 0x259044: 0x0
    ctx->pc = 0x259044u;
    // NOP
label_259048:
    // 0x259048: 0x4500000b
label_25904c:
    if (ctx->pc == 0x25904Cu) {
        ctx->pc = 0x25904Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259050u;
        goto label_259050;
    }
    ctx->pc = 0x259048u;
    {
        const bool branch_taken_0x259048 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25904Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259048) {
            ctx->pc = 0x259078u;
            goto label_259078;
        }
    }
    ctx->pc = 0x259050u;
label_259050:
    // 0x259050: 0xc08c97e
label_259054:
    if (ctx->pc == 0x259054u) {
        ctx->pc = 0x259054u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x259058u;
        goto label_259058;
    }
    ctx->pc = 0x259050u;
    SET_GPR_U32(ctx, 31, 0x259058u);
    ctx->pc = 0x259054u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2325F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        heal_player_0x2325f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259058u; }
    }
    if (ctx->pc != 0x259058u) { return; }
    ctx->pc = 0x259058u;
label_259058:
    // 0x259058: 0x5440000e
label_25905c:
    if (ctx->pc == 0x25905Cu) {
        ctx->pc = 0x25905Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->pc = 0x259060u;
        goto label_259060;
    }
    ctx->pc = 0x259058u;
    {
        const bool branch_taken_0x259058 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x259058) {
            ctx->pc = 0x25905Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 244)));
            ctx->pc = 0x259094u;
            goto label_259094;
        }
    }
    ctx->pc = 0x259060u;
label_259060:
    // 0x259060: 0x24040085
    ctx->pc = 0x259060u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 133));
label_259064:
    // 0x259064: 0x8e250000
    ctx->pc = 0x259064u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259068:
    // 0x259068: 0xc0a3a1c
label_25906c:
    if (ctx->pc == 0x25906Cu) {
        ctx->pc = 0x25906Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x259070u;
        goto label_259070;
    }
    ctx->pc = 0x259068u;
    SET_GPR_U32(ctx, 31, 0x259070u);
    ctx->pc = 0x25906Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259070u; }
    }
    if (ctx->pc != 0x259070u) { return; }
    ctx->pc = 0x259070u;
label_259070:
    // 0x259070: 0x1000018d
label_259074:
    if (ctx->pc == 0x259074u) {
        ctx->pc = 0x259074u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
        ctx->pc = 0x259078u;
        goto label_259078;
    }
    ctx->pc = 0x259070u;
    {
        const bool branch_taken_0x259070 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259074u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
        if (branch_taken_0x259070) {
            ctx->pc = 0x2596A8u;
            goto label_2596a8;
        }
    }
    ctx->pc = 0x259078u;
label_259078:
    // 0x259078: 0x8e240000
    ctx->pc = 0x259078u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25907c:
    // 0x25907c: 0x4600a307
    ctx->pc = 0x25907cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
label_259080:
    // 0x259080: 0x282d
    ctx->pc = 0x259080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259084:
    // 0x259084: 0x24060800
    ctx->pc = 0x259084u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2048));
label_259088:
    // 0x259088: 0xc08c73c
label_25908c:
    if (ctx->pc == 0x25908Cu) {
        ctx->pc = 0x25908Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259090u;
        goto label_259090;
    }
    ctx->pc = 0x259088u;
    SET_GPR_U32(ctx, 31, 0x259090u);
    ctx->pc = 0x25908Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_player_0x231cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259090u; }
    }
    if (ctx->pc != 0x259090u) { return; }
    ctx->pc = 0x259090u;
label_259090:
    // 0x259090: 0x8e6200f4
    ctx->pc = 0x259090u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_259094:
    // 0x259094: 0x28420064
    ctx->pc = 0x259094u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 100));
label_259098:
    // 0x259098: 0x54400003
label_25909c:
    if (ctx->pc == 0x25909Cu) {
        ctx->pc = 0x25909Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->pc = 0x2590A0u;
        goto label_2590a0;
    }
    ctx->pc = 0x259098u;
    {
        const bool branch_taken_0x259098 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x259098) {
            ctx->pc = 0x25909Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 244)));
            ctx->pc = 0x2590A8u;
            goto label_2590a8;
        }
    }
    ctx->pc = 0x2590A0u;
label_2590a0:
    // 0x2590a0: 0x10000005
label_2590a4:
    if (ctx->pc == 0x2590A4u) {
        ctx->pc = 0x2590A4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x2590A8u;
        goto label_2590a8;
    }
    ctx->pc = 0x2590A0u;
    {
        const bool branch_taken_0x2590a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2590A4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x2590a0) {
            ctx->pc = 0x2590B8u;
            goto label_2590b8;
        }
    }
    ctx->pc = 0x2590A8u;
label_2590a8:
    // 0x2590a8: 0x28420032
    ctx->pc = 0x2590a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 50));
label_2590ac:
    // 0x2590ac: 0x54400007
label_2590b0:
    if (ctx->pc == 0x2590B0u) {
        ctx->pc = 0x2590B0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->pc = 0x2590B4u;
        goto label_2590b4;
    }
    ctx->pc = 0x2590ACu;
    {
        const bool branch_taken_0x2590ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2590ac) {
            ctx->pc = 0x2590B0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 244)));
            ctx->pc = 0x2590CCu;
            goto label_2590cc;
        }
    }
    ctx->pc = 0x2590B4u;
label_2590b4:
    // 0x2590b4: 0x24040010
    ctx->pc = 0x2590b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
label_2590b8:
    // 0x2590b8: 0x8e250000
    ctx->pc = 0x2590b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2590bc:
    // 0x2590bc: 0xc0a3a1c
label_2590c0:
    if (ctx->pc == 0x2590C0u) {
        ctx->pc = 0x2590C0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x2590C4u;
        goto label_2590c4;
    }
    ctx->pc = 0x2590BCu;
    SET_GPR_U32(ctx, 31, 0x2590C4u);
    ctx->pc = 0x2590C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2590C4u; }
    }
    if (ctx->pc != 0x2590C4u) { return; }
    ctx->pc = 0x2590C4u;
label_2590c4:
    // 0x2590c4: 0x10000008
label_2590c8:
    if (ctx->pc == 0x2590C8u) {
        ctx->pc = 0x2590C8u;
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
        ctx->pc = 0x2590CCu;
        goto label_2590cc;
    }
    ctx->pc = 0x2590C4u;
    {
        const bool branch_taken_0x2590c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2590C8u;
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
        if (branch_taken_0x2590c4) {
            ctx->pc = 0x2590E8u;
            goto label_2590e8;
        }
    }
    ctx->pc = 0x2590CCu;
label_2590cc:
    // 0x2590cc: 0x4430006
label_2590d0:
    if (ctx->pc == 0x2590D0u) {
        ctx->pc = 0x2590D0u;
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
        ctx->pc = 0x2590D4u;
        goto label_2590d4;
    }
    ctx->pc = 0x2590CCu;
    {
        const bool branch_taken_0x2590cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2590cc) {
            ctx->pc = 0x2590D0u;
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
            ctx->pc = 0x2590E8u;
            goto label_2590e8;
        }
    }
    ctx->pc = 0x2590D4u;
label_2590d4:
    // 0x2590d4: 0x2404001c
    ctx->pc = 0x2590d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 28));
label_2590d8:
    // 0x2590d8: 0x8e250000
    ctx->pc = 0x2590d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2590dc:
    // 0x2590dc: 0xc0a3a1c
label_2590e0:
    if (ctx->pc == 0x2590E0u) {
        ctx->pc = 0x2590E0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x2590E4u;
        goto label_2590e4;
    }
    ctx->pc = 0x2590DCu;
    SET_GPR_U32(ctx, 31, 0x2590E4u);
    ctx->pc = 0x2590E0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2590E4u; }
    }
    if (ctx->pc != 0x2590E4u) { return; }
    ctx->pc = 0x2590E4u;
label_2590e4:
    // 0x2590e4: 0x826400df
    ctx->pc = 0x2590e4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
label_2590e8:
    // 0x2590e8: 0x4820007
label_2590ec:
    if (ctx->pc == 0x2590ECu) {
        ctx->pc = 0x2590ECu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2590F0u;
        goto label_2590f0;
    }
    ctx->pc = 0x2590E8u;
    {
        const bool branch_taken_0x2590e8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2590e8) {
            ctx->pc = 0x2590ECu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x259108u;
            goto label_259108;
        }
    }
    ctx->pc = 0x2590F0u;
label_2590f0:
    // 0x2590f0: 0x8e250000
    ctx->pc = 0x2590f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2590f4:
    // 0x2590f4: 0x50850004
label_2590f8:
    if (ctx->pc == 0x2590F8u) {
        ctx->pc = 0x2590F8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2590FCu;
        goto label_2590fc;
    }
    ctx->pc = 0x2590F4u;
    {
        const bool branch_taken_0x2590f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 5));
        if (branch_taken_0x2590f4) {
            ctx->pc = 0x2590F8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x259108u;
            goto label_259108;
        }
    }
    ctx->pc = 0x2590FCu;
label_2590fc:
    // 0x2590fc: 0xc09798e
label_259100:
    if (ctx->pc == 0x259100u) {
        ctx->pc = 0x259104u;
        goto label_259104;
    }
    ctx->pc = 0x2590FCu;
    SET_GPR_U32(ctx, 31, 0x259104u);
    ctx->pc = 0x25E638u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerStolen_0x25e638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259104u; }
    }
    if (ctx->pc != 0x259104u) { return; }
    ctx->pc = 0x259104u;
label_259104:
    // 0x259104: 0x8e240000
    ctx->pc = 0x259104u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259108:
    // 0x259108: 0x4600a024
    ctx->pc = 0x259108u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[20]);
label_25910c:
    // 0x25910c: 0x44060000
    ctx->pc = 0x25910cu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[0]);
label_259110:
    // 0x259110: 0xc08ac74
label_259114:
    if (ctx->pc == 0x259114u) {
        ctx->pc = 0x259114u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x259118u;
        goto label_259118;
    }
    ctx->pc = 0x259110u;
    SET_GPR_U32(ctx, 31, 0x259118u);
    ctx->pc = 0x259114u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->pc = 0x22B1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_got_it_0x22b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259118u; }
    }
    if (ctx->pc != 0x259118u) { return; }
    ctx->pc = 0x259118u;
label_259118:
    // 0x259118: 0x44800000
    ctx->pc = 0x259118u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_25911c:
    // 0x25911c: 0x4600a034
    ctx->pc = 0x25911cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259120:
    // 0x259120: 0x0
    ctx->pc = 0x259120u;
    // NOP
label_259124:
    // 0x259124: 0x45000006
label_259128:
    if (ctx->pc == 0x259128u) {
        ctx->pc = 0x259128u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x25912Cu;
        goto label_25912c;
    }
    ctx->pc = 0x259124u;
    {
        const bool branch_taken_0x259124 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259128u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x259124) {
            ctx->pc = 0x259140u;
            goto label_259140;
        }
    }
    ctx->pc = 0x25912Cu;
label_25912c:
    // 0x25912c: 0xa6220934
    ctx->pc = 0x25912cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2356), (uint16_t)GPR_U32(ctx, 2));
label_259130:
    // 0x259130: 0xc097962
label_259134:
    if (ctx->pc == 0x259134u) {
        ctx->pc = 0x259134u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x259138u;
        goto label_259138;
    }
    ctx->pc = 0x259130u;
    SET_GPR_U32(ctx, 31, 0x259138u);
    ctx->pc = 0x259134u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x25E588u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerPoison_0x25e588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259138u; }
    }
    if (ctx->pc != 0x259138u) { return; }
    ctx->pc = 0x259138u;
label_259138:
    // 0x259138: 0x1000015a
label_25913c:
    if (ctx->pc == 0x25913Cu) {
        ctx->pc = 0x25913Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x259140u;
        goto label_259140;
    }
    ctx->pc = 0x259138u;
    {
        const bool branch_taken_0x259138 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25913Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x259138) {
            ctx->pc = 0x2596A4u;
            goto label_2596a4;
        }
    }
    ctx->pc = 0x259140u;
label_259140:
    // 0x259140: 0x802d
    ctx->pc = 0x259140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259144:
    // 0x259144: 0x24020001
    ctx->pc = 0x259144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_259148:
    // 0x259148: 0xa6220934
    ctx->pc = 0x259148u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2356), (uint16_t)GPR_U32(ctx, 2));
label_25914c:
    // 0x25914c: 0x26840024
    ctx->pc = 0x25914cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 36));
label_259150:
    // 0x259150: 0x3c05003b
    ctx->pc = 0x259150u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_259154:
    // 0x259154: 0xc0bf270
label_259158:
    if (ctx->pc == 0x259158u) {
        ctx->pc = 0x259158u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294937768));
        ctx->pc = 0x25915Cu;
        goto label_25915c;
    }
    ctx->pc = 0x259154u;
    SET_GPR_U32(ctx, 31, 0x25915Cu);
    ctx->pc = 0x259158u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294937768));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25915Cu; }
    }
    if (ctx->pc != 0x25915Cu) { return; }
    ctx->pc = 0x25915Cu;
label_25915c:
    // 0x25915c: 0x14400003
label_259160:
    if (ctx->pc == 0x259160u) {
        ctx->pc = 0x259160u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 36));
        ctx->pc = 0x259164u;
        goto label_259164;
    }
    ctx->pc = 0x25915Cu;
    {
        const bool branch_taken_0x25915c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x259160u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 36));
        if (branch_taken_0x25915c) {
            ctx->pc = 0x25916Cu;
            goto label_25916c;
        }
    }
    ctx->pc = 0x259164u;
label_259164:
    // 0x259164: 0x1000000d
label_259168:
    if (ctx->pc == 0x259168u) {
        ctx->pc = 0x259168u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x25916Cu;
        goto label_25916c;
    }
    ctx->pc = 0x259164u;
    {
        const bool branch_taken_0x259164 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259168u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x259164) {
            ctx->pc = 0x25919Cu;
            goto label_25919c;
        }
    }
    ctx->pc = 0x25916Cu;
label_25916c:
    // 0x25916c: 0x3c05003b
    ctx->pc = 0x25916cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_259170:
    // 0x259170: 0xc0bf270
label_259174:
    if (ctx->pc == 0x259174u) {
        ctx->pc = 0x259174u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294937784));
        ctx->pc = 0x259178u;
        goto label_259178;
    }
    ctx->pc = 0x259170u;
    SET_GPR_U32(ctx, 31, 0x259178u);
    ctx->pc = 0x259174u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294937784));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259178u; }
    }
    if (ctx->pc != 0x259178u) { return; }
    ctx->pc = 0x259178u;
label_259178:
    // 0x259178: 0x14400003
label_25917c:
    if (ctx->pc == 0x25917Cu) {
        ctx->pc = 0x25917Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 36));
        ctx->pc = 0x259180u;
        goto label_259180;
    }
    ctx->pc = 0x259178u;
    {
        const bool branch_taken_0x259178 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25917Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 36));
        if (branch_taken_0x259178) {
            ctx->pc = 0x259188u;
            goto label_259188;
        }
    }
    ctx->pc = 0x259180u;
label_259180:
    // 0x259180: 0x10000006
label_259184:
    if (ctx->pc == 0x259184u) {
        ctx->pc = 0x259184u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x259188u;
        goto label_259188;
    }
    ctx->pc = 0x259180u;
    {
        const bool branch_taken_0x259180 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259184u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x259180) {
            ctx->pc = 0x25919Cu;
            goto label_25919c;
        }
    }
    ctx->pc = 0x259188u;
label_259188:
    // 0x259188: 0x3c05003b
    ctx->pc = 0x259188u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25918c:
    // 0x25918c: 0xc0bf270
label_259190:
    if (ctx->pc == 0x259190u) {
        ctx->pc = 0x259190u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294937792));
        ctx->pc = 0x259194u;
        goto label_259194;
    }
    ctx->pc = 0x25918Cu;
    SET_GPR_U32(ctx, 31, 0x259194u);
    ctx->pc = 0x259190u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294937792));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259194u; }
    }
    if (ctx->pc != 0x259194u) { return; }
    ctx->pc = 0x259194u;
label_259194:
    // 0x259194: 0x24030002
    ctx->pc = 0x259194u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_259198:
    // 0x259198: 0x62800a
    ctx->pc = 0x259198u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
label_25919c:
    // 0x25919c: 0x8e240000
    ctx->pc = 0x25919cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2591a0:
    // 0x2591a0: 0xc09792e
label_2591a4:
    if (ctx->pc == 0x2591A4u) {
        ctx->pc = 0x2591A4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2591A8u;
        goto label_2591a8;
    }
    ctx->pc = 0x2591A0u;
    SET_GPR_U32(ctx, 31, 0x2591A8u);
    ctx->pc = 0x2591A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25E4B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerEatSFX_0x25e4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2591A8u; }
    }
    if (ctx->pc != 0x2591A8u) { return; }
    ctx->pc = 0x2591A8u;
label_2591a8:
    // 0x2591a8: 0x1000013e
label_2591ac:
    if (ctx->pc == 0x2591ACu) {
        ctx->pc = 0x2591ACu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2591B0u;
        goto label_2591b0;
    }
    ctx->pc = 0x2591A8u;
    {
        const bool branch_taken_0x2591a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2591ACu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2591a8) {
            ctx->pc = 0x2596A4u;
            goto label_2596a4;
        }
    }
    ctx->pc = 0x2591B0u;
label_2591b0:
    // 0x2591b0: 0x266700f0
    ctx->pc = 0x2591b0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 240));
label_2591b4:
    // 0x2591b4: 0x2412ffff
    ctx->pc = 0x2591b4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2591b8:
    // 0x2591b8: 0x8e830000
    ctx->pc = 0x2591b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2591bc:
    // 0x2591bc: 0x24020009
    ctx->pc = 0x2591bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
label_2591c0:
    // 0x2591c0: 0x14620008
label_2591c4:
    if (ctx->pc == 0x2591C4u) {
        ctx->pc = 0x2591C4u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 240)));
        ctx->pc = 0x2591C8u;
        goto label_2591c8;
    }
    ctx->pc = 0x2591C0u;
    {
        const bool branch_taken_0x2591c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2591C4u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 240)));
        if (branch_taken_0x2591c0) {
            ctx->pc = 0x2591E4u;
            goto label_2591e4;
        }
    }
    ctx->pc = 0x2591C8u;
label_2591c8:
    // 0x2591c8: 0x3202f000
    ctx->pc = 0x2591c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 61440));
label_2591cc:
    // 0x2591cc: 0x10400006
label_2591d0:
    if (ctx->pc == 0x2591D0u) {
        ctx->pc = 0x2591D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2591D4u;
        goto label_2591d4;
    }
    ctx->pc = 0x2591CCu;
    {
        const bool branch_taken_0x2591cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2591D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2591cc) {
            ctx->pc = 0x2591E8u;
            goto label_2591e8;
        }
    }
    ctx->pc = 0x2591D4u;
label_2591d4:
    // 0x2591d4: 0x8e220138
    ctx->pc = 0x2591d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_2591d8:
    // 0x2591d8: 0x3042f000
    ctx->pc = 0x2591d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 61440));
label_2591dc:
    // 0x2591dc: 0x54400132
label_2591e0:
    if (ctx->pc == 0x2591E0u) {
        ctx->pc = 0x2591E0u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
        ctx->pc = 0x2591E4u;
        goto label_2591e4;
    }
    ctx->pc = 0x2591DCu;
    {
        const bool branch_taken_0x2591dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2591dc) {
            ctx->pc = 0x2591E0u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
            ctx->pc = 0x2596A8u;
            goto label_2596a8;
        }
    }
    ctx->pc = 0x2591E4u;
label_2591e4:
    // 0x2591e4: 0x220202d
    ctx->pc = 0x2591e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2591e8:
    // 0x2591e8: 0x8e850000
    ctx->pc = 0x2591e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2591ec:
    // 0x2591ec: 0xc4ec0004
    ctx->pc = 0x2591ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2591f0:
    // 0x2591f0: 0x46806320
    ctx->pc = 0x2591f0u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2591f4:
    // 0x2591f4: 0x200302d
    ctx->pc = 0x2591f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2591f8:
    // 0x2591f8: 0xc08b096
label_2591fc:
    if (ctx->pc == 0x2591FCu) {
        ctx->pc = 0x2591FCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x259200u;
        goto label_259200;
    }
    ctx->pc = 0x2591F8u;
    SET_GPR_U32(ctx, 31, 0x259200u);
    ctx->pc = 0x2591FCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x22C258u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerAddPowerup_0x22c258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259200u; }
    }
    if (ctx->pc != 0x259200u) { return; }
    ctx->pc = 0x259200u;
label_259200:
    // 0x259200: 0x8e820000
    ctx->pc = 0x259200u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_259204:
    // 0x259204: 0x2443fffb
    ctx->pc = 0x259204u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967291));
label_259208:
    // 0x259208: 0x2c620005
    ctx->pc = 0x259208u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 5));
label_25920c:
    // 0x25920c: 0x1040009b
label_259210:
    if (ctx->pc == 0x259210u) {
        ctx->pc = 0x259210u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x259214u;
        goto label_259214;
    }
    ctx->pc = 0x25920Cu;
    {
        const bool branch_taken_0x25920c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259210u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x25920c) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259214u;
label_259214:
    // 0x259214: 0x24428d10
    ctx->pc = 0x259214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937872));
label_259218:
    // 0x259218: 0x31880
    ctx->pc = 0x259218u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_25921c:
    // 0x25921c: 0x621821
    ctx->pc = 0x25921cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_259220:
    // 0x259220: 0x8c620000
    ctx->pc = 0x259220u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_259224:
    // 0x259224: 0x400008
label_259228:
    if (ctx->pc == 0x259228u) {
        ctx->pc = 0x25922Cu;
        goto label_25922c;
    }
    ctx->pc = 0x259224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x258C80u: goto label_258c80;
            case 0x258C84u: goto label_258c84;
            case 0x258C88u: goto label_258c88;
            case 0x258C8Cu: goto label_258c8c;
            case 0x258C90u: goto label_258c90;
            case 0x258C94u: goto label_258c94;
            case 0x258C98u: goto label_258c98;
            case 0x258C9Cu: goto label_258c9c;
            case 0x258CA0u: goto label_258ca0;
            case 0x258CA4u: goto label_258ca4;
            case 0x258CA8u: goto label_258ca8;
            case 0x258CACu: goto label_258cac;
            case 0x258CB0u: goto label_258cb0;
            case 0x258CB4u: goto label_258cb4;
            case 0x258CB8u: goto label_258cb8;
            case 0x258CBCu: goto label_258cbc;
            case 0x258CC0u: goto label_258cc0;
            case 0x258CC4u: goto label_258cc4;
            case 0x258CC8u: goto label_258cc8;
            case 0x258CCCu: goto label_258ccc;
            case 0x258CD0u: goto label_258cd0;
            case 0x258CD4u: goto label_258cd4;
            case 0x258CD8u: goto label_258cd8;
            case 0x258CDCu: goto label_258cdc;
            case 0x258CE0u: goto label_258ce0;
            case 0x258CE4u: goto label_258ce4;
            case 0x258CE8u: goto label_258ce8;
            case 0x258CECu: goto label_258cec;
            case 0x258CF0u: goto label_258cf0;
            case 0x258CF4u: goto label_258cf4;
            case 0x258CF8u: goto label_258cf8;
            case 0x258CFCu: goto label_258cfc;
            case 0x258D00u: goto label_258d00;
            case 0x258D04u: goto label_258d04;
            case 0x258D08u: goto label_258d08;
            case 0x258D0Cu: goto label_258d0c;
            case 0x258D10u: goto label_258d10;
            case 0x258D14u: goto label_258d14;
            case 0x258D18u: goto label_258d18;
            case 0x258D1Cu: goto label_258d1c;
            case 0x258D20u: goto label_258d20;
            case 0x258D24u: goto label_258d24;
            case 0x258D28u: goto label_258d28;
            case 0x258D2Cu: goto label_258d2c;
            case 0x258D30u: goto label_258d30;
            case 0x258D34u: goto label_258d34;
            case 0x258D38u: goto label_258d38;
            case 0x258D3Cu: goto label_258d3c;
            case 0x258D40u: goto label_258d40;
            case 0x258D44u: goto label_258d44;
            case 0x258D48u: goto label_258d48;
            case 0x258D4Cu: goto label_258d4c;
            case 0x258D50u: goto label_258d50;
            case 0x258D54u: goto label_258d54;
            case 0x258D58u: goto label_258d58;
            case 0x258D5Cu: goto label_258d5c;
            case 0x258D60u: goto label_258d60;
            case 0x258D64u: goto label_258d64;
            case 0x258D68u: goto label_258d68;
            case 0x258D6Cu: goto label_258d6c;
            case 0x258D70u: goto label_258d70;
            case 0x258D74u: goto label_258d74;
            case 0x258D78u: goto label_258d78;
            case 0x258D7Cu: goto label_258d7c;
            case 0x258D80u: goto label_258d80;
            case 0x258D84u: goto label_258d84;
            case 0x258D88u: goto label_258d88;
            case 0x258D8Cu: goto label_258d8c;
            case 0x258D90u: goto label_258d90;
            case 0x258D94u: goto label_258d94;
            case 0x258D98u: goto label_258d98;
            case 0x258D9Cu: goto label_258d9c;
            case 0x258DA0u: goto label_258da0;
            case 0x258DA4u: goto label_258da4;
            case 0x258DA8u: goto label_258da8;
            case 0x258DACu: goto label_258dac;
            case 0x258DB0u: goto label_258db0;
            case 0x258DB4u: goto label_258db4;
            case 0x258DB8u: goto label_258db8;
            case 0x258DBCu: goto label_258dbc;
            case 0x258DC0u: goto label_258dc0;
            case 0x258DC4u: goto label_258dc4;
            case 0x258DC8u: goto label_258dc8;
            case 0x258DCCu: goto label_258dcc;
            case 0x258DD0u: goto label_258dd0;
            case 0x258DD4u: goto label_258dd4;
            case 0x258DD8u: goto label_258dd8;
            case 0x258DDCu: goto label_258ddc;
            case 0x258DE0u: goto label_258de0;
            case 0x258DE4u: goto label_258de4;
            case 0x258DE8u: goto label_258de8;
            case 0x258DECu: goto label_258dec;
            case 0x258DF0u: goto label_258df0;
            case 0x258DF4u: goto label_258df4;
            case 0x258DF8u: goto label_258df8;
            case 0x258DFCu: goto label_258dfc;
            case 0x258E00u: goto label_258e00;
            case 0x258E04u: goto label_258e04;
            case 0x258E08u: goto label_258e08;
            case 0x258E0Cu: goto label_258e0c;
            case 0x258E10u: goto label_258e10;
            case 0x258E14u: goto label_258e14;
            case 0x258E18u: goto label_258e18;
            case 0x258E1Cu: goto label_258e1c;
            case 0x258E20u: goto label_258e20;
            case 0x258E24u: goto label_258e24;
            case 0x258E28u: goto label_258e28;
            case 0x258E2Cu: goto label_258e2c;
            case 0x258E30u: goto label_258e30;
            case 0x258E34u: goto label_258e34;
            case 0x258E38u: goto label_258e38;
            case 0x258E3Cu: goto label_258e3c;
            case 0x258E40u: goto label_258e40;
            case 0x258E44u: goto label_258e44;
            case 0x258E48u: goto label_258e48;
            case 0x258E4Cu: goto label_258e4c;
            case 0x258E50u: goto label_258e50;
            case 0x258E54u: goto label_258e54;
            case 0x258E58u: goto label_258e58;
            case 0x258E5Cu: goto label_258e5c;
            case 0x258E60u: goto label_258e60;
            case 0x258E64u: goto label_258e64;
            case 0x258E68u: goto label_258e68;
            case 0x258E6Cu: goto label_258e6c;
            case 0x258E70u: goto label_258e70;
            case 0x258E74u: goto label_258e74;
            case 0x258E78u: goto label_258e78;
            case 0x258E7Cu: goto label_258e7c;
            case 0x258E80u: goto label_258e80;
            case 0x258E84u: goto label_258e84;
            case 0x258E88u: goto label_258e88;
            case 0x258E8Cu: goto label_258e8c;
            case 0x258E90u: goto label_258e90;
            case 0x258E94u: goto label_258e94;
            case 0x258E98u: goto label_258e98;
            case 0x258E9Cu: goto label_258e9c;
            case 0x258EA0u: goto label_258ea0;
            case 0x258EA4u: goto label_258ea4;
            case 0x258EA8u: goto label_258ea8;
            case 0x258EACu: goto label_258eac;
            case 0x258EB0u: goto label_258eb0;
            case 0x258EB4u: goto label_258eb4;
            case 0x258EB8u: goto label_258eb8;
            case 0x258EBCu: goto label_258ebc;
            case 0x258EC0u: goto label_258ec0;
            case 0x258EC4u: goto label_258ec4;
            case 0x258EC8u: goto label_258ec8;
            case 0x258ECCu: goto label_258ecc;
            case 0x258ED0u: goto label_258ed0;
            case 0x258ED4u: goto label_258ed4;
            case 0x258ED8u: goto label_258ed8;
            case 0x258EDCu: goto label_258edc;
            case 0x258EE0u: goto label_258ee0;
            case 0x258EE4u: goto label_258ee4;
            case 0x258EE8u: goto label_258ee8;
            case 0x258EECu: goto label_258eec;
            case 0x258EF0u: goto label_258ef0;
            case 0x258EF4u: goto label_258ef4;
            case 0x258EF8u: goto label_258ef8;
            case 0x258EFCu: goto label_258efc;
            case 0x258F00u: goto label_258f00;
            case 0x258F04u: goto label_258f04;
            case 0x258F08u: goto label_258f08;
            case 0x258F0Cu: goto label_258f0c;
            case 0x258F10u: goto label_258f10;
            case 0x258F14u: goto label_258f14;
            case 0x258F18u: goto label_258f18;
            case 0x258F1Cu: goto label_258f1c;
            case 0x258F20u: goto label_258f20;
            case 0x258F24u: goto label_258f24;
            case 0x258F28u: goto label_258f28;
            case 0x258F2Cu: goto label_258f2c;
            case 0x258F30u: goto label_258f30;
            case 0x258F34u: goto label_258f34;
            case 0x258F38u: goto label_258f38;
            case 0x258F3Cu: goto label_258f3c;
            case 0x258F40u: goto label_258f40;
            case 0x258F44u: goto label_258f44;
            case 0x258F48u: goto label_258f48;
            case 0x258F4Cu: goto label_258f4c;
            case 0x258F50u: goto label_258f50;
            case 0x258F54u: goto label_258f54;
            case 0x258F58u: goto label_258f58;
            case 0x258F5Cu: goto label_258f5c;
            case 0x258F60u: goto label_258f60;
            case 0x258F64u: goto label_258f64;
            case 0x258F68u: goto label_258f68;
            case 0x258F6Cu: goto label_258f6c;
            case 0x258F70u: goto label_258f70;
            case 0x258F74u: goto label_258f74;
            case 0x258F78u: goto label_258f78;
            case 0x258F7Cu: goto label_258f7c;
            case 0x258F80u: goto label_258f80;
            case 0x258F84u: goto label_258f84;
            case 0x258F88u: goto label_258f88;
            case 0x258F8Cu: goto label_258f8c;
            case 0x258F90u: goto label_258f90;
            case 0x258F94u: goto label_258f94;
            case 0x258F98u: goto label_258f98;
            case 0x258F9Cu: goto label_258f9c;
            case 0x258FA0u: goto label_258fa0;
            case 0x258FA4u: goto label_258fa4;
            case 0x258FA8u: goto label_258fa8;
            case 0x258FACu: goto label_258fac;
            case 0x258FB0u: goto label_258fb0;
            case 0x258FB4u: goto label_258fb4;
            case 0x258FB8u: goto label_258fb8;
            case 0x258FBCu: goto label_258fbc;
            case 0x258FC0u: goto label_258fc0;
            case 0x258FC4u: goto label_258fc4;
            case 0x258FC8u: goto label_258fc8;
            case 0x258FCCu: goto label_258fcc;
            case 0x258FD0u: goto label_258fd0;
            case 0x258FD4u: goto label_258fd4;
            case 0x258FD8u: goto label_258fd8;
            case 0x258FDCu: goto label_258fdc;
            case 0x258FE0u: goto label_258fe0;
            case 0x258FE4u: goto label_258fe4;
            case 0x258FE8u: goto label_258fe8;
            case 0x258FECu: goto label_258fec;
            case 0x258FF0u: goto label_258ff0;
            case 0x258FF4u: goto label_258ff4;
            case 0x258FF8u: goto label_258ff8;
            case 0x258FFCu: goto label_258ffc;
            case 0x259000u: goto label_259000;
            case 0x259004u: goto label_259004;
            case 0x259008u: goto label_259008;
            case 0x25900Cu: goto label_25900c;
            case 0x259010u: goto label_259010;
            case 0x259014u: goto label_259014;
            case 0x259018u: goto label_259018;
            case 0x25901Cu: goto label_25901c;
            case 0x259020u: goto label_259020;
            case 0x259024u: goto label_259024;
            case 0x259028u: goto label_259028;
            case 0x25902Cu: goto label_25902c;
            case 0x259030u: goto label_259030;
            case 0x259034u: goto label_259034;
            case 0x259038u: goto label_259038;
            case 0x25903Cu: goto label_25903c;
            case 0x259040u: goto label_259040;
            case 0x259044u: goto label_259044;
            case 0x259048u: goto label_259048;
            case 0x25904Cu: goto label_25904c;
            case 0x259050u: goto label_259050;
            case 0x259054u: goto label_259054;
            case 0x259058u: goto label_259058;
            case 0x25905Cu: goto label_25905c;
            case 0x259060u: goto label_259060;
            case 0x259064u: goto label_259064;
            case 0x259068u: goto label_259068;
            case 0x25906Cu: goto label_25906c;
            case 0x259070u: goto label_259070;
            case 0x259074u: goto label_259074;
            case 0x259078u: goto label_259078;
            case 0x25907Cu: goto label_25907c;
            case 0x259080u: goto label_259080;
            case 0x259084u: goto label_259084;
            case 0x259088u: goto label_259088;
            case 0x25908Cu: goto label_25908c;
            case 0x259090u: goto label_259090;
            case 0x259094u: goto label_259094;
            case 0x259098u: goto label_259098;
            case 0x25909Cu: goto label_25909c;
            case 0x2590A0u: goto label_2590a0;
            case 0x2590A4u: goto label_2590a4;
            case 0x2590A8u: goto label_2590a8;
            case 0x2590ACu: goto label_2590ac;
            case 0x2590B0u: goto label_2590b0;
            case 0x2590B4u: goto label_2590b4;
            case 0x2590B8u: goto label_2590b8;
            case 0x2590BCu: goto label_2590bc;
            case 0x2590C0u: goto label_2590c0;
            case 0x2590C4u: goto label_2590c4;
            case 0x2590C8u: goto label_2590c8;
            case 0x2590CCu: goto label_2590cc;
            case 0x2590D0u: goto label_2590d0;
            case 0x2590D4u: goto label_2590d4;
            case 0x2590D8u: goto label_2590d8;
            case 0x2590DCu: goto label_2590dc;
            case 0x2590E0u: goto label_2590e0;
            case 0x2590E4u: goto label_2590e4;
            case 0x2590E8u: goto label_2590e8;
            case 0x2590ECu: goto label_2590ec;
            case 0x2590F0u: goto label_2590f0;
            case 0x2590F4u: goto label_2590f4;
            case 0x2590F8u: goto label_2590f8;
            case 0x2590FCu: goto label_2590fc;
            case 0x259100u: goto label_259100;
            case 0x259104u: goto label_259104;
            case 0x259108u: goto label_259108;
            case 0x25910Cu: goto label_25910c;
            case 0x259110u: goto label_259110;
            case 0x259114u: goto label_259114;
            case 0x259118u: goto label_259118;
            case 0x25911Cu: goto label_25911c;
            case 0x259120u: goto label_259120;
            case 0x259124u: goto label_259124;
            case 0x259128u: goto label_259128;
            case 0x25912Cu: goto label_25912c;
            case 0x259130u: goto label_259130;
            case 0x259134u: goto label_259134;
            case 0x259138u: goto label_259138;
            case 0x25913Cu: goto label_25913c;
            case 0x259140u: goto label_259140;
            case 0x259144u: goto label_259144;
            case 0x259148u: goto label_259148;
            case 0x25914Cu: goto label_25914c;
            case 0x259150u: goto label_259150;
            case 0x259154u: goto label_259154;
            case 0x259158u: goto label_259158;
            case 0x25915Cu: goto label_25915c;
            case 0x259160u: goto label_259160;
            case 0x259164u: goto label_259164;
            case 0x259168u: goto label_259168;
            case 0x25916Cu: goto label_25916c;
            case 0x259170u: goto label_259170;
            case 0x259174u: goto label_259174;
            case 0x259178u: goto label_259178;
            case 0x25917Cu: goto label_25917c;
            case 0x259180u: goto label_259180;
            case 0x259184u: goto label_259184;
            case 0x259188u: goto label_259188;
            case 0x25918Cu: goto label_25918c;
            case 0x259190u: goto label_259190;
            case 0x259194u: goto label_259194;
            case 0x259198u: goto label_259198;
            case 0x25919Cu: goto label_25919c;
            case 0x2591A0u: goto label_2591a0;
            case 0x2591A4u: goto label_2591a4;
            case 0x2591A8u: goto label_2591a8;
            case 0x2591ACu: goto label_2591ac;
            case 0x2591B0u: goto label_2591b0;
            case 0x2591B4u: goto label_2591b4;
            case 0x2591B8u: goto label_2591b8;
            case 0x2591BCu: goto label_2591bc;
            case 0x2591C0u: goto label_2591c0;
            case 0x2591C4u: goto label_2591c4;
            case 0x2591C8u: goto label_2591c8;
            case 0x2591CCu: goto label_2591cc;
            case 0x2591D0u: goto label_2591d0;
            case 0x2591D4u: goto label_2591d4;
            case 0x2591D8u: goto label_2591d8;
            case 0x2591DCu: goto label_2591dc;
            case 0x2591E0u: goto label_2591e0;
            case 0x2591E4u: goto label_2591e4;
            case 0x2591E8u: goto label_2591e8;
            case 0x2591ECu: goto label_2591ec;
            case 0x2591F0u: goto label_2591f0;
            case 0x2591F4u: goto label_2591f4;
            case 0x2591F8u: goto label_2591f8;
            case 0x2591FCu: goto label_2591fc;
            case 0x259200u: goto label_259200;
            case 0x259204u: goto label_259204;
            case 0x259208u: goto label_259208;
            case 0x25920Cu: goto label_25920c;
            case 0x259210u: goto label_259210;
            case 0x259214u: goto label_259214;
            case 0x259218u: goto label_259218;
            case 0x25921Cu: goto label_25921c;
            case 0x259220u: goto label_259220;
            case 0x259224u: goto label_259224;
            case 0x259228u: goto label_259228;
            case 0x25922Cu: goto label_25922c;
            case 0x259230u: goto label_259230;
            case 0x259234u: goto label_259234;
            case 0x259238u: goto label_259238;
            case 0x25923Cu: goto label_25923c;
            case 0x259240u: goto label_259240;
            case 0x259244u: goto label_259244;
            case 0x259248u: goto label_259248;
            case 0x25924Cu: goto label_25924c;
            case 0x259250u: goto label_259250;
            case 0x259254u: goto label_259254;
            case 0x259258u: goto label_259258;
            case 0x25925Cu: goto label_25925c;
            case 0x259260u: goto label_259260;
            case 0x259264u: goto label_259264;
            case 0x259268u: goto label_259268;
            case 0x25926Cu: goto label_25926c;
            case 0x259270u: goto label_259270;
            case 0x259274u: goto label_259274;
            case 0x259278u: goto label_259278;
            case 0x25927Cu: goto label_25927c;
            case 0x259280u: goto label_259280;
            case 0x259284u: goto label_259284;
            case 0x259288u: goto label_259288;
            case 0x25928Cu: goto label_25928c;
            case 0x259290u: goto label_259290;
            case 0x259294u: goto label_259294;
            case 0x259298u: goto label_259298;
            case 0x25929Cu: goto label_25929c;
            case 0x2592A0u: goto label_2592a0;
            case 0x2592A4u: goto label_2592a4;
            case 0x2592A8u: goto label_2592a8;
            case 0x2592ACu: goto label_2592ac;
            case 0x2592B0u: goto label_2592b0;
            case 0x2592B4u: goto label_2592b4;
            case 0x2592B8u: goto label_2592b8;
            case 0x2592BCu: goto label_2592bc;
            case 0x2592C0u: goto label_2592c0;
            case 0x2592C4u: goto label_2592c4;
            case 0x2592C8u: goto label_2592c8;
            case 0x2592CCu: goto label_2592cc;
            case 0x2592D0u: goto label_2592d0;
            case 0x2592D4u: goto label_2592d4;
            case 0x2592D8u: goto label_2592d8;
            case 0x2592DCu: goto label_2592dc;
            case 0x2592E0u: goto label_2592e0;
            case 0x2592E4u: goto label_2592e4;
            case 0x2592E8u: goto label_2592e8;
            case 0x2592ECu: goto label_2592ec;
            case 0x2592F0u: goto label_2592f0;
            case 0x2592F4u: goto label_2592f4;
            case 0x2592F8u: goto label_2592f8;
            case 0x2592FCu: goto label_2592fc;
            case 0x259300u: goto label_259300;
            case 0x259304u: goto label_259304;
            case 0x259308u: goto label_259308;
            case 0x25930Cu: goto label_25930c;
            case 0x259310u: goto label_259310;
            case 0x259314u: goto label_259314;
            case 0x259318u: goto label_259318;
            case 0x25931Cu: goto label_25931c;
            case 0x259320u: goto label_259320;
            case 0x259324u: goto label_259324;
            case 0x259328u: goto label_259328;
            case 0x25932Cu: goto label_25932c;
            case 0x259330u: goto label_259330;
            case 0x259334u: goto label_259334;
            case 0x259338u: goto label_259338;
            case 0x25933Cu: goto label_25933c;
            case 0x259340u: goto label_259340;
            case 0x259344u: goto label_259344;
            case 0x259348u: goto label_259348;
            case 0x25934Cu: goto label_25934c;
            case 0x259350u: goto label_259350;
            case 0x259354u: goto label_259354;
            case 0x259358u: goto label_259358;
            case 0x25935Cu: goto label_25935c;
            case 0x259360u: goto label_259360;
            case 0x259364u: goto label_259364;
            case 0x259368u: goto label_259368;
            case 0x25936Cu: goto label_25936c;
            case 0x259370u: goto label_259370;
            case 0x259374u: goto label_259374;
            case 0x259378u: goto label_259378;
            case 0x25937Cu: goto label_25937c;
            case 0x259380u: goto label_259380;
            case 0x259384u: goto label_259384;
            case 0x259388u: goto label_259388;
            case 0x25938Cu: goto label_25938c;
            case 0x259390u: goto label_259390;
            case 0x259394u: goto label_259394;
            case 0x259398u: goto label_259398;
            case 0x25939Cu: goto label_25939c;
            case 0x2593A0u: goto label_2593a0;
            case 0x2593A4u: goto label_2593a4;
            case 0x2593A8u: goto label_2593a8;
            case 0x2593ACu: goto label_2593ac;
            case 0x2593B0u: goto label_2593b0;
            case 0x2593B4u: goto label_2593b4;
            case 0x2593B8u: goto label_2593b8;
            case 0x2593BCu: goto label_2593bc;
            case 0x2593C0u: goto label_2593c0;
            case 0x2593C4u: goto label_2593c4;
            case 0x2593C8u: goto label_2593c8;
            case 0x2593CCu: goto label_2593cc;
            case 0x2593D0u: goto label_2593d0;
            case 0x2593D4u: goto label_2593d4;
            case 0x2593D8u: goto label_2593d8;
            case 0x2593DCu: goto label_2593dc;
            case 0x2593E0u: goto label_2593e0;
            case 0x2593E4u: goto label_2593e4;
            case 0x2593E8u: goto label_2593e8;
            case 0x2593ECu: goto label_2593ec;
            case 0x2593F0u: goto label_2593f0;
            case 0x2593F4u: goto label_2593f4;
            case 0x2593F8u: goto label_2593f8;
            case 0x2593FCu: goto label_2593fc;
            case 0x259400u: goto label_259400;
            case 0x259404u: goto label_259404;
            case 0x259408u: goto label_259408;
            case 0x25940Cu: goto label_25940c;
            case 0x259410u: goto label_259410;
            case 0x259414u: goto label_259414;
            case 0x259418u: goto label_259418;
            case 0x25941Cu: goto label_25941c;
            case 0x259420u: goto label_259420;
            case 0x259424u: goto label_259424;
            case 0x259428u: goto label_259428;
            case 0x25942Cu: goto label_25942c;
            case 0x259430u: goto label_259430;
            case 0x259434u: goto label_259434;
            case 0x259438u: goto label_259438;
            case 0x25943Cu: goto label_25943c;
            case 0x259440u: goto label_259440;
            case 0x259444u: goto label_259444;
            case 0x259448u: goto label_259448;
            case 0x25944Cu: goto label_25944c;
            case 0x259450u: goto label_259450;
            case 0x259454u: goto label_259454;
            case 0x259458u: goto label_259458;
            case 0x25945Cu: goto label_25945c;
            case 0x259460u: goto label_259460;
            case 0x259464u: goto label_259464;
            case 0x259468u: goto label_259468;
            case 0x25946Cu: goto label_25946c;
            case 0x259470u: goto label_259470;
            case 0x259474u: goto label_259474;
            case 0x259478u: goto label_259478;
            case 0x25947Cu: goto label_25947c;
            case 0x259480u: goto label_259480;
            case 0x259484u: goto label_259484;
            case 0x259488u: goto label_259488;
            case 0x25948Cu: goto label_25948c;
            case 0x259490u: goto label_259490;
            case 0x259494u: goto label_259494;
            case 0x259498u: goto label_259498;
            case 0x25949Cu: goto label_25949c;
            case 0x2594A0u: goto label_2594a0;
            case 0x2594A4u: goto label_2594a4;
            case 0x2594A8u: goto label_2594a8;
            case 0x2594ACu: goto label_2594ac;
            case 0x2594B0u: goto label_2594b0;
            case 0x2594B4u: goto label_2594b4;
            case 0x2594B8u: goto label_2594b8;
            case 0x2594BCu: goto label_2594bc;
            case 0x2594C0u: goto label_2594c0;
            case 0x2594C4u: goto label_2594c4;
            case 0x2594C8u: goto label_2594c8;
            case 0x2594CCu: goto label_2594cc;
            case 0x2594D0u: goto label_2594d0;
            case 0x2594D4u: goto label_2594d4;
            case 0x2594D8u: goto label_2594d8;
            case 0x2594DCu: goto label_2594dc;
            case 0x2594E0u: goto label_2594e0;
            case 0x2594E4u: goto label_2594e4;
            case 0x2594E8u: goto label_2594e8;
            case 0x2594ECu: goto label_2594ec;
            case 0x2594F0u: goto label_2594f0;
            case 0x2594F4u: goto label_2594f4;
            case 0x2594F8u: goto label_2594f8;
            case 0x2594FCu: goto label_2594fc;
            case 0x259500u: goto label_259500;
            case 0x259504u: goto label_259504;
            case 0x259508u: goto label_259508;
            case 0x25950Cu: goto label_25950c;
            case 0x259510u: goto label_259510;
            case 0x259514u: goto label_259514;
            case 0x259518u: goto label_259518;
            case 0x25951Cu: goto label_25951c;
            case 0x259520u: goto label_259520;
            case 0x259524u: goto label_259524;
            case 0x259528u: goto label_259528;
            case 0x25952Cu: goto label_25952c;
            case 0x259530u: goto label_259530;
            case 0x259534u: goto label_259534;
            case 0x259538u: goto label_259538;
            case 0x25953Cu: goto label_25953c;
            case 0x259540u: goto label_259540;
            case 0x259544u: goto label_259544;
            case 0x259548u: goto label_259548;
            case 0x25954Cu: goto label_25954c;
            case 0x259550u: goto label_259550;
            case 0x259554u: goto label_259554;
            case 0x259558u: goto label_259558;
            case 0x25955Cu: goto label_25955c;
            case 0x259560u: goto label_259560;
            case 0x259564u: goto label_259564;
            case 0x259568u: goto label_259568;
            case 0x25956Cu: goto label_25956c;
            case 0x259570u: goto label_259570;
            case 0x259574u: goto label_259574;
            case 0x259578u: goto label_259578;
            case 0x25957Cu: goto label_25957c;
            case 0x259580u: goto label_259580;
            case 0x259584u: goto label_259584;
            case 0x259588u: goto label_259588;
            case 0x25958Cu: goto label_25958c;
            case 0x259590u: goto label_259590;
            case 0x259594u: goto label_259594;
            case 0x259598u: goto label_259598;
            case 0x25959Cu: goto label_25959c;
            case 0x2595A0u: goto label_2595a0;
            case 0x2595A4u: goto label_2595a4;
            case 0x2595A8u: goto label_2595a8;
            case 0x2595ACu: goto label_2595ac;
            case 0x2595B0u: goto label_2595b0;
            case 0x2595B4u: goto label_2595b4;
            case 0x2595B8u: goto label_2595b8;
            case 0x2595BCu: goto label_2595bc;
            case 0x2595C0u: goto label_2595c0;
            case 0x2595C4u: goto label_2595c4;
            case 0x2595C8u: goto label_2595c8;
            case 0x2595CCu: goto label_2595cc;
            case 0x2595D0u: goto label_2595d0;
            case 0x2595D4u: goto label_2595d4;
            case 0x2595D8u: goto label_2595d8;
            case 0x2595DCu: goto label_2595dc;
            case 0x2595E0u: goto label_2595e0;
            case 0x2595E4u: goto label_2595e4;
            case 0x2595E8u: goto label_2595e8;
            case 0x2595ECu: goto label_2595ec;
            case 0x2595F0u: goto label_2595f0;
            case 0x2595F4u: goto label_2595f4;
            case 0x2595F8u: goto label_2595f8;
            case 0x2595FCu: goto label_2595fc;
            case 0x259600u: goto label_259600;
            case 0x259604u: goto label_259604;
            case 0x259608u: goto label_259608;
            case 0x25960Cu: goto label_25960c;
            case 0x259610u: goto label_259610;
            case 0x259614u: goto label_259614;
            case 0x259618u: goto label_259618;
            case 0x25961Cu: goto label_25961c;
            case 0x259620u: goto label_259620;
            case 0x259624u: goto label_259624;
            case 0x259628u: goto label_259628;
            case 0x25962Cu: goto label_25962c;
            case 0x259630u: goto label_259630;
            case 0x259634u: goto label_259634;
            case 0x259638u: goto label_259638;
            case 0x25963Cu: goto label_25963c;
            case 0x259640u: goto label_259640;
            case 0x259644u: goto label_259644;
            case 0x259648u: goto label_259648;
            case 0x25964Cu: goto label_25964c;
            case 0x259650u: goto label_259650;
            case 0x259654u: goto label_259654;
            case 0x259658u: goto label_259658;
            case 0x25965Cu: goto label_25965c;
            case 0x259660u: goto label_259660;
            case 0x259664u: goto label_259664;
            case 0x259668u: goto label_259668;
            case 0x25966Cu: goto label_25966c;
            case 0x259670u: goto label_259670;
            case 0x259674u: goto label_259674;
            case 0x259678u: goto label_259678;
            case 0x25967Cu: goto label_25967c;
            case 0x259680u: goto label_259680;
            case 0x259684u: goto label_259684;
            case 0x259688u: goto label_259688;
            case 0x25968Cu: goto label_25968c;
            case 0x259690u: goto label_259690;
            case 0x259694u: goto label_259694;
            case 0x259698u: goto label_259698;
            case 0x25969Cu: goto label_25969c;
            case 0x2596A0u: goto label_2596a0;
            case 0x2596A4u: goto label_2596a4;
            case 0x2596A8u: goto label_2596a8;
            case 0x2596ACu: goto label_2596ac;
            case 0x2596B0u: goto label_2596b0;
            case 0x2596B4u: goto label_2596b4;
            case 0x2596B8u: goto label_2596b8;
            case 0x2596BCu: goto label_2596bc;
            case 0x2596C0u: goto label_2596c0;
            case 0x2596C4u: goto label_2596c4;
            case 0x2596C8u: goto label_2596c8;
            case 0x2596CCu: goto label_2596cc;
            case 0x2596D0u: goto label_2596d0;
            case 0x2596D4u: goto label_2596d4;
            case 0x2596D8u: goto label_2596d8;
            case 0x2596DCu: goto label_2596dc;
            case 0x2596E0u: goto label_2596e0;
            case 0x2596E4u: goto label_2596e4;
            case 0x2596E8u: goto label_2596e8;
            case 0x2596ECu: goto label_2596ec;
            case 0x2596F0u: goto label_2596f0;
            case 0x2596F4u: goto label_2596f4;
            case 0x2596F8u: goto label_2596f8;
            case 0x2596FCu: goto label_2596fc;
            case 0x259700u: goto label_259700;
            case 0x259704u: goto label_259704;
            case 0x259708u: goto label_259708;
            case 0x25970Cu: goto label_25970c;
            case 0x259710u: goto label_259710;
            case 0x259714u: goto label_259714;
            case 0x259718u: goto label_259718;
            case 0x25971Cu: goto label_25971c;
            case 0x259720u: goto label_259720;
            case 0x259724u: goto label_259724;
            case 0x259728u: goto label_259728;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25922Cu;
label_25922c:
    // 0x25922c: 0x3c020008
    ctx->pc = 0x25922cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
label_259230:
    // 0x259230: 0x2021024
    ctx->pc = 0x259230u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_259234:
    // 0x259234: 0x10400003
label_259238:
    if (ctx->pc == 0x259238u) {
        ctx->pc = 0x259238u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 15));
        ctx->pc = 0x25923Cu;
        goto label_25923c;
    }
    ctx->pc = 0x259234u;
    {
        const bool branch_taken_0x259234 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259238u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 15));
        if (branch_taken_0x259234) {
            ctx->pc = 0x259244u;
            goto label_259244;
        }
    }
    ctx->pc = 0x25923Cu;
label_25923c:
    // 0x25923c: 0x1000008f
label_259240:
    if (ctx->pc == 0x259240u) {
        ctx->pc = 0x259240u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x259244u;
        goto label_259244;
    }
    ctx->pc = 0x25923Cu;
    {
        const bool branch_taken_0x25923c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259240u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 37));
        if (branch_taken_0x25923c) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259244u;
label_259244:
    // 0x259244: 0x3c020040
    ctx->pc = 0x259244u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
label_259248:
    // 0x259248: 0x2021024
    ctx->pc = 0x259248u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_25924c:
    // 0x25924c: 0x10400003
label_259250:
    if (ctx->pc == 0x259250u) {
        ctx->pc = 0x259250u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
        ctx->pc = 0x259254u;
        goto label_259254;
    }
    ctx->pc = 0x25924Cu;
    {
        const bool branch_taken_0x25924c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259250u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
        if (branch_taken_0x25924c) {
            ctx->pc = 0x25925Cu;
            goto label_25925c;
        }
    }
    ctx->pc = 0x259254u;
label_259254:
    // 0x259254: 0x10000089
label_259258:
    if (ctx->pc == 0x259258u) {
        ctx->pc = 0x259258u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x25925Cu;
        goto label_25925c;
    }
    ctx->pc = 0x259254u;
    {
        const bool branch_taken_0x259254 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259258u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 47));
        if (branch_taken_0x259254) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x25925Cu;
label_25925c:
    // 0x25925c: 0x2021024
    ctx->pc = 0x25925cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_259260:
    // 0x259260: 0x10400003
label_259264:
    if (ctx->pc == 0x259264u) {
        ctx->pc = 0x259264u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
        ctx->pc = 0x259268u;
        goto label_259268;
    }
    ctx->pc = 0x259260u;
    {
        const bool branch_taken_0x259260 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259264u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
        if (branch_taken_0x259260) {
            ctx->pc = 0x259270u;
            goto label_259270;
        }
    }
    ctx->pc = 0x259268u;
label_259268:
    // 0x259268: 0x10000084
label_25926c:
    if (ctx->pc == 0x25926Cu) {
        ctx->pc = 0x25926Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 38));
        ctx->pc = 0x259270u;
        goto label_259270;
    }
    ctx->pc = 0x259268u;
    {
        const bool branch_taken_0x259268 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25926Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 38));
        if (branch_taken_0x259268) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259270u;
label_259270:
    // 0x259270: 0x2021024
    ctx->pc = 0x259270u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_259274:
    // 0x259274: 0x10400003
label_259278:
    if (ctx->pc == 0x259278u) {
        ctx->pc = 0x259278u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        ctx->pc = 0x25927Cu;
        goto label_25927c;
    }
    ctx->pc = 0x259274u;
    {
        const bool branch_taken_0x259274 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259278u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x259274) {
            ctx->pc = 0x259284u;
            goto label_259284;
        }
    }
    ctx->pc = 0x25927Cu;
label_25927c:
    // 0x25927c: 0x1000007f
label_259280:
    if (ctx->pc == 0x259280u) {
        ctx->pc = 0x259280u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x259284u;
        goto label_259284;
    }
    ctx->pc = 0x25927Cu;
    {
        const bool branch_taken_0x25927c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259280u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x25927c) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259284u;
label_259284:
    // 0x259284: 0x2021024
    ctx->pc = 0x259284u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_259288:
    // 0x259288: 0x10400003
label_25928c:
    if (ctx->pc == 0x25928Cu) {
        ctx->pc = 0x25928Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
        ctx->pc = 0x259290u;
        goto label_259290;
    }
    ctx->pc = 0x259288u;
    {
        const bool branch_taken_0x259288 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25928Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
        if (branch_taken_0x259288) {
            ctx->pc = 0x259298u;
            goto label_259298;
        }
    }
    ctx->pc = 0x259290u;
label_259290:
    // 0x259290: 0x1000007a
label_259294:
    if (ctx->pc == 0x259294u) {
        ctx->pc = 0x259294u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 86));
        ctx->pc = 0x259298u;
        goto label_259298;
    }
    ctx->pc = 0x259290u;
    {
        const bool branch_taken_0x259290 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259294u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 86));
        if (branch_taken_0x259290) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259298u;
label_259298:
    // 0x259298: 0x2021024
    ctx->pc = 0x259298u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_25929c:
    // 0x25929c: 0x10400003
label_2592a0:
    if (ctx->pc == 0x2592A0u) {
        ctx->pc = 0x2592A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2592A4u;
        goto label_2592a4;
    }
    ctx->pc = 0x25929Cu;
    {
        const bool branch_taken_0x25929c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2592A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25929c) {
            ctx->pc = 0x2592ACu;
            goto label_2592ac;
        }
    }
    ctx->pc = 0x2592A4u;
label_2592a4:
    // 0x2592a4: 0x10000075
label_2592a8:
    if (ctx->pc == 0x2592A8u) {
        ctx->pc = 0x2592A8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 87));
        ctx->pc = 0x2592ACu;
        goto label_2592ac;
    }
    ctx->pc = 0x2592A4u;
    {
        const bool branch_taken_0x2592a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2592A8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 87));
        if (branch_taken_0x2592a4) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x2592ACu;
label_2592ac:
    // 0x2592ac: 0x14820003
label_2592b0:
    if (ctx->pc == 0x2592B0u) {
        ctx->pc = 0x2592B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2592B4u;
        goto label_2592b4;
    }
    ctx->pc = 0x2592ACu;
    {
        const bool branch_taken_0x2592ac = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2592B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2592ac) {
            ctx->pc = 0x2592BCu;
            goto label_2592bc;
        }
    }
    ctx->pc = 0x2592B4u;
label_2592b4:
    // 0x2592b4: 0x10000071
label_2592b8:
    if (ctx->pc == 0x2592B8u) {
        ctx->pc = 0x2592B8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x2592BCu;
        goto label_2592bc;
    }
    ctx->pc = 0x2592B4u;
    {
        const bool branch_taken_0x2592b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2592B8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 40));
        if (branch_taken_0x2592b4) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x2592BCu;
label_2592bc:
    // 0x2592bc: 0x14820003
label_2592c0:
    if (ctx->pc == 0x2592C0u) {
        ctx->pc = 0x2592C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2592C4u;
        goto label_2592c4;
    }
    ctx->pc = 0x2592BCu;
    {
        const bool branch_taken_0x2592bc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2592C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2592bc) {
            ctx->pc = 0x2592CCu;
            goto label_2592cc;
        }
    }
    ctx->pc = 0x2592C4u;
label_2592c4:
    // 0x2592c4: 0x1000006d
label_2592c8:
    if (ctx->pc == 0x2592C8u) {
        ctx->pc = 0x2592C8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 41));
        ctx->pc = 0x2592CCu;
        goto label_2592cc;
    }
    ctx->pc = 0x2592C4u;
    {
        const bool branch_taken_0x2592c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2592C8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 41));
        if (branch_taken_0x2592c4) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x2592CCu;
label_2592cc:
    // 0x2592cc: 0x14820003
label_2592d0:
    if (ctx->pc == 0x2592D0u) {
        ctx->pc = 0x2592D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 43));
        ctx->pc = 0x2592D4u;
        goto label_2592d4;
    }
    ctx->pc = 0x2592CCu;
    {
        const bool branch_taken_0x2592cc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2592D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 43));
        if (branch_taken_0x2592cc) {
            ctx->pc = 0x2592DCu;
            goto label_2592dc;
        }
    }
    ctx->pc = 0x2592D4u;
label_2592d4:
    // 0x2592d4: 0x10000069
label_2592d8:
    if (ctx->pc == 0x2592D8u) {
        ctx->pc = 0x2592D8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 42));
        ctx->pc = 0x2592DCu;
        goto label_2592dc;
    }
    ctx->pc = 0x2592D4u;
    {
        const bool branch_taken_0x2592d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2592D8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 42));
        if (branch_taken_0x2592d4) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x2592DCu;
label_2592dc:
    // 0x2592dc: 0x38820004
    ctx->pc = 0x2592dcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 4));
label_2592e0:
    // 0x2592e0: 0x10000066
label_2592e4:
    if (ctx->pc == 0x2592E4u) {
        ctx->pc = 0x2592E4u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
        ctx->pc = 0x2592E8u;
        goto label_2592e8;
    }
    ctx->pc = 0x2592E0u;
    {
        const bool branch_taken_0x2592e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2592E4u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
        if (branch_taken_0x2592e0) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x2592E8u;
label_2592e8:
    // 0x2592e8: 0x3c020010
    ctx->pc = 0x2592e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
label_2592ec:
    // 0x2592ec: 0x2021024
    ctx->pc = 0x2592ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2592f0:
    // 0x2592f0: 0x10400003
label_2592f4:
    if (ctx->pc == 0x2592F4u) {
        ctx->pc = 0x2592F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
        ctx->pc = 0x2592F8u;
        goto label_2592f8;
    }
    ctx->pc = 0x2592F0u;
    {
        const bool branch_taken_0x2592f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2592F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
        if (branch_taken_0x2592f0) {
            ctx->pc = 0x259300u;
            goto label_259300;
        }
    }
    ctx->pc = 0x2592F8u;
label_2592f8:
    // 0x2592f8: 0x10000060
label_2592fc:
    if (ctx->pc == 0x2592FCu) {
        ctx->pc = 0x2592FCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 54));
        ctx->pc = 0x259300u;
        goto label_259300;
    }
    ctx->pc = 0x2592F8u;
    {
        const bool branch_taken_0x2592f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2592FCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 54));
        if (branch_taken_0x2592f8) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259300u;
label_259300:
    // 0x259300: 0x2021024
    ctx->pc = 0x259300u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_259304:
    // 0x259304: 0x10400003
label_259308:
    if (ctx->pc == 0x259308u) {
        ctx->pc = 0x259308u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
        ctx->pc = 0x25930Cu;
        goto label_25930c;
    }
    ctx->pc = 0x259304u;
    {
        const bool branch_taken_0x259304 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259308u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
        if (branch_taken_0x259304) {
            ctx->pc = 0x259314u;
            goto label_259314;
        }
    }
    ctx->pc = 0x25930Cu;
label_25930c:
    // 0x25930c: 0x1000005b
label_259310:
    if (ctx->pc == 0x259310u) {
        ctx->pc = 0x259310u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 35));
        ctx->pc = 0x259314u;
        goto label_259314;
    }
    ctx->pc = 0x25930Cu;
    {
        const bool branch_taken_0x25930c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259310u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 35));
        if (branch_taken_0x25930c) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259314u;
label_259314:
    // 0x259314: 0x2021024
    ctx->pc = 0x259314u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_259318:
    // 0x259318: 0x10400003
label_25931c:
    if (ctx->pc == 0x25931Cu) {
        ctx->pc = 0x25931Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        ctx->pc = 0x259320u;
        goto label_259320;
    }
    ctx->pc = 0x259318u;
    {
        const bool branch_taken_0x259318 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25931Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        if (branch_taken_0x259318) {
            ctx->pc = 0x259328u;
            goto label_259328;
        }
    }
    ctx->pc = 0x259320u;
label_259320:
    // 0x259320: 0x10000056
label_259324:
    if (ctx->pc == 0x259324u) {
        ctx->pc = 0x259324u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 49));
        ctx->pc = 0x259328u;
        goto label_259328;
    }
    ctx->pc = 0x259320u;
    {
        const bool branch_taken_0x259320 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259324u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 49));
        if (branch_taken_0x259320) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259328u;
label_259328:
    // 0x259328: 0x2021024
    ctx->pc = 0x259328u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_25932c:
    // 0x25932c: 0x10400003
label_259330:
    if (ctx->pc == 0x259330u) {
        ctx->pc = 0x259330u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
        ctx->pc = 0x259334u;
        goto label_259334;
    }
    ctx->pc = 0x25932Cu;
    {
        const bool branch_taken_0x25932c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259330u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
        if (branch_taken_0x25932c) {
            ctx->pc = 0x25933Cu;
            goto label_25933c;
        }
    }
    ctx->pc = 0x259334u;
label_259334:
    // 0x259334: 0x10000051
label_259338:
    if (ctx->pc == 0x259338u) {
        ctx->pc = 0x259338u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 52));
        ctx->pc = 0x25933Cu;
        goto label_25933c;
    }
    ctx->pc = 0x259334u;
    {
        const bool branch_taken_0x259334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259338u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 52));
        if (branch_taken_0x259334) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x25933Cu;
label_25933c:
    // 0x25933c: 0x2021024
    ctx->pc = 0x25933cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_259340:
    // 0x259340: 0x10400003
label_259344:
    if (ctx->pc == 0x259344u) {
        ctx->pc = 0x259344u;
        SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
        ctx->pc = 0x259348u;
        goto label_259348;
    }
    ctx->pc = 0x259340u;
    {
        const bool branch_taken_0x259340 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259344u;
        SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
        if (branch_taken_0x259340) {
            ctx->pc = 0x259350u;
            goto label_259350;
        }
    }
    ctx->pc = 0x259348u;
label_259348:
    // 0x259348: 0x1000004c
label_25934c:
    if (ctx->pc == 0x25934Cu) {
        ctx->pc = 0x25934Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 91));
        ctx->pc = 0x259350u;
        goto label_259350;
    }
    ctx->pc = 0x259348u;
    {
        const bool branch_taken_0x259348 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25934Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 91));
        if (branch_taken_0x259348) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259350u;
label_259350:
    // 0x259350: 0x2021024
    ctx->pc = 0x259350u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_259354:
    // 0x259354: 0x10400003
label_259358:
    if (ctx->pc == 0x259358u) {
        ctx->pc = 0x259358u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 8192));
        ctx->pc = 0x25935Cu;
        goto label_25935c;
    }
    ctx->pc = 0x259354u;
    {
        const bool branch_taken_0x259354 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259358u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 8192));
        if (branch_taken_0x259354) {
            ctx->pc = 0x259364u;
            goto label_259364;
        }
    }
    ctx->pc = 0x25935Cu;
label_25935c:
    // 0x25935c: 0x10000047
label_259360:
    if (ctx->pc == 0x259360u) {
        ctx->pc = 0x259360u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 92));
        ctx->pc = 0x259364u;
        goto label_259364;
    }
    ctx->pc = 0x25935Cu;
    {
        const bool branch_taken_0x25935c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259360u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 92));
        if (branch_taken_0x25935c) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259364u;
label_259364:
    // 0x259364: 0x24020084
    ctx->pc = 0x259364u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 132));
label_259368:
    // 0x259368: 0x10000044
label_25936c:
    if (ctx->pc == 0x25936Cu) {
        ctx->pc = 0x25936Cu;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 2));
        ctx->pc = 0x259370u;
        goto label_259370;
    }
    ctx->pc = 0x259368u;
    {
        const bool branch_taken_0x259368 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25936Cu;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 2));
        if (branch_taken_0x259368) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259370u;
label_259370:
    // 0x259370: 0x10000042
label_259374:
    if (ctx->pc == 0x259374u) {
        ctx->pc = 0x259374u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x259378u;
        goto label_259378;
    }
    ctx->pc = 0x259370u;
    {
        const bool branch_taken_0x259370 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259374u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x259370) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259378u;
label_259378:
    // 0x259378: 0x10000040
label_25937c:
    if (ctx->pc == 0x25937Cu) {
        ctx->pc = 0x25937Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x259380u;
        goto label_259380;
    }
    ctx->pc = 0x259378u;
    {
        const bool branch_taken_0x259378 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25937Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 33));
        if (branch_taken_0x259378) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259380u;
label_259380:
    // 0x259380: 0x32020004
    ctx->pc = 0x259380u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 4));
label_259384:
    // 0x259384: 0x10400003
label_259388:
    if (ctx->pc == 0x259388u) {
        ctx->pc = 0x259388u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x25938Cu;
        goto label_25938c;
    }
    ctx->pc = 0x259384u;
    {
        const bool branch_taken_0x259384 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259388u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x259384) {
            ctx->pc = 0x259394u;
            goto label_259394;
        }
    }
    ctx->pc = 0x25938Cu;
label_25938c:
    // 0x25938c: 0x1000003b
label_259390:
    if (ctx->pc == 0x259390u) {
        ctx->pc = 0x259390u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x259394u;
        goto label_259394;
    }
    ctx->pc = 0x25938Cu;
    {
        const bool branch_taken_0x25938c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259390u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 36));
        if (branch_taken_0x25938c) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259394u;
label_259394:
    // 0x259394: 0x10400003
label_259398:
    if (ctx->pc == 0x259398u) {
        ctx->pc = 0x259398u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x25939Cu;
        goto label_25939c;
    }
    ctx->pc = 0x259394u;
    {
        const bool branch_taken_0x259394 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259398u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x259394) {
            ctx->pc = 0x2593A4u;
            goto label_2593a4;
        }
    }
    ctx->pc = 0x25939Cu;
label_25939c:
    // 0x25939c: 0x10000037
label_2593a0:
    if (ctx->pc == 0x2593A0u) {
        ctx->pc = 0x2593A0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x2593A4u;
        goto label_2593a4;
    }
    ctx->pc = 0x25939Cu;
    {
        const bool branch_taken_0x25939c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2593A0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 39));
        if (branch_taken_0x25939c) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x2593A4u;
label_2593a4:
    // 0x2593a4: 0x10400003
label_2593a8:
    if (ctx->pc == 0x2593A8u) {
        ctx->pc = 0x2593A8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x2593ACu;
        goto label_2593ac;
    }
    ctx->pc = 0x2593A4u;
    {
        const bool branch_taken_0x2593a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2593A8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x2593a4) {
            ctx->pc = 0x2593B4u;
            goto label_2593b4;
        }
    }
    ctx->pc = 0x2593ACu;
label_2593ac:
    // 0x2593ac: 0x10000033
label_2593b0:
    if (ctx->pc == 0x2593B0u) {
        ctx->pc = 0x2593B0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 51));
        ctx->pc = 0x2593B4u;
        goto label_2593b4;
    }
    ctx->pc = 0x2593ACu;
    {
        const bool branch_taken_0x2593ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2593B0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 51));
        if (branch_taken_0x2593ac) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x2593B4u;
label_2593b4:
    // 0x2593b4: 0x10400003
label_2593b8:
    if (ctx->pc == 0x2593B8u) {
        ctx->pc = 0x2593B8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2593BCu;
        goto label_2593bc;
    }
    ctx->pc = 0x2593B4u;
    {
        const bool branch_taken_0x2593b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2593B8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x2593b4) {
            ctx->pc = 0x2593C4u;
            goto label_2593c4;
        }
    }
    ctx->pc = 0x2593BCu;
label_2593bc:
    // 0x2593bc: 0x1000002f
label_2593c0:
    if (ctx->pc == 0x2593C0u) {
        ctx->pc = 0x2593C0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 53));
        ctx->pc = 0x2593C4u;
        goto label_2593c4;
    }
    ctx->pc = 0x2593BCu;
    {
        const bool branch_taken_0x2593bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2593C0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 53));
        if (branch_taken_0x2593bc) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x2593C4u;
label_2593c4:
    // 0x2593c4: 0x10400003
label_2593c8:
    if (ctx->pc == 0x2593C8u) {
        ctx->pc = 0x2593C8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2593CCu;
        goto label_2593cc;
    }
    ctx->pc = 0x2593C4u;
    {
        const bool branch_taken_0x2593c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2593C8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 32));
        if (branch_taken_0x2593c4) {
            ctx->pc = 0x2593D4u;
            goto label_2593d4;
        }
    }
    ctx->pc = 0x2593CCu;
label_2593cc:
    // 0x2593cc: 0x1000002b
label_2593d0:
    if (ctx->pc == 0x2593D0u) {
        ctx->pc = 0x2593D0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 81));
        ctx->pc = 0x2593D4u;
        goto label_2593d4;
    }
    ctx->pc = 0x2593CCu;
    {
        const bool branch_taken_0x2593cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2593D0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 81));
        if (branch_taken_0x2593cc) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x2593D4u;
label_2593d4:
    // 0x2593d4: 0x10400003
label_2593d8:
    if (ctx->pc == 0x2593D8u) {
        ctx->pc = 0x2593D8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x2593DCu;
        goto label_2593dc;
    }
    ctx->pc = 0x2593D4u;
    {
        const bool branch_taken_0x2593d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2593D8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 64));
        if (branch_taken_0x2593d4) {
            ctx->pc = 0x2593E4u;
            goto label_2593e4;
        }
    }
    ctx->pc = 0x2593DCu;
label_2593dc:
    // 0x2593dc: 0x10000027
label_2593e0:
    if (ctx->pc == 0x2593E0u) {
        ctx->pc = 0x2593E0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 82));
        ctx->pc = 0x2593E4u;
        goto label_2593e4;
    }
    ctx->pc = 0x2593DCu;
    {
        const bool branch_taken_0x2593dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2593E0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 82));
        if (branch_taken_0x2593dc) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x2593E4u;
label_2593e4:
    // 0x2593e4: 0x10400003
label_2593e8:
    if (ctx->pc == 0x2593E8u) {
        ctx->pc = 0x2593E8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x2593ECu;
        goto label_2593ec;
    }
    ctx->pc = 0x2593E4u;
    {
        const bool branch_taken_0x2593e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2593E8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 128));
        if (branch_taken_0x2593e4) {
            ctx->pc = 0x2593F4u;
            goto label_2593f4;
        }
    }
    ctx->pc = 0x2593ECu;
label_2593ec:
    // 0x2593ec: 0x10000023
label_2593f0:
    if (ctx->pc == 0x2593F0u) {
        ctx->pc = 0x2593F0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 83));
        ctx->pc = 0x2593F4u;
        goto label_2593f4;
    }
    ctx->pc = 0x2593ECu;
    {
        const bool branch_taken_0x2593ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2593F0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 83));
        if (branch_taken_0x2593ec) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x2593F4u;
label_2593f4:
    // 0x2593f4: 0x10400003
label_2593f8:
    if (ctx->pc == 0x2593F8u) {
        ctx->pc = 0x2593F8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 256));
        ctx->pc = 0x2593FCu;
        goto label_2593fc;
    }
    ctx->pc = 0x2593F4u;
    {
        const bool branch_taken_0x2593f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2593F8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 256));
        if (branch_taken_0x2593f4) {
            ctx->pc = 0x259404u;
            goto label_259404;
        }
    }
    ctx->pc = 0x2593FCu;
label_2593fc:
    // 0x2593fc: 0x1000001f
label_259400:
    if (ctx->pc == 0x259400u) {
        ctx->pc = 0x259400u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 84));
        ctx->pc = 0x259404u;
        goto label_259404;
    }
    ctx->pc = 0x2593FCu;
    {
        const bool branch_taken_0x2593fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259400u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 84));
        if (branch_taken_0x2593fc) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259404u;
label_259404:
    // 0x259404: 0x10400003
label_259408:
    if (ctx->pc == 0x259408u) {
        ctx->pc = 0x259408u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 512));
        ctx->pc = 0x25940Cu;
        goto label_25940c;
    }
    ctx->pc = 0x259404u;
    {
        const bool branch_taken_0x259404 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259408u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 512));
        if (branch_taken_0x259404) {
            ctx->pc = 0x259414u;
            goto label_259414;
        }
    }
    ctx->pc = 0x25940Cu;
label_25940c:
    // 0x25940c: 0x1000001b
label_259410:
    if (ctx->pc == 0x259410u) {
        ctx->pc = 0x259410u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x259414u;
        goto label_259414;
    }
    ctx->pc = 0x25940Cu;
    {
        const bool branch_taken_0x25940c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259410u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 88));
        if (branch_taken_0x25940c) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259414u;
label_259414:
    // 0x259414: 0x10400003
label_259418:
    if (ctx->pc == 0x259418u) {
        ctx->pc = 0x259418u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1024));
        ctx->pc = 0x25941Cu;
        goto label_25941c;
    }
    ctx->pc = 0x259414u;
    {
        const bool branch_taken_0x259414 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259418u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1024));
        if (branch_taken_0x259414) {
            ctx->pc = 0x259424u;
            goto label_259424;
        }
    }
    ctx->pc = 0x25941Cu;
label_25941c:
    // 0x25941c: 0x10000017
label_259420:
    if (ctx->pc == 0x259420u) {
        ctx->pc = 0x259420u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 89));
        ctx->pc = 0x259424u;
        goto label_259424;
    }
    ctx->pc = 0x25941Cu;
    {
        const bool branch_taken_0x25941c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259420u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 89));
        if (branch_taken_0x25941c) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259424u;
label_259424:
    // 0x259424: 0x10400003
label_259428:
    if (ctx->pc == 0x259428u) {
        ctx->pc = 0x259428u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 8192));
        ctx->pc = 0x25942Cu;
        goto label_25942c;
    }
    ctx->pc = 0x259424u;
    {
        const bool branch_taken_0x259424 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259428u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 8192));
        if (branch_taken_0x259424) {
            ctx->pc = 0x259434u;
            goto label_259434;
        }
    }
    ctx->pc = 0x25942Cu;
label_25942c:
    // 0x25942c: 0x10000013
label_259430:
    if (ctx->pc == 0x259430u) {
        ctx->pc = 0x259430u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 93));
        ctx->pc = 0x259434u;
        goto label_259434;
    }
    ctx->pc = 0x25942Cu;
    {
        const bool branch_taken_0x25942c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259430u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 93));
        if (branch_taken_0x25942c) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259434u;
label_259434:
    // 0x259434: 0x10400003
label_259438:
    if (ctx->pc == 0x259438u) {
        ctx->pc = 0x259438u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 4096));
        ctx->pc = 0x25943Cu;
        goto label_25943c;
    }
    ctx->pc = 0x259434u;
    {
        const bool branch_taken_0x259434 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259438u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 4096));
        if (branch_taken_0x259434) {
            ctx->pc = 0x259444u;
            goto label_259444;
        }
    }
    ctx->pc = 0x25943Cu;
label_25943c:
    // 0x25943c: 0x1000000f
label_259440:
    if (ctx->pc == 0x259440u) {
        ctx->pc = 0x259440u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 98));
        ctx->pc = 0x259444u;
        goto label_259444;
    }
    ctx->pc = 0x25943Cu;
    {
        const bool branch_taken_0x25943c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259440u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 98));
        if (branch_taken_0x25943c) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259444u;
label_259444:
    // 0x259444: 0x10400003
label_259448:
    if (ctx->pc == 0x259448u) {
        ctx->pc = 0x259448u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 32768));
        ctx->pc = 0x25944Cu;
        goto label_25944c;
    }
    ctx->pc = 0x259444u;
    {
        const bool branch_taken_0x259444 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259448u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 32768));
        if (branch_taken_0x259444) {
            ctx->pc = 0x259454u;
            goto label_259454;
        }
    }
    ctx->pc = 0x25944Cu;
label_25944c:
    // 0x25944c: 0x1000000b
label_259450:
    if (ctx->pc == 0x259450u) {
        ctx->pc = 0x259450u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 99));
        ctx->pc = 0x259454u;
        goto label_259454;
    }
    ctx->pc = 0x25944Cu;
    {
        const bool branch_taken_0x25944c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259450u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 99));
        if (branch_taken_0x25944c) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259454u;
label_259454:
    // 0x259454: 0x54400009
label_259458:
    if (ctx->pc == 0x259458u) {
        ctx->pc = 0x259458u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x25945Cu;
        goto label_25945c;
    }
    ctx->pc = 0x259454u;
    {
        const bool branch_taken_0x259454 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x259454) {
            ctx->pc = 0x259458u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 100));
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x25945Cu;
label_25945c:
    // 0x25945c: 0x32024000
    ctx->pc = 0x25945cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 16384));
label_259460:
    // 0x259460: 0x10400003
label_259464:
    if (ctx->pc == 0x259464u) {
        ctx->pc = 0x259464u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
        ctx->pc = 0x259468u;
        goto label_259468;
    }
    ctx->pc = 0x259460u;
    {
        const bool branch_taken_0x259460 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259464u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
        if (branch_taken_0x259460) {
            ctx->pc = 0x259470u;
            goto label_259470;
        }
    }
    ctx->pc = 0x259468u;
label_259468:
    // 0x259468: 0x10000004
label_25946c:
    if (ctx->pc == 0x25946Cu) {
        ctx->pc = 0x25946Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x259470u;
        goto label_259470;
    }
    ctx->pc = 0x259468u;
    {
        const bool branch_taken_0x259468 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25946Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 100));
        if (branch_taken_0x259468) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259470u;
label_259470:
    // 0x259470: 0x2021024
    ctx->pc = 0x259470u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_259474:
    // 0x259474: 0x24030071
    ctx->pc = 0x259474u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 113));
label_259478:
    // 0x259478: 0x62900b
    ctx->pc = 0x259478u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
label_25947c:
    // 0x25947c: 0x6400004
label_259480:
    if (ctx->pc == 0x259480u) {
        ctx->pc = 0x259480u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259484u;
        goto label_259484;
    }
    ctx->pc = 0x25947Cu;
    {
        const bool branch_taken_0x25947c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x259480u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25947c) {
            ctx->pc = 0x259490u;
            goto label_259490;
        }
    }
    ctx->pc = 0x259484u;
label_259484:
    // 0x259484: 0x8e250000
    ctx->pc = 0x259484u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259488:
    // 0x259488: 0xc0a3a1c
label_25948c:
    if (ctx->pc == 0x25948Cu) {
        ctx->pc = 0x25948Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x259490u;
        goto label_259490;
    }
    ctx->pc = 0x259488u;
    SET_GPR_U32(ctx, 31, 0x259490u);
    ctx->pc = 0x25948Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259490u; }
    }
    if (ctx->pc != 0x259490u) { return; }
    ctx->pc = 0x259490u;
label_259490:
    // 0x259490: 0x8e240000
    ctx->pc = 0x259490u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259494:
    // 0x259494: 0x8e850000
    ctx->pc = 0x259494u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_259498:
    // 0x259498: 0xc098284
label_25949c:
    if (ctx->pc == 0x25949Cu) {
        ctx->pc = 0x25949Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2594A0u;
        goto label_2594a0;
    }
    ctx->pc = 0x259498u;
    SET_GPR_U32(ctx, 31, 0x2594A0u);
    ctx->pc = 0x25949Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x260A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPickupSpecial_0x260a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2594A0u; }
    }
    if (ctx->pc != 0x2594A0u) { return; }
    ctx->pc = 0x2594A0u;
label_2594a0:
    // 0x2594a0: 0x8e240000
    ctx->pc = 0x2594a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2594a4:
    // 0x2594a4: 0x8e850000
    ctx->pc = 0x2594a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2594a8:
    // 0x2594a8: 0x302d
    ctx->pc = 0x2594a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2594ac:
    // 0x2594ac: 0xc08ac74
label_2594b0:
    if (ctx->pc == 0x2594B0u) {
        ctx->pc = 0x2594B0u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2594B4u;
        goto label_2594b4;
    }
    ctx->pc = 0x2594ACu;
    SET_GPR_U32(ctx, 31, 0x2594B4u);
    ctx->pc = 0x2594B0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x22B1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_got_it_0x22b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2594B4u; }
    }
    if (ctx->pc != 0x2594B4u) { return; }
    ctx->pc = 0x2594B4u;
label_2594b4:
    // 0x2594b4: 0x24020001
    ctx->pc = 0x2594b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2594b8:
    // 0x2594b8: 0xa6220934
    ctx->pc = 0x2594b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2356), (uint16_t)GPR_U32(ctx, 2));
label_2594bc:
    // 0x2594bc: 0x1000007a
label_2594c0:
    if (ctx->pc == 0x2594C0u) {
        ctx->pc = 0x2594C0u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
        ctx->pc = 0x2594C4u;
        goto label_2594c4;
    }
    ctx->pc = 0x2594BCu;
    {
        const bool branch_taken_0x2594bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2594C0u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
        if (branch_taken_0x2594bc) {
            ctx->pc = 0x2596A8u;
            goto label_2596a8;
        }
    }
    ctx->pc = 0x2594C4u;
label_2594c4:
    // 0x2594c4: 0x8e620000
    ctx->pc = 0x2594c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2594c8:
    // 0x2594c8: 0x8e240000
    ctx->pc = 0x2594c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2594cc:
    // 0x2594cc: 0xc09d9fe
label_2594d0:
    if (ctx->pc == 0x2594D0u) {
        ctx->pc = 0x2594D0u;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->pc = 0x2594D4u;
        goto label_2594d4;
    }
    ctx->pc = 0x2594CCu;
    SET_GPR_U32(ctx, 31, 0x2594D4u);
    ctx->pc = 0x2594D0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->pc = 0x2767F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasRune_0x2767f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2594D4u; }
    }
    if (ctx->pc != 0x2594D4u) { return; }
    ctx->pc = 0x2594D4u;
label_2594d4:
    // 0x2594d4: 0x10400006
label_2594d8:
    if (ctx->pc == 0x2594D8u) {
        ctx->pc = 0x2594D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 90));
        ctx->pc = 0x2594DCu;
        goto label_2594dc;
    }
    ctx->pc = 0x2594D4u;
    {
        const bool branch_taken_0x2594d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2594D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 90));
        if (branch_taken_0x2594d4) {
            ctx->pc = 0x2594F0u;
            goto label_2594f0;
        }
    }
    ctx->pc = 0x2594DCu;
label_2594dc:
    // 0x2594dc: 0x8e250000
    ctx->pc = 0x2594dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2594e0:
    // 0x2594e0: 0xc0a3a1c
label_2594e4:
    if (ctx->pc == 0x2594E4u) {
        ctx->pc = 0x2594E4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x2594E8u;
        goto label_2594e8;
    }
    ctx->pc = 0x2594E0u;
    SET_GPR_U32(ctx, 31, 0x2594E8u);
    ctx->pc = 0x2594E4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2594E8u; }
    }
    if (ctx->pc != 0x2594E8u) { return; }
    ctx->pc = 0x2594E8u;
label_2594e8:
    // 0x2594e8: 0x1000006e
label_2594ec:
    if (ctx->pc == 0x2594ECu) {
        ctx->pc = 0x2594ECu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2594F0u;
        goto label_2594f0;
    }
    ctx->pc = 0x2594E8u;
    {
        const bool branch_taken_0x2594e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2594ECu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2594e8) {
            ctx->pc = 0x2596A4u;
            goto label_2596a4;
        }
    }
    ctx->pc = 0x2594F0u;
label_2594f0:
    // 0x2594f0: 0x802d
    ctx->pc = 0x2594f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2594f4:
    // 0x2594f4: 0x8e620000
    ctx->pc = 0x2594f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2594f8:
    // 0x2594f8: 0x200202d
    ctx->pc = 0x2594f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2594fc:
    // 0x2594fc: 0xc09da28
label_259500:
    if (ctx->pc == 0x259500u) {
        ctx->pc = 0x259500u;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->pc = 0x259504u;
        goto label_259504;
    }
    ctx->pc = 0x2594FCu;
    SET_GPR_U32(ctx, 31, 0x259504u);
    ctx->pc = 0x259500u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->pc = 0x2768A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerGiveRune_0x2768a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259504u; }
    }
    if (ctx->pc != 0x259504u) { return; }
    ctx->pc = 0x259504u;
label_259504:
    // 0x259504: 0x26100001
    ctx->pc = 0x259504u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_259508:
    // 0x259508: 0x2a020004
    ctx->pc = 0x259508u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
label_25950c:
    // 0x25950c: 0x5440fffa
label_259510:
    if (ctx->pc == 0x259510u) {
        ctx->pc = 0x259510u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x259514u;
        goto label_259514;
    }
    ctx->pc = 0x25950Cu;
    {
        const bool branch_taken_0x25950c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25950c) {
            ctx->pc = 0x259510u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->pc = 0x2594F8u;
            goto label_2594f8;
        }
    }
    ctx->pc = 0x259514u;
label_259514:
    // 0x259514: 0xc0982b2
label_259518:
    if (ctx->pc == 0x259518u) {
        ctx->pc = 0x259518u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x25951Cu;
        goto label_25951c;
    }
    ctx->pc = 0x259514u;
    SET_GPR_U32(ctx, 31, 0x25951Cu);
    ctx->pc = 0x259518u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x260AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPickupRune_0x260ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25951Cu; }
    }
    if (ctx->pc != 0x25951Cu) { return; }
    ctx->pc = 0x25951Cu;
label_25951c:
    // 0x25951c: 0x8e240000
    ctx->pc = 0x25951cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259520:
    // 0x259520: 0x8e850000
    ctx->pc = 0x259520u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_259524:
    // 0x259524: 0xc08ac74
label_259528:
    if (ctx->pc == 0x259528u) {
        ctx->pc = 0x259528u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->pc = 0x25952Cu;
        goto label_25952c;
    }
    ctx->pc = 0x259524u;
    SET_GPR_U32(ctx, 31, 0x25952Cu);
    ctx->pc = 0x259528u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 244)));
    ctx->pc = 0x22B1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_got_it_0x22b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25952Cu; }
    }
    if (ctx->pc != 0x25952Cu) { return; }
    ctx->pc = 0x25952Cu;
label_25952c:
    // 0x25952c: 0x3c030033
    ctx->pc = 0x25952cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
label_259530:
    // 0x259530: 0x2402012c
    ctx->pc = 0x259530u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 300));
label_259534:
    // 0x259534: 0xac62cb6c
    ctx->pc = 0x259534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953836), GPR_U32(ctx, 2));
label_259538:
    // 0x259538: 0x26640040
    ctx->pc = 0x259538u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 64));
label_25953c:
    // 0x25953c: 0xc09fcda
label_259540:
    if (ctx->pc == 0x259540u) {
        ctx->pc = 0x259540u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1024));
        ctx->pc = 0x259544u;
        goto label_259544;
    }
    ctx->pc = 0x25953Cu;
    SET_GPR_U32(ctx, 31, 0x259544u);
    ctx->pc = 0x259540u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x27F368u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartGemFX_0x27f368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259544u; }
    }
    if (ctx->pc != 0x259544u) { return; }
    ctx->pc = 0x259544u;
label_259544:
    // 0x259544: 0x3c020034
    ctx->pc = 0x259544u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_259548:
    // 0x259548: 0xac40d1cc
    ctx->pc = 0x259548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955468), GPR_U32(ctx, 0));
label_25954c:
    // 0x25954c: 0x202d
    ctx->pc = 0x25954cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259550:
    // 0x259550: 0x302d
    ctx->pc = 0x259550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259554:
    // 0x259554: 0x282d
    ctx->pc = 0x259554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259558:
    // 0x259558: 0x24072b00
    ctx->pc = 0x259558u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 11008));
label_25955c:
    // 0x25955c: 0x3c020032
    ctx->pc = 0x25955cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_259560:
    // 0x259560: 0x24481bc0
    ctx->pc = 0x259560u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 7104));
label_259564:
    // 0x259564: 0xa71018
    ctx->pc = 0x259564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_259568:
    // 0x259568: 0x481821
    ctx->pc = 0x259568u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_25956c:
    // 0x25956c: 0x8c6200fc
    ctx->pc = 0x25956cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_259570:
    // 0x259570: 0x10400003
label_259574:
    if (ctx->pc == 0x259574u) {
        ctx->pc = 0x259574u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x259578u;
        goto label_259578;
    }
    ctx->pc = 0x259570u;
    {
        const bool branch_taken_0x259570 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259574u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x259570) {
            ctx->pc = 0x259580u;
            goto label_259580;
        }
    }
    ctx->pc = 0x259578u;
label_259578:
    // 0x259578: 0x94621a26
    ctx->pc = 0x259578u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6694)));
label_25957c:
    // 0x25957c: 0xc23025
    ctx->pc = 0x25957cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_259580:
    // 0x259580: 0x28a20004
    ctx->pc = 0x259580u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
label_259584:
    // 0x259584: 0x1440fff8
label_259588:
    if (ctx->pc == 0x259588u) {
        ctx->pc = 0x259588u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x25958Cu;
        goto label_25958c;
    }
    ctx->pc = 0x259584u;
    {
        const bool branch_taken_0x259584 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x259588u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x259584) {
            ctx->pc = 0x259568u;
            goto label_259568;
        }
    }
    ctx->pc = 0x25958Cu;
label_25958c:
    // 0x25958c: 0x282d
    ctx->pc = 0x25958cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259590:
    // 0x259590: 0x24070001
    ctx->pc = 0x259590u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_259594:
    // 0x259594: 0x0
    ctx->pc = 0x259594u;
    // NOP
label_259598:
    // 0x259598: 0xa71004
    ctx->pc = 0x259598u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_25959c:
    // 0x25959c: 0xc21024
    ctx->pc = 0x25959cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2595a0:
    // 0x2595a0: 0x24830001
    ctx->pc = 0x2595a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
label_2595a4:
    // 0x2595a4: 0x62200b
    ctx->pc = 0x2595a4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
label_2595a8:
    // 0x2595a8: 0x24a50001
    ctx->pc = 0x2595a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_2595ac:
    // 0x2595ac: 0x28a2000d
    ctx->pc = 0x2595acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 13));
label_2595b0:
    // 0x2595b0: 0x1440fff9
label_2595b4:
    if (ctx->pc == 0x2595B4u) {
        ctx->pc = 0x2595B8u;
        goto label_2595b8;
    }
    ctx->pc = 0x2595B0u;
    {
        const bool branch_taken_0x2595b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2595b0) {
            ctx->pc = 0x259598u;
            goto label_259598;
        }
    }
    ctx->pc = 0x2595B8u;
label_2595b8:
    // 0x2595b8: 0xc09782e
label_2595bc:
    if (ctx->pc == 0x2595BCu) {
        ctx->pc = 0x2595BCu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2595C0u;
        goto label_2595c0;
    }
    ctx->pc = 0x2595B8u;
    SET_GPR_U32(ctx, 31, 0x2595C0u);
    ctx->pc = 0x2595BCu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x25E0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioNumRunesFound_0x25e0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2595C0u; }
    }
    if (ctx->pc != 0x2595C0u) { return; }
    ctx->pc = 0x2595C0u;
label_2595c0:
    // 0x2595c0: 0x10000039
label_2595c4:
    if (ctx->pc == 0x2595C4u) {
        ctx->pc = 0x2595C4u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
        ctx->pc = 0x2595C8u;
        goto label_2595c8;
    }
    ctx->pc = 0x2595C0u;
    {
        const bool branch_taken_0x2595c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2595C4u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
        if (branch_taken_0x2595c0) {
            ctx->pc = 0x2596A8u;
            goto label_2596a8;
        }
    }
    ctx->pc = 0x2595C8u;
label_2595c8:
    // 0x2595c8: 0x8e6400f4
    ctx->pc = 0x2595c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2595cc:
    // 0x2595cc: 0x24840071
    ctx->pc = 0x2595ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 113));
label_2595d0:
    // 0x2595d0: 0x8e250000
    ctx->pc = 0x2595d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2595d4:
    // 0x2595d4: 0xc0a3a1c
label_2595d8:
    if (ctx->pc == 0x2595D8u) {
        ctx->pc = 0x2595D8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x2595DCu;
        goto label_2595dc;
    }
    ctx->pc = 0x2595D4u;
    SET_GPR_U32(ctx, 31, 0x2595DCu);
    ctx->pc = 0x2595D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2595DCu; }
    }
    if (ctx->pc != 0x2595DCu) { return; }
    ctx->pc = 0x2595DCu;
label_2595dc:
    // 0x2595dc: 0x8e240000
    ctx->pc = 0x2595dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2595e0:
    // 0x2595e0: 0xc09daf8
label_2595e4:
    if (ctx->pc == 0x2595E4u) {
        ctx->pc = 0x2595E4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->pc = 0x2595E8u;
        goto label_2595e8;
    }
    ctx->pc = 0x2595E0u;
    SET_GPR_U32(ctx, 31, 0x2595E8u);
    ctx->pc = 0x2595E4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 244)));
    ctx->pc = 0x276BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerGiveLegendItem_0x276be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2595E8u; }
    }
    if (ctx->pc != 0x2595E8u) { return; }
    ctx->pc = 0x2595E8u;
label_2595e8:
    // 0x2595e8: 0xc098258
label_2595ec:
    if (ctx->pc == 0x2595ECu) {
        ctx->pc = 0x2595ECu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2595F0u;
        goto label_2595f0;
    }
    ctx->pc = 0x2595E8u;
    SET_GPR_U32(ctx, 31, 0x2595F0u);
    ctx->pc = 0x2595ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x260960u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPickup_0x260960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2595F0u; }
    }
    if (ctx->pc != 0x2595F0u) { return; }
    ctx->pc = 0x2595F0u;
label_2595f0:
    // 0x2595f0: 0x8e240000
    ctx->pc = 0x2595f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2595f4:
    // 0x2595f4: 0x8e850000
    ctx->pc = 0x2595f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2595f8:
    // 0x2595f8: 0xc08ac74
label_2595fc:
    if (ctx->pc == 0x2595FCu) {
        ctx->pc = 0x2595FCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->pc = 0x259600u;
        goto label_259600;
    }
    ctx->pc = 0x2595F8u;
    SET_GPR_U32(ctx, 31, 0x259600u);
    ctx->pc = 0x2595FCu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 244)));
    ctx->pc = 0x22B1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_got_it_0x22b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259600u; }
    }
    if (ctx->pc != 0x259600u) { return; }
    ctx->pc = 0x259600u;
label_259600:
    // 0x259600: 0x1000ffae
label_259604:
    if (ctx->pc == 0x259604u) {
        ctx->pc = 0x259604u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x259608u;
        goto label_259608;
    }
    ctx->pc = 0x259600u;
    {
        const bool branch_taken_0x259600 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259604u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x259600) {
            ctx->pc = 0x2594BCu;
            goto label_2594bc;
        }
    }
    ctx->pc = 0x259608u;
label_259608:
    // 0x259608: 0x24040001
    ctx->pc = 0x259608u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_25960c:
    // 0x25960c: 0x8e220000
    ctx->pc = 0x25960cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259610:
    // 0x259610: 0x8e6600f4
    ctx->pc = 0x259610u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_259614:
    // 0x259614: 0x442004
    ctx->pc = 0x259614u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_259618:
    // 0x259618: 0x2405ffff
    ctx->pc = 0x259618u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25961c:
    // 0x25961c: 0x24c6ffff
    ctx->pc = 0x25961cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
label_259620:
    // 0x259620: 0xc08a0b4
label_259624:
    if (ctx->pc == 0x259624u) {
        ctx->pc = 0x259624u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x259628u;
        goto label_259628;
    }
    ctx->pc = 0x259620u;
    SET_GPR_U32(ctx, 31, 0x259628u);
    ctx->pc = 0x259624u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2282D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollMessageBox_0x2282d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259628u; }
    }
    if (ctx->pc != 0x259628u) { return; }
    ctx->pc = 0x259628u;
label_259628:
    // 0x259628: 0x1000ffa4
label_25962c:
    if (ctx->pc == 0x25962Cu) {
        ctx->pc = 0x25962Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x259630u;
        goto label_259630;
    }
    ctx->pc = 0x259628u;
    {
        const bool branch_taken_0x259628 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25962Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x259628) {
            ctx->pc = 0x2594BCu;
            goto label_2594bc;
        }
    }
    ctx->pc = 0x259630u;
label_259630:
    // 0x259630: 0x8e7000f4
    ctx->pc = 0x259630u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_259634:
    // 0x259634: 0x24150001
    ctx->pc = 0x259634u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
label_259638:
    // 0x259638: 0x26640040
    ctx->pc = 0x259638u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 64));
label_25963c:
    // 0x25963c: 0xc09fcda
label_259640:
    if (ctx->pc == 0x259640u) {
        ctx->pc = 0x259640u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259644u;
        goto label_259644;
    }
    ctx->pc = 0x25963Cu;
    SET_GPR_U32(ctx, 31, 0x259644u);
    ctx->pc = 0x259640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27F368u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartGemFX_0x27f368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259644u; }
    }
    if (ctx->pc != 0x259644u) { return; }
    ctx->pc = 0x259644u;
label_259644:
    // 0x259644: 0x2404ffff
    ctx->pc = 0x259644u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_259648:
    // 0x259648: 0xc09db3a
label_25964c:
    if (ctx->pc == 0x25964Cu) {
        ctx->pc = 0x25964Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259650u;
        goto label_259650;
    }
    ctx->pc = 0x259648u;
    SET_GPR_U32(ctx, 31, 0x259650u);
    ctx->pc = 0x25964Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x276CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerGiveCrystal_0x276ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259650u; }
    }
    if (ctx->pc != 0x259650u) { return; }
    ctx->pc = 0x259650u;
label_259650:
    // 0x259650: 0xc098258
label_259654:
    if (ctx->pc == 0x259654u) {
        ctx->pc = 0x259654u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x259658u;
        goto label_259658;
    }
    ctx->pc = 0x259650u;
    SET_GPR_U32(ctx, 31, 0x259658u);
    ctx->pc = 0x259654u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x260960u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPickup_0x260960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259658u; }
    }
    if (ctx->pc != 0x259658u) { return; }
    ctx->pc = 0x259658u;
label_259658:
    // 0x259658: 0x8e240000
    ctx->pc = 0x259658u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25965c:
    // 0x25965c: 0x8e850000
    ctx->pc = 0x25965cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_259660:
    // 0x259660: 0xc08ac74
label_259664:
    if (ctx->pc == 0x259664u) {
        ctx->pc = 0x259664u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259668u;
        goto label_259668;
    }
    ctx->pc = 0x259660u;
    SET_GPR_U32(ctx, 31, 0x259668u);
    ctx->pc = 0x259664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22B1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_got_it_0x22b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259668u; }
    }
    if (ctx->pc != 0x259668u) { return; }
    ctx->pc = 0x259668u;
label_259668:
    // 0x259668: 0x1000000f
label_25966c:
    if (ctx->pc == 0x25966Cu) {
        ctx->pc = 0x25966Cu;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
        ctx->pc = 0x259670u;
        goto label_259670;
    }
    ctx->pc = 0x259668u;
    {
        const bool branch_taken_0x259668 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25966Cu;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
        if (branch_taken_0x259668) {
            ctx->pc = 0x2596A8u;
            goto label_2596a8;
        }
    }
    ctx->pc = 0x259670u;
label_259670:
    // 0x259670: 0x2404ffff
    ctx->pc = 0x259670u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_259674:
    // 0x259674: 0xc09dbec
label_259678:
    if (ctx->pc == 0x259678u) {
        ctx->pc = 0x259678u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->pc = 0x25967Cu;
        goto label_25967c;
    }
    ctx->pc = 0x259674u;
    SET_GPR_U32(ctx, 31, 0x25967Cu);
    ctx->pc = 0x259678u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 244)));
    ctx->pc = 0x276FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerGiveGargItem_0x276fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25967Cu; }
    }
    if (ctx->pc != 0x25967Cu) { return; }
    ctx->pc = 0x25967Cu;
label_25967c:
    // 0x25967c: 0xc098258
label_259680:
    if (ctx->pc == 0x259680u) {
        ctx->pc = 0x259680u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x259684u;
        goto label_259684;
    }
    ctx->pc = 0x25967Cu;
    SET_GPR_U32(ctx, 31, 0x259684u);
    ctx->pc = 0x259680u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x260960u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPickup_0x260960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259684u; }
    }
    if (ctx->pc != 0x259684u) { return; }
    ctx->pc = 0x259684u;
label_259684:
    // 0x259684: 0x8e240000
    ctx->pc = 0x259684u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259688:
    // 0x259688: 0x8e850000
    ctx->pc = 0x259688u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25968c:
    // 0x25968c: 0xc08ac74
label_259690:
    if (ctx->pc == 0x259690u) {
        ctx->pc = 0x259690u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->pc = 0x259694u;
        goto label_259694;
    }
    ctx->pc = 0x25968Cu;
    SET_GPR_U32(ctx, 31, 0x259694u);
    ctx->pc = 0x259690u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 244)));
    ctx->pc = 0x22B1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_got_it_0x22b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259694u; }
    }
    if (ctx->pc != 0x259694u) { return; }
    ctx->pc = 0x259694u;
label_259694:
    // 0x259694: 0x24150001
    ctx->pc = 0x259694u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
label_259698:
    // 0x259698: 0x26640040
    ctx->pc = 0x259698u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 64));
label_25969c:
    // 0x25969c: 0xc09fcda
label_2596a0:
    if (ctx->pc == 0x2596A0u) {
        ctx->pc = 0x2596A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x2596A4u;
        goto label_2596a4;
    }
    ctx->pc = 0x25969Cu;
    SET_GPR_U32(ctx, 31, 0x2596A4u);
    ctx->pc = 0x2596A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x27F368u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartGemFX_0x27f368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2596A4u; }
    }
    if (ctx->pc != 0x2596A4u) { return; }
    ctx->pc = 0x2596A4u;
label_2596a4:
    // 0x2596a4: 0x826200df
    ctx->pc = 0x2596a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 223)));
label_2596a8:
    // 0x2596a8: 0x2410000f
    ctx->pc = 0x2596a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 15));
label_2596ac:
    // 0x2596ac: 0x24030008
    ctx->pc = 0x2596acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
label_2596b0:
    // 0x2596b0: 0x21027
    ctx->pc = 0x2596b0u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2596b4:
    // 0x2596b4: 0x12a00013
label_2596b8:
    if (ctx->pc == 0x2596B8u) {
        ctx->pc = 0x2596B8u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        ctx->pc = 0x2596BCu;
        goto label_2596bc;
    }
    ctx->pc = 0x2596B4u;
    {
        const bool branch_taken_0x2596b4 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x2596B8u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        if (branch_taken_0x2596b4) {
            ctx->pc = 0x259704u;
            goto label_259704;
        }
    }
    ctx->pc = 0x2596BCu;
label_2596bc:
    // 0x2596bc: 0x260202d
    ctx->pc = 0x2596bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2596c0:
    // 0x2596c0: 0xc094dfa
label_2596c4:
    if (ctx->pc == 0x2596C4u) {
        ctx->pc = 0x2596C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2596C8u;
        goto label_2596c8;
    }
    ctx->pc = 0x2596C0u;
    SET_GPR_U32(ctx, 31, 0x2596C8u);
    ctx->pc = 0x2596C4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2537E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExpireItem_0x2537e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2596C8u; }
    }
    if (ctx->pc != 0x2596C8u) { return; }
    ctx->pc = 0x2596C8u;
label_2596c8:
    // 0x2596c8: 0x8e6200fc
    ctx->pc = 0x2596c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_2596cc:
    // 0x2596cc: 0x1040000d
label_2596d0:
    if (ctx->pc == 0x2596D0u) {
        ctx->pc = 0x2596D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x2596D4u;
        goto label_2596d4;
    }
    ctx->pc = 0x2596CCu;
    {
        const bool branch_taken_0x2596cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2596D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2596cc) {
            ctx->pc = 0x259704u;
            goto label_259704;
        }
    }
    ctx->pc = 0x2596D4u;
label_2596d4:
    // 0x2596d4: 0x8e640070
    ctx->pc = 0x2596d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2596d8:
    // 0x2596d8: 0x8c830074
    ctx->pc = 0x2596d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_2596dc:
    // 0x2596dc: 0x8c45cd9c
    ctx->pc = 0x2596dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294954396)));
label_2596e0:
    // 0x2596e0: 0x50650006
label_2596e4:
    if (ctx->pc == 0x2596E4u) {
        ctx->pc = 0x2596E4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 252)));
        ctx->pc = 0x2596E8u;
        goto label_2596e8;
    }
    ctx->pc = 0x2596E0u;
    {
        const bool branch_taken_0x2596e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        if (branch_taken_0x2596e0) {
            ctx->pc = 0x2596E4u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 252)));
            ctx->pc = 0x2596FCu;
            goto label_2596fc;
        }
    }
    ctx->pc = 0x2596E8u;
label_2596e8:
    // 0x2596e8: 0xc0b3f94
label_2596ec:
    if (ctx->pc == 0x2596ECu) {
        ctx->pc = 0x2596F0u;
        goto label_2596f0;
    }
    ctx->pc = 0x2596E8u;
    SET_GPR_U32(ctx, 31, 0x2596F0u);
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2596F0u; }
    }
    if (ctx->pc != 0x2596F0u) { return; }
    ctx->pc = 0x2596F0u;
label_2596f0:
    // 0x2596f0: 0xc080ce2
label_2596f4:
    if (ctx->pc == 0x2596F4u) {
        ctx->pc = 0x2596F4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x2596F8u;
        goto label_2596f8;
    }
    ctx->pc = 0x2596F0u;
    SET_GPR_U32(ctx, 31, 0x2596F8u);
    ctx->pc = 0x2596F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 16));
    ctx->pc = 0x203388u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjWorldMat_0x203388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2596F8u; }
    }
    if (ctx->pc != 0x2596F8u) { return; }
    ctx->pc = 0x2596F8u;
label_2596f8:
    // 0x2596f8: 0x8e6400fc
    ctx->pc = 0x2596f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_2596fc:
    // 0x2596fc: 0xc094dfa
label_259700:
    if (ctx->pc == 0x259700u) {
        ctx->pc = 0x259700u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259704u;
        goto label_259704;
    }
    ctx->pc = 0x2596FCu;
    SET_GPR_U32(ctx, 31, 0x259704u);
    ctx->pc = 0x259700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2537E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExpireItem_0x2537e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259704u; }
    }
    if (ctx->pc != 0x259704u) { return; }
    ctx->pc = 0x259704u;
label_259704:
    // 0x259704: 0xdfbf0060
    ctx->pc = 0x259704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_259708:
    // 0x259708: 0xdfb50050
    ctx->pc = 0x259708u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_25970c:
    // 0x25970c: 0xdfb40040
    ctx->pc = 0x25970cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_259710:
    // 0x259710: 0xdfb30030
    ctx->pc = 0x259710u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_259714:
    // 0x259714: 0xdfb20020
    ctx->pc = 0x259714u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_259718:
    // 0x259718: 0xdfb10010
    ctx->pc = 0x259718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25971c:
    // 0x25971c: 0xdfb00000
    ctx->pc = 0x25971cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_259720:
    // 0x259720: 0xc7b40070
    ctx->pc = 0x259720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_259724:
    // 0x259724: 0x3e00008
label_259728:
    if (ctx->pc == 0x259728u) {
        ctx->pc = 0x259728u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x25972Cu;
        goto label_fallthrough_0x259724;
    }
    ctx->pc = 0x259724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259728u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x258C80u: goto label_258c80;
            case 0x258C84u: goto label_258c84;
            case 0x258C88u: goto label_258c88;
            case 0x258C8Cu: goto label_258c8c;
            case 0x258C90u: goto label_258c90;
            case 0x258C94u: goto label_258c94;
            case 0x258C98u: goto label_258c98;
            case 0x258C9Cu: goto label_258c9c;
            case 0x258CA0u: goto label_258ca0;
            case 0x258CA4u: goto label_258ca4;
            case 0x258CA8u: goto label_258ca8;
            case 0x258CACu: goto label_258cac;
            case 0x258CB0u: goto label_258cb0;
            case 0x258CB4u: goto label_258cb4;
            case 0x258CB8u: goto label_258cb8;
            case 0x258CBCu: goto label_258cbc;
            case 0x258CC0u: goto label_258cc0;
            case 0x258CC4u: goto label_258cc4;
            case 0x258CC8u: goto label_258cc8;
            case 0x258CCCu: goto label_258ccc;
            case 0x258CD0u: goto label_258cd0;
            case 0x258CD4u: goto label_258cd4;
            case 0x258CD8u: goto label_258cd8;
            case 0x258CDCu: goto label_258cdc;
            case 0x258CE0u: goto label_258ce0;
            case 0x258CE4u: goto label_258ce4;
            case 0x258CE8u: goto label_258ce8;
            case 0x258CECu: goto label_258cec;
            case 0x258CF0u: goto label_258cf0;
            case 0x258CF4u: goto label_258cf4;
            case 0x258CF8u: goto label_258cf8;
            case 0x258CFCu: goto label_258cfc;
            case 0x258D00u: goto label_258d00;
            case 0x258D04u: goto label_258d04;
            case 0x258D08u: goto label_258d08;
            case 0x258D0Cu: goto label_258d0c;
            case 0x258D10u: goto label_258d10;
            case 0x258D14u: goto label_258d14;
            case 0x258D18u: goto label_258d18;
            case 0x258D1Cu: goto label_258d1c;
            case 0x258D20u: goto label_258d20;
            case 0x258D24u: goto label_258d24;
            case 0x258D28u: goto label_258d28;
            case 0x258D2Cu: goto label_258d2c;
            case 0x258D30u: goto label_258d30;
            case 0x258D34u: goto label_258d34;
            case 0x258D38u: goto label_258d38;
            case 0x258D3Cu: goto label_258d3c;
            case 0x258D40u: goto label_258d40;
            case 0x258D44u: goto label_258d44;
            case 0x258D48u: goto label_258d48;
            case 0x258D4Cu: goto label_258d4c;
            case 0x258D50u: goto label_258d50;
            case 0x258D54u: goto label_258d54;
            case 0x258D58u: goto label_258d58;
            case 0x258D5Cu: goto label_258d5c;
            case 0x258D60u: goto label_258d60;
            case 0x258D64u: goto label_258d64;
            case 0x258D68u: goto label_258d68;
            case 0x258D6Cu: goto label_258d6c;
            case 0x258D70u: goto label_258d70;
            case 0x258D74u: goto label_258d74;
            case 0x258D78u: goto label_258d78;
            case 0x258D7Cu: goto label_258d7c;
            case 0x258D80u: goto label_258d80;
            case 0x258D84u: goto label_258d84;
            case 0x258D88u: goto label_258d88;
            case 0x258D8Cu: goto label_258d8c;
            case 0x258D90u: goto label_258d90;
            case 0x258D94u: goto label_258d94;
            case 0x258D98u: goto label_258d98;
            case 0x258D9Cu: goto label_258d9c;
            case 0x258DA0u: goto label_258da0;
            case 0x258DA4u: goto label_258da4;
            case 0x258DA8u: goto label_258da8;
            case 0x258DACu: goto label_258dac;
            case 0x258DB0u: goto label_258db0;
            case 0x258DB4u: goto label_258db4;
            case 0x258DB8u: goto label_258db8;
            case 0x258DBCu: goto label_258dbc;
            case 0x258DC0u: goto label_258dc0;
            case 0x258DC4u: goto label_258dc4;
            case 0x258DC8u: goto label_258dc8;
            case 0x258DCCu: goto label_258dcc;
            case 0x258DD0u: goto label_258dd0;
            case 0x258DD4u: goto label_258dd4;
            case 0x258DD8u: goto label_258dd8;
            case 0x258DDCu: goto label_258ddc;
            case 0x258DE0u: goto label_258de0;
            case 0x258DE4u: goto label_258de4;
            case 0x258DE8u: goto label_258de8;
            case 0x258DECu: goto label_258dec;
            case 0x258DF0u: goto label_258df0;
            case 0x258DF4u: goto label_258df4;
            case 0x258DF8u: goto label_258df8;
            case 0x258DFCu: goto label_258dfc;
            case 0x258E00u: goto label_258e00;
            case 0x258E04u: goto label_258e04;
            case 0x258E08u: goto label_258e08;
            case 0x258E0Cu: goto label_258e0c;
            case 0x258E10u: goto label_258e10;
            case 0x258E14u: goto label_258e14;
            case 0x258E18u: goto label_258e18;
            case 0x258E1Cu: goto label_258e1c;
            case 0x258E20u: goto label_258e20;
            case 0x258E24u: goto label_258e24;
            case 0x258E28u: goto label_258e28;
            case 0x258E2Cu: goto label_258e2c;
            case 0x258E30u: goto label_258e30;
            case 0x258E34u: goto label_258e34;
            case 0x258E38u: goto label_258e38;
            case 0x258E3Cu: goto label_258e3c;
            case 0x258E40u: goto label_258e40;
            case 0x258E44u: goto label_258e44;
            case 0x258E48u: goto label_258e48;
            case 0x258E4Cu: goto label_258e4c;
            case 0x258E50u: goto label_258e50;
            case 0x258E54u: goto label_258e54;
            case 0x258E58u: goto label_258e58;
            case 0x258E5Cu: goto label_258e5c;
            case 0x258E60u: goto label_258e60;
            case 0x258E64u: goto label_258e64;
            case 0x258E68u: goto label_258e68;
            case 0x258E6Cu: goto label_258e6c;
            case 0x258E70u: goto label_258e70;
            case 0x258E74u: goto label_258e74;
            case 0x258E78u: goto label_258e78;
            case 0x258E7Cu: goto label_258e7c;
            case 0x258E80u: goto label_258e80;
            case 0x258E84u: goto label_258e84;
            case 0x258E88u: goto label_258e88;
            case 0x258E8Cu: goto label_258e8c;
            case 0x258E90u: goto label_258e90;
            case 0x258E94u: goto label_258e94;
            case 0x258E98u: goto label_258e98;
            case 0x258E9Cu: goto label_258e9c;
            case 0x258EA0u: goto label_258ea0;
            case 0x258EA4u: goto label_258ea4;
            case 0x258EA8u: goto label_258ea8;
            case 0x258EACu: goto label_258eac;
            case 0x258EB0u: goto label_258eb0;
            case 0x258EB4u: goto label_258eb4;
            case 0x258EB8u: goto label_258eb8;
            case 0x258EBCu: goto label_258ebc;
            case 0x258EC0u: goto label_258ec0;
            case 0x258EC4u: goto label_258ec4;
            case 0x258EC8u: goto label_258ec8;
            case 0x258ECCu: goto label_258ecc;
            case 0x258ED0u: goto label_258ed0;
            case 0x258ED4u: goto label_258ed4;
            case 0x258ED8u: goto label_258ed8;
            case 0x258EDCu: goto label_258edc;
            case 0x258EE0u: goto label_258ee0;
            case 0x258EE4u: goto label_258ee4;
            case 0x258EE8u: goto label_258ee8;
            case 0x258EECu: goto label_258eec;
            case 0x258EF0u: goto label_258ef0;
            case 0x258EF4u: goto label_258ef4;
            case 0x258EF8u: goto label_258ef8;
            case 0x258EFCu: goto label_258efc;
            case 0x258F00u: goto label_258f00;
            case 0x258F04u: goto label_258f04;
            case 0x258F08u: goto label_258f08;
            case 0x258F0Cu: goto label_258f0c;
            case 0x258F10u: goto label_258f10;
            case 0x258F14u: goto label_258f14;
            case 0x258F18u: goto label_258f18;
            case 0x258F1Cu: goto label_258f1c;
            case 0x258F20u: goto label_258f20;
            case 0x258F24u: goto label_258f24;
            case 0x258F28u: goto label_258f28;
            case 0x258F2Cu: goto label_258f2c;
            case 0x258F30u: goto label_258f30;
            case 0x258F34u: goto label_258f34;
            case 0x258F38u: goto label_258f38;
            case 0x258F3Cu: goto label_258f3c;
            case 0x258F40u: goto label_258f40;
            case 0x258F44u: goto label_258f44;
            case 0x258F48u: goto label_258f48;
            case 0x258F4Cu: goto label_258f4c;
            case 0x258F50u: goto label_258f50;
            case 0x258F54u: goto label_258f54;
            case 0x258F58u: goto label_258f58;
            case 0x258F5Cu: goto label_258f5c;
            case 0x258F60u: goto label_258f60;
            case 0x258F64u: goto label_258f64;
            case 0x258F68u: goto label_258f68;
            case 0x258F6Cu: goto label_258f6c;
            case 0x258F70u: goto label_258f70;
            case 0x258F74u: goto label_258f74;
            case 0x258F78u: goto label_258f78;
            case 0x258F7Cu: goto label_258f7c;
            case 0x258F80u: goto label_258f80;
            case 0x258F84u: goto label_258f84;
            case 0x258F88u: goto label_258f88;
            case 0x258F8Cu: goto label_258f8c;
            case 0x258F90u: goto label_258f90;
            case 0x258F94u: goto label_258f94;
            case 0x258F98u: goto label_258f98;
            case 0x258F9Cu: goto label_258f9c;
            case 0x258FA0u: goto label_258fa0;
            case 0x258FA4u: goto label_258fa4;
            case 0x258FA8u: goto label_258fa8;
            case 0x258FACu: goto label_258fac;
            case 0x258FB0u: goto label_258fb0;
            case 0x258FB4u: goto label_258fb4;
            case 0x258FB8u: goto label_258fb8;
            case 0x258FBCu: goto label_258fbc;
            case 0x258FC0u: goto label_258fc0;
            case 0x258FC4u: goto label_258fc4;
            case 0x258FC8u: goto label_258fc8;
            case 0x258FCCu: goto label_258fcc;
            case 0x258FD0u: goto label_258fd0;
            case 0x258FD4u: goto label_258fd4;
            case 0x258FD8u: goto label_258fd8;
            case 0x258FDCu: goto label_258fdc;
            case 0x258FE0u: goto label_258fe0;
            case 0x258FE4u: goto label_258fe4;
            case 0x258FE8u: goto label_258fe8;
            case 0x258FECu: goto label_258fec;
            case 0x258FF0u: goto label_258ff0;
            case 0x258FF4u: goto label_258ff4;
            case 0x258FF8u: goto label_258ff8;
            case 0x258FFCu: goto label_258ffc;
            case 0x259000u: goto label_259000;
            case 0x259004u: goto label_259004;
            case 0x259008u: goto label_259008;
            case 0x25900Cu: goto label_25900c;
            case 0x259010u: goto label_259010;
            case 0x259014u: goto label_259014;
            case 0x259018u: goto label_259018;
            case 0x25901Cu: goto label_25901c;
            case 0x259020u: goto label_259020;
            case 0x259024u: goto label_259024;
            case 0x259028u: goto label_259028;
            case 0x25902Cu: goto label_25902c;
            case 0x259030u: goto label_259030;
            case 0x259034u: goto label_259034;
            case 0x259038u: goto label_259038;
            case 0x25903Cu: goto label_25903c;
            case 0x259040u: goto label_259040;
            case 0x259044u: goto label_259044;
            case 0x259048u: goto label_259048;
            case 0x25904Cu: goto label_25904c;
            case 0x259050u: goto label_259050;
            case 0x259054u: goto label_259054;
            case 0x259058u: goto label_259058;
            case 0x25905Cu: goto label_25905c;
            case 0x259060u: goto label_259060;
            case 0x259064u: goto label_259064;
            case 0x259068u: goto label_259068;
            case 0x25906Cu: goto label_25906c;
            case 0x259070u: goto label_259070;
            case 0x259074u: goto label_259074;
            case 0x259078u: goto label_259078;
            case 0x25907Cu: goto label_25907c;
            case 0x259080u: goto label_259080;
            case 0x259084u: goto label_259084;
            case 0x259088u: goto label_259088;
            case 0x25908Cu: goto label_25908c;
            case 0x259090u: goto label_259090;
            case 0x259094u: goto label_259094;
            case 0x259098u: goto label_259098;
            case 0x25909Cu: goto label_25909c;
            case 0x2590A0u: goto label_2590a0;
            case 0x2590A4u: goto label_2590a4;
            case 0x2590A8u: goto label_2590a8;
            case 0x2590ACu: goto label_2590ac;
            case 0x2590B0u: goto label_2590b0;
            case 0x2590B4u: goto label_2590b4;
            case 0x2590B8u: goto label_2590b8;
            case 0x2590BCu: goto label_2590bc;
            case 0x2590C0u: goto label_2590c0;
            case 0x2590C4u: goto label_2590c4;
            case 0x2590C8u: goto label_2590c8;
            case 0x2590CCu: goto label_2590cc;
            case 0x2590D0u: goto label_2590d0;
            case 0x2590D4u: goto label_2590d4;
            case 0x2590D8u: goto label_2590d8;
            case 0x2590DCu: goto label_2590dc;
            case 0x2590E0u: goto label_2590e0;
            case 0x2590E4u: goto label_2590e4;
            case 0x2590E8u: goto label_2590e8;
            case 0x2590ECu: goto label_2590ec;
            case 0x2590F0u: goto label_2590f0;
            case 0x2590F4u: goto label_2590f4;
            case 0x2590F8u: goto label_2590f8;
            case 0x2590FCu: goto label_2590fc;
            case 0x259100u: goto label_259100;
            case 0x259104u: goto label_259104;
            case 0x259108u: goto label_259108;
            case 0x25910Cu: goto label_25910c;
            case 0x259110u: goto label_259110;
            case 0x259114u: goto label_259114;
            case 0x259118u: goto label_259118;
            case 0x25911Cu: goto label_25911c;
            case 0x259120u: goto label_259120;
            case 0x259124u: goto label_259124;
            case 0x259128u: goto label_259128;
            case 0x25912Cu: goto label_25912c;
            case 0x259130u: goto label_259130;
            case 0x259134u: goto label_259134;
            case 0x259138u: goto label_259138;
            case 0x25913Cu: goto label_25913c;
            case 0x259140u: goto label_259140;
            case 0x259144u: goto label_259144;
            case 0x259148u: goto label_259148;
            case 0x25914Cu: goto label_25914c;
            case 0x259150u: goto label_259150;
            case 0x259154u: goto label_259154;
            case 0x259158u: goto label_259158;
            case 0x25915Cu: goto label_25915c;
            case 0x259160u: goto label_259160;
            case 0x259164u: goto label_259164;
            case 0x259168u: goto label_259168;
            case 0x25916Cu: goto label_25916c;
            case 0x259170u: goto label_259170;
            case 0x259174u: goto label_259174;
            case 0x259178u: goto label_259178;
            case 0x25917Cu: goto label_25917c;
            case 0x259180u: goto label_259180;
            case 0x259184u: goto label_259184;
            case 0x259188u: goto label_259188;
            case 0x25918Cu: goto label_25918c;
            case 0x259190u: goto label_259190;
            case 0x259194u: goto label_259194;
            case 0x259198u: goto label_259198;
            case 0x25919Cu: goto label_25919c;
            case 0x2591A0u: goto label_2591a0;
            case 0x2591A4u: goto label_2591a4;
            case 0x2591A8u: goto label_2591a8;
            case 0x2591ACu: goto label_2591ac;
            case 0x2591B0u: goto label_2591b0;
            case 0x2591B4u: goto label_2591b4;
            case 0x2591B8u: goto label_2591b8;
            case 0x2591BCu: goto label_2591bc;
            case 0x2591C0u: goto label_2591c0;
            case 0x2591C4u: goto label_2591c4;
            case 0x2591C8u: goto label_2591c8;
            case 0x2591CCu: goto label_2591cc;
            case 0x2591D0u: goto label_2591d0;
            case 0x2591D4u: goto label_2591d4;
            case 0x2591D8u: goto label_2591d8;
            case 0x2591DCu: goto label_2591dc;
            case 0x2591E0u: goto label_2591e0;
            case 0x2591E4u: goto label_2591e4;
            case 0x2591E8u: goto label_2591e8;
            case 0x2591ECu: goto label_2591ec;
            case 0x2591F0u: goto label_2591f0;
            case 0x2591F4u: goto label_2591f4;
            case 0x2591F8u: goto label_2591f8;
            case 0x2591FCu: goto label_2591fc;
            case 0x259200u: goto label_259200;
            case 0x259204u: goto label_259204;
            case 0x259208u: goto label_259208;
            case 0x25920Cu: goto label_25920c;
            case 0x259210u: goto label_259210;
            case 0x259214u: goto label_259214;
            case 0x259218u: goto label_259218;
            case 0x25921Cu: goto label_25921c;
            case 0x259220u: goto label_259220;
            case 0x259224u: goto label_259224;
            case 0x259228u: goto label_259228;
            case 0x25922Cu: goto label_25922c;
            case 0x259230u: goto label_259230;
            case 0x259234u: goto label_259234;
            case 0x259238u: goto label_259238;
            case 0x25923Cu: goto label_25923c;
            case 0x259240u: goto label_259240;
            case 0x259244u: goto label_259244;
            case 0x259248u: goto label_259248;
            case 0x25924Cu: goto label_25924c;
            case 0x259250u: goto label_259250;
            case 0x259254u: goto label_259254;
            case 0x259258u: goto label_259258;
            case 0x25925Cu: goto label_25925c;
            case 0x259260u: goto label_259260;
            case 0x259264u: goto label_259264;
            case 0x259268u: goto label_259268;
            case 0x25926Cu: goto label_25926c;
            case 0x259270u: goto label_259270;
            case 0x259274u: goto label_259274;
            case 0x259278u: goto label_259278;
            case 0x25927Cu: goto label_25927c;
            case 0x259280u: goto label_259280;
            case 0x259284u: goto label_259284;
            case 0x259288u: goto label_259288;
            case 0x25928Cu: goto label_25928c;
            case 0x259290u: goto label_259290;
            case 0x259294u: goto label_259294;
            case 0x259298u: goto label_259298;
            case 0x25929Cu: goto label_25929c;
            case 0x2592A0u: goto label_2592a0;
            case 0x2592A4u: goto label_2592a4;
            case 0x2592A8u: goto label_2592a8;
            case 0x2592ACu: goto label_2592ac;
            case 0x2592B0u: goto label_2592b0;
            case 0x2592B4u: goto label_2592b4;
            case 0x2592B8u: goto label_2592b8;
            case 0x2592BCu: goto label_2592bc;
            case 0x2592C0u: goto label_2592c0;
            case 0x2592C4u: goto label_2592c4;
            case 0x2592C8u: goto label_2592c8;
            case 0x2592CCu: goto label_2592cc;
            case 0x2592D0u: goto label_2592d0;
            case 0x2592D4u: goto label_2592d4;
            case 0x2592D8u: goto label_2592d8;
            case 0x2592DCu: goto label_2592dc;
            case 0x2592E0u: goto label_2592e0;
            case 0x2592E4u: goto label_2592e4;
            case 0x2592E8u: goto label_2592e8;
            case 0x2592ECu: goto label_2592ec;
            case 0x2592F0u: goto label_2592f0;
            case 0x2592F4u: goto label_2592f4;
            case 0x2592F8u: goto label_2592f8;
            case 0x2592FCu: goto label_2592fc;
            case 0x259300u: goto label_259300;
            case 0x259304u: goto label_259304;
            case 0x259308u: goto label_259308;
            case 0x25930Cu: goto label_25930c;
            case 0x259310u: goto label_259310;
            case 0x259314u: goto label_259314;
            case 0x259318u: goto label_259318;
            case 0x25931Cu: goto label_25931c;
            case 0x259320u: goto label_259320;
            case 0x259324u: goto label_259324;
            case 0x259328u: goto label_259328;
            case 0x25932Cu: goto label_25932c;
            case 0x259330u: goto label_259330;
            case 0x259334u: goto label_259334;
            case 0x259338u: goto label_259338;
            case 0x25933Cu: goto label_25933c;
            case 0x259340u: goto label_259340;
            case 0x259344u: goto label_259344;
            case 0x259348u: goto label_259348;
            case 0x25934Cu: goto label_25934c;
            case 0x259350u: goto label_259350;
            case 0x259354u: goto label_259354;
            case 0x259358u: goto label_259358;
            case 0x25935Cu: goto label_25935c;
            case 0x259360u: goto label_259360;
            case 0x259364u: goto label_259364;
            case 0x259368u: goto label_259368;
            case 0x25936Cu: goto label_25936c;
            case 0x259370u: goto label_259370;
            case 0x259374u: goto label_259374;
            case 0x259378u: goto label_259378;
            case 0x25937Cu: goto label_25937c;
            case 0x259380u: goto label_259380;
            case 0x259384u: goto label_259384;
            case 0x259388u: goto label_259388;
            case 0x25938Cu: goto label_25938c;
            case 0x259390u: goto label_259390;
            case 0x259394u: goto label_259394;
            case 0x259398u: goto label_259398;
            case 0x25939Cu: goto label_25939c;
            case 0x2593A0u: goto label_2593a0;
            case 0x2593A4u: goto label_2593a4;
            case 0x2593A8u: goto label_2593a8;
            case 0x2593ACu: goto label_2593ac;
            case 0x2593B0u: goto label_2593b0;
            case 0x2593B4u: goto label_2593b4;
            case 0x2593B8u: goto label_2593b8;
            case 0x2593BCu: goto label_2593bc;
            case 0x2593C0u: goto label_2593c0;
            case 0x2593C4u: goto label_2593c4;
            case 0x2593C8u: goto label_2593c8;
            case 0x2593CCu: goto label_2593cc;
            case 0x2593D0u: goto label_2593d0;
            case 0x2593D4u: goto label_2593d4;
            case 0x2593D8u: goto label_2593d8;
            case 0x2593DCu: goto label_2593dc;
            case 0x2593E0u: goto label_2593e0;
            case 0x2593E4u: goto label_2593e4;
            case 0x2593E8u: goto label_2593e8;
            case 0x2593ECu: goto label_2593ec;
            case 0x2593F0u: goto label_2593f0;
            case 0x2593F4u: goto label_2593f4;
            case 0x2593F8u: goto label_2593f8;
            case 0x2593FCu: goto label_2593fc;
            case 0x259400u: goto label_259400;
            case 0x259404u: goto label_259404;
            case 0x259408u: goto label_259408;
            case 0x25940Cu: goto label_25940c;
            case 0x259410u: goto label_259410;
            case 0x259414u: goto label_259414;
            case 0x259418u: goto label_259418;
            case 0x25941Cu: goto label_25941c;
            case 0x259420u: goto label_259420;
            case 0x259424u: goto label_259424;
            case 0x259428u: goto label_259428;
            case 0x25942Cu: goto label_25942c;
            case 0x259430u: goto label_259430;
            case 0x259434u: goto label_259434;
            case 0x259438u: goto label_259438;
            case 0x25943Cu: goto label_25943c;
            case 0x259440u: goto label_259440;
            case 0x259444u: goto label_259444;
            case 0x259448u: goto label_259448;
            case 0x25944Cu: goto label_25944c;
            case 0x259450u: goto label_259450;
            case 0x259454u: goto label_259454;
            case 0x259458u: goto label_259458;
            case 0x25945Cu: goto label_25945c;
            case 0x259460u: goto label_259460;
            case 0x259464u: goto label_259464;
            case 0x259468u: goto label_259468;
            case 0x25946Cu: goto label_25946c;
            case 0x259470u: goto label_259470;
            case 0x259474u: goto label_259474;
            case 0x259478u: goto label_259478;
            case 0x25947Cu: goto label_25947c;
            case 0x259480u: goto label_259480;
            case 0x259484u: goto label_259484;
            case 0x259488u: goto label_259488;
            case 0x25948Cu: goto label_25948c;
            case 0x259490u: goto label_259490;
            case 0x259494u: goto label_259494;
            case 0x259498u: goto label_259498;
            case 0x25949Cu: goto label_25949c;
            case 0x2594A0u: goto label_2594a0;
            case 0x2594A4u: goto label_2594a4;
            case 0x2594A8u: goto label_2594a8;
            case 0x2594ACu: goto label_2594ac;
            case 0x2594B0u: goto label_2594b0;
            case 0x2594B4u: goto label_2594b4;
            case 0x2594B8u: goto label_2594b8;
            case 0x2594BCu: goto label_2594bc;
            case 0x2594C0u: goto label_2594c0;
            case 0x2594C4u: goto label_2594c4;
            case 0x2594C8u: goto label_2594c8;
            case 0x2594CCu: goto label_2594cc;
            case 0x2594D0u: goto label_2594d0;
            case 0x2594D4u: goto label_2594d4;
            case 0x2594D8u: goto label_2594d8;
            case 0x2594DCu: goto label_2594dc;
            case 0x2594E0u: goto label_2594e0;
            case 0x2594E4u: goto label_2594e4;
            case 0x2594E8u: goto label_2594e8;
            case 0x2594ECu: goto label_2594ec;
            case 0x2594F0u: goto label_2594f0;
            case 0x2594F4u: goto label_2594f4;
            case 0x2594F8u: goto label_2594f8;
            case 0x2594FCu: goto label_2594fc;
            case 0x259500u: goto label_259500;
            case 0x259504u: goto label_259504;
            case 0x259508u: goto label_259508;
            case 0x25950Cu: goto label_25950c;
            case 0x259510u: goto label_259510;
            case 0x259514u: goto label_259514;
            case 0x259518u: goto label_259518;
            case 0x25951Cu: goto label_25951c;
            case 0x259520u: goto label_259520;
            case 0x259524u: goto label_259524;
            case 0x259528u: goto label_259528;
            case 0x25952Cu: goto label_25952c;
            case 0x259530u: goto label_259530;
            case 0x259534u: goto label_259534;
            case 0x259538u: goto label_259538;
            case 0x25953Cu: goto label_25953c;
            case 0x259540u: goto label_259540;
            case 0x259544u: goto label_259544;
            case 0x259548u: goto label_259548;
            case 0x25954Cu: goto label_25954c;
            case 0x259550u: goto label_259550;
            case 0x259554u: goto label_259554;
            case 0x259558u: goto label_259558;
            case 0x25955Cu: goto label_25955c;
            case 0x259560u: goto label_259560;
            case 0x259564u: goto label_259564;
            case 0x259568u: goto label_259568;
            case 0x25956Cu: goto label_25956c;
            case 0x259570u: goto label_259570;
            case 0x259574u: goto label_259574;
            case 0x259578u: goto label_259578;
            case 0x25957Cu: goto label_25957c;
            case 0x259580u: goto label_259580;
            case 0x259584u: goto label_259584;
            case 0x259588u: goto label_259588;
            case 0x25958Cu: goto label_25958c;
            case 0x259590u: goto label_259590;
            case 0x259594u: goto label_259594;
            case 0x259598u: goto label_259598;
            case 0x25959Cu: goto label_25959c;
            case 0x2595A0u: goto label_2595a0;
            case 0x2595A4u: goto label_2595a4;
            case 0x2595A8u: goto label_2595a8;
            case 0x2595ACu: goto label_2595ac;
            case 0x2595B0u: goto label_2595b0;
            case 0x2595B4u: goto label_2595b4;
            case 0x2595B8u: goto label_2595b8;
            case 0x2595BCu: goto label_2595bc;
            case 0x2595C0u: goto label_2595c0;
            case 0x2595C4u: goto label_2595c4;
            case 0x2595C8u: goto label_2595c8;
            case 0x2595CCu: goto label_2595cc;
            case 0x2595D0u: goto label_2595d0;
            case 0x2595D4u: goto label_2595d4;
            case 0x2595D8u: goto label_2595d8;
            case 0x2595DCu: goto label_2595dc;
            case 0x2595E0u: goto label_2595e0;
            case 0x2595E4u: goto label_2595e4;
            case 0x2595E8u: goto label_2595e8;
            case 0x2595ECu: goto label_2595ec;
            case 0x2595F0u: goto label_2595f0;
            case 0x2595F4u: goto label_2595f4;
            case 0x2595F8u: goto label_2595f8;
            case 0x2595FCu: goto label_2595fc;
            case 0x259600u: goto label_259600;
            case 0x259604u: goto label_259604;
            case 0x259608u: goto label_259608;
            case 0x25960Cu: goto label_25960c;
            case 0x259610u: goto label_259610;
            case 0x259614u: goto label_259614;
            case 0x259618u: goto label_259618;
            case 0x25961Cu: goto label_25961c;
            case 0x259620u: goto label_259620;
            case 0x259624u: goto label_259624;
            case 0x259628u: goto label_259628;
            case 0x25962Cu: goto label_25962c;
            case 0x259630u: goto label_259630;
            case 0x259634u: goto label_259634;
            case 0x259638u: goto label_259638;
            case 0x25963Cu: goto label_25963c;
            case 0x259640u: goto label_259640;
            case 0x259644u: goto label_259644;
            case 0x259648u: goto label_259648;
            case 0x25964Cu: goto label_25964c;
            case 0x259650u: goto label_259650;
            case 0x259654u: goto label_259654;
            case 0x259658u: goto label_259658;
            case 0x25965Cu: goto label_25965c;
            case 0x259660u: goto label_259660;
            case 0x259664u: goto label_259664;
            case 0x259668u: goto label_259668;
            case 0x25966Cu: goto label_25966c;
            case 0x259670u: goto label_259670;
            case 0x259674u: goto label_259674;
            case 0x259678u: goto label_259678;
            case 0x25967Cu: goto label_25967c;
            case 0x259680u: goto label_259680;
            case 0x259684u: goto label_259684;
            case 0x259688u: goto label_259688;
            case 0x25968Cu: goto label_25968c;
            case 0x259690u: goto label_259690;
            case 0x259694u: goto label_259694;
            case 0x259698u: goto label_259698;
            case 0x25969Cu: goto label_25969c;
            case 0x2596A0u: goto label_2596a0;
            case 0x2596A4u: goto label_2596a4;
            case 0x2596A8u: goto label_2596a8;
            case 0x2596ACu: goto label_2596ac;
            case 0x2596B0u: goto label_2596b0;
            case 0x2596B4u: goto label_2596b4;
            case 0x2596B8u: goto label_2596b8;
            case 0x2596BCu: goto label_2596bc;
            case 0x2596C0u: goto label_2596c0;
            case 0x2596C4u: goto label_2596c4;
            case 0x2596C8u: goto label_2596c8;
            case 0x2596CCu: goto label_2596cc;
            case 0x2596D0u: goto label_2596d0;
            case 0x2596D4u: goto label_2596d4;
            case 0x2596D8u: goto label_2596d8;
            case 0x2596DCu: goto label_2596dc;
            case 0x2596E0u: goto label_2596e0;
            case 0x2596E4u: goto label_2596e4;
            case 0x2596E8u: goto label_2596e8;
            case 0x2596ECu: goto label_2596ec;
            case 0x2596F0u: goto label_2596f0;
            case 0x2596F4u: goto label_2596f4;
            case 0x2596F8u: goto label_2596f8;
            case 0x2596FCu: goto label_2596fc;
            case 0x259700u: goto label_259700;
            case 0x259704u: goto label_259704;
            case 0x259708u: goto label_259708;
            case 0x25970Cu: goto label_25970c;
            case 0x259710u: goto label_259710;
            case 0x259714u: goto label_259714;
            case 0x259718u: goto label_259718;
            case 0x25971Cu: goto label_25971c;
            case 0x259720u: goto label_259720;
            case 0x259724u: goto label_259724;
            case 0x259728u: goto label_259728;
            default: break;
        }
        return;
    }
label_fallthrough_0x259724:
    ctx->pc = 0x25972Cu;
}
