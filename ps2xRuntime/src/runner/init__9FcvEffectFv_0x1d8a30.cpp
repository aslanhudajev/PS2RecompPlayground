#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__9FcvEffectFv
// Address: 0x1d8a30 - 0x1d8ef4
void init__9FcvEffectFv_0x1d8a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__9FcvEffectFv");


    ctx->pc = 0x1d8a30u;

label_1d8a30:
    // 0x1d8a30: 0x27bdfff0
    ctx->pc = 0x1d8a30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d8a34:
    // 0x1d8a34: 0x7fbf0000
    ctx->pc = 0x1d8a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1d8a38:
    // 0x1d8a38: 0x8c83001c
    ctx->pc = 0x1d8a38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1d8a3c:
    // 0x1d8a3c: 0x2c61004a
    ctx->pc = 0x1d8a3cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 74));
label_1d8a40:
    // 0x1d8a40: 0x10200129
label_1d8a44:
    if (ctx->pc == 0x1D8A44u) {
        ctx->pc = 0x1D8A44u;
        SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
        ctx->pc = 0x1D8A48u;
        goto label_1d8a48;
    }
    ctx->pc = 0x1D8A40u;
    {
        const bool branch_taken_0x1d8a40 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D8A44u;
        SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
        if (branch_taken_0x1d8a40) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8A48u;
label_1d8a48:
    // 0x1d8a48: 0x31880
    ctx->pc = 0x1d8a48u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1d8a4c:
    // 0x1d8a4c: 0x24a5f350
    ctx->pc = 0x1d8a4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294964048));
label_1d8a50:
    // 0x1d8a50: 0x651821
    ctx->pc = 0x1d8a50u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1d8a54:
    // 0x1d8a54: 0x8c630000
    ctx->pc = 0x1d8a54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d8a58:
    // 0x1d8a58: 0x600008
label_1d8a5c:
    if (ctx->pc == 0x1D8A5Cu) {
        ctx->pc = 0x1D8A60u;
        goto label_1d8a60;
    }
    ctx->pc = 0x1D8A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8A30u: goto label_1d8a30;
            case 0x1D8A34u: goto label_1d8a34;
            case 0x1D8A38u: goto label_1d8a38;
            case 0x1D8A3Cu: goto label_1d8a3c;
            case 0x1D8A40u: goto label_1d8a40;
            case 0x1D8A44u: goto label_1d8a44;
            case 0x1D8A48u: goto label_1d8a48;
            case 0x1D8A4Cu: goto label_1d8a4c;
            case 0x1D8A50u: goto label_1d8a50;
            case 0x1D8A54u: goto label_1d8a54;
            case 0x1D8A58u: goto label_1d8a58;
            case 0x1D8A5Cu: goto label_1d8a5c;
            case 0x1D8A60u: goto label_1d8a60;
            case 0x1D8A64u: goto label_1d8a64;
            case 0x1D8A68u: goto label_1d8a68;
            case 0x1D8A6Cu: goto label_1d8a6c;
            case 0x1D8A70u: goto label_1d8a70;
            case 0x1D8A74u: goto label_1d8a74;
            case 0x1D8A78u: goto label_1d8a78;
            case 0x1D8A7Cu: goto label_1d8a7c;
            case 0x1D8A80u: goto label_1d8a80;
            case 0x1D8A84u: goto label_1d8a84;
            case 0x1D8A88u: goto label_1d8a88;
            case 0x1D8A8Cu: goto label_1d8a8c;
            case 0x1D8A90u: goto label_1d8a90;
            case 0x1D8A94u: goto label_1d8a94;
            case 0x1D8A98u: goto label_1d8a98;
            case 0x1D8A9Cu: goto label_1d8a9c;
            case 0x1D8AA0u: goto label_1d8aa0;
            case 0x1D8AA4u: goto label_1d8aa4;
            case 0x1D8AA8u: goto label_1d8aa8;
            case 0x1D8AACu: goto label_1d8aac;
            case 0x1D8AB0u: goto label_1d8ab0;
            case 0x1D8AB4u: goto label_1d8ab4;
            case 0x1D8AB8u: goto label_1d8ab8;
            case 0x1D8ABCu: goto label_1d8abc;
            case 0x1D8AC0u: goto label_1d8ac0;
            case 0x1D8AC4u: goto label_1d8ac4;
            case 0x1D8AC8u: goto label_1d8ac8;
            case 0x1D8ACCu: goto label_1d8acc;
            case 0x1D8AD0u: goto label_1d8ad0;
            case 0x1D8AD4u: goto label_1d8ad4;
            case 0x1D8AD8u: goto label_1d8ad8;
            case 0x1D8ADCu: goto label_1d8adc;
            case 0x1D8AE0u: goto label_1d8ae0;
            case 0x1D8AE4u: goto label_1d8ae4;
            case 0x1D8AE8u: goto label_1d8ae8;
            case 0x1D8AECu: goto label_1d8aec;
            case 0x1D8AF0u: goto label_1d8af0;
            case 0x1D8AF4u: goto label_1d8af4;
            case 0x1D8AF8u: goto label_1d8af8;
            case 0x1D8AFCu: goto label_1d8afc;
            case 0x1D8B00u: goto label_1d8b00;
            case 0x1D8B04u: goto label_1d8b04;
            case 0x1D8B08u: goto label_1d8b08;
            case 0x1D8B0Cu: goto label_1d8b0c;
            case 0x1D8B10u: goto label_1d8b10;
            case 0x1D8B14u: goto label_1d8b14;
            case 0x1D8B18u: goto label_1d8b18;
            case 0x1D8B1Cu: goto label_1d8b1c;
            case 0x1D8B20u: goto label_1d8b20;
            case 0x1D8B24u: goto label_1d8b24;
            case 0x1D8B28u: goto label_1d8b28;
            case 0x1D8B2Cu: goto label_1d8b2c;
            case 0x1D8B30u: goto label_1d8b30;
            case 0x1D8B34u: goto label_1d8b34;
            case 0x1D8B38u: goto label_1d8b38;
            case 0x1D8B3Cu: goto label_1d8b3c;
            case 0x1D8B40u: goto label_1d8b40;
            case 0x1D8B44u: goto label_1d8b44;
            case 0x1D8B48u: goto label_1d8b48;
            case 0x1D8B4Cu: goto label_1d8b4c;
            case 0x1D8B50u: goto label_1d8b50;
            case 0x1D8B54u: goto label_1d8b54;
            case 0x1D8B58u: goto label_1d8b58;
            case 0x1D8B5Cu: goto label_1d8b5c;
            case 0x1D8B60u: goto label_1d8b60;
            case 0x1D8B64u: goto label_1d8b64;
            case 0x1D8B68u: goto label_1d8b68;
            case 0x1D8B6Cu: goto label_1d8b6c;
            case 0x1D8B70u: goto label_1d8b70;
            case 0x1D8B74u: goto label_1d8b74;
            case 0x1D8B78u: goto label_1d8b78;
            case 0x1D8B7Cu: goto label_1d8b7c;
            case 0x1D8B80u: goto label_1d8b80;
            case 0x1D8B84u: goto label_1d8b84;
            case 0x1D8B88u: goto label_1d8b88;
            case 0x1D8B8Cu: goto label_1d8b8c;
            case 0x1D8B90u: goto label_1d8b90;
            case 0x1D8B94u: goto label_1d8b94;
            case 0x1D8B98u: goto label_1d8b98;
            case 0x1D8B9Cu: goto label_1d8b9c;
            case 0x1D8BA0u: goto label_1d8ba0;
            case 0x1D8BA4u: goto label_1d8ba4;
            case 0x1D8BA8u: goto label_1d8ba8;
            case 0x1D8BACu: goto label_1d8bac;
            case 0x1D8BB0u: goto label_1d8bb0;
            case 0x1D8BB4u: goto label_1d8bb4;
            case 0x1D8BB8u: goto label_1d8bb8;
            case 0x1D8BBCu: goto label_1d8bbc;
            case 0x1D8BC0u: goto label_1d8bc0;
            case 0x1D8BC4u: goto label_1d8bc4;
            case 0x1D8BC8u: goto label_1d8bc8;
            case 0x1D8BCCu: goto label_1d8bcc;
            case 0x1D8BD0u: goto label_1d8bd0;
            case 0x1D8BD4u: goto label_1d8bd4;
            case 0x1D8BD8u: goto label_1d8bd8;
            case 0x1D8BDCu: goto label_1d8bdc;
            case 0x1D8BE0u: goto label_1d8be0;
            case 0x1D8BE4u: goto label_1d8be4;
            case 0x1D8BE8u: goto label_1d8be8;
            case 0x1D8BECu: goto label_1d8bec;
            case 0x1D8BF0u: goto label_1d8bf0;
            case 0x1D8BF4u: goto label_1d8bf4;
            case 0x1D8BF8u: goto label_1d8bf8;
            case 0x1D8BFCu: goto label_1d8bfc;
            case 0x1D8C00u: goto label_1d8c00;
            case 0x1D8C04u: goto label_1d8c04;
            case 0x1D8C08u: goto label_1d8c08;
            case 0x1D8C0Cu: goto label_1d8c0c;
            case 0x1D8C10u: goto label_1d8c10;
            case 0x1D8C14u: goto label_1d8c14;
            case 0x1D8C18u: goto label_1d8c18;
            case 0x1D8C1Cu: goto label_1d8c1c;
            case 0x1D8C20u: goto label_1d8c20;
            case 0x1D8C24u: goto label_1d8c24;
            case 0x1D8C28u: goto label_1d8c28;
            case 0x1D8C2Cu: goto label_1d8c2c;
            case 0x1D8C30u: goto label_1d8c30;
            case 0x1D8C34u: goto label_1d8c34;
            case 0x1D8C38u: goto label_1d8c38;
            case 0x1D8C3Cu: goto label_1d8c3c;
            case 0x1D8C40u: goto label_1d8c40;
            case 0x1D8C44u: goto label_1d8c44;
            case 0x1D8C48u: goto label_1d8c48;
            case 0x1D8C4Cu: goto label_1d8c4c;
            case 0x1D8C50u: goto label_1d8c50;
            case 0x1D8C54u: goto label_1d8c54;
            case 0x1D8C58u: goto label_1d8c58;
            case 0x1D8C5Cu: goto label_1d8c5c;
            case 0x1D8C60u: goto label_1d8c60;
            case 0x1D8C64u: goto label_1d8c64;
            case 0x1D8C68u: goto label_1d8c68;
            case 0x1D8C6Cu: goto label_1d8c6c;
            case 0x1D8C70u: goto label_1d8c70;
            case 0x1D8C74u: goto label_1d8c74;
            case 0x1D8C78u: goto label_1d8c78;
            case 0x1D8C7Cu: goto label_1d8c7c;
            case 0x1D8C80u: goto label_1d8c80;
            case 0x1D8C84u: goto label_1d8c84;
            case 0x1D8C88u: goto label_1d8c88;
            case 0x1D8C8Cu: goto label_1d8c8c;
            case 0x1D8C90u: goto label_1d8c90;
            case 0x1D8C94u: goto label_1d8c94;
            case 0x1D8C98u: goto label_1d8c98;
            case 0x1D8C9Cu: goto label_1d8c9c;
            case 0x1D8CA0u: goto label_1d8ca0;
            case 0x1D8CA4u: goto label_1d8ca4;
            case 0x1D8CA8u: goto label_1d8ca8;
            case 0x1D8CACu: goto label_1d8cac;
            case 0x1D8CB0u: goto label_1d8cb0;
            case 0x1D8CB4u: goto label_1d8cb4;
            case 0x1D8CB8u: goto label_1d8cb8;
            case 0x1D8CBCu: goto label_1d8cbc;
            case 0x1D8CC0u: goto label_1d8cc0;
            case 0x1D8CC4u: goto label_1d8cc4;
            case 0x1D8CC8u: goto label_1d8cc8;
            case 0x1D8CCCu: goto label_1d8ccc;
            case 0x1D8CD0u: goto label_1d8cd0;
            case 0x1D8CD4u: goto label_1d8cd4;
            case 0x1D8CD8u: goto label_1d8cd8;
            case 0x1D8CDCu: goto label_1d8cdc;
            case 0x1D8CE0u: goto label_1d8ce0;
            case 0x1D8CE4u: goto label_1d8ce4;
            case 0x1D8CE8u: goto label_1d8ce8;
            case 0x1D8CECu: goto label_1d8cec;
            case 0x1D8CF0u: goto label_1d8cf0;
            case 0x1D8CF4u: goto label_1d8cf4;
            case 0x1D8CF8u: goto label_1d8cf8;
            case 0x1D8CFCu: goto label_1d8cfc;
            case 0x1D8D00u: goto label_1d8d00;
            case 0x1D8D04u: goto label_1d8d04;
            case 0x1D8D08u: goto label_1d8d08;
            case 0x1D8D0Cu: goto label_1d8d0c;
            case 0x1D8D10u: goto label_1d8d10;
            case 0x1D8D14u: goto label_1d8d14;
            case 0x1D8D18u: goto label_1d8d18;
            case 0x1D8D1Cu: goto label_1d8d1c;
            case 0x1D8D20u: goto label_1d8d20;
            case 0x1D8D24u: goto label_1d8d24;
            case 0x1D8D28u: goto label_1d8d28;
            case 0x1D8D2Cu: goto label_1d8d2c;
            case 0x1D8D30u: goto label_1d8d30;
            case 0x1D8D34u: goto label_1d8d34;
            case 0x1D8D38u: goto label_1d8d38;
            case 0x1D8D3Cu: goto label_1d8d3c;
            case 0x1D8D40u: goto label_1d8d40;
            case 0x1D8D44u: goto label_1d8d44;
            case 0x1D8D48u: goto label_1d8d48;
            case 0x1D8D4Cu: goto label_1d8d4c;
            case 0x1D8D50u: goto label_1d8d50;
            case 0x1D8D54u: goto label_1d8d54;
            case 0x1D8D58u: goto label_1d8d58;
            case 0x1D8D5Cu: goto label_1d8d5c;
            case 0x1D8D60u: goto label_1d8d60;
            case 0x1D8D64u: goto label_1d8d64;
            case 0x1D8D68u: goto label_1d8d68;
            case 0x1D8D6Cu: goto label_1d8d6c;
            case 0x1D8D70u: goto label_1d8d70;
            case 0x1D8D74u: goto label_1d8d74;
            case 0x1D8D78u: goto label_1d8d78;
            case 0x1D8D7Cu: goto label_1d8d7c;
            case 0x1D8D80u: goto label_1d8d80;
            case 0x1D8D84u: goto label_1d8d84;
            case 0x1D8D88u: goto label_1d8d88;
            case 0x1D8D8Cu: goto label_1d8d8c;
            case 0x1D8D90u: goto label_1d8d90;
            case 0x1D8D94u: goto label_1d8d94;
            case 0x1D8D98u: goto label_1d8d98;
            case 0x1D8D9Cu: goto label_1d8d9c;
            case 0x1D8DA0u: goto label_1d8da0;
            case 0x1D8DA4u: goto label_1d8da4;
            case 0x1D8DA8u: goto label_1d8da8;
            case 0x1D8DACu: goto label_1d8dac;
            case 0x1D8DB0u: goto label_1d8db0;
            case 0x1D8DB4u: goto label_1d8db4;
            case 0x1D8DB8u: goto label_1d8db8;
            case 0x1D8DBCu: goto label_1d8dbc;
            case 0x1D8DC0u: goto label_1d8dc0;
            case 0x1D8DC4u: goto label_1d8dc4;
            case 0x1D8DC8u: goto label_1d8dc8;
            case 0x1D8DCCu: goto label_1d8dcc;
            case 0x1D8DD0u: goto label_1d8dd0;
            case 0x1D8DD4u: goto label_1d8dd4;
            case 0x1D8DD8u: goto label_1d8dd8;
            case 0x1D8DDCu: goto label_1d8ddc;
            case 0x1D8DE0u: goto label_1d8de0;
            case 0x1D8DE4u: goto label_1d8de4;
            case 0x1D8DE8u: goto label_1d8de8;
            case 0x1D8DECu: goto label_1d8dec;
            case 0x1D8DF0u: goto label_1d8df0;
            case 0x1D8DF4u: goto label_1d8df4;
            case 0x1D8DF8u: goto label_1d8df8;
            case 0x1D8DFCu: goto label_1d8dfc;
            case 0x1D8E00u: goto label_1d8e00;
            case 0x1D8E04u: goto label_1d8e04;
            case 0x1D8E08u: goto label_1d8e08;
            case 0x1D8E0Cu: goto label_1d8e0c;
            case 0x1D8E10u: goto label_1d8e10;
            case 0x1D8E14u: goto label_1d8e14;
            case 0x1D8E18u: goto label_1d8e18;
            case 0x1D8E1Cu: goto label_1d8e1c;
            case 0x1D8E20u: goto label_1d8e20;
            case 0x1D8E24u: goto label_1d8e24;
            case 0x1D8E28u: goto label_1d8e28;
            case 0x1D8E2Cu: goto label_1d8e2c;
            case 0x1D8E30u: goto label_1d8e30;
            case 0x1D8E34u: goto label_1d8e34;
            case 0x1D8E38u: goto label_1d8e38;
            case 0x1D8E3Cu: goto label_1d8e3c;
            case 0x1D8E40u: goto label_1d8e40;
            case 0x1D8E44u: goto label_1d8e44;
            case 0x1D8E48u: goto label_1d8e48;
            case 0x1D8E4Cu: goto label_1d8e4c;
            case 0x1D8E50u: goto label_1d8e50;
            case 0x1D8E54u: goto label_1d8e54;
            case 0x1D8E58u: goto label_1d8e58;
            case 0x1D8E5Cu: goto label_1d8e5c;
            case 0x1D8E60u: goto label_1d8e60;
            case 0x1D8E64u: goto label_1d8e64;
            case 0x1D8E68u: goto label_1d8e68;
            case 0x1D8E6Cu: goto label_1d8e6c;
            case 0x1D8E70u: goto label_1d8e70;
            case 0x1D8E74u: goto label_1d8e74;
            case 0x1D8E78u: goto label_1d8e78;
            case 0x1D8E7Cu: goto label_1d8e7c;
            case 0x1D8E80u: goto label_1d8e80;
            case 0x1D8E84u: goto label_1d8e84;
            case 0x1D8E88u: goto label_1d8e88;
            case 0x1D8E8Cu: goto label_1d8e8c;
            case 0x1D8E90u: goto label_1d8e90;
            case 0x1D8E94u: goto label_1d8e94;
            case 0x1D8E98u: goto label_1d8e98;
            case 0x1D8E9Cu: goto label_1d8e9c;
            case 0x1D8EA0u: goto label_1d8ea0;
            case 0x1D8EA4u: goto label_1d8ea4;
            case 0x1D8EA8u: goto label_1d8ea8;
            case 0x1D8EACu: goto label_1d8eac;
            case 0x1D8EB0u: goto label_1d8eb0;
            case 0x1D8EB4u: goto label_1d8eb4;
            case 0x1D8EB8u: goto label_1d8eb8;
            case 0x1D8EBCu: goto label_1d8ebc;
            case 0x1D8EC0u: goto label_1d8ec0;
            case 0x1D8EC4u: goto label_1d8ec4;
            case 0x1D8EC8u: goto label_1d8ec8;
            case 0x1D8ECCu: goto label_1d8ecc;
            case 0x1D8ED0u: goto label_1d8ed0;
            case 0x1D8ED4u: goto label_1d8ed4;
            case 0x1D8ED8u: goto label_1d8ed8;
            case 0x1D8EDCu: goto label_1d8edc;
            case 0x1D8EE0u: goto label_1d8ee0;
            case 0x1D8EE4u: goto label_1d8ee4;
            case 0x1D8EE8u: goto label_1d8ee8;
            case 0x1D8EECu: goto label_1d8eec;
            case 0x1D8EF0u: goto label_1d8ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8A60u;
label_1d8a60:
    // 0x1d8a60: 0xc0763c0
label_1d8a64:
    if (ctx->pc == 0x1D8A64u) {
        ctx->pc = 0x1D8A68u;
        goto label_1d8a68;
    }
    ctx->pc = 0x1D8A60u;
    SET_GPR_U32(ctx, 31, 0x1D8A68u);
    ctx->pc = 0x1D8F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        initTaruEki__9FcvEffectFv_0x1d8f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A68u; }
        else if (ctx->pc != 0x1D8A68u) { ctx->pc = 0x1D8A68u; }
    }
    if (ctx->pc != 0x1D8A68u) { return; }
    ctx->pc = 0x1D8A68u;
label_1d8a68:
    // 0x1d8a68: 0x10000120
label_1d8a6c:
    if (ctx->pc == 0x1D8A6Cu) {
        ctx->pc = 0x1D8A6Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1D8A70u;
        goto label_1d8a70;
    }
    ctx->pc = 0x1D8A68u;
    {
        const bool branch_taken_0x1d8a68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D8A6Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1d8a68) {
            ctx->pc = 0x1D8EECu;
            goto label_1d8eec;
        }
    }
    ctx->pc = 0x1D8A70u;
label_1d8a70:
    // 0x1d8a70: 0xc0763f8
label_1d8a74:
    if (ctx->pc == 0x1D8A74u) {
        ctx->pc = 0x1D8A78u;
        goto label_1d8a78;
    }
    ctx->pc = 0x1D8A70u;
    SET_GPR_U32(ctx, 31, 0x1D8A78u);
    ctx->pc = 0x1D8FE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSt3TaruEki__9FcvEffectFv_0x1d8fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A78u; }
        else if (ctx->pc != 0x1D8A78u) { ctx->pc = 0x1D8A78u; }
    }
    if (ctx->pc != 0x1D8A78u) { return; }
    ctx->pc = 0x1D8A78u;
label_1d8a78:
    // 0x1d8a78: 0x1000011b
label_1d8a7c:
    if (ctx->pc == 0x1D8A7Cu) {
        ctx->pc = 0x1D8A80u;
        goto label_1d8a80;
    }
    ctx->pc = 0x1D8A78u;
    {
        const bool branch_taken_0x1d8a78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8a78) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8A80u;
label_1d8a80:
    // 0x1d8a80: 0xc076430
label_1d8a84:
    if (ctx->pc == 0x1D8A84u) {
        ctx->pc = 0x1D8A88u;
        goto label_1d8a88;
    }
    ctx->pc = 0x1D8A80u;
    SET_GPR_U32(ctx, 31, 0x1D8A88u);
    ctx->pc = 0x1D90C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initPlant01__9FcvEffectFv_0x1d90c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A88u; }
        else if (ctx->pc != 0x1D8A88u) { ctx->pc = 0x1D8A88u; }
    }
    if (ctx->pc != 0x1D8A88u) { return; }
    ctx->pc = 0x1D8A88u;
label_1d8a88:
    // 0x1d8a88: 0x10000117
label_1d8a8c:
    if (ctx->pc == 0x1D8A8Cu) {
        ctx->pc = 0x1D8A90u;
        goto label_1d8a90;
    }
    ctx->pc = 0x1D8A88u;
    {
        const bool branch_taken_0x1d8a88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8a88) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8A90u;
label_1d8a90:
    // 0x1d8a90: 0xc0764f4
label_1d8a94:
    if (ctx->pc == 0x1D8A94u) {
        ctx->pc = 0x1D8A98u;
        goto label_1d8a98;
    }
    ctx->pc = 0x1D8A90u;
    SET_GPR_U32(ctx, 31, 0x1D8A98u);
    ctx->pc = 0x1D93D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initPlant02__9FcvEffectFv_0x1d93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A98u; }
        else if (ctx->pc != 0x1D8A98u) { ctx->pc = 0x1D8A98u; }
    }
    if (ctx->pc != 0x1D8A98u) { return; }
    ctx->pc = 0x1D8A98u;
label_1d8a98:
    // 0x1d8a98: 0x10000113
label_1d8a9c:
    if (ctx->pc == 0x1D8A9Cu) {
        ctx->pc = 0x1D8AA0u;
        goto label_1d8aa0;
    }
    ctx->pc = 0x1D8A98u;
    {
        const bool branch_taken_0x1d8a98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8a98) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8AA0u;
label_1d8aa0:
    // 0x1d8aa0: 0xc076580
label_1d8aa4:
    if (ctx->pc == 0x1D8AA4u) {
        ctx->pc = 0x1D8AA8u;
        goto label_1d8aa8;
    }
    ctx->pc = 0x1D8AA0u;
    SET_GPR_U32(ctx, 31, 0x1D8AA8u);
    ctx->pc = 0x1D9600u;
    {
        const uint32_t __entryPc = ctx->pc;
        initPlant03__9FcvEffectFv_0x1d9600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AA8u; }
        else if (ctx->pc != 0x1D8AA8u) { ctx->pc = 0x1D8AA8u; }
    }
    if (ctx->pc != 0x1D8AA8u) { return; }
    ctx->pc = 0x1D8AA8u;
label_1d8aa8:
    // 0x1d8aa8: 0x1000010f
label_1d8aac:
    if (ctx->pc == 0x1D8AACu) {
        ctx->pc = 0x1D8AB0u;
        goto label_1d8ab0;
    }
    ctx->pc = 0x1D8AA8u;
    {
        const bool branch_taken_0x1d8aa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8aa8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8AB0u;
label_1d8ab0:
    // 0x1d8ab0: 0xc076660
label_1d8ab4:
    if (ctx->pc == 0x1D8AB4u) {
        ctx->pc = 0x1D8AB8u;
        goto label_1d8ab8;
    }
    ctx->pc = 0x1D8AB0u;
    SET_GPR_U32(ctx, 31, 0x1D8AB8u);
    ctx->pc = 0x1D9980u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSt3Plant01__9FcvEffectFv_0x1d9980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AB8u; }
        else if (ctx->pc != 0x1D8AB8u) { ctx->pc = 0x1D8AB8u; }
    }
    if (ctx->pc != 0x1D8AB8u) { return; }
    ctx->pc = 0x1D8AB8u;
label_1d8ab8:
    // 0x1d8ab8: 0x1000010b
label_1d8abc:
    if (ctx->pc == 0x1D8ABCu) {
        ctx->pc = 0x1D8AC0u;
        goto label_1d8ac0;
    }
    ctx->pc = 0x1D8AB8u;
    {
        const bool branch_taken_0x1d8ab8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8ab8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8AC0u;
label_1d8ac0:
    // 0x1d8ac0: 0xc076724
label_1d8ac4:
    if (ctx->pc == 0x1D8AC4u) {
        ctx->pc = 0x1D8AC8u;
        goto label_1d8ac8;
    }
    ctx->pc = 0x1D8AC0u;
    SET_GPR_U32(ctx, 31, 0x1D8AC8u);
    ctx->pc = 0x1D9C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSt4Plant01__9FcvEffectFv_0x1d9c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AC8u; }
        else if (ctx->pc != 0x1D8AC8u) { ctx->pc = 0x1D8AC8u; }
    }
    if (ctx->pc != 0x1D8AC8u) { return; }
    ctx->pc = 0x1D8AC8u;
label_1d8ac8:
    // 0x1d8ac8: 0x10000107
label_1d8acc:
    if (ctx->pc == 0x1D8ACCu) {
        ctx->pc = 0x1D8AD0u;
        goto label_1d8ad0;
    }
    ctx->pc = 0x1D8AC8u;
    {
        const bool branch_taken_0x1d8ac8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8ac8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8AD0u;
label_1d8ad0:
    // 0x1d8ad0: 0xc0767e8
label_1d8ad4:
    if (ctx->pc == 0x1D8AD4u) {
        ctx->pc = 0x1D8AD8u;
        goto label_1d8ad8;
    }
    ctx->pc = 0x1D8AD0u;
    SET_GPR_U32(ctx, 31, 0x1D8AD8u);
    ctx->pc = 0x1D9FA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSt4Plant02__9FcvEffectFv_0x1d9fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AD8u; }
        else if (ctx->pc != 0x1D8AD8u) { ctx->pc = 0x1D8AD8u; }
    }
    if (ctx->pc != 0x1D8AD8u) { return; }
    ctx->pc = 0x1D8AD8u;
label_1d8ad8:
    // 0x1d8ad8: 0x10000103
label_1d8adc:
    if (ctx->pc == 0x1D8ADCu) {
        ctx->pc = 0x1D8AE0u;
        goto label_1d8ae0;
    }
    ctx->pc = 0x1D8AD8u;
    {
        const bool branch_taken_0x1d8ad8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8ad8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8AE0u;
label_1d8ae0:
    // 0x1d8ae0: 0xc076874
label_1d8ae4:
    if (ctx->pc == 0x1D8AE4u) {
        ctx->pc = 0x1D8AE8u;
        goto label_1d8ae8;
    }
    ctx->pc = 0x1D8AE0u;
    SET_GPR_U32(ctx, 31, 0x1D8AE8u);
    ctx->pc = 0x1DA1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initTutiKemu__9FcvEffectFv_0x1da1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AE8u; }
        else if (ctx->pc != 0x1D8AE8u) { ctx->pc = 0x1D8AE8u; }
    }
    if (ctx->pc != 0x1D8AE8u) { return; }
    ctx->pc = 0x1D8AE8u;
label_1d8ae8:
    // 0x1d8ae8: 0x100000ff
label_1d8aec:
    if (ctx->pc == 0x1D8AECu) {
        ctx->pc = 0x1D8AF0u;
        goto label_1d8af0;
    }
    ctx->pc = 0x1D8AE8u;
    {
        const bool branch_taken_0x1d8ae8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8ae8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8AF0u;
label_1d8af0:
    // 0x1d8af0: 0xc0768b4
label_1d8af4:
    if (ctx->pc == 0x1D8AF4u) {
        ctx->pc = 0x1D8AF8u;
        goto label_1d8af8;
    }
    ctx->pc = 0x1D8AF0u;
    SET_GPR_U32(ctx, 31, 0x1D8AF8u);
    ctx->pc = 0x1DA2D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initEneYaraKemu__9FcvEffectFv_0x1da2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AF8u; }
        else if (ctx->pc != 0x1D8AF8u) { ctx->pc = 0x1D8AF8u; }
    }
    if (ctx->pc != 0x1D8AF8u) { return; }
    ctx->pc = 0x1D8AF8u;
label_1d8af8:
    // 0x1d8af8: 0x100000fb
label_1d8afc:
    if (ctx->pc == 0x1D8AFCu) {
        ctx->pc = 0x1D8B00u;
        goto label_1d8b00;
    }
    ctx->pc = 0x1D8AF8u;
    {
        const bool branch_taken_0x1d8af8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8af8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8B00u;
label_1d8b00:
    // 0x1d8b00: 0xc0768f4
label_1d8b04:
    if (ctx->pc == 0x1D8B04u) {
        ctx->pc = 0x1D8B08u;
        goto label_1d8b08;
    }
    ctx->pc = 0x1D8B00u;
    SET_GPR_U32(ctx, 31, 0x1D8B08u);
    ctx->pc = 0x1DA3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initEneYaraKemu2__9FcvEffectFv_0x1da3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B08u; }
        else if (ctx->pc != 0x1D8B08u) { ctx->pc = 0x1D8B08u; }
    }
    if (ctx->pc != 0x1D8B08u) { return; }
    ctx->pc = 0x1D8B08u;
label_1d8b08:
    // 0x1d8b08: 0x100000f7
label_1d8b0c:
    if (ctx->pc == 0x1D8B0Cu) {
        ctx->pc = 0x1D8B10u;
        goto label_1d8b10;
    }
    ctx->pc = 0x1D8B08u;
    {
        const bool branch_taken_0x1d8b08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8b08) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8B10u;
label_1d8b10:
    // 0x1d8b10: 0xc076934
label_1d8b14:
    if (ctx->pc == 0x1D8B14u) {
        ctx->pc = 0x1D8B18u;
        goto label_1d8b18;
    }
    ctx->pc = 0x1D8B10u;
    SET_GPR_U32(ctx, 31, 0x1D8B18u);
    ctx->pc = 0x1DA4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initEneJumpKemu__9FcvEffectFv_0x1da4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B18u; }
        else if (ctx->pc != 0x1D8B18u) { ctx->pc = 0x1D8B18u; }
    }
    if (ctx->pc != 0x1D8B18u) { return; }
    ctx->pc = 0x1D8B18u;
label_1d8b18:
    // 0x1d8b18: 0x100000f3
label_1d8b1c:
    if (ctx->pc == 0x1D8B1Cu) {
        ctx->pc = 0x1D8B20u;
        goto label_1d8b20;
    }
    ctx->pc = 0x1D8B18u;
    {
        const bool branch_taken_0x1d8b18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8b18) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8B20u;
label_1d8b20:
    // 0x1d8b20: 0xc076974
label_1d8b24:
    if (ctx->pc == 0x1D8B24u) {
        ctx->pc = 0x1D8B28u;
        goto label_1d8b28;
    }
    ctx->pc = 0x1D8B20u;
    SET_GPR_U32(ctx, 31, 0x1D8B28u);
    ctx->pc = 0x1DA5D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initEneTurnKemu__9FcvEffectFv_0x1da5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B28u; }
        else if (ctx->pc != 0x1D8B28u) { ctx->pc = 0x1D8B28u; }
    }
    if (ctx->pc != 0x1D8B28u) { return; }
    ctx->pc = 0x1D8B28u;
label_1d8b28:
    // 0x1d8b28: 0x100000ef
label_1d8b2c:
    if (ctx->pc == 0x1D8B2Cu) {
        ctx->pc = 0x1D8B30u;
        goto label_1d8b30;
    }
    ctx->pc = 0x1D8B28u;
    {
        const bool branch_taken_0x1d8b28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8b28) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8B30u;
label_1d8b30:
    // 0x1d8b30: 0xc0769b4
label_1d8b34:
    if (ctx->pc == 0x1D8B34u) {
        ctx->pc = 0x1D8B38u;
        goto label_1d8b38;
    }
    ctx->pc = 0x1D8B30u;
    SET_GPR_U32(ctx, 31, 0x1D8B38u);
    ctx->pc = 0x1DA6D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initPlDashKemu__9FcvEffectFv_0x1da6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B38u; }
        else if (ctx->pc != 0x1D8B38u) { ctx->pc = 0x1D8B38u; }
    }
    if (ctx->pc != 0x1D8B38u) { return; }
    ctx->pc = 0x1D8B38u;
label_1d8b38:
    // 0x1d8b38: 0x100000eb
label_1d8b3c:
    if (ctx->pc == 0x1D8B3Cu) {
        ctx->pc = 0x1D8B40u;
        goto label_1d8b40;
    }
    ctx->pc = 0x1D8B38u;
    {
        const bool branch_taken_0x1d8b38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8b38) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8B40u;
label_1d8b40:
    // 0x1d8b40: 0xc0769f4
label_1d8b44:
    if (ctx->pc == 0x1D8B44u) {
        ctx->pc = 0x1D8B48u;
        goto label_1d8b48;
    }
    ctx->pc = 0x1D8B40u;
    SET_GPR_U32(ctx, 31, 0x1D8B48u);
    ctx->pc = 0x1DA7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initPlChakuchiKemu__9FcvEffectFv_0x1da7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B48u; }
        else if (ctx->pc != 0x1D8B48u) { ctx->pc = 0x1D8B48u; }
    }
    if (ctx->pc != 0x1D8B48u) { return; }
    ctx->pc = 0x1D8B48u;
label_1d8b48:
    // 0x1d8b48: 0x100000e7
label_1d8b4c:
    if (ctx->pc == 0x1D8B4Cu) {
        ctx->pc = 0x1D8B50u;
        goto label_1d8b50;
    }
    ctx->pc = 0x1D8B48u;
    {
        const bool branch_taken_0x1d8b48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8b48) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8B50u;
label_1d8b50:
    // 0x1d8b50: 0xc076a34
label_1d8b54:
    if (ctx->pc == 0x1D8B54u) {
        ctx->pc = 0x1D8B58u;
        goto label_1d8b58;
    }
    ctx->pc = 0x1D8B50u;
    SET_GPR_U32(ctx, 31, 0x1D8B58u);
    ctx->pc = 0x1DA8D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSubGirlIki__9FcvEffectFv_0x1da8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B58u; }
        else if (ctx->pc != 0x1D8B58u) { ctx->pc = 0x1D8B58u; }
    }
    if (ctx->pc != 0x1D8B58u) { return; }
    ctx->pc = 0x1D8B58u;
label_1d8b58:
    // 0x1d8b58: 0x100000e3
label_1d8b5c:
    if (ctx->pc == 0x1D8B5Cu) {
        ctx->pc = 0x1D8B60u;
        goto label_1d8b60;
    }
    ctx->pc = 0x1D8B58u;
    {
        const bool branch_taken_0x1d8b58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8b58) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8B60u;
label_1d8b60:
    // 0x1d8b60: 0xc076a74
label_1d8b64:
    if (ctx->pc == 0x1D8B64u) {
        ctx->pc = 0x1D8B68u;
        goto label_1d8b68;
    }
    ctx->pc = 0x1D8B60u;
    SET_GPR_U32(ctx, 31, 0x1D8B68u);
    ctx->pc = 0x1DA9D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initNikunome__9FcvEffectFv_0x1da9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B68u; }
        else if (ctx->pc != 0x1D8B68u) { ctx->pc = 0x1D8B68u; }
    }
    if (ctx->pc != 0x1D8B68u) { return; }
    ctx->pc = 0x1D8B68u;
label_1d8b68:
    // 0x1d8b68: 0x100000df
label_1d8b6c:
    if (ctx->pc == 0x1D8B6Cu) {
        ctx->pc = 0x1D8B70u;
        goto label_1d8b70;
    }
    ctx->pc = 0x1D8B68u;
    {
        const bool branch_taken_0x1d8b68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8b68) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8B70u;
label_1d8b70:
    // 0x1d8b70: 0xc076ac8
label_1d8b74:
    if (ctx->pc == 0x1D8B74u) {
        ctx->pc = 0x1D8B78u;
        goto label_1d8b78;
    }
    ctx->pc = 0x1D8B70u;
    SET_GPR_U32(ctx, 31, 0x1D8B78u);
    ctx->pc = 0x1DAB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        initMonoKemu__9FcvEffectFv_0x1dab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B78u; }
        else if (ctx->pc != 0x1D8B78u) { ctx->pc = 0x1D8B78u; }
    }
    if (ctx->pc != 0x1D8B78u) { return; }
    ctx->pc = 0x1D8B78u;
label_1d8b78:
    // 0x1d8b78: 0x100000db
label_1d8b7c:
    if (ctx->pc == 0x1D8B7Cu) {
        ctx->pc = 0x1D8B80u;
        goto label_1d8b80;
    }
    ctx->pc = 0x1D8B78u;
    {
        const bool branch_taken_0x1d8b78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8b78) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8B80u;
label_1d8b80:
    // 0x1d8b80: 0xc076af8
label_1d8b84:
    if (ctx->pc == 0x1D8B84u) {
        ctx->pc = 0x1D8B88u;
        goto label_1d8b88;
    }
    ctx->pc = 0x1D8B80u;
    SET_GPR_U32(ctx, 31, 0x1D8B88u);
    ctx->pc = 0x1DABE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBos2Hensin__9FcvEffectFv_0x1dabe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B88u; }
        else if (ctx->pc != 0x1D8B88u) { ctx->pc = 0x1D8B88u; }
    }
    if (ctx->pc != 0x1D8B88u) { return; }
    ctx->pc = 0x1D8B88u;
label_1d8b88:
    // 0x1d8b88: 0x100000d7
label_1d8b8c:
    if (ctx->pc == 0x1D8B8Cu) {
        ctx->pc = 0x1D8B90u;
        goto label_1d8b90;
    }
    ctx->pc = 0x1D8B88u;
    {
        const bool branch_taken_0x1d8b88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8b88) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8B90u;
label_1d8b90:
    // 0x1d8b90: 0xc076b78
label_1d8b94:
    if (ctx->pc == 0x1D8B94u) {
        ctx->pc = 0x1D8B98u;
        goto label_1d8b98;
    }
    ctx->pc = 0x1D8B90u;
    SET_GPR_U32(ctx, 31, 0x1D8B98u);
    ctx->pc = 0x1DADE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initDonjonSlice__9FcvEffectFv_0x1dade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B98u; }
        else if (ctx->pc != 0x1D8B98u) { ctx->pc = 0x1D8B98u; }
    }
    if (ctx->pc != 0x1D8B98u) { return; }
    ctx->pc = 0x1D8B98u;
label_1d8b98:
    // 0x1d8b98: 0x100000d3
label_1d8b9c:
    if (ctx->pc == 0x1D8B9Cu) {
        ctx->pc = 0x1D8BA0u;
        goto label_1d8ba0;
    }
    ctx->pc = 0x1D8B98u;
    {
        const bool branch_taken_0x1d8b98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8b98) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8BA0u;
label_1d8ba0:
    // 0x1d8ba0: 0xc076bd4
label_1d8ba4:
    if (ctx->pc == 0x1D8BA4u) {
        ctx->pc = 0x1D8BA8u;
        goto label_1d8ba8;
    }
    ctx->pc = 0x1D8BA0u;
    SET_GPR_U32(ctx, 31, 0x1D8BA8u);
    ctx->pc = 0x1DAF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        initDonjonSmoke__9FcvEffectFv_0x1daf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BA8u; }
        else if (ctx->pc != 0x1D8BA8u) { ctx->pc = 0x1D8BA8u; }
    }
    if (ctx->pc != 0x1D8BA8u) { return; }
    ctx->pc = 0x1D8BA8u;
label_1d8ba8:
    // 0x1d8ba8: 0x100000cf
label_1d8bac:
    if (ctx->pc == 0x1D8BACu) {
        ctx->pc = 0x1D8BB0u;
        goto label_1d8bb0;
    }
    ctx->pc = 0x1D8BA8u;
    {
        const bool branch_taken_0x1d8ba8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8ba8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8BB0u;
label_1d8bb0:
    // 0x1d8bb0: 0xc076c30
label_1d8bb4:
    if (ctx->pc == 0x1D8BB4u) {
        ctx->pc = 0x1D8BB8u;
        goto label_1d8bb8;
    }
    ctx->pc = 0x1D8BB0u;
    SET_GPR_U32(ctx, 31, 0x1D8BB8u);
    ctx->pc = 0x1DB0C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initDonjonSmokeB__9FcvEffectFv_0x1db0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BB8u; }
        else if (ctx->pc != 0x1D8BB8u) { ctx->pc = 0x1D8BB8u; }
    }
    if (ctx->pc != 0x1D8BB8u) { return; }
    ctx->pc = 0x1D8BB8u;
label_1d8bb8:
    // 0x1d8bb8: 0x100000cb
label_1d8bbc:
    if (ctx->pc == 0x1D8BBCu) {
        ctx->pc = 0x1D8BC0u;
        goto label_1d8bc0;
    }
    ctx->pc = 0x1D8BB8u;
    {
        const bool branch_taken_0x1d8bb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8bb8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8BC0u;
label_1d8bc0:
    // 0x1d8bc0: 0xc076c68
label_1d8bc4:
    if (ctx->pc == 0x1D8BC4u) {
        ctx->pc = 0x1D8BC8u;
        goto label_1d8bc8;
    }
    ctx->pc = 0x1D8BC0u;
    SET_GPR_U32(ctx, 31, 0x1D8BC8u);
    ctx->pc = 0x1DB1A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initDonjonSmokeC__9FcvEffectFv_0x1db1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BC8u; }
        else if (ctx->pc != 0x1D8BC8u) { ctx->pc = 0x1D8BC8u; }
    }
    if (ctx->pc != 0x1D8BC8u) { return; }
    ctx->pc = 0x1D8BC8u;
label_1d8bc8:
    // 0x1d8bc8: 0x100000c7
label_1d8bcc:
    if (ctx->pc == 0x1D8BCCu) {
        ctx->pc = 0x1D8BD0u;
        goto label_1d8bd0;
    }
    ctx->pc = 0x1D8BC8u;
    {
        const bool branch_taken_0x1d8bc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8bc8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8BD0u;
label_1d8bd0:
    // 0x1d8bd0: 0xc076ca0
label_1d8bd4:
    if (ctx->pc == 0x1D8BD4u) {
        ctx->pc = 0x1D8BD8u;
        goto label_1d8bd8;
    }
    ctx->pc = 0x1D8BD0u;
    SET_GPR_U32(ctx, 31, 0x1D8BD8u);
    ctx->pc = 0x1DB280u;
    {
        const uint32_t __entryPc = ctx->pc;
        initKareha__9FcvEffectFv_0x1db280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BD8u; }
        else if (ctx->pc != 0x1D8BD8u) { ctx->pc = 0x1D8BD8u; }
    }
    if (ctx->pc != 0x1D8BD8u) { return; }
    ctx->pc = 0x1D8BD8u;
label_1d8bd8:
    // 0x1d8bd8: 0x100000c3
label_1d8bdc:
    if (ctx->pc == 0x1D8BDCu) {
        ctx->pc = 0x1D8BE0u;
        goto label_1d8be0;
    }
    ctx->pc = 0x1D8BD8u;
    {
        const bool branch_taken_0x1d8bd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8bd8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8BE0u;
label_1d8be0:
    // 0x1d8be0: 0xc076cd0
label_1d8be4:
    if (ctx->pc == 0x1D8BE4u) {
        ctx->pc = 0x1D8BE8u;
        goto label_1d8be8;
    }
    ctx->pc = 0x1D8BE0u;
    SET_GPR_U32(ctx, 31, 0x1D8BE8u);
    ctx->pc = 0x1DB340u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss3xBomb__9FcvEffectFv_0x1db340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BE8u; }
        else if (ctx->pc != 0x1D8BE8u) { ctx->pc = 0x1D8BE8u; }
    }
    if (ctx->pc != 0x1D8BE8u) { return; }
    ctx->pc = 0x1D8BE8u;
label_1d8be8:
    // 0x1d8be8: 0x100000bf
label_1d8bec:
    if (ctx->pc == 0x1D8BECu) {
        ctx->pc = 0x1D8BF0u;
        goto label_1d8bf0;
    }
    ctx->pc = 0x1D8BE8u;
    {
        const bool branch_taken_0x1d8be8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8be8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8BF0u;
label_1d8bf0:
    // 0x1d8bf0: 0xc076d94
label_1d8bf4:
    if (ctx->pc == 0x1D8BF4u) {
        ctx->pc = 0x1D8BF8u;
        goto label_1d8bf8;
    }
    ctx->pc = 0x1D8BF0u;
    SET_GPR_U32(ctx, 31, 0x1D8BF8u);
    ctx->pc = 0x1DB650u;
    {
        const uint32_t __entryPc = ctx->pc;
        initMurahensin__9FcvEffectFv_0x1db650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BF8u; }
        else if (ctx->pc != 0x1D8BF8u) { ctx->pc = 0x1D8BF8u; }
    }
    if (ctx->pc != 0x1D8BF8u) { return; }
    ctx->pc = 0x1D8BF8u;
label_1d8bf8:
    // 0x1d8bf8: 0x100000bb
label_1d8bfc:
    if (ctx->pc == 0x1D8BFCu) {
        ctx->pc = 0x1D8C00u;
        goto label_1d8c00;
    }
    ctx->pc = 0x1D8BF8u;
    {
        const bool branch_taken_0x1d8bf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8bf8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8C00u;
label_1d8c00:
    // 0x1d8c00: 0xc076df0
label_1d8c04:
    if (ctx->pc == 0x1D8C04u) {
        ctx->pc = 0x1D8C08u;
        goto label_1d8c08;
    }
    ctx->pc = 0x1D8C00u;
    SET_GPR_U32(ctx, 31, 0x1D8C08u);
    ctx->pc = 0x1DB7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss3xLaserPrep__9FcvEffectFv_0x1db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C08u; }
        else if (ctx->pc != 0x1D8C08u) { ctx->pc = 0x1D8C08u; }
    }
    if (ctx->pc != 0x1D8C08u) { return; }
    ctx->pc = 0x1D8C08u;
label_1d8c08:
    // 0x1d8c08: 0x100000b7
label_1d8c0c:
    if (ctx->pc == 0x1D8C0Cu) {
        ctx->pc = 0x1D8C10u;
        goto label_1d8c10;
    }
    ctx->pc = 0x1D8C08u;
    {
        const bool branch_taken_0x1d8c08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8c08) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8C10u;
label_1d8c10:
    // 0x1d8c10: 0xc076dcc
label_1d8c14:
    if (ctx->pc == 0x1D8C14u) {
        ctx->pc = 0x1D8C18u;
        goto label_1d8c18;
    }
    ctx->pc = 0x1D8C10u;
    SET_GPR_U32(ctx, 31, 0x1D8C18u);
    ctx->pc = 0x1DB730u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss3xBombEyeH__9FcvEffectFv_0x1db730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C18u; }
        else if (ctx->pc != 0x1D8C18u) { ctx->pc = 0x1D8C18u; }
    }
    if (ctx->pc != 0x1D8C18u) { return; }
    ctx->pc = 0x1D8C18u;
label_1d8c18:
    // 0x1d8c18: 0x100000b3
label_1d8c1c:
    if (ctx->pc == 0x1D8C1Cu) {
        ctx->pc = 0x1D8C20u;
        goto label_1d8c20;
    }
    ctx->pc = 0x1D8C18u;
    {
        const bool branch_taken_0x1d8c18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8c18) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8C20u;
label_1d8c20:
    // 0x1d8c20: 0xc076e48
label_1d8c24:
    if (ctx->pc == 0x1D8C24u) {
        ctx->pc = 0x1D8C28u;
        goto label_1d8c28;
    }
    ctx->pc = 0x1D8C20u;
    SET_GPR_U32(ctx, 31, 0x1D8C28u);
    ctx->pc = 0x1DB920u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSt1EneJump__9FcvEffectFv_0x1db920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C28u; }
        else if (ctx->pc != 0x1D8C28u) { ctx->pc = 0x1D8C28u; }
    }
    if (ctx->pc != 0x1D8C28u) { return; }
    ctx->pc = 0x1D8C28u;
label_1d8c28:
    // 0x1d8c28: 0x100000af
label_1d8c2c:
    if (ctx->pc == 0x1D8C2Cu) {
        ctx->pc = 0x1D8C30u;
        goto label_1d8c30;
    }
    ctx->pc = 0x1D8C28u;
    {
        const bool branch_taken_0x1d8c28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8c28) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8C30u;
label_1d8c30:
    // 0x1d8c30: 0xc076e98
label_1d8c34:
    if (ctx->pc == 0x1D8C34u) {
        ctx->pc = 0x1D8C38u;
        goto label_1d8c38;
    }
    ctx->pc = 0x1D8C30u;
    SET_GPR_U32(ctx, 31, 0x1D8C38u);
    ctx->pc = 0x1DBA60u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSt1EneJump2__9FcvEffectFv_0x1dba60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C38u; }
        else if (ctx->pc != 0x1D8C38u) { ctx->pc = 0x1D8C38u; }
    }
    if (ctx->pc != 0x1D8C38u) { return; }
    ctx->pc = 0x1D8C38u;
label_1d8c38:
    // 0x1d8c38: 0x100000ab
label_1d8c3c:
    if (ctx->pc == 0x1D8C3Cu) {
        ctx->pc = 0x1D8C40u;
        goto label_1d8c40;
    }
    ctx->pc = 0x1D8C38u;
    {
        const bool branch_taken_0x1d8c38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8c38) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8C40u;
label_1d8c40:
    // 0x1d8c40: 0xc076ef4
label_1d8c44:
    if (ctx->pc == 0x1D8C44u) {
        ctx->pc = 0x1D8C48u;
        goto label_1d8c48;
    }
    ctx->pc = 0x1D8C40u;
    SET_GPR_U32(ctx, 31, 0x1D8C48u);
    ctx->pc = 0x1DBBD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initMurabitoHensinHara__9FcvEffectFv_0x1dbbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C48u; }
        else if (ctx->pc != 0x1D8C48u) { ctx->pc = 0x1D8C48u; }
    }
    if (ctx->pc != 0x1D8C48u) { return; }
    ctx->pc = 0x1D8C48u;
label_1d8c48:
    // 0x1d8c48: 0x100000a7
label_1d8c4c:
    if (ctx->pc == 0x1D8C4Cu) {
        ctx->pc = 0x1D8C50u;
        goto label_1d8c50;
    }
    ctx->pc = 0x1D8C48u;
    {
        const bool branch_taken_0x1d8c48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8c48) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8C50u;
label_1d8c50:
    // 0x1d8c50: 0xc076f54
label_1d8c54:
    if (ctx->pc == 0x1D8C54u) {
        ctx->pc = 0x1D8C58u;
        goto label_1d8c58;
    }
    ctx->pc = 0x1D8C50u;
    SET_GPR_U32(ctx, 31, 0x1D8C58u);
    ctx->pc = 0x1DBD50u;
    {
        const uint32_t __entryPc = ctx->pc;
        initMurabitoHensinKata__9FcvEffectFv_0x1dbd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C58u; }
        else if (ctx->pc != 0x1D8C58u) { ctx->pc = 0x1D8C58u; }
    }
    if (ctx->pc != 0x1D8C58u) { return; }
    ctx->pc = 0x1D8C58u;
label_1d8c58:
    // 0x1d8c58: 0x100000a3
label_1d8c5c:
    if (ctx->pc == 0x1D8C5Cu) {
        ctx->pc = 0x1D8C60u;
        goto label_1d8c60;
    }
    ctx->pc = 0x1D8C58u;
    {
        const bool branch_taken_0x1d8c58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8c58) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8C60u;
label_1d8c60:
    // 0x1d8c60: 0xc076fb4
label_1d8c64:
    if (ctx->pc == 0x1D8C64u) {
        ctx->pc = 0x1D8C68u;
        goto label_1d8c68;
    }
    ctx->pc = 0x1D8C60u;
    SET_GPR_U32(ctx, 31, 0x1D8C68u);
    ctx->pc = 0x1DBED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initHamonSmall__9FcvEffectFv_0x1dbed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C68u; }
        else if (ctx->pc != 0x1D8C68u) { ctx->pc = 0x1D8C68u; }
    }
    if (ctx->pc != 0x1D8C68u) { return; }
    ctx->pc = 0x1D8C68u;
label_1d8c68:
    // 0x1d8c68: 0x1000009f
label_1d8c6c:
    if (ctx->pc == 0x1D8C6Cu) {
        ctx->pc = 0x1D8C70u;
        goto label_1d8c70;
    }
    ctx->pc = 0x1D8C68u;
    {
        const bool branch_taken_0x1d8c68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8c68) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8C70u;
label_1d8c70:
    // 0x1d8c70: 0xc076ff4
label_1d8c74:
    if (ctx->pc == 0x1D8C74u) {
        ctx->pc = 0x1D8C78u;
        goto label_1d8c78;
    }
    ctx->pc = 0x1D8C70u;
    SET_GPR_U32(ctx, 31, 0x1D8C78u);
    ctx->pc = 0x1DBFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initHamonLarge__9FcvEffectFv_0x1dbfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C78u; }
        else if (ctx->pc != 0x1D8C78u) { ctx->pc = 0x1D8C78u; }
    }
    if (ctx->pc != 0x1D8C78u) { return; }
    ctx->pc = 0x1D8C78u;
label_1d8c78:
    // 0x1d8c78: 0x1000009b
label_1d8c7c:
    if (ctx->pc == 0x1D8C7Cu) {
        ctx->pc = 0x1D8C80u;
        goto label_1d8c80;
    }
    ctx->pc = 0x1D8C78u;
    {
        const bool branch_taken_0x1d8c78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8c78) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8C80u;
label_1d8c80:
    // 0x1d8c80: 0xc077034
label_1d8c84:
    if (ctx->pc == 0x1D8C84u) {
        ctx->pc = 0x1D8C88u;
        goto label_1d8c88;
    }
    ctx->pc = 0x1D8C80u;
    SET_GPR_U32(ctx, 31, 0x1D8C88u);
    ctx->pc = 0x1DC0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss3Henshin__9FcvEffectFv_0x1dc0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C88u; }
        else if (ctx->pc != 0x1D8C88u) { ctx->pc = 0x1D8C88u; }
    }
    if (ctx->pc != 0x1D8C88u) { return; }
    ctx->pc = 0x1D8C88u;
label_1d8c88:
    // 0x1d8c88: 0x10000097
label_1d8c8c:
    if (ctx->pc == 0x1D8C8Cu) {
        ctx->pc = 0x1D8C90u;
        goto label_1d8c90;
    }
    ctx->pc = 0x1D8C88u;
    {
        const bool branch_taken_0x1d8c88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8c88) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8C90u;
label_1d8c90:
    // 0x1d8c90: 0xc0770b4
label_1d8c94:
    if (ctx->pc == 0x1D8C94u) {
        ctx->pc = 0x1D8C98u;
        goto label_1d8c98;
    }
    ctx->pc = 0x1D8C90u;
    SET_GPR_U32(ctx, 31, 0x1D8C98u);
    ctx->pc = 0x1DC2D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss3Henshin_w__9FcvEffectFv_0x1dc2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C98u; }
        else if (ctx->pc != 0x1D8C98u) { ctx->pc = 0x1D8C98u; }
    }
    if (ctx->pc != 0x1D8C98u) { return; }
    ctx->pc = 0x1D8C98u;
label_1d8c98:
    // 0x1d8c98: 0x10000093
label_1d8c9c:
    if (ctx->pc == 0x1D8C9Cu) {
        ctx->pc = 0x1D8CA0u;
        goto label_1d8ca0;
    }
    ctx->pc = 0x1D8C98u;
    {
        const bool branch_taken_0x1d8c98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8c98) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8CA0u;
label_1d8ca0:
    // 0x1d8ca0: 0xc0770e8
label_1d8ca4:
    if (ctx->pc == 0x1D8CA4u) {
        ctx->pc = 0x1D8CA8u;
        goto label_1d8ca8;
    }
    ctx->pc = 0x1D8CA0u;
    SET_GPR_U32(ctx, 31, 0x1D8CA8u);
    ctx->pc = 0x1DC3A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initYukiChakudan__9FcvEffectFv_0x1dc3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CA8u; }
        else if (ctx->pc != 0x1D8CA8u) { ctx->pc = 0x1D8CA8u; }
    }
    if (ctx->pc != 0x1D8CA8u) { return; }
    ctx->pc = 0x1D8CA8u;
label_1d8ca8:
    // 0x1d8ca8: 0x1000008f
label_1d8cac:
    if (ctx->pc == 0x1D8CACu) {
        ctx->pc = 0x1D8CB0u;
        goto label_1d8cb0;
    }
    ctx->pc = 0x1D8CA8u;
    {
        const bool branch_taken_0x1d8ca8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8ca8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8CB0u;
label_1d8cb0:
    // 0x1d8cb0: 0xc077128
label_1d8cb4:
    if (ctx->pc == 0x1D8CB4u) {
        ctx->pc = 0x1D8CB8u;
        goto label_1d8cb8;
    }
    ctx->pc = 0x1D8CB0u;
    SET_GPR_U32(ctx, 31, 0x1D8CB8u);
    ctx->pc = 0x1DC4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initEneHitA__9FcvEffectFv_0x1dc4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CB8u; }
        else if (ctx->pc != 0x1D8CB8u) { ctx->pc = 0x1D8CB8u; }
    }
    if (ctx->pc != 0x1D8CB8u) { return; }
    ctx->pc = 0x1D8CB8u;
label_1d8cb8:
    // 0x1d8cb8: 0x1000008b
label_1d8cbc:
    if (ctx->pc == 0x1D8CBCu) {
        ctx->pc = 0x1D8CC0u;
        goto label_1d8cc0;
    }
    ctx->pc = 0x1D8CB8u;
    {
        const bool branch_taken_0x1d8cb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8cb8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8CC0u;
label_1d8cc0:
    // 0x1d8cc0: 0xc07718c
label_1d8cc4:
    if (ctx->pc == 0x1D8CC4u) {
        ctx->pc = 0x1D8CC8u;
        goto label_1d8cc8;
    }
    ctx->pc = 0x1D8CC0u;
    SET_GPR_U32(ctx, 31, 0x1D8CC8u);
    ctx->pc = 0x1DC630u;
    {
        const uint32_t __entryPc = ctx->pc;
        initEneHitB__9FcvEffectFv_0x1dc630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CC8u; }
        else if (ctx->pc != 0x1D8CC8u) { ctx->pc = 0x1D8CC8u; }
    }
    if (ctx->pc != 0x1D8CC8u) { return; }
    ctx->pc = 0x1D8CC8u;
label_1d8cc8:
    // 0x1d8cc8: 0x10000087
label_1d8ccc:
    if (ctx->pc == 0x1D8CCCu) {
        ctx->pc = 0x1D8CD0u;
        goto label_1d8cd0;
    }
    ctx->pc = 0x1D8CC8u;
    {
        const bool branch_taken_0x1d8cc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8cc8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8CD0u;
label_1d8cd0:
    // 0x1d8cd0: 0xc0771f0
label_1d8cd4:
    if (ctx->pc == 0x1D8CD4u) {
        ctx->pc = 0x1D8CD8u;
        goto label_1d8cd8;
    }
    ctx->pc = 0x1D8CD0u;
    SET_GPR_U32(ctx, 31, 0x1D8CD8u);
    ctx->pc = 0x1DC7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initEMageBallLoop__9FcvEffectFv_0x1dc7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CD8u; }
        else if (ctx->pc != 0x1D8CD8u) { ctx->pc = 0x1D8CD8u; }
    }
    if (ctx->pc != 0x1D8CD8u) { return; }
    ctx->pc = 0x1D8CD8u;
label_1d8cd8:
    // 0x1d8cd8: 0x10000083
label_1d8cdc:
    if (ctx->pc == 0x1D8CDCu) {
        ctx->pc = 0x1D8CE0u;
        goto label_1d8ce0;
    }
    ctx->pc = 0x1D8CD8u;
    {
        const bool branch_taken_0x1d8cd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8cd8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8CE0u;
label_1d8ce0:
    // 0x1d8ce0: 0xc077234
label_1d8ce4:
    if (ctx->pc == 0x1D8CE4u) {
        ctx->pc = 0x1D8CE8u;
        goto label_1d8ce8;
    }
    ctx->pc = 0x1D8CE0u;
    SET_GPR_U32(ctx, 31, 0x1D8CE8u);
    ctx->pc = 0x1DC8D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initDrumcanSmoke__9FcvEffectFv_0x1dc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CE8u; }
        else if (ctx->pc != 0x1D8CE8u) { ctx->pc = 0x1D8CE8u; }
    }
    if (ctx->pc != 0x1D8CE8u) { return; }
    ctx->pc = 0x1D8CE8u;
label_1d8ce8:
    // 0x1d8ce8: 0x1000007f
label_1d8cec:
    if (ctx->pc == 0x1D8CECu) {
        ctx->pc = 0x1D8CF0u;
        goto label_1d8cf0;
    }
    ctx->pc = 0x1D8CE8u;
    {
        const bool branch_taken_0x1d8ce8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8ce8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8CF0u;
label_1d8cf0:
    // 0x1d8cf0: 0xc077274
label_1d8cf4:
    if (ctx->pc == 0x1D8CF4u) {
        ctx->pc = 0x1D8CF8u;
        goto label_1d8cf8;
    }
    ctx->pc = 0x1D8CF0u;
    SET_GPR_U32(ctx, 31, 0x1D8CF8u);
    ctx->pc = 0x1DC9D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBombeSmoke__9FcvEffectFv_0x1dc9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CF8u; }
        else if (ctx->pc != 0x1D8CF8u) { ctx->pc = 0x1D8CF8u; }
    }
    if (ctx->pc != 0x1D8CF8u) { return; }
    ctx->pc = 0x1D8CF8u;
label_1d8cf8:
    // 0x1d8cf8: 0x1000007b
label_1d8cfc:
    if (ctx->pc == 0x1D8CFCu) {
        ctx->pc = 0x1D8D00u;
        goto label_1d8d00;
    }
    ctx->pc = 0x1D8CF8u;
    {
        const bool branch_taken_0x1d8cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8cf8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8D00u;
label_1d8d00:
    // 0x1d8d00: 0xc0772b4
label_1d8d04:
    if (ctx->pc == 0x1D8D04u) {
        ctx->pc = 0x1D8D08u;
        goto label_1d8d08;
    }
    ctx->pc = 0x1D8D00u;
    SET_GPR_U32(ctx, 31, 0x1D8D08u);
    ctx->pc = 0x1DCAD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss6Henshin1__9FcvEffectFv_0x1dcad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D08u; }
        else if (ctx->pc != 0x1D8D08u) { ctx->pc = 0x1D8D08u; }
    }
    if (ctx->pc != 0x1D8D08u) { return; }
    ctx->pc = 0x1D8D08u;
label_1d8d08:
    // 0x1d8d08: 0x10000077
label_1d8d0c:
    if (ctx->pc == 0x1D8D0Cu) {
        ctx->pc = 0x1D8D10u;
        goto label_1d8d10;
    }
    ctx->pc = 0x1D8D08u;
    {
        const bool branch_taken_0x1d8d08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8d08) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8D10u;
label_1d8d10:
    // 0x1d8d10: 0xc07733c
label_1d8d14:
    if (ctx->pc == 0x1D8D14u) {
        ctx->pc = 0x1D8D18u;
        goto label_1d8d18;
    }
    ctx->pc = 0x1D8D10u;
    SET_GPR_U32(ctx, 31, 0x1D8D18u);
    ctx->pc = 0x1DCCF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss6Henshin2__9FcvEffectFv_0x1dccf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D18u; }
        else if (ctx->pc != 0x1D8D18u) { ctx->pc = 0x1D8D18u; }
    }
    if (ctx->pc != 0x1D8D18u) { return; }
    ctx->pc = 0x1D8D18u;
label_1d8d18:
    // 0x1d8d18: 0x10000073
label_1d8d1c:
    if (ctx->pc == 0x1D8D1Cu) {
        ctx->pc = 0x1D8D20u;
        goto label_1d8d20;
    }
    ctx->pc = 0x1D8D18u;
    {
        const bool branch_taken_0x1d8d18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8d18) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8D20u;
label_1d8d20:
    // 0x1d8d20: 0xc07738c
label_1d8d24:
    if (ctx->pc == 0x1D8D24u) {
        ctx->pc = 0x1D8D28u;
        goto label_1d8d28;
    }
    ctx->pc = 0x1D8D20u;
    SET_GPR_U32(ctx, 31, 0x1D8D28u);
    ctx->pc = 0x1DCE30u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss5SibukiL__9FcvEffectFv_0x1dce30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D28u; }
        else if (ctx->pc != 0x1D8D28u) { ctx->pc = 0x1D8D28u; }
    }
    if (ctx->pc != 0x1D8D28u) { return; }
    ctx->pc = 0x1D8D28u;
label_1d8d28:
    // 0x1d8d28: 0x1000006f
label_1d8d2c:
    if (ctx->pc == 0x1D8D2Cu) {
        ctx->pc = 0x1D8D30u;
        goto label_1d8d30;
    }
    ctx->pc = 0x1D8D28u;
    {
        const bool branch_taken_0x1d8d28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8d28) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8D30u;
label_1d8d30:
    // 0x1d8d30: 0xc0773cc
label_1d8d34:
    if (ctx->pc == 0x1D8D34u) {
        ctx->pc = 0x1D8D38u;
        goto label_1d8d38;
    }
    ctx->pc = 0x1D8D30u;
    SET_GPR_U32(ctx, 31, 0x1D8D38u);
    ctx->pc = 0x1DCF30u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss5SibukiS__9FcvEffectFv_0x1dcf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D38u; }
        else if (ctx->pc != 0x1D8D38u) { ctx->pc = 0x1D8D38u; }
    }
    if (ctx->pc != 0x1D8D38u) { return; }
    ctx->pc = 0x1D8D38u;
label_1d8d38:
    // 0x1d8d38: 0x1000006b
label_1d8d3c:
    if (ctx->pc == 0x1D8D3Cu) {
        ctx->pc = 0x1D8D40u;
        goto label_1d8d40;
    }
    ctx->pc = 0x1D8D38u;
    {
        const bool branch_taken_0x1d8d38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8d38) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8D40u;
label_1d8d40:
    // 0x1d8d40: 0xc07740c
label_1d8d44:
    if (ctx->pc == 0x1D8D44u) {
        ctx->pc = 0x1D8D48u;
        goto label_1d8d48;
    }
    ctx->pc = 0x1D8D40u;
    SET_GPR_U32(ctx, 31, 0x1D8D48u);
    ctx->pc = 0x1DD030u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss5HamonL__9FcvEffectFv_0x1dd030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D48u; }
        else if (ctx->pc != 0x1D8D48u) { ctx->pc = 0x1D8D48u; }
    }
    if (ctx->pc != 0x1D8D48u) { return; }
    ctx->pc = 0x1D8D48u;
label_1d8d48:
    // 0x1d8d48: 0x10000067
label_1d8d4c:
    if (ctx->pc == 0x1D8D4Cu) {
        ctx->pc = 0x1D8D50u;
        goto label_1d8d50;
    }
    ctx->pc = 0x1D8D48u;
    {
        const bool branch_taken_0x1d8d48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8d48) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8D50u;
label_1d8d50:
    // 0x1d8d50: 0xc077430
label_1d8d54:
    if (ctx->pc == 0x1D8D54u) {
        ctx->pc = 0x1D8D58u;
        goto label_1d8d58;
    }
    ctx->pc = 0x1D8D50u;
    SET_GPR_U32(ctx, 31, 0x1D8D58u);
    ctx->pc = 0x1DD0C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss5HamonS__9FcvEffectFv_0x1dd0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D58u; }
        else if (ctx->pc != 0x1D8D58u) { ctx->pc = 0x1D8D58u; }
    }
    if (ctx->pc != 0x1D8D58u) { return; }
    ctx->pc = 0x1D8D58u;
label_1d8d58:
    // 0x1d8d58: 0x10000063
label_1d8d5c:
    if (ctx->pc == 0x1D8D5Cu) {
        ctx->pc = 0x1D8D60u;
        goto label_1d8d60;
    }
    ctx->pc = 0x1D8D58u;
    {
        const bool branch_taken_0x1d8d58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8d58) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8D60u;
label_1d8d60:
    // 0x1d8d60: 0xc077454
label_1d8d64:
    if (ctx->pc == 0x1D8D64u) {
        ctx->pc = 0x1D8D68u;
        goto label_1d8d68;
    }
    ctx->pc = 0x1D8D60u;
    SET_GPR_U32(ctx, 31, 0x1D8D68u);
    ctx->pc = 0x1DD150u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss5Asimoto__9FcvEffectFv_0x1dd150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D68u; }
        else if (ctx->pc != 0x1D8D68u) { ctx->pc = 0x1D8D68u; }
    }
    if (ctx->pc != 0x1D8D68u) { return; }
    ctx->pc = 0x1D8D68u;
label_1d8d68:
    // 0x1d8d68: 0x1000005f
label_1d8d6c:
    if (ctx->pc == 0x1D8D6Cu) {
        ctx->pc = 0x1D8D70u;
        goto label_1d8d70;
    }
    ctx->pc = 0x1D8D68u;
    {
        const bool branch_taken_0x1d8d68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8d68) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8D70u;
label_1d8d70:
    // 0x1d8d70: 0xc07747c
label_1d8d74:
    if (ctx->pc == 0x1D8D74u) {
        ctx->pc = 0x1D8D78u;
        goto label_1d8d78;
    }
    ctx->pc = 0x1D8D70u;
    SET_GPR_U32(ctx, 31, 0x1D8D78u);
    ctx->pc = 0x1DD1F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initWaterPillar__9FcvEffectFv_0x1dd1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D78u; }
        else if (ctx->pc != 0x1D8D78u) { ctx->pc = 0x1D8D78u; }
    }
    if (ctx->pc != 0x1D8D78u) { return; }
    ctx->pc = 0x1D8D78u;
label_1d8d78:
    // 0x1d8d78: 0x1000005b
label_1d8d7c:
    if (ctx->pc == 0x1D8D7Cu) {
        ctx->pc = 0x1D8D80u;
        goto label_1d8d80;
    }
    ctx->pc = 0x1D8D78u;
    {
        const bool branch_taken_0x1d8d78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8d78) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8D80u;
label_1d8d80:
    // 0x1d8d80: 0xc0774a4
label_1d8d84:
    if (ctx->pc == 0x1D8D84u) {
        ctx->pc = 0x1D8D88u;
        goto label_1d8d88;
    }
    ctx->pc = 0x1D8D80u;
    SET_GPR_U32(ctx, 31, 0x1D8D88u);
    ctx->pc = 0x1DD290u;
    {
        const uint32_t __entryPc = ctx->pc;
        initWaterPillarEmit__9FcvEffectFv_0x1dd290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D88u; }
        else if (ctx->pc != 0x1D8D88u) { ctx->pc = 0x1D8D88u; }
    }
    if (ctx->pc != 0x1D8D88u) { return; }
    ctx->pc = 0x1D8D88u;
label_1d8d88:
    // 0x1d8d88: 0x10000057
label_1d8d8c:
    if (ctx->pc == 0x1D8D8Cu) {
        ctx->pc = 0x1D8D90u;
        goto label_1d8d90;
    }
    ctx->pc = 0x1D8D88u;
    {
        const bool branch_taken_0x1d8d88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8d88) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8D90u;
label_1d8d90:
    // 0x1d8d90: 0xc0774f4
label_1d8d94:
    if (ctx->pc == 0x1D8D94u) {
        ctx->pc = 0x1D8D98u;
        goto label_1d8d98;
    }
    ctx->pc = 0x1D8D90u;
    SET_GPR_U32(ctx, 31, 0x1D8D98u);
    ctx->pc = 0x1DD3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss6B4MaskL__9FcvEffectFv_0x1dd3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D98u; }
        else if (ctx->pc != 0x1D8D98u) { ctx->pc = 0x1D8D98u; }
    }
    if (ctx->pc != 0x1D8D98u) { return; }
    ctx->pc = 0x1D8D98u;
label_1d8d98:
    // 0x1d8d98: 0x10000053
label_1d8d9c:
    if (ctx->pc == 0x1D8D9Cu) {
        ctx->pc = 0x1D8DA0u;
        goto label_1d8da0;
    }
    ctx->pc = 0x1D8D98u;
    {
        const bool branch_taken_0x1d8d98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8d98) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8DA0u;
label_1d8da0:
    // 0x1d8da0: 0xc07755c
label_1d8da4:
    if (ctx->pc == 0x1D8DA4u) {
        ctx->pc = 0x1D8DA8u;
        goto label_1d8da8;
    }
    ctx->pc = 0x1D8DA0u;
    SET_GPR_U32(ctx, 31, 0x1D8DA8u);
    ctx->pc = 0x1DD570u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss6B4MaskS__9FcvEffectFv_0x1dd570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DA8u; }
        else if (ctx->pc != 0x1D8DA8u) { ctx->pc = 0x1D8DA8u; }
    }
    if (ctx->pc != 0x1D8DA8u) { return; }
    ctx->pc = 0x1D8DA8u;
label_1d8da8:
    // 0x1d8da8: 0x1000004f
label_1d8dac:
    if (ctx->pc == 0x1D8DACu) {
        ctx->pc = 0x1D8DB0u;
        goto label_1d8db0;
    }
    ctx->pc = 0x1D8DA8u;
    {
        const bool branch_taken_0x1d8da8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8da8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8DB0u;
label_1d8db0:
    // 0x1d8db0: 0xc07753c
label_1d8db4:
    if (ctx->pc == 0x1D8DB4u) {
        ctx->pc = 0x1D8DB8u;
        goto label_1d8db8;
    }
    ctx->pc = 0x1D8DB0u;
    SET_GPR_U32(ctx, 31, 0x1D8DB8u);
    ctx->pc = 0x1DD4F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss6B4MaskBackL__9FcvEffectFv_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DB8u; }
        else if (ctx->pc != 0x1D8DB8u) { ctx->pc = 0x1D8DB8u; }
    }
    if (ctx->pc != 0x1D8DB8u) { return; }
    ctx->pc = 0x1D8DB8u;
label_1d8db8:
    // 0x1d8db8: 0x1000004b
label_1d8dbc:
    if (ctx->pc == 0x1D8DBCu) {
        ctx->pc = 0x1D8DC0u;
        goto label_1d8dc0;
    }
    ctx->pc = 0x1D8DB8u;
    {
        const bool branch_taken_0x1d8db8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8db8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8DC0u;
label_1d8dc0:
    // 0x1d8dc0: 0xc0775a4
label_1d8dc4:
    if (ctx->pc == 0x1D8DC4u) {
        ctx->pc = 0x1D8DC8u;
        goto label_1d8dc8;
    }
    ctx->pc = 0x1D8DC0u;
    SET_GPR_U32(ctx, 31, 0x1D8DC8u);
    ctx->pc = 0x1DD690u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss6B4MaskBackS__9FcvEffectFv_0x1dd690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DC8u; }
        else if (ctx->pc != 0x1D8DC8u) { ctx->pc = 0x1D8DC8u; }
    }
    if (ctx->pc != 0x1D8DC8u) { return; }
    ctx->pc = 0x1D8DC8u;
label_1d8dc8:
    // 0x1d8dc8: 0x10000047
label_1d8dcc:
    if (ctx->pc == 0x1D8DCCu) {
        ctx->pc = 0x1D8DD0u;
        goto label_1d8dd0;
    }
    ctx->pc = 0x1D8DC8u;
    {
        const bool branch_taken_0x1d8dc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8dc8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8DD0u;
label_1d8dd0:
    // 0x1d8dd0: 0xc0775c4
label_1d8dd4:
    if (ctx->pc == 0x1D8DD4u) {
        ctx->pc = 0x1D8DD8u;
        goto label_1d8dd8;
    }
    ctx->pc = 0x1D8DD0u;
    SET_GPR_U32(ctx, 31, 0x1D8DD8u);
    ctx->pc = 0x1DD710u;
    {
        const uint32_t __entryPc = ctx->pc;
        initMizusibuki__9FcvEffectFv_0x1dd710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DD8u; }
        else if (ctx->pc != 0x1D8DD8u) { ctx->pc = 0x1D8DD8u; }
    }
    if (ctx->pc != 0x1D8DD8u) { return; }
    ctx->pc = 0x1D8DD8u;
label_1d8dd8:
    // 0x1d8dd8: 0x10000043
label_1d8ddc:
    if (ctx->pc == 0x1D8DDCu) {
        ctx->pc = 0x1D8DE0u;
        goto label_1d8de0;
    }
    ctx->pc = 0x1D8DD8u;
    {
        const bool branch_taken_0x1d8dd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8dd8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8DE0u;
label_1d8de0:
    // 0x1d8de0: 0xc077624
label_1d8de4:
    if (ctx->pc == 0x1D8DE4u) {
        ctx->pc = 0x1D8DE8u;
        goto label_1d8de8;
    }
    ctx->pc = 0x1D8DE0u;
    SET_GPR_U32(ctx, 31, 0x1D8DE8u);
    ctx->pc = 0x1DD890u;
    {
        const uint32_t __entryPc = ctx->pc;
        initMizusibukiLarge__9FcvEffectFv_0x1dd890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DE8u; }
        else if (ctx->pc != 0x1D8DE8u) { ctx->pc = 0x1D8DE8u; }
    }
    if (ctx->pc != 0x1D8DE8u) { return; }
    ctx->pc = 0x1D8DE8u;
label_1d8de8:
    // 0x1d8de8: 0x1000003f
label_1d8dec:
    if (ctx->pc == 0x1D8DECu) {
        ctx->pc = 0x1D8DF0u;
        goto label_1d8df0;
    }
    ctx->pc = 0x1D8DE8u;
    {
        const bool branch_taken_0x1d8de8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8de8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8DF0u;
label_1d8df0:
    // 0x1d8df0: 0xc077684
label_1d8df4:
    if (ctx->pc == 0x1D8DF4u) {
        ctx->pc = 0x1D8DF8u;
        goto label_1d8df8;
    }
    ctx->pc = 0x1D8DF0u;
    SET_GPR_U32(ctx, 31, 0x1D8DF8u);
    ctx->pc = 0x1DDA10u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss5Cons__9FcvEffectFv_0x1dda10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DF8u; }
        else if (ctx->pc != 0x1D8DF8u) { ctx->pc = 0x1D8DF8u; }
    }
    if (ctx->pc != 0x1D8DF8u) { return; }
    ctx->pc = 0x1D8DF8u;
label_1d8df8:
    // 0x1d8df8: 0x1000003b
label_1d8dfc:
    if (ctx->pc == 0x1D8DFCu) {
        ctx->pc = 0x1D8E00u;
        goto label_1d8e00;
    }
    ctx->pc = 0x1D8DF8u;
    {
        const bool branch_taken_0x1d8df8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8df8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8E00u;
label_1d8e00:
    // 0x1d8e00: 0xc076d1c
label_1d8e04:
    if (ctx->pc == 0x1D8E04u) {
        ctx->pc = 0x1D8E08u;
        goto label_1d8e08;
    }
    ctx->pc = 0x1D8E00u;
    SET_GPR_U32(ctx, 31, 0x1D8E08u);
    ctx->pc = 0x1DB470u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss6B2xSW__9FcvEffectFv_0x1db470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E08u; }
        else if (ctx->pc != 0x1D8E08u) { ctx->pc = 0x1D8E08u; }
    }
    if (ctx->pc != 0x1D8E08u) { return; }
    ctx->pc = 0x1D8E08u;
label_1d8e08:
    // 0x1d8e08: 0x10000037
label_1d8e0c:
    if (ctx->pc == 0x1D8E0Cu) {
        ctx->pc = 0x1D8E10u;
        goto label_1d8e10;
    }
    ctx->pc = 0x1D8E08u;
    {
        const bool branch_taken_0x1d8e08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8e08) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8E10u;
label_1d8e10:
    // 0x1d8e10: 0xc076d48
label_1d8e14:
    if (ctx->pc == 0x1D8E14u) {
        ctx->pc = 0x1D8E18u;
        goto label_1d8e18;
    }
    ctx->pc = 0x1D8E10u;
    SET_GPR_U32(ctx, 31, 0x1D8E18u);
    ctx->pc = 0x1DB520u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss6B3xBomb__9FcvEffectFv_0x1db520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E18u; }
        else if (ctx->pc != 0x1D8E18u) { ctx->pc = 0x1D8E18u; }
    }
    if (ctx->pc != 0x1D8E18u) { return; }
    ctx->pc = 0x1D8E18u;
label_1d8e18:
    // 0x1d8e18: 0x10000033
label_1d8e1c:
    if (ctx->pc == 0x1D8E1Cu) {
        ctx->pc = 0x1D8E20u;
        goto label_1d8e20;
    }
    ctx->pc = 0x1D8E18u;
    {
        const bool branch_taken_0x1d8e18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8e18) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8E20u;
label_1d8e20:
    // 0x1d8e20: 0xc0776b8
label_1d8e24:
    if (ctx->pc == 0x1D8E24u) {
        ctx->pc = 0x1D8E28u;
        goto label_1d8e28;
    }
    ctx->pc = 0x1D8E20u;
    SET_GPR_U32(ctx, 31, 0x1D8E28u);
    ctx->pc = 0x1DDAE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss5HensinSibuki__9FcvEffectFv_0x1ddae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E28u; }
        else if (ctx->pc != 0x1D8E28u) { ctx->pc = 0x1D8E28u; }
    }
    if (ctx->pc != 0x1D8E28u) { return; }
    ctx->pc = 0x1D8E28u;
label_1d8e28:
    // 0x1d8e28: 0x1000002f
label_1d8e2c:
    if (ctx->pc == 0x1D8E2Cu) {
        ctx->pc = 0x1D8E30u;
        goto label_1d8e30;
    }
    ctx->pc = 0x1D8E28u;
    {
        const bool branch_taken_0x1d8e28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8e28) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8E30u;
label_1d8e30:
    // 0x1d8e30: 0xc077718
label_1d8e34:
    if (ctx->pc == 0x1D8E34u) {
        ctx->pc = 0x1D8E38u;
        goto label_1d8e38;
    }
    ctx->pc = 0x1D8E30u;
    SET_GPR_U32(ctx, 31, 0x1D8E38u);
    ctx->pc = 0x1DDC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss5HensinMahoujin__9FcvEffectFv_0x1ddc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E38u; }
        else if (ctx->pc != 0x1D8E38u) { ctx->pc = 0x1D8E38u; }
    }
    if (ctx->pc != 0x1D8E38u) { return; }
    ctx->pc = 0x1D8E38u;
label_1d8e38:
    // 0x1d8e38: 0x1000002b
label_1d8e3c:
    if (ctx->pc == 0x1D8E3Cu) {
        ctx->pc = 0x1D8E40u;
        goto label_1d8e40;
    }
    ctx->pc = 0x1D8E38u;
    {
        const bool branch_taken_0x1d8e38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8e38) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8E40u;
label_1d8e40:
    // 0x1d8e40: 0xc077798
label_1d8e44:
    if (ctx->pc == 0x1D8E44u) {
        ctx->pc = 0x1D8E48u;
        goto label_1d8e48;
    }
    ctx->pc = 0x1D8E40u;
    SET_GPR_U32(ctx, 31, 0x1D8E48u);
    ctx->pc = 0x1DDE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSt5Kouzui__9FcvEffectFv_0x1dde60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E48u; }
        else if (ctx->pc != 0x1D8E48u) { ctx->pc = 0x1D8E48u; }
    }
    if (ctx->pc != 0x1D8E48u) { return; }
    ctx->pc = 0x1D8E48u;
label_1d8e48:
    // 0x1d8e48: 0x10000027
label_1d8e4c:
    if (ctx->pc == 0x1D8E4Cu) {
        ctx->pc = 0x1D8E50u;
        goto label_1d8e50;
    }
    ctx->pc = 0x1D8E48u;
    {
        const bool branch_taken_0x1d8e48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8e48) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8E50u;
label_1d8e50:
    // 0x1d8e50: 0xc0777cc
label_1d8e54:
    if (ctx->pc == 0x1D8E54u) {
        ctx->pc = 0x1D8E58u;
        goto label_1d8e58;
    }
    ctx->pc = 0x1D8E50u;
    SET_GPR_U32(ctx, 31, 0x1D8E58u);
    ctx->pc = 0x1DDF30u;
    {
        const uint32_t __entryPc = ctx->pc;
        initPlayerAsh__9FcvEffectFv_0x1ddf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E58u; }
        else if (ctx->pc != 0x1D8E58u) { ctx->pc = 0x1D8E58u; }
    }
    if (ctx->pc != 0x1D8E58u) { return; }
    ctx->pc = 0x1D8E58u;
label_1d8e58:
    // 0x1d8e58: 0x10000023
label_1d8e5c:
    if (ctx->pc == 0x1D8E5Cu) {
        ctx->pc = 0x1D8E60u;
        goto label_1d8e60;
    }
    ctx->pc = 0x1D8E58u;
    {
        const bool branch_taken_0x1d8e58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8e58) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8E60u;
label_1d8e60:
    // 0x1d8e60: 0xc077868
label_1d8e64:
    if (ctx->pc == 0x1D8E64u) {
        ctx->pc = 0x1D8E68u;
        goto label_1d8e68;
    }
    ctx->pc = 0x1D8E60u;
    SET_GPR_U32(ctx, 31, 0x1D8E68u);
    ctx->pc = 0x1DE1A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSt5EnsyutuTaki__9FcvEffectFv_0x1de1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E68u; }
        else if (ctx->pc != 0x1D8E68u) { ctx->pc = 0x1D8E68u; }
    }
    if (ctx->pc != 0x1D8E68u) { return; }
    ctx->pc = 0x1D8E68u;
label_1d8e68:
    // 0x1d8e68: 0x1000001f
label_1d8e6c:
    if (ctx->pc == 0x1D8E6Cu) {
        ctx->pc = 0x1D8E70u;
        goto label_1d8e70;
    }
    ctx->pc = 0x1D8E68u;
    {
        const bool branch_taken_0x1d8e68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8e68) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8E70u;
label_1d8e70:
    // 0x1d8e70: 0xc0774cc
label_1d8e74:
    if (ctx->pc == 0x1D8E74u) {
        ctx->pc = 0x1D8E78u;
        goto label_1d8e78;
    }
    ctx->pc = 0x1D8E70u;
    SET_GPR_U32(ctx, 31, 0x1D8E78u);
    ctx->pc = 0x1DD330u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSt6WaterPillarEmit__9FcvEffectFv_0x1dd330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E78u; }
        else if (ctx->pc != 0x1D8E78u) { ctx->pc = 0x1D8E78u; }
    }
    if (ctx->pc != 0x1D8E78u) { return; }
    ctx->pc = 0x1D8E78u;
label_1d8e78:
    // 0x1d8e78: 0x1000001b
label_1d8e7c:
    if (ctx->pc == 0x1D8E7Cu) {
        ctx->pc = 0x1D8E80u;
        goto label_1d8e80;
    }
    ctx->pc = 0x1D8E78u;
    {
        const bool branch_taken_0x1d8e78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8e78) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8E80u;
label_1d8e80:
    // 0x1d8e80: 0xc077894
label_1d8e84:
    if (ctx->pc == 0x1D8E84u) {
        ctx->pc = 0x1D8E88u;
        goto label_1d8e88;
    }
    ctx->pc = 0x1D8E80u;
    SET_GPR_U32(ctx, 31, 0x1D8E88u);
    ctx->pc = 0x1DE250u;
    {
        const uint32_t __entryPc = ctx->pc;
        initNonHit__9FcvEffectFv_0x1de250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E88u; }
        else if (ctx->pc != 0x1D8E88u) { ctx->pc = 0x1D8E88u; }
    }
    if (ctx->pc != 0x1D8E88u) { return; }
    ctx->pc = 0x1D8E88u;
label_1d8e88:
    // 0x1d8e88: 0x10000017
label_1d8e8c:
    if (ctx->pc == 0x1D8E8Cu) {
        ctx->pc = 0x1D8E90u;
        goto label_1d8e90;
    }
    ctx->pc = 0x1D8E88u;
    {
        const bool branch_taken_0x1d8e88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8e88) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8E90u;
label_1d8e90:
    // 0x1d8e90: 0xc0778fc
label_1d8e94:
    if (ctx->pc == 0x1D8E94u) {
        ctx->pc = 0x1D8E98u;
        goto label_1d8e98;
    }
    ctx->pc = 0x1D8E90u;
    SET_GPR_U32(ctx, 31, 0x1D8E98u);
    ctx->pc = 0x1DE3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initHolyLight__9FcvEffectFv_0x1de3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E98u; }
        else if (ctx->pc != 0x1D8E98u) { ctx->pc = 0x1D8E98u; }
    }
    if (ctx->pc != 0x1D8E98u) { return; }
    ctx->pc = 0x1D8E98u;
label_1d8e98:
    // 0x1d8e98: 0x10000013
label_1d8e9c:
    if (ctx->pc == 0x1D8E9Cu) {
        ctx->pc = 0x1D8EA0u;
        goto label_1d8ea0;
    }
    ctx->pc = 0x1D8E98u;
    {
        const bool branch_taken_0x1d8e98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8e98) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8EA0u;
label_1d8ea0:
    // 0x1d8ea0: 0xc07792c
label_1d8ea4:
    if (ctx->pc == 0x1D8EA4u) {
        ctx->pc = 0x1D8EA8u;
        goto label_1d8ea8;
    }
    ctx->pc = 0x1D8EA0u;
    SET_GPR_U32(ctx, 31, 0x1D8EA8u);
    ctx->pc = 0x1DE4B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBos6Hane__9FcvEffectFv_0x1de4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8EA8u; }
        else if (ctx->pc != 0x1D8EA8u) { ctx->pc = 0x1D8EA8u; }
    }
    if (ctx->pc != 0x1D8EA8u) { return; }
    ctx->pc = 0x1D8EA8u;
label_1d8ea8:
    // 0x1d8ea8: 0x1000000f
label_1d8eac:
    if (ctx->pc == 0x1D8EACu) {
        ctx->pc = 0x1D8EB0u;
        goto label_1d8eb0;
    }
    ctx->pc = 0x1D8EA8u;
    {
        const bool branch_taken_0x1d8ea8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8ea8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8EB0u;
label_1d8eb0:
    // 0x1d8eb0: 0xc07797c
label_1d8eb4:
    if (ctx->pc == 0x1D8EB4u) {
        ctx->pc = 0x1D8EB8u;
        goto label_1d8eb8;
    }
    ctx->pc = 0x1D8EB0u;
    SET_GPR_U32(ctx, 31, 0x1D8EB8u);
    ctx->pc = 0x1DE5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initBoss5XHensinSibuki__9FcvEffectFv_0x1de5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8EB8u; }
        else if (ctx->pc != 0x1D8EB8u) { ctx->pc = 0x1D8EB8u; }
    }
    if (ctx->pc != 0x1D8EB8u) { return; }
    ctx->pc = 0x1D8EB8u;
label_1d8eb8:
    // 0x1d8eb8: 0x1000000b
label_1d8ebc:
    if (ctx->pc == 0x1D8EBCu) {
        ctx->pc = 0x1D8EC0u;
        goto label_1d8ec0;
    }
    ctx->pc = 0x1D8EB8u;
    {
        const bool branch_taken_0x1d8eb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8eb8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8EC0u;
label_1d8ec0:
    // 0x1d8ec0: 0xc0779c0
label_1d8ec4:
    if (ctx->pc == 0x1D8EC4u) {
        ctx->pc = 0x1D8EC8u;
        goto label_1d8ec8;
    }
    ctx->pc = 0x1D8EC0u;
    SET_GPR_U32(ctx, 31, 0x1D8EC8u);
    ctx->pc = 0x1DE700u;
    {
        const uint32_t __entryPc = ctx->pc;
        initEneAsh__9FcvEffectFv_0x1de700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8EC8u; }
        else if (ctx->pc != 0x1D8EC8u) { ctx->pc = 0x1D8EC8u; }
    }
    if (ctx->pc != 0x1D8EC8u) { return; }
    ctx->pc = 0x1D8EC8u;
label_1d8ec8:
    // 0x1d8ec8: 0x10000007
label_1d8ecc:
    if (ctx->pc == 0x1D8ECCu) {
        ctx->pc = 0x1D8ED0u;
        goto label_1d8ed0;
    }
    ctx->pc = 0x1D8EC8u;
    {
        const bool branch_taken_0x1d8ec8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8ec8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8ED0u;
label_1d8ed0:
    // 0x1d8ed0: 0xc0779ec
label_1d8ed4:
    if (ctx->pc == 0x1D8ED4u) {
        ctx->pc = 0x1D8ED8u;
        goto label_1d8ed8;
    }
    ctx->pc = 0x1D8ED0u;
    SET_GPR_U32(ctx, 31, 0x1D8ED8u);
    ctx->pc = 0x1DE7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initKneadSmoke__9FcvEffectFv_0x1de7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8ED8u; }
        else if (ctx->pc != 0x1D8ED8u) { ctx->pc = 0x1D8ED8u; }
    }
    if (ctx->pc != 0x1D8ED8u) { return; }
    ctx->pc = 0x1D8ED8u;
label_1d8ed8:
    // 0x1d8ed8: 0x10000003
label_1d8edc:
    if (ctx->pc == 0x1D8EDCu) {
        ctx->pc = 0x1D8EE0u;
        goto label_1d8ee0;
    }
    ctx->pc = 0x1D8ED8u;
    {
        const bool branch_taken_0x1d8ed8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8ed8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8EE0u;
label_1d8ee0:
    // 0x1d8ee0: 0xc077a20
label_1d8ee4:
    if (ctx->pc == 0x1D8EE4u) {
        ctx->pc = 0x1D8EE8u;
        goto label_1d8ee8;
    }
    ctx->pc = 0x1D8EE0u;
    SET_GPR_U32(ctx, 31, 0x1D8EE8u);
    ctx->pc = 0x1DE880u;
    {
        const uint32_t __entryPc = ctx->pc;
        initLauncher__9FcvEffectFv_0x1de880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8EE8u; }
        else if (ctx->pc != 0x1D8EE8u) { ctx->pc = 0x1D8EE8u; }
    }
    if (ctx->pc != 0x1D8EE8u) { return; }
    ctx->pc = 0x1D8EE8u;
label_1d8ee8:
    // 0x1d8ee8: 0x7bbf0000
    ctx->pc = 0x1d8ee8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8eec:
    // 0x1d8eec: 0x3e00008
label_1d8ef0:
    if (ctx->pc == 0x1D8EF0u) {
        ctx->pc = 0x1D8EF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D8EF4u;
        goto label_fallthrough_0x1d8eec;
    }
    ctx->pc = 0x1D8EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8EF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8A30u: goto label_1d8a30;
            case 0x1D8A34u: goto label_1d8a34;
            case 0x1D8A38u: goto label_1d8a38;
            case 0x1D8A3Cu: goto label_1d8a3c;
            case 0x1D8A40u: goto label_1d8a40;
            case 0x1D8A44u: goto label_1d8a44;
            case 0x1D8A48u: goto label_1d8a48;
            case 0x1D8A4Cu: goto label_1d8a4c;
            case 0x1D8A50u: goto label_1d8a50;
            case 0x1D8A54u: goto label_1d8a54;
            case 0x1D8A58u: goto label_1d8a58;
            case 0x1D8A5Cu: goto label_1d8a5c;
            case 0x1D8A60u: goto label_1d8a60;
            case 0x1D8A64u: goto label_1d8a64;
            case 0x1D8A68u: goto label_1d8a68;
            case 0x1D8A6Cu: goto label_1d8a6c;
            case 0x1D8A70u: goto label_1d8a70;
            case 0x1D8A74u: goto label_1d8a74;
            case 0x1D8A78u: goto label_1d8a78;
            case 0x1D8A7Cu: goto label_1d8a7c;
            case 0x1D8A80u: goto label_1d8a80;
            case 0x1D8A84u: goto label_1d8a84;
            case 0x1D8A88u: goto label_1d8a88;
            case 0x1D8A8Cu: goto label_1d8a8c;
            case 0x1D8A90u: goto label_1d8a90;
            case 0x1D8A94u: goto label_1d8a94;
            case 0x1D8A98u: goto label_1d8a98;
            case 0x1D8A9Cu: goto label_1d8a9c;
            case 0x1D8AA0u: goto label_1d8aa0;
            case 0x1D8AA4u: goto label_1d8aa4;
            case 0x1D8AA8u: goto label_1d8aa8;
            case 0x1D8AACu: goto label_1d8aac;
            case 0x1D8AB0u: goto label_1d8ab0;
            case 0x1D8AB4u: goto label_1d8ab4;
            case 0x1D8AB8u: goto label_1d8ab8;
            case 0x1D8ABCu: goto label_1d8abc;
            case 0x1D8AC0u: goto label_1d8ac0;
            case 0x1D8AC4u: goto label_1d8ac4;
            case 0x1D8AC8u: goto label_1d8ac8;
            case 0x1D8ACCu: goto label_1d8acc;
            case 0x1D8AD0u: goto label_1d8ad0;
            case 0x1D8AD4u: goto label_1d8ad4;
            case 0x1D8AD8u: goto label_1d8ad8;
            case 0x1D8ADCu: goto label_1d8adc;
            case 0x1D8AE0u: goto label_1d8ae0;
            case 0x1D8AE4u: goto label_1d8ae4;
            case 0x1D8AE8u: goto label_1d8ae8;
            case 0x1D8AECu: goto label_1d8aec;
            case 0x1D8AF0u: goto label_1d8af0;
            case 0x1D8AF4u: goto label_1d8af4;
            case 0x1D8AF8u: goto label_1d8af8;
            case 0x1D8AFCu: goto label_1d8afc;
            case 0x1D8B00u: goto label_1d8b00;
            case 0x1D8B04u: goto label_1d8b04;
            case 0x1D8B08u: goto label_1d8b08;
            case 0x1D8B0Cu: goto label_1d8b0c;
            case 0x1D8B10u: goto label_1d8b10;
            case 0x1D8B14u: goto label_1d8b14;
            case 0x1D8B18u: goto label_1d8b18;
            case 0x1D8B1Cu: goto label_1d8b1c;
            case 0x1D8B20u: goto label_1d8b20;
            case 0x1D8B24u: goto label_1d8b24;
            case 0x1D8B28u: goto label_1d8b28;
            case 0x1D8B2Cu: goto label_1d8b2c;
            case 0x1D8B30u: goto label_1d8b30;
            case 0x1D8B34u: goto label_1d8b34;
            case 0x1D8B38u: goto label_1d8b38;
            case 0x1D8B3Cu: goto label_1d8b3c;
            case 0x1D8B40u: goto label_1d8b40;
            case 0x1D8B44u: goto label_1d8b44;
            case 0x1D8B48u: goto label_1d8b48;
            case 0x1D8B4Cu: goto label_1d8b4c;
            case 0x1D8B50u: goto label_1d8b50;
            case 0x1D8B54u: goto label_1d8b54;
            case 0x1D8B58u: goto label_1d8b58;
            case 0x1D8B5Cu: goto label_1d8b5c;
            case 0x1D8B60u: goto label_1d8b60;
            case 0x1D8B64u: goto label_1d8b64;
            case 0x1D8B68u: goto label_1d8b68;
            case 0x1D8B6Cu: goto label_1d8b6c;
            case 0x1D8B70u: goto label_1d8b70;
            case 0x1D8B74u: goto label_1d8b74;
            case 0x1D8B78u: goto label_1d8b78;
            case 0x1D8B7Cu: goto label_1d8b7c;
            case 0x1D8B80u: goto label_1d8b80;
            case 0x1D8B84u: goto label_1d8b84;
            case 0x1D8B88u: goto label_1d8b88;
            case 0x1D8B8Cu: goto label_1d8b8c;
            case 0x1D8B90u: goto label_1d8b90;
            case 0x1D8B94u: goto label_1d8b94;
            case 0x1D8B98u: goto label_1d8b98;
            case 0x1D8B9Cu: goto label_1d8b9c;
            case 0x1D8BA0u: goto label_1d8ba0;
            case 0x1D8BA4u: goto label_1d8ba4;
            case 0x1D8BA8u: goto label_1d8ba8;
            case 0x1D8BACu: goto label_1d8bac;
            case 0x1D8BB0u: goto label_1d8bb0;
            case 0x1D8BB4u: goto label_1d8bb4;
            case 0x1D8BB8u: goto label_1d8bb8;
            case 0x1D8BBCu: goto label_1d8bbc;
            case 0x1D8BC0u: goto label_1d8bc0;
            case 0x1D8BC4u: goto label_1d8bc4;
            case 0x1D8BC8u: goto label_1d8bc8;
            case 0x1D8BCCu: goto label_1d8bcc;
            case 0x1D8BD0u: goto label_1d8bd0;
            case 0x1D8BD4u: goto label_1d8bd4;
            case 0x1D8BD8u: goto label_1d8bd8;
            case 0x1D8BDCu: goto label_1d8bdc;
            case 0x1D8BE0u: goto label_1d8be0;
            case 0x1D8BE4u: goto label_1d8be4;
            case 0x1D8BE8u: goto label_1d8be8;
            case 0x1D8BECu: goto label_1d8bec;
            case 0x1D8BF0u: goto label_1d8bf0;
            case 0x1D8BF4u: goto label_1d8bf4;
            case 0x1D8BF8u: goto label_1d8bf8;
            case 0x1D8BFCu: goto label_1d8bfc;
            case 0x1D8C00u: goto label_1d8c00;
            case 0x1D8C04u: goto label_1d8c04;
            case 0x1D8C08u: goto label_1d8c08;
            case 0x1D8C0Cu: goto label_1d8c0c;
            case 0x1D8C10u: goto label_1d8c10;
            case 0x1D8C14u: goto label_1d8c14;
            case 0x1D8C18u: goto label_1d8c18;
            case 0x1D8C1Cu: goto label_1d8c1c;
            case 0x1D8C20u: goto label_1d8c20;
            case 0x1D8C24u: goto label_1d8c24;
            case 0x1D8C28u: goto label_1d8c28;
            case 0x1D8C2Cu: goto label_1d8c2c;
            case 0x1D8C30u: goto label_1d8c30;
            case 0x1D8C34u: goto label_1d8c34;
            case 0x1D8C38u: goto label_1d8c38;
            case 0x1D8C3Cu: goto label_1d8c3c;
            case 0x1D8C40u: goto label_1d8c40;
            case 0x1D8C44u: goto label_1d8c44;
            case 0x1D8C48u: goto label_1d8c48;
            case 0x1D8C4Cu: goto label_1d8c4c;
            case 0x1D8C50u: goto label_1d8c50;
            case 0x1D8C54u: goto label_1d8c54;
            case 0x1D8C58u: goto label_1d8c58;
            case 0x1D8C5Cu: goto label_1d8c5c;
            case 0x1D8C60u: goto label_1d8c60;
            case 0x1D8C64u: goto label_1d8c64;
            case 0x1D8C68u: goto label_1d8c68;
            case 0x1D8C6Cu: goto label_1d8c6c;
            case 0x1D8C70u: goto label_1d8c70;
            case 0x1D8C74u: goto label_1d8c74;
            case 0x1D8C78u: goto label_1d8c78;
            case 0x1D8C7Cu: goto label_1d8c7c;
            case 0x1D8C80u: goto label_1d8c80;
            case 0x1D8C84u: goto label_1d8c84;
            case 0x1D8C88u: goto label_1d8c88;
            case 0x1D8C8Cu: goto label_1d8c8c;
            case 0x1D8C90u: goto label_1d8c90;
            case 0x1D8C94u: goto label_1d8c94;
            case 0x1D8C98u: goto label_1d8c98;
            case 0x1D8C9Cu: goto label_1d8c9c;
            case 0x1D8CA0u: goto label_1d8ca0;
            case 0x1D8CA4u: goto label_1d8ca4;
            case 0x1D8CA8u: goto label_1d8ca8;
            case 0x1D8CACu: goto label_1d8cac;
            case 0x1D8CB0u: goto label_1d8cb0;
            case 0x1D8CB4u: goto label_1d8cb4;
            case 0x1D8CB8u: goto label_1d8cb8;
            case 0x1D8CBCu: goto label_1d8cbc;
            case 0x1D8CC0u: goto label_1d8cc0;
            case 0x1D8CC4u: goto label_1d8cc4;
            case 0x1D8CC8u: goto label_1d8cc8;
            case 0x1D8CCCu: goto label_1d8ccc;
            case 0x1D8CD0u: goto label_1d8cd0;
            case 0x1D8CD4u: goto label_1d8cd4;
            case 0x1D8CD8u: goto label_1d8cd8;
            case 0x1D8CDCu: goto label_1d8cdc;
            case 0x1D8CE0u: goto label_1d8ce0;
            case 0x1D8CE4u: goto label_1d8ce4;
            case 0x1D8CE8u: goto label_1d8ce8;
            case 0x1D8CECu: goto label_1d8cec;
            case 0x1D8CF0u: goto label_1d8cf0;
            case 0x1D8CF4u: goto label_1d8cf4;
            case 0x1D8CF8u: goto label_1d8cf8;
            case 0x1D8CFCu: goto label_1d8cfc;
            case 0x1D8D00u: goto label_1d8d00;
            case 0x1D8D04u: goto label_1d8d04;
            case 0x1D8D08u: goto label_1d8d08;
            case 0x1D8D0Cu: goto label_1d8d0c;
            case 0x1D8D10u: goto label_1d8d10;
            case 0x1D8D14u: goto label_1d8d14;
            case 0x1D8D18u: goto label_1d8d18;
            case 0x1D8D1Cu: goto label_1d8d1c;
            case 0x1D8D20u: goto label_1d8d20;
            case 0x1D8D24u: goto label_1d8d24;
            case 0x1D8D28u: goto label_1d8d28;
            case 0x1D8D2Cu: goto label_1d8d2c;
            case 0x1D8D30u: goto label_1d8d30;
            case 0x1D8D34u: goto label_1d8d34;
            case 0x1D8D38u: goto label_1d8d38;
            case 0x1D8D3Cu: goto label_1d8d3c;
            case 0x1D8D40u: goto label_1d8d40;
            case 0x1D8D44u: goto label_1d8d44;
            case 0x1D8D48u: goto label_1d8d48;
            case 0x1D8D4Cu: goto label_1d8d4c;
            case 0x1D8D50u: goto label_1d8d50;
            case 0x1D8D54u: goto label_1d8d54;
            case 0x1D8D58u: goto label_1d8d58;
            case 0x1D8D5Cu: goto label_1d8d5c;
            case 0x1D8D60u: goto label_1d8d60;
            case 0x1D8D64u: goto label_1d8d64;
            case 0x1D8D68u: goto label_1d8d68;
            case 0x1D8D6Cu: goto label_1d8d6c;
            case 0x1D8D70u: goto label_1d8d70;
            case 0x1D8D74u: goto label_1d8d74;
            case 0x1D8D78u: goto label_1d8d78;
            case 0x1D8D7Cu: goto label_1d8d7c;
            case 0x1D8D80u: goto label_1d8d80;
            case 0x1D8D84u: goto label_1d8d84;
            case 0x1D8D88u: goto label_1d8d88;
            case 0x1D8D8Cu: goto label_1d8d8c;
            case 0x1D8D90u: goto label_1d8d90;
            case 0x1D8D94u: goto label_1d8d94;
            case 0x1D8D98u: goto label_1d8d98;
            case 0x1D8D9Cu: goto label_1d8d9c;
            case 0x1D8DA0u: goto label_1d8da0;
            case 0x1D8DA4u: goto label_1d8da4;
            case 0x1D8DA8u: goto label_1d8da8;
            case 0x1D8DACu: goto label_1d8dac;
            case 0x1D8DB0u: goto label_1d8db0;
            case 0x1D8DB4u: goto label_1d8db4;
            case 0x1D8DB8u: goto label_1d8db8;
            case 0x1D8DBCu: goto label_1d8dbc;
            case 0x1D8DC0u: goto label_1d8dc0;
            case 0x1D8DC4u: goto label_1d8dc4;
            case 0x1D8DC8u: goto label_1d8dc8;
            case 0x1D8DCCu: goto label_1d8dcc;
            case 0x1D8DD0u: goto label_1d8dd0;
            case 0x1D8DD4u: goto label_1d8dd4;
            case 0x1D8DD8u: goto label_1d8dd8;
            case 0x1D8DDCu: goto label_1d8ddc;
            case 0x1D8DE0u: goto label_1d8de0;
            case 0x1D8DE4u: goto label_1d8de4;
            case 0x1D8DE8u: goto label_1d8de8;
            case 0x1D8DECu: goto label_1d8dec;
            case 0x1D8DF0u: goto label_1d8df0;
            case 0x1D8DF4u: goto label_1d8df4;
            case 0x1D8DF8u: goto label_1d8df8;
            case 0x1D8DFCu: goto label_1d8dfc;
            case 0x1D8E00u: goto label_1d8e00;
            case 0x1D8E04u: goto label_1d8e04;
            case 0x1D8E08u: goto label_1d8e08;
            case 0x1D8E0Cu: goto label_1d8e0c;
            case 0x1D8E10u: goto label_1d8e10;
            case 0x1D8E14u: goto label_1d8e14;
            case 0x1D8E18u: goto label_1d8e18;
            case 0x1D8E1Cu: goto label_1d8e1c;
            case 0x1D8E20u: goto label_1d8e20;
            case 0x1D8E24u: goto label_1d8e24;
            case 0x1D8E28u: goto label_1d8e28;
            case 0x1D8E2Cu: goto label_1d8e2c;
            case 0x1D8E30u: goto label_1d8e30;
            case 0x1D8E34u: goto label_1d8e34;
            case 0x1D8E38u: goto label_1d8e38;
            case 0x1D8E3Cu: goto label_1d8e3c;
            case 0x1D8E40u: goto label_1d8e40;
            case 0x1D8E44u: goto label_1d8e44;
            case 0x1D8E48u: goto label_1d8e48;
            case 0x1D8E4Cu: goto label_1d8e4c;
            case 0x1D8E50u: goto label_1d8e50;
            case 0x1D8E54u: goto label_1d8e54;
            case 0x1D8E58u: goto label_1d8e58;
            case 0x1D8E5Cu: goto label_1d8e5c;
            case 0x1D8E60u: goto label_1d8e60;
            case 0x1D8E64u: goto label_1d8e64;
            case 0x1D8E68u: goto label_1d8e68;
            case 0x1D8E6Cu: goto label_1d8e6c;
            case 0x1D8E70u: goto label_1d8e70;
            case 0x1D8E74u: goto label_1d8e74;
            case 0x1D8E78u: goto label_1d8e78;
            case 0x1D8E7Cu: goto label_1d8e7c;
            case 0x1D8E80u: goto label_1d8e80;
            case 0x1D8E84u: goto label_1d8e84;
            case 0x1D8E88u: goto label_1d8e88;
            case 0x1D8E8Cu: goto label_1d8e8c;
            case 0x1D8E90u: goto label_1d8e90;
            case 0x1D8E94u: goto label_1d8e94;
            case 0x1D8E98u: goto label_1d8e98;
            case 0x1D8E9Cu: goto label_1d8e9c;
            case 0x1D8EA0u: goto label_1d8ea0;
            case 0x1D8EA4u: goto label_1d8ea4;
            case 0x1D8EA8u: goto label_1d8ea8;
            case 0x1D8EACu: goto label_1d8eac;
            case 0x1D8EB0u: goto label_1d8eb0;
            case 0x1D8EB4u: goto label_1d8eb4;
            case 0x1D8EB8u: goto label_1d8eb8;
            case 0x1D8EBCu: goto label_1d8ebc;
            case 0x1D8EC0u: goto label_1d8ec0;
            case 0x1D8EC4u: goto label_1d8ec4;
            case 0x1D8EC8u: goto label_1d8ec8;
            case 0x1D8ECCu: goto label_1d8ecc;
            case 0x1D8ED0u: goto label_1d8ed0;
            case 0x1D8ED4u: goto label_1d8ed4;
            case 0x1D8ED8u: goto label_1d8ed8;
            case 0x1D8EDCu: goto label_1d8edc;
            case 0x1D8EE0u: goto label_1d8ee0;
            case 0x1D8EE4u: goto label_1d8ee4;
            case 0x1D8EE8u: goto label_1d8ee8;
            case 0x1D8EECu: goto label_1d8eec;
            case 0x1D8EF0u: goto label_1d8ef0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1d8eec:
    ctx->pc = 0x1D8EF4u;
}
