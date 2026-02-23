#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: loop__10McLoadTaskFv
// Address: 0x1f69f0 - 0x1f7000
void loop__10McLoadTaskFv_0x1f69f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("loop__10McLoadTaskFv");


    ctx->pc = 0x1f69f0u;

label_1f69f0:
    // 0x1f69f0: 0x27bdffe0
    ctx->pc = 0x1f69f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f69f4:
    // 0x1f69f4: 0x7fbf0010
    ctx->pc = 0x1f69f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_1f69f8:
    // 0x1f69f8: 0x7fb00000
    ctx->pc = 0x1f69f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f69fc:
    // 0x1f69fc: 0x8c830004
    ctx->pc = 0x1f69fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f6a00:
    // 0x1f6a00: 0x2c61001e
    ctx->pc = 0x1f6a00u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 30));
label_1f6a04:
    // 0x1f6a04: 0x10200008
label_1f6a08:
    if (ctx->pc == 0x1F6A08u) {
        ctx->pc = 0x1F6A08u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F6A0Cu;
        goto label_1f6a0c;
    }
    ctx->pc = 0x1F6A04u;
    {
        const bool branch_taken_0x1f6a04 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6A08u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f6a04) {
            ctx->pc = 0x1F6A28u;
            goto label_1f6a28;
        }
    }
    ctx->pc = 0x1F6A0Cu;
label_1f6a0c:
    // 0x1f6a0c: 0x3c04002c
    ctx->pc = 0x1f6a0cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1f6a10:
    // 0x1f6a10: 0x31880
    ctx->pc = 0x1f6a10u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1f6a14:
    // 0x1f6a14: 0x2484fbe0
    ctx->pc = 0x1f6a14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966240));
label_1f6a18:
    // 0x1f6a18: 0x641821
    ctx->pc = 0x1f6a18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f6a1c:
    // 0x1f6a1c: 0x8c630000
    ctx->pc = 0x1f6a1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f6a20:
    // 0x1f6a20: 0x600008
label_1f6a24:
    if (ctx->pc == 0x1F6A24u) {
        ctx->pc = 0x1F6A28u;
        goto label_1f6a28;
    }
    ctx->pc = 0x1F6A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F69F0u: goto label_1f69f0;
            case 0x1F69F4u: goto label_1f69f4;
            case 0x1F69F8u: goto label_1f69f8;
            case 0x1F69FCu: goto label_1f69fc;
            case 0x1F6A00u: goto label_1f6a00;
            case 0x1F6A04u: goto label_1f6a04;
            case 0x1F6A08u: goto label_1f6a08;
            case 0x1F6A0Cu: goto label_1f6a0c;
            case 0x1F6A10u: goto label_1f6a10;
            case 0x1F6A14u: goto label_1f6a14;
            case 0x1F6A18u: goto label_1f6a18;
            case 0x1F6A1Cu: goto label_1f6a1c;
            case 0x1F6A20u: goto label_1f6a20;
            case 0x1F6A24u: goto label_1f6a24;
            case 0x1F6A28u: goto label_1f6a28;
            case 0x1F6A2Cu: goto label_1f6a2c;
            case 0x1F6A30u: goto label_1f6a30;
            case 0x1F6A34u: goto label_1f6a34;
            case 0x1F6A38u: goto label_1f6a38;
            case 0x1F6A3Cu: goto label_1f6a3c;
            case 0x1F6A40u: goto label_1f6a40;
            case 0x1F6A44u: goto label_1f6a44;
            case 0x1F6A48u: goto label_1f6a48;
            case 0x1F6A4Cu: goto label_1f6a4c;
            case 0x1F6A50u: goto label_1f6a50;
            case 0x1F6A54u: goto label_1f6a54;
            case 0x1F6A58u: goto label_1f6a58;
            case 0x1F6A5Cu: goto label_1f6a5c;
            case 0x1F6A60u: goto label_1f6a60;
            case 0x1F6A64u: goto label_1f6a64;
            case 0x1F6A68u: goto label_1f6a68;
            case 0x1F6A6Cu: goto label_1f6a6c;
            case 0x1F6A70u: goto label_1f6a70;
            case 0x1F6A74u: goto label_1f6a74;
            case 0x1F6A78u: goto label_1f6a78;
            case 0x1F6A7Cu: goto label_1f6a7c;
            case 0x1F6A80u: goto label_1f6a80;
            case 0x1F6A84u: goto label_1f6a84;
            case 0x1F6A88u: goto label_1f6a88;
            case 0x1F6A8Cu: goto label_1f6a8c;
            case 0x1F6A90u: goto label_1f6a90;
            case 0x1F6A94u: goto label_1f6a94;
            case 0x1F6A98u: goto label_1f6a98;
            case 0x1F6A9Cu: goto label_1f6a9c;
            case 0x1F6AA0u: goto label_1f6aa0;
            case 0x1F6AA4u: goto label_1f6aa4;
            case 0x1F6AA8u: goto label_1f6aa8;
            case 0x1F6AACu: goto label_1f6aac;
            case 0x1F6AB0u: goto label_1f6ab0;
            case 0x1F6AB4u: goto label_1f6ab4;
            case 0x1F6AB8u: goto label_1f6ab8;
            case 0x1F6ABCu: goto label_1f6abc;
            case 0x1F6AC0u: goto label_1f6ac0;
            case 0x1F6AC4u: goto label_1f6ac4;
            case 0x1F6AC8u: goto label_1f6ac8;
            case 0x1F6ACCu: goto label_1f6acc;
            case 0x1F6AD0u: goto label_1f6ad0;
            case 0x1F6AD4u: goto label_1f6ad4;
            case 0x1F6AD8u: goto label_1f6ad8;
            case 0x1F6ADCu: goto label_1f6adc;
            case 0x1F6AE0u: goto label_1f6ae0;
            case 0x1F6AE4u: goto label_1f6ae4;
            case 0x1F6AE8u: goto label_1f6ae8;
            case 0x1F6AECu: goto label_1f6aec;
            case 0x1F6AF0u: goto label_1f6af0;
            case 0x1F6AF4u: goto label_1f6af4;
            case 0x1F6AF8u: goto label_1f6af8;
            case 0x1F6AFCu: goto label_1f6afc;
            case 0x1F6B00u: goto label_1f6b00;
            case 0x1F6B04u: goto label_1f6b04;
            case 0x1F6B08u: goto label_1f6b08;
            case 0x1F6B0Cu: goto label_1f6b0c;
            case 0x1F6B10u: goto label_1f6b10;
            case 0x1F6B14u: goto label_1f6b14;
            case 0x1F6B18u: goto label_1f6b18;
            case 0x1F6B1Cu: goto label_1f6b1c;
            case 0x1F6B20u: goto label_1f6b20;
            case 0x1F6B24u: goto label_1f6b24;
            case 0x1F6B28u: goto label_1f6b28;
            case 0x1F6B2Cu: goto label_1f6b2c;
            case 0x1F6B30u: goto label_1f6b30;
            case 0x1F6B34u: goto label_1f6b34;
            case 0x1F6B38u: goto label_1f6b38;
            case 0x1F6B3Cu: goto label_1f6b3c;
            case 0x1F6B40u: goto label_1f6b40;
            case 0x1F6B44u: goto label_1f6b44;
            case 0x1F6B48u: goto label_1f6b48;
            case 0x1F6B4Cu: goto label_1f6b4c;
            case 0x1F6B50u: goto label_1f6b50;
            case 0x1F6B54u: goto label_1f6b54;
            case 0x1F6B58u: goto label_1f6b58;
            case 0x1F6B5Cu: goto label_1f6b5c;
            case 0x1F6B60u: goto label_1f6b60;
            case 0x1F6B64u: goto label_1f6b64;
            case 0x1F6B68u: goto label_1f6b68;
            case 0x1F6B6Cu: goto label_1f6b6c;
            case 0x1F6B70u: goto label_1f6b70;
            case 0x1F6B74u: goto label_1f6b74;
            case 0x1F6B78u: goto label_1f6b78;
            case 0x1F6B7Cu: goto label_1f6b7c;
            case 0x1F6B80u: goto label_1f6b80;
            case 0x1F6B84u: goto label_1f6b84;
            case 0x1F6B88u: goto label_1f6b88;
            case 0x1F6B8Cu: goto label_1f6b8c;
            case 0x1F6B90u: goto label_1f6b90;
            case 0x1F6B94u: goto label_1f6b94;
            case 0x1F6B98u: goto label_1f6b98;
            case 0x1F6B9Cu: goto label_1f6b9c;
            case 0x1F6BA0u: goto label_1f6ba0;
            case 0x1F6BA4u: goto label_1f6ba4;
            case 0x1F6BA8u: goto label_1f6ba8;
            case 0x1F6BACu: goto label_1f6bac;
            case 0x1F6BB0u: goto label_1f6bb0;
            case 0x1F6BB4u: goto label_1f6bb4;
            case 0x1F6BB8u: goto label_1f6bb8;
            case 0x1F6BBCu: goto label_1f6bbc;
            case 0x1F6BC0u: goto label_1f6bc0;
            case 0x1F6BC4u: goto label_1f6bc4;
            case 0x1F6BC8u: goto label_1f6bc8;
            case 0x1F6BCCu: goto label_1f6bcc;
            case 0x1F6BD0u: goto label_1f6bd0;
            case 0x1F6BD4u: goto label_1f6bd4;
            case 0x1F6BD8u: goto label_1f6bd8;
            case 0x1F6BDCu: goto label_1f6bdc;
            case 0x1F6BE0u: goto label_1f6be0;
            case 0x1F6BE4u: goto label_1f6be4;
            case 0x1F6BE8u: goto label_1f6be8;
            case 0x1F6BECu: goto label_1f6bec;
            case 0x1F6BF0u: goto label_1f6bf0;
            case 0x1F6BF4u: goto label_1f6bf4;
            case 0x1F6BF8u: goto label_1f6bf8;
            case 0x1F6BFCu: goto label_1f6bfc;
            case 0x1F6C00u: goto label_1f6c00;
            case 0x1F6C04u: goto label_1f6c04;
            case 0x1F6C08u: goto label_1f6c08;
            case 0x1F6C0Cu: goto label_1f6c0c;
            case 0x1F6C10u: goto label_1f6c10;
            case 0x1F6C14u: goto label_1f6c14;
            case 0x1F6C18u: goto label_1f6c18;
            case 0x1F6C1Cu: goto label_1f6c1c;
            case 0x1F6C20u: goto label_1f6c20;
            case 0x1F6C24u: goto label_1f6c24;
            case 0x1F6C28u: goto label_1f6c28;
            case 0x1F6C2Cu: goto label_1f6c2c;
            case 0x1F6C30u: goto label_1f6c30;
            case 0x1F6C34u: goto label_1f6c34;
            case 0x1F6C38u: goto label_1f6c38;
            case 0x1F6C3Cu: goto label_1f6c3c;
            case 0x1F6C40u: goto label_1f6c40;
            case 0x1F6C44u: goto label_1f6c44;
            case 0x1F6C48u: goto label_1f6c48;
            case 0x1F6C4Cu: goto label_1f6c4c;
            case 0x1F6C50u: goto label_1f6c50;
            case 0x1F6C54u: goto label_1f6c54;
            case 0x1F6C58u: goto label_1f6c58;
            case 0x1F6C5Cu: goto label_1f6c5c;
            case 0x1F6C60u: goto label_1f6c60;
            case 0x1F6C64u: goto label_1f6c64;
            case 0x1F6C68u: goto label_1f6c68;
            case 0x1F6C6Cu: goto label_1f6c6c;
            case 0x1F6C70u: goto label_1f6c70;
            case 0x1F6C74u: goto label_1f6c74;
            case 0x1F6C78u: goto label_1f6c78;
            case 0x1F6C7Cu: goto label_1f6c7c;
            case 0x1F6C80u: goto label_1f6c80;
            case 0x1F6C84u: goto label_1f6c84;
            case 0x1F6C88u: goto label_1f6c88;
            case 0x1F6C8Cu: goto label_1f6c8c;
            case 0x1F6C90u: goto label_1f6c90;
            case 0x1F6C94u: goto label_1f6c94;
            case 0x1F6C98u: goto label_1f6c98;
            case 0x1F6C9Cu: goto label_1f6c9c;
            case 0x1F6CA0u: goto label_1f6ca0;
            case 0x1F6CA4u: goto label_1f6ca4;
            case 0x1F6CA8u: goto label_1f6ca8;
            case 0x1F6CACu: goto label_1f6cac;
            case 0x1F6CB0u: goto label_1f6cb0;
            case 0x1F6CB4u: goto label_1f6cb4;
            case 0x1F6CB8u: goto label_1f6cb8;
            case 0x1F6CBCu: goto label_1f6cbc;
            case 0x1F6CC0u: goto label_1f6cc0;
            case 0x1F6CC4u: goto label_1f6cc4;
            case 0x1F6CC8u: goto label_1f6cc8;
            case 0x1F6CCCu: goto label_1f6ccc;
            case 0x1F6CD0u: goto label_1f6cd0;
            case 0x1F6CD4u: goto label_1f6cd4;
            case 0x1F6CD8u: goto label_1f6cd8;
            case 0x1F6CDCu: goto label_1f6cdc;
            case 0x1F6CE0u: goto label_1f6ce0;
            case 0x1F6CE4u: goto label_1f6ce4;
            case 0x1F6CE8u: goto label_1f6ce8;
            case 0x1F6CECu: goto label_1f6cec;
            case 0x1F6CF0u: goto label_1f6cf0;
            case 0x1F6CF4u: goto label_1f6cf4;
            case 0x1F6CF8u: goto label_1f6cf8;
            case 0x1F6CFCu: goto label_1f6cfc;
            case 0x1F6D00u: goto label_1f6d00;
            case 0x1F6D04u: goto label_1f6d04;
            case 0x1F6D08u: goto label_1f6d08;
            case 0x1F6D0Cu: goto label_1f6d0c;
            case 0x1F6D10u: goto label_1f6d10;
            case 0x1F6D14u: goto label_1f6d14;
            case 0x1F6D18u: goto label_1f6d18;
            case 0x1F6D1Cu: goto label_1f6d1c;
            case 0x1F6D20u: goto label_1f6d20;
            case 0x1F6D24u: goto label_1f6d24;
            case 0x1F6D28u: goto label_1f6d28;
            case 0x1F6D2Cu: goto label_1f6d2c;
            case 0x1F6D30u: goto label_1f6d30;
            case 0x1F6D34u: goto label_1f6d34;
            case 0x1F6D38u: goto label_1f6d38;
            case 0x1F6D3Cu: goto label_1f6d3c;
            case 0x1F6D40u: goto label_1f6d40;
            case 0x1F6D44u: goto label_1f6d44;
            case 0x1F6D48u: goto label_1f6d48;
            case 0x1F6D4Cu: goto label_1f6d4c;
            case 0x1F6D50u: goto label_1f6d50;
            case 0x1F6D54u: goto label_1f6d54;
            case 0x1F6D58u: goto label_1f6d58;
            case 0x1F6D5Cu: goto label_1f6d5c;
            case 0x1F6D60u: goto label_1f6d60;
            case 0x1F6D64u: goto label_1f6d64;
            case 0x1F6D68u: goto label_1f6d68;
            case 0x1F6D6Cu: goto label_1f6d6c;
            case 0x1F6D70u: goto label_1f6d70;
            case 0x1F6D74u: goto label_1f6d74;
            case 0x1F6D78u: goto label_1f6d78;
            case 0x1F6D7Cu: goto label_1f6d7c;
            case 0x1F6D80u: goto label_1f6d80;
            case 0x1F6D84u: goto label_1f6d84;
            case 0x1F6D88u: goto label_1f6d88;
            case 0x1F6D8Cu: goto label_1f6d8c;
            case 0x1F6D90u: goto label_1f6d90;
            case 0x1F6D94u: goto label_1f6d94;
            case 0x1F6D98u: goto label_1f6d98;
            case 0x1F6D9Cu: goto label_1f6d9c;
            case 0x1F6DA0u: goto label_1f6da0;
            case 0x1F6DA4u: goto label_1f6da4;
            case 0x1F6DA8u: goto label_1f6da8;
            case 0x1F6DACu: goto label_1f6dac;
            case 0x1F6DB0u: goto label_1f6db0;
            case 0x1F6DB4u: goto label_1f6db4;
            case 0x1F6DB8u: goto label_1f6db8;
            case 0x1F6DBCu: goto label_1f6dbc;
            case 0x1F6DC0u: goto label_1f6dc0;
            case 0x1F6DC4u: goto label_1f6dc4;
            case 0x1F6DC8u: goto label_1f6dc8;
            case 0x1F6DCCu: goto label_1f6dcc;
            case 0x1F6DD0u: goto label_1f6dd0;
            case 0x1F6DD4u: goto label_1f6dd4;
            case 0x1F6DD8u: goto label_1f6dd8;
            case 0x1F6DDCu: goto label_1f6ddc;
            case 0x1F6DE0u: goto label_1f6de0;
            case 0x1F6DE4u: goto label_1f6de4;
            case 0x1F6DE8u: goto label_1f6de8;
            case 0x1F6DECu: goto label_1f6dec;
            case 0x1F6DF0u: goto label_1f6df0;
            case 0x1F6DF4u: goto label_1f6df4;
            case 0x1F6DF8u: goto label_1f6df8;
            case 0x1F6DFCu: goto label_1f6dfc;
            case 0x1F6E00u: goto label_1f6e00;
            case 0x1F6E04u: goto label_1f6e04;
            case 0x1F6E08u: goto label_1f6e08;
            case 0x1F6E0Cu: goto label_1f6e0c;
            case 0x1F6E10u: goto label_1f6e10;
            case 0x1F6E14u: goto label_1f6e14;
            case 0x1F6E18u: goto label_1f6e18;
            case 0x1F6E1Cu: goto label_1f6e1c;
            case 0x1F6E20u: goto label_1f6e20;
            case 0x1F6E24u: goto label_1f6e24;
            case 0x1F6E28u: goto label_1f6e28;
            case 0x1F6E2Cu: goto label_1f6e2c;
            case 0x1F6E30u: goto label_1f6e30;
            case 0x1F6E34u: goto label_1f6e34;
            case 0x1F6E38u: goto label_1f6e38;
            case 0x1F6E3Cu: goto label_1f6e3c;
            case 0x1F6E40u: goto label_1f6e40;
            case 0x1F6E44u: goto label_1f6e44;
            case 0x1F6E48u: goto label_1f6e48;
            case 0x1F6E4Cu: goto label_1f6e4c;
            case 0x1F6E50u: goto label_1f6e50;
            case 0x1F6E54u: goto label_1f6e54;
            case 0x1F6E58u: goto label_1f6e58;
            case 0x1F6E5Cu: goto label_1f6e5c;
            case 0x1F6E60u: goto label_1f6e60;
            case 0x1F6E64u: goto label_1f6e64;
            case 0x1F6E68u: goto label_1f6e68;
            case 0x1F6E6Cu: goto label_1f6e6c;
            case 0x1F6E70u: goto label_1f6e70;
            case 0x1F6E74u: goto label_1f6e74;
            case 0x1F6E78u: goto label_1f6e78;
            case 0x1F6E7Cu: goto label_1f6e7c;
            case 0x1F6E80u: goto label_1f6e80;
            case 0x1F6E84u: goto label_1f6e84;
            case 0x1F6E88u: goto label_1f6e88;
            case 0x1F6E8Cu: goto label_1f6e8c;
            case 0x1F6E90u: goto label_1f6e90;
            case 0x1F6E94u: goto label_1f6e94;
            case 0x1F6E98u: goto label_1f6e98;
            case 0x1F6E9Cu: goto label_1f6e9c;
            case 0x1F6EA0u: goto label_1f6ea0;
            case 0x1F6EA4u: goto label_1f6ea4;
            case 0x1F6EA8u: goto label_1f6ea8;
            case 0x1F6EACu: goto label_1f6eac;
            case 0x1F6EB0u: goto label_1f6eb0;
            case 0x1F6EB4u: goto label_1f6eb4;
            case 0x1F6EB8u: goto label_1f6eb8;
            case 0x1F6EBCu: goto label_1f6ebc;
            case 0x1F6EC0u: goto label_1f6ec0;
            case 0x1F6EC4u: goto label_1f6ec4;
            case 0x1F6EC8u: goto label_1f6ec8;
            case 0x1F6ECCu: goto label_1f6ecc;
            case 0x1F6ED0u: goto label_1f6ed0;
            case 0x1F6ED4u: goto label_1f6ed4;
            case 0x1F6ED8u: goto label_1f6ed8;
            case 0x1F6EDCu: goto label_1f6edc;
            case 0x1F6EE0u: goto label_1f6ee0;
            case 0x1F6EE4u: goto label_1f6ee4;
            case 0x1F6EE8u: goto label_1f6ee8;
            case 0x1F6EECu: goto label_1f6eec;
            case 0x1F6EF0u: goto label_1f6ef0;
            case 0x1F6EF4u: goto label_1f6ef4;
            case 0x1F6EF8u: goto label_1f6ef8;
            case 0x1F6EFCu: goto label_1f6efc;
            case 0x1F6F00u: goto label_1f6f00;
            case 0x1F6F04u: goto label_1f6f04;
            case 0x1F6F08u: goto label_1f6f08;
            case 0x1F6F0Cu: goto label_1f6f0c;
            case 0x1F6F10u: goto label_1f6f10;
            case 0x1F6F14u: goto label_1f6f14;
            case 0x1F6F18u: goto label_1f6f18;
            case 0x1F6F1Cu: goto label_1f6f1c;
            case 0x1F6F20u: goto label_1f6f20;
            case 0x1F6F24u: goto label_1f6f24;
            case 0x1F6F28u: goto label_1f6f28;
            case 0x1F6F2Cu: goto label_1f6f2c;
            case 0x1F6F30u: goto label_1f6f30;
            case 0x1F6F34u: goto label_1f6f34;
            case 0x1F6F38u: goto label_1f6f38;
            case 0x1F6F3Cu: goto label_1f6f3c;
            case 0x1F6F40u: goto label_1f6f40;
            case 0x1F6F44u: goto label_1f6f44;
            case 0x1F6F48u: goto label_1f6f48;
            case 0x1F6F4Cu: goto label_1f6f4c;
            case 0x1F6F50u: goto label_1f6f50;
            case 0x1F6F54u: goto label_1f6f54;
            case 0x1F6F58u: goto label_1f6f58;
            case 0x1F6F5Cu: goto label_1f6f5c;
            case 0x1F6F60u: goto label_1f6f60;
            case 0x1F6F64u: goto label_1f6f64;
            case 0x1F6F68u: goto label_1f6f68;
            case 0x1F6F6Cu: goto label_1f6f6c;
            case 0x1F6F70u: goto label_1f6f70;
            case 0x1F6F74u: goto label_1f6f74;
            case 0x1F6F78u: goto label_1f6f78;
            case 0x1F6F7Cu: goto label_1f6f7c;
            case 0x1F6F80u: goto label_1f6f80;
            case 0x1F6F84u: goto label_1f6f84;
            case 0x1F6F88u: goto label_1f6f88;
            case 0x1F6F8Cu: goto label_1f6f8c;
            case 0x1F6F90u: goto label_1f6f90;
            case 0x1F6F94u: goto label_1f6f94;
            case 0x1F6F98u: goto label_1f6f98;
            case 0x1F6F9Cu: goto label_1f6f9c;
            case 0x1F6FA0u: goto label_1f6fa0;
            case 0x1F6FA4u: goto label_1f6fa4;
            case 0x1F6FA8u: goto label_1f6fa8;
            case 0x1F6FACu: goto label_1f6fac;
            case 0x1F6FB0u: goto label_1f6fb0;
            case 0x1F6FB4u: goto label_1f6fb4;
            case 0x1F6FB8u: goto label_1f6fb8;
            case 0x1F6FBCu: goto label_1f6fbc;
            case 0x1F6FC0u: goto label_1f6fc0;
            case 0x1F6FC4u: goto label_1f6fc4;
            case 0x1F6FC8u: goto label_1f6fc8;
            case 0x1F6FCCu: goto label_1f6fcc;
            case 0x1F6FD0u: goto label_1f6fd0;
            case 0x1F6FD4u: goto label_1f6fd4;
            case 0x1F6FD8u: goto label_1f6fd8;
            case 0x1F6FDCu: goto label_1f6fdc;
            case 0x1F6FE0u: goto label_1f6fe0;
            case 0x1F6FE4u: goto label_1f6fe4;
            case 0x1F6FE8u: goto label_1f6fe8;
            case 0x1F6FECu: goto label_1f6fec;
            case 0x1F6FF0u: goto label_1f6ff0;
            case 0x1F6FF4u: goto label_1f6ff4;
            case 0x1F6FF8u: goto label_1f6ff8;
            case 0x1F6FFCu: goto label_1f6ffc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F6A28u;
label_1f6a28:
    // 0x1f6a28: 0x8e020004
    ctx->pc = 0x1f6a28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f6a2c:
    // 0x1f6a2c: 0x24420001
    ctx->pc = 0x1f6a2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f6a30:
    // 0x1f6a30: 0xae020004
    ctx->pc = 0x1f6a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f6a34:
    // 0x1f6a34: 0x3c020051
    ctx->pc = 0x1f6a34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1f6a38:
    // 0x1f6a38: 0xc086370
label_1f6a3c:
    if (ctx->pc == 0x1F6A3Cu) {
        ctx->pc = 0x1F6A3Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
        ctx->pc = 0x1F6A40u;
        goto label_1f6a40;
    }
    ctx->pc = 0x1F6A38u;
    SET_GPR_U32(ctx, 31, 0x1F6A40u);
    ctx->pc = 0x1F6A3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkRemain__13EntryDatClassFv_0x218dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6A40u; }
        else if (ctx->pc != 0x1F6A40u) { ctx->pc = 0x1F6A40u; }
    }
    if (ctx->pc != 0x1F6A40u) { return; }
    ctx->pc = 0x1F6A40u;
label_1f6a40:
    // 0x1f6a40: 0x1440016b
label_1f6a44:
    if (ctx->pc == 0x1F6A44u) {
        ctx->pc = 0x1F6A44u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F6A48u;
        goto label_1f6a48;
    }
    ctx->pc = 0x1F6A40u;
    {
        const bool branch_taken_0x1f6a40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F6A44u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1f6a40) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6A48u;
label_1f6a48:
    // 0x1f6a48: 0x10000169
label_1f6a4c:
    if (ctx->pc == 0x1F6A4Cu) {
        ctx->pc = 0x1F6A4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6A50u;
        goto label_1f6a50;
    }
    ctx->pc = 0x1F6A48u;
    {
        const bool branch_taken_0x1f6a48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6A4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6a48) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6A50u;
label_1f6a50:
    // 0x1f6a50: 0xae000008
    ctx->pc = 0x1f6a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1f6a54:
    // 0x1f6a54: 0x2402ffff
    ctx->pc = 0x1f6a54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f6a58:
    // 0x1f6a58: 0xaf808e3c
    ctx->pc = 0x1f6a58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
label_1f6a5c:
    // 0x1f6a5c: 0xaf828e40
    ctx->pc = 0x1f6a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
label_1f6a60:
    // 0x1f6a60: 0x8e020004
    ctx->pc = 0x1f6a60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f6a64:
    // 0x1f6a64: 0x24420001
    ctx->pc = 0x1f6a64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f6a68:
    // 0x1f6a68: 0xae020004
    ctx->pc = 0x1f6a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f6a6c:
    // 0x1f6a6c: 0xc07de28
label_1f6a70:
    if (ctx->pc == 0x1F6A70u) {
        ctx->pc = 0x1F6A74u;
        goto label_1f6a74;
    }
    ctx->pc = 0x1F6A6Cu;
    SET_GPR_U32(ctx, 31, 0x1F6A74u);
    ctx->pc = 0x1F78A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_mccheckrun__Fv_0x1f78a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6A74u; }
        else if (ctx->pc != 0x1F6A74u) { ctx->pc = 0x1F6A74u; }
    }
    if (ctx->pc != 0x1F6A74u) { return; }
    ctx->pc = 0x1F6A74u;
label_1f6a74:
    // 0x1f6a74: 0x3c010050
    ctx->pc = 0x1f6a74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f6a78:
    // 0x1f6a78: 0x8c23fe8c
    ctx->pc = 0x1f6a78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f6a7c:
    // 0x1f6a7c: 0x1060015c
label_1f6a80:
    if (ctx->pc == 0x1F6A80u) {
        ctx->pc = 0x1F6A80u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F6A84u;
        goto label_1f6a84;
    }
    ctx->pc = 0x1F6A7Cu;
    {
        const bool branch_taken_0x1f6a7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6A80u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f6a7c) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6A84u;
label_1f6a84:
    // 0x1f6a84: 0x70002e28
    ctx->pc = 0x1f6a84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f6a88:
    // 0x1f6a88: 0x26060010
    ctx->pc = 0x1f6a88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 16));
label_1f6a8c:
    // 0x1f6a8c: 0x26070014
    ctx->pc = 0x1f6a8cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 20));
label_1f6a90:
    // 0x1f6a90: 0xc07ddd8
label_1f6a94:
    if (ctx->pc == 0x1F6A94u) {
        ctx->pc = 0x1F6A94u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x1F6A98u;
        goto label_1f6a98;
    }
    ctx->pc = 0x1F6A90u;
    SET_GPR_U32(ctx, 31, 0x1F6A98u);
    ctx->pc = 0x1F6A94u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 24));
    ctx->pc = 0x1F7760u;
    {
        const uint32_t __entryPc = ctx->pc;
        McGetInfo__FiiPiPiPi_0x1f7760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6A98u; }
        else if (ctx->pc != 0x1F6A98u) { ctx->pc = 0x1F6A98u; }
    }
    if (ctx->pc != 0x1F6A98u) { return; }
    ctx->pc = 0x1F6A98u;
label_1f6a98:
    // 0x1f6a98: 0x3c020050
    ctx->pc = 0x1f6a98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f6a9c:
    // 0x1f6a9c: 0xc074dac
label_1f6aa0:
    if (ctx->pc == 0x1F6AA0u) {
        ctx->pc = 0x1F6AA0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
        ctx->pc = 0x1F6AA4u;
        goto label_1f6aa4;
    }
    ctx->pc = 0x1F6A9Cu;
    SET_GPR_U32(ctx, 31, 0x1F6AA4u);
    ctx->pc = 0x1F6AA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
    ctx->pc = 0x1D36B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        synch__14SysCfgMgrClassFv_0x1d36b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6AA4u; }
        else if (ctx->pc != 0x1F6AA4u) { ctx->pc = 0x1F6AA4u; }
    }
    if (ctx->pc != 0x1F6AA4u) { return; }
    ctx->pc = 0x1F6AA4u;
label_1f6aa4:
    // 0x1f6aa4: 0x8e020004
    ctx->pc = 0x1f6aa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f6aa8:
    // 0x1f6aa8: 0x24420001
    ctx->pc = 0x1f6aa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f6aac:
    // 0x1f6aac: 0xae020004
    ctx->pc = 0x1f6aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f6ab0:
    // 0x1f6ab0: 0xc07de28
label_1f6ab4:
    if (ctx->pc == 0x1F6AB4u) {
        ctx->pc = 0x1F6AB8u;
        goto label_1f6ab8;
    }
    ctx->pc = 0x1F6AB0u;
    SET_GPR_U32(ctx, 31, 0x1F6AB8u);
    ctx->pc = 0x1F78A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_mccheckrun__Fv_0x1f78a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6AB8u; }
        else if (ctx->pc != 0x1F6AB8u) { ctx->pc = 0x1F6AB8u; }
    }
    if (ctx->pc != 0x1F6AB8u) { return; }
    ctx->pc = 0x1F6AB8u;
label_1f6ab8:
    // 0x1f6ab8: 0x3c010050
    ctx->pc = 0x1f6ab8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f6abc:
    // 0x1f6abc: 0x8c23fe8c
    ctx->pc = 0x1f6abcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f6ac0:
    // 0x1f6ac0: 0x1060014b
label_1f6ac4:
    if (ctx->pc == 0x1F6AC4u) {
        ctx->pc = 0x1F6AC8u;
        goto label_1f6ac8;
    }
    ctx->pc = 0x1F6AC0u;
    {
        const bool branch_taken_0x1f6ac0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f6ac0) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6AC8u;
label_1f6ac8:
    // 0x1f6ac8: 0x8e040010
    ctx->pc = 0x1f6ac8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f6acc:
    // 0x1f6acc: 0x24030002
    ctx->pc = 0x1f6accu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1f6ad0:
    // 0x1f6ad0: 0x10830003
label_1f6ad4:
    if (ctx->pc == 0x1F6AD4u) {
        ctx->pc = 0x1F6AD4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x1F6AD8u;
        goto label_1f6ad8;
    }
    ctx->pc = 0x1F6AD0u;
    {
        const bool branch_taken_0x1f6ad0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1F6AD4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x1f6ad0) {
            ctx->pc = 0x1F6AE0u;
            goto label_1f6ae0;
        }
    }
    ctx->pc = 0x1F6AD8u;
label_1f6ad8:
    // 0x1f6ad8: 0x10000145
label_1f6adc:
    if (ctx->pc == 0x1F6ADCu) {
        ctx->pc = 0x1F6ADCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6AE0u;
        goto label_1f6ae0;
    }
    ctx->pc = 0x1F6AD8u;
    {
        const bool branch_taken_0x1f6ad8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6ADCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6ad8) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6AE0u;
label_1f6ae0:
    // 0x1f6ae0: 0x8e040018
    ctx->pc = 0x1f6ae0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1f6ae4:
    // 0x1f6ae4: 0x24030001
    ctx->pc = 0x1f6ae4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f6ae8:
    // 0x1f6ae8: 0x10830003
label_1f6aec:
    if (ctx->pc == 0x1F6AECu) {
        ctx->pc = 0x1F6AECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x1F6AF0u;
        goto label_1f6af0;
    }
    ctx->pc = 0x1F6AE8u;
    {
        const bool branch_taken_0x1f6ae8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1F6AECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
        if (branch_taken_0x1f6ae8) {
            ctx->pc = 0x1F6AF8u;
            goto label_1f6af8;
        }
    }
    ctx->pc = 0x1F6AF0u;
label_1f6af0:
    // 0x1f6af0: 0x1000013f
label_1f6af4:
    if (ctx->pc == 0x1F6AF4u) {
        ctx->pc = 0x1F6AF4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6AF8u;
        goto label_1f6af8;
    }
    ctx->pc = 0x1F6AF0u;
    {
        const bool branch_taken_0x1f6af0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6AF4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6af0) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6AF8u;
label_1f6af8:
    // 0x1f6af8: 0x8e020004
    ctx->pc = 0x1f6af8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f6afc:
    // 0x1f6afc: 0x24420001
    ctx->pc = 0x1f6afcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f6b00:
    // 0x1f6b00: 0xae020004
    ctx->pc = 0x1f6b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f6b04:
    // 0x1f6b04: 0xc07de28
label_1f6b08:
    if (ctx->pc == 0x1F6B08u) {
        ctx->pc = 0x1F6B0Cu;
        goto label_1f6b0c;
    }
    ctx->pc = 0x1F6B04u;
    SET_GPR_U32(ctx, 31, 0x1F6B0Cu);
    ctx->pc = 0x1F78A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_mccheckrun__Fv_0x1f78a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6B0Cu; }
        else if (ctx->pc != 0x1F6B0Cu) { ctx->pc = 0x1F6B0Cu; }
    }
    if (ctx->pc != 0x1F6B0Cu) { return; }
    ctx->pc = 0x1F6B0Cu;
label_1f6b0c:
    // 0x1f6b0c: 0x3c010050
    ctx->pc = 0x1f6b0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f6b10:
    // 0x1f6b10: 0x8c23fe8c
    ctx->pc = 0x1f6b10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f6b14:
    // 0x1f6b14: 0x10600136
label_1f6b18:
    if (ctx->pc == 0x1F6B18u) {
        ctx->pc = 0x1F6B1Cu;
        goto label_1f6b1c;
    }
    ctx->pc = 0x1F6B14u;
    {
        const bool branch_taken_0x1f6b14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f6b14) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6B1Cu;
label_1f6b1c:
    // 0x1f6b1c: 0x3c020027
    ctx->pc = 0x1f6b1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_1f6b20:
    // 0x1f6b20: 0x2604000c
    ctx->pc = 0x1f6b20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
label_1f6b24:
    // 0x1f6b24: 0x70002e28
    ctx->pc = 0x1f6b24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f6b28:
    // 0x1f6b28: 0x70003628
    ctx->pc = 0x1f6b28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f6b2c:
    // 0x1f6b2c: 0x2447ccd0
    ctx->pc = 0x1f6b2cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294954192));
label_1f6b30:
    // 0x1f6b30: 0xc07dd74
label_1f6b34:
    if (ctx->pc == 0x1F6B34u) {
        ctx->pc = 0x1F6B34u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F6B38u;
        goto label_1f6b38;
    }
    ctx->pc = 0x1F6B30u;
    SET_GPR_U32(ctx, 31, 0x1F6B38u);
    ctx->pc = 0x1F6B34u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1F75D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        McSyncOpen__FPiiiPCci_0x1f75d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6B38u; }
        else if (ctx->pc != 0x1F6B38u) { ctx->pc = 0x1F6B38u; }
    }
    if (ctx->pc != 0x1F6B38u) { return; }
    ctx->pc = 0x1F6B38u;
label_1f6b38:
    // 0x1f6b38: 0x8e020004
    ctx->pc = 0x1f6b38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f6b3c:
    // 0x1f6b3c: 0x24420001
    ctx->pc = 0x1f6b3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f6b40:
    // 0x1f6b40: 0xae020004
    ctx->pc = 0x1f6b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f6b44:
    // 0x1f6b44: 0xc07de28
label_1f6b48:
    if (ctx->pc == 0x1F6B48u) {
        ctx->pc = 0x1F6B4Cu;
        goto label_1f6b4c;
    }
    ctx->pc = 0x1F6B44u;
    SET_GPR_U32(ctx, 31, 0x1F6B4Cu);
    ctx->pc = 0x1F78A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_mccheckrun__Fv_0x1f78a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6B4Cu; }
        else if (ctx->pc != 0x1F6B4Cu) { ctx->pc = 0x1F6B4Cu; }
    }
    if (ctx->pc != 0x1F6B4Cu) { return; }
    ctx->pc = 0x1F6B4Cu;
label_1f6b4c:
    // 0x1f6b4c: 0x3c010050
    ctx->pc = 0x1f6b4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f6b50:
    // 0x1f6b50: 0x8c23fe8c
    ctx->pc = 0x1f6b50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f6b54:
    // 0x1f6b54: 0x10600126
label_1f6b58:
    if (ctx->pc == 0x1F6B58u) {
        ctx->pc = 0x1F6B58u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        ctx->pc = 0x1F6B5Cu;
        goto label_1f6b5c;
    }
    ctx->pc = 0x1F6B54u;
    {
        const bool branch_taken_0x1f6b54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6B58u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1f6b54) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6B5Cu;
label_1f6b5c:
    // 0x1f6b5c: 0x8c23fe88
    ctx->pc = 0x1f6b5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966920)));
label_1f6b60:
    // 0x1f6b60: 0x4600004
label_1f6b64:
    if (ctx->pc == 0x1F6B64u) {
        ctx->pc = 0x1F6B64u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6B68u;
        goto label_1f6b68;
    }
    ctx->pc = 0x1F6B60u;
    {
        const bool branch_taken_0x1f6b60 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1F6B64u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6b60) {
            ctx->pc = 0x1F6B74u;
            goto label_1f6b74;
        }
    }
    ctx->pc = 0x1F6B68u;
label_1f6b68:
    // 0x1f6b68: 0x24030007
    ctx->pc = 0x1f6b68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
label_1f6b6c:
    // 0x1f6b6c: 0x10000120
label_1f6b70:
    if (ctx->pc == 0x1F6B70u) {
        ctx->pc = 0x1F6B70u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6B74u;
        goto label_1f6b74;
    }
    ctx->pc = 0x1F6B6Cu;
    {
        const bool branch_taken_0x1f6b6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6B70u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6b6c) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6B74u;
label_1f6b74:
    // 0x1f6b74: 0x24030012
    ctx->pc = 0x1f6b74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
label_1f6b78:
    // 0x1f6b78: 0x1000011d
label_1f6b7c:
    if (ctx->pc == 0x1F6B7Cu) {
        ctx->pc = 0x1F6B7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6B80u;
        goto label_1f6b80;
    }
    ctx->pc = 0x1F6B78u;
    {
        const bool branch_taken_0x1f6b78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6B7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6b78) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6B80u;
label_1f6b80:
    // 0x1f6b80: 0x24020001
    ctx->pc = 0x1f6b80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f6b84:
    // 0x1f6b84: 0xaf828e3c
    ctx->pc = 0x1f6b84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 2));
label_1f6b88:
    // 0x1f6b88: 0x2402ffff
    ctx->pc = 0x1f6b88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f6b8c:
    // 0x1f6b8c: 0xaf828e40
    ctx->pc = 0x1f6b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
label_1f6b90:
    // 0x1f6b90: 0x8e020004
    ctx->pc = 0x1f6b90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f6b94:
    // 0x1f6b94: 0x24420001
    ctx->pc = 0x1f6b94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f6b98:
    // 0x1f6b98: 0xae020004
    ctx->pc = 0x1f6b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f6b9c:
    // 0x1f6b9c: 0xc07e0a0
label_1f6ba0:
    if (ctx->pc == 0x1F6BA0u) {
        ctx->pc = 0x1F6BA4u;
        goto label_1f6ba4;
    }
    ctx->pc = 0x1F6B9Cu;
    SET_GPR_U32(ctx, 31, 0x1F6BA4u);
    ctx->pc = 0x1F8280u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_loadconfirm__Fv_0x1f8280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6BA4u; }
        else if (ctx->pc != 0x1F6BA4u) { ctx->pc = 0x1F6BA4u; }
    }
    if (ctx->pc != 0x1F6BA4u) { return; }
    ctx->pc = 0x1F6BA4u;
label_1f6ba4:
    // 0x1f6ba4: 0x8f848e40
    ctx->pc = 0x1f6ba4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938176)));
label_1f6ba8:
    // 0x1f6ba8: 0x24030001
    ctx->pc = 0x1f6ba8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f6bac:
    // 0x1f6bac: 0x50830007
label_1f6bb0:
    if (ctx->pc == 0x1F6BB0u) {
        ctx->pc = 0x1F6BB0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x1F6BB4u;
        goto label_1f6bb4;
    }
    ctx->pc = 0x1F6BACu;
    {
        const bool branch_taken_0x1f6bac = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1f6bac) {
            ctx->pc = 0x1F6BB0u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
            ctx->pc = 0x1F6BCCu;
            goto label_1f6bcc;
        }
    }
    ctx->pc = 0x1F6BB4u;
label_1f6bb4:
    // 0x1f6bb4: 0x10800003
label_1f6bb8:
    if (ctx->pc == 0x1F6BB8u) {
        ctx->pc = 0x1F6BB8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x1F6BBCu;
        goto label_1f6bbc;
    }
    ctx->pc = 0x1F6BB4u;
    {
        const bool branch_taken_0x1f6bb4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6BB8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x1f6bb4) {
            ctx->pc = 0x1F6BC4u;
            goto label_1f6bc4;
        }
    }
    ctx->pc = 0x1F6BBCu;
label_1f6bbc:
    // 0x1f6bbc: 0x10000008
label_1f6bc0:
    if (ctx->pc == 0x1F6BC0u) {
        ctx->pc = 0x1F6BC0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        ctx->pc = 0x1F6BC4u;
        goto label_1f6bc4;
    }
    ctx->pc = 0x1F6BBCu;
    {
        const bool branch_taken_0x1f6bbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6BC0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1f6bbc) {
            ctx->pc = 0x1F6BE0u;
            goto label_1f6be0;
        }
    }
    ctx->pc = 0x1F6BC4u;
label_1f6bc4:
    // 0x1f6bc4: 0x1000010a
label_1f6bc8:
    if (ctx->pc == 0x1F6BC8u) {
        ctx->pc = 0x1F6BC8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6BCCu;
        goto label_1f6bcc;
    }
    ctx->pc = 0x1F6BC4u;
    {
        const bool branch_taken_0x1f6bc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6BC8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6bc4) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6BCCu;
label_1f6bcc:
    // 0x1f6bcc: 0xc07dd94
label_1f6bd0:
    if (ctx->pc == 0x1F6BD0u) {
        ctx->pc = 0x1F6BD4u;
        goto label_1f6bd4;
    }
    ctx->pc = 0x1F6BCCu;
    SET_GPR_U32(ctx, 31, 0x1F6BD4u);
    ctx->pc = 0x1F7650u;
    {
        const uint32_t __entryPc = ctx->pc;
        McSyncClose__FPi_0x1f7650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6BD4u; }
        else if (ctx->pc != 0x1F6BD4u) { ctx->pc = 0x1F6BD4u; }
    }
    if (ctx->pc != 0x1F6BD4u) { return; }
    ctx->pc = 0x1F6BD4u;
label_1f6bd4:
    // 0x1f6bd4: 0x24030018
    ctx->pc = 0x1f6bd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
label_1f6bd8:
    // 0x1f6bd8: 0x10000105
label_1f6bdc:
    if (ctx->pc == 0x1F6BDCu) {
        ctx->pc = 0x1F6BDCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6BE0u;
        goto label_1f6be0;
    }
    ctx->pc = 0x1F6BD8u;
    {
        const bool branch_taken_0x1f6bd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6BDCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6bd8) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6BE0u;
label_1f6be0:
    // 0x1f6be0: 0x8c23fe8c
    ctx->pc = 0x1f6be0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f6be4:
    // 0x1f6be4: 0x10600102
label_1f6be8:
    if (ctx->pc == 0x1F6BE8u) {
        ctx->pc = 0x1F6BECu;
        goto label_1f6bec;
    }
    ctx->pc = 0x1F6BE4u;
    {
        const bool branch_taken_0x1f6be4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f6be4) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6BECu;
label_1f6bec:
    // 0x1f6bec: 0x8e030010
    ctx->pc = 0x1f6becu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f6bf0:
    // 0x1f6bf0: 0x24020002
    ctx->pc = 0x1f6bf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1f6bf4:
    // 0x1f6bf4: 0x1462000c
label_1f6bf8:
    if (ctx->pc == 0x1F6BF8u) {
        ctx->pc = 0x1F6BF8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x1F6BFCu;
        goto label_1f6bfc;
    }
    ctx->pc = 0x1F6BF4u;
    {
        const bool branch_taken_0x1f6bf4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1F6BF8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
        if (branch_taken_0x1f6bf4) {
            ctx->pc = 0x1F6C28u;
            goto label_1f6c28;
        }
    }
    ctx->pc = 0x1F6BFCu;
label_1f6bfc:
    // 0x1f6bfc: 0x70002628
    ctx->pc = 0x1f6bfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f6c00:
    // 0x1f6c00: 0x70002e28
    ctx->pc = 0x1f6c00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f6c04:
    // 0x1f6c04: 0x26060010
    ctx->pc = 0x1f6c04u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 16));
label_1f6c08:
    // 0x1f6c08: 0x26070014
    ctx->pc = 0x1f6c08u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 20));
label_1f6c0c:
    // 0x1f6c0c: 0xc07ddd8
label_1f6c10:
    if (ctx->pc == 0x1F6C10u) {
        ctx->pc = 0x1F6C10u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x1F6C14u;
        goto label_1f6c14;
    }
    ctx->pc = 0x1F6C0Cu;
    SET_GPR_U32(ctx, 31, 0x1F6C14u);
    ctx->pc = 0x1F6C10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 24));
    ctx->pc = 0x1F7760u;
    {
        const uint32_t __entryPc = ctx->pc;
        McGetInfo__FiiPiPiPi_0x1f7760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C14u; }
        else if (ctx->pc != 0x1F6C14u) { ctx->pc = 0x1F6C14u; }
    }
    if (ctx->pc != 0x1F6C14u) { return; }
    ctx->pc = 0x1F6C14u;
label_1f6c14:
    // 0x1f6c14: 0x3c020050
    ctx->pc = 0x1f6c14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f6c18:
    // 0x1f6c18: 0xc074dac
label_1f6c1c:
    if (ctx->pc == 0x1F6C1Cu) {
        ctx->pc = 0x1F6C1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
        ctx->pc = 0x1F6C20u;
        goto label_1f6c20;
    }
    ctx->pc = 0x1F6C18u;
    SET_GPR_U32(ctx, 31, 0x1F6C20u);
    ctx->pc = 0x1F6C1Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
    ctx->pc = 0x1D36B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        synch__14SysCfgMgrClassFv_0x1d36b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C20u; }
        else if (ctx->pc != 0x1F6C20u) { ctx->pc = 0x1F6C20u; }
    }
    if (ctx->pc != 0x1F6C20u) { return; }
    ctx->pc = 0x1F6C20u;
label_1f6c20:
    // 0x1f6c20: 0x100000f4
label_1f6c24:
    if (ctx->pc == 0x1F6C24u) {
        ctx->pc = 0x1F6C24u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1F6C28u;
        goto label_1f6c28;
    }
    ctx->pc = 0x1F6C20u;
    {
        const bool branch_taken_0x1f6c20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6C24u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1f6c20) {
            ctx->pc = 0x1F6FF4u;
            goto label_1f6ff4;
        }
    }
    ctx->pc = 0x1F6C28u;
label_1f6c28:
    // 0x1f6c28: 0xc07dd94
label_1f6c2c:
    if (ctx->pc == 0x1F6C2Cu) {
        ctx->pc = 0x1F6C30u;
        goto label_1f6c30;
    }
    ctx->pc = 0x1F6C28u;
    SET_GPR_U32(ctx, 31, 0x1F6C30u);
    ctx->pc = 0x1F7650u;
    {
        const uint32_t __entryPc = ctx->pc;
        McSyncClose__FPi_0x1f7650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C30u; }
        else if (ctx->pc != 0x1F6C30u) { ctx->pc = 0x1F6C30u; }
    }
    if (ctx->pc != 0x1F6C30u) { return; }
    ctx->pc = 0x1F6C30u;
label_1f6c30:
    // 0x1f6c30: 0x24030002
    ctx->pc = 0x1f6c30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1f6c34:
    // 0x1f6c34: 0x100000ee
label_1f6c38:
    if (ctx->pc == 0x1F6C38u) {
        ctx->pc = 0x1F6C38u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6C3Cu;
        goto label_1f6c3c;
    }
    ctx->pc = 0x1F6C34u;
    {
        const bool branch_taken_0x1f6c34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6C38u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6c34) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6C3Cu;
label_1f6c3c:
    // 0x1f6c3c: 0x2402ffff
    ctx->pc = 0x1f6c3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f6c40:
    // 0x1f6c40: 0xaf828e40
    ctx->pc = 0x1f6c40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
label_1f6c44:
    // 0x1f6c44: 0x8f828be4
    ctx->pc = 0x1f6c44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
label_1f6c48:
    // 0x1f6c48: 0xaf808e3c
    ctx->pc = 0x1f6c48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
label_1f6c4c:
    // 0x1f6c4c: 0xae02002c
    ctx->pc = 0x1f6c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1f6c50:
    // 0x1f6c50: 0x8e020004
    ctx->pc = 0x1f6c50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f6c54:
    // 0x1f6c54: 0x24420001
    ctx->pc = 0x1f6c54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f6c58:
    // 0x1f6c58: 0xae020004
    ctx->pc = 0x1f6c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f6c5c:
    // 0x1f6c5c: 0xc07ded8
label_1f6c60:
    if (ctx->pc == 0x1F6C60u) {
        ctx->pc = 0x1F6C64u;
        goto label_1f6c64;
    }
    ctx->pc = 0x1F6C5Cu;
    SET_GPR_U32(ctx, 31, 0x1F6C64u);
    ctx->pc = 0x1F7B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_nowloading__Fv_0x1f7b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C64u; }
        else if (ctx->pc != 0x1F6C64u) { ctx->pc = 0x1F6C64u; }
    }
    if (ctx->pc != 0x1F6C64u) { return; }
    ctx->pc = 0x1F6C64u;
label_1f6c64:
    // 0x1f6c64: 0x3c010050
    ctx->pc = 0x1f6c64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f6c68:
    // 0x1f6c68: 0x8c23fe8c
    ctx->pc = 0x1f6c68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f6c6c:
    // 0x1f6c6c: 0x106000e0
label_1f6c70:
    if (ctx->pc == 0x1F6C70u) {
        ctx->pc = 0x1F6C74u;
        goto label_1f6c74;
    }
    ctx->pc = 0x1F6C6Cu;
    {
        const bool branch_taken_0x1f6c6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f6c6c) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6C74u;
label_1f6c74:
    // 0x1f6c74: 0x8e050030
    ctx->pc = 0x1f6c74u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f6c78:
    // 0x1f6c78: 0xc07ddac
label_1f6c7c:
    if (ctx->pc == 0x1F6C7Cu) {
        ctx->pc = 0x1F6C7Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x1F6C80u;
        goto label_1f6c80;
    }
    ctx->pc = 0x1F6C78u;
    SET_GPR_U32(ctx, 31, 0x1F6C80u);
    ctx->pc = 0x1F6C7Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1F76B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        McSyncReadGameData__FiP14tagUSER_BACKUP_0x1f76b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C80u; }
        else if (ctx->pc != 0x1F6C80u) { ctx->pc = 0x1F6C80u; }
    }
    if (ctx->pc != 0x1F6C80u) { return; }
    ctx->pc = 0x1F6C80u;
label_1f6c80:
    // 0x1f6c80: 0x8e020004
    ctx->pc = 0x1f6c80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f6c84:
    // 0x1f6c84: 0x24420001
    ctx->pc = 0x1f6c84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f6c88:
    // 0x1f6c88: 0xae020004
    ctx->pc = 0x1f6c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f6c8c:
    // 0x1f6c8c: 0xc07ded8
label_1f6c90:
    if (ctx->pc == 0x1F6C90u) {
        ctx->pc = 0x1F6C94u;
        goto label_1f6c94;
    }
    ctx->pc = 0x1F6C8Cu;
    SET_GPR_U32(ctx, 31, 0x1F6C94u);
    ctx->pc = 0x1F7B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_nowloading__Fv_0x1f7b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C94u; }
        else if (ctx->pc != 0x1F6C94u) { ctx->pc = 0x1F6C94u; }
    }
    if (ctx->pc != 0x1F6C94u) { return; }
    ctx->pc = 0x1F6C94u;
label_1f6c94:
    // 0x1f6c94: 0x3c010050
    ctx->pc = 0x1f6c94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f6c98:
    // 0x1f6c98: 0x8c23fe8c
    ctx->pc = 0x1f6c98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f6c9c:
    // 0x1f6c9c: 0x106000d4
label_1f6ca0:
    if (ctx->pc == 0x1F6CA0u) {
        ctx->pc = 0x1F6CA0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        ctx->pc = 0x1F6CA4u;
        goto label_1f6ca4;
    }
    ctx->pc = 0x1F6C9Cu;
    {
        const bool branch_taken_0x1f6c9c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6CA0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1f6c9c) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6CA4u;
label_1f6ca4:
    // 0x1f6ca4: 0x8c23fe88
    ctx->pc = 0x1f6ca4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966920)));
label_1f6ca8:
    // 0x1f6ca8: 0x4610004
label_1f6cac:
    if (ctx->pc == 0x1F6CACu) {
        ctx->pc = 0x1F6CACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x1F6CB0u;
        goto label_1f6cb0;
    }
    ctx->pc = 0x1F6CA8u;
    {
        const bool branch_taken_0x1f6ca8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1F6CACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
        if (branch_taken_0x1f6ca8) {
            ctx->pc = 0x1F6CBCu;
            goto label_1f6cbc;
        }
    }
    ctx->pc = 0x1F6CB0u;
label_1f6cb0:
    // 0x1f6cb0: 0x24030014
    ctx->pc = 0x1f6cb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
label_1f6cb4:
    // 0x1f6cb4: 0x100000ce
label_1f6cb8:
    if (ctx->pc == 0x1F6CB8u) {
        ctx->pc = 0x1F6CB8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6CBCu;
        goto label_1f6cbc;
    }
    ctx->pc = 0x1F6CB4u;
    {
        const bool branch_taken_0x1f6cb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6CB8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6cb4) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6CBCu;
label_1f6cbc:
    // 0x1f6cbc: 0xc07dd94
label_1f6cc0:
    if (ctx->pc == 0x1F6CC0u) {
        ctx->pc = 0x1F6CC4u;
        goto label_1f6cc4;
    }
    ctx->pc = 0x1F6CBCu;
    SET_GPR_U32(ctx, 31, 0x1F6CC4u);
    ctx->pc = 0x1F7650u;
    {
        const uint32_t __entryPc = ctx->pc;
        McSyncClose__FPi_0x1f7650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6CC4u; }
        else if (ctx->pc != 0x1F6CC4u) { ctx->pc = 0x1F6CC4u; }
    }
    if (ctx->pc != 0x1F6CC4u) { return; }
    ctx->pc = 0x1F6CC4u;
label_1f6cc4:
    // 0x1f6cc4: 0x8e020004
    ctx->pc = 0x1f6cc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f6cc8:
    // 0x1f6cc8: 0x24420001
    ctx->pc = 0x1f6cc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f6ccc:
    // 0x1f6ccc: 0xae020004
    ctx->pc = 0x1f6cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f6cd0:
    // 0x1f6cd0: 0xc07ded8
label_1f6cd4:
    if (ctx->pc == 0x1F6CD4u) {
        ctx->pc = 0x1F6CD8u;
        goto label_1f6cd8;
    }
    ctx->pc = 0x1F6CD0u;
    SET_GPR_U32(ctx, 31, 0x1F6CD8u);
    ctx->pc = 0x1F7B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_nowloading__Fv_0x1f7b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6CD8u; }
        else if (ctx->pc != 0x1F6CD8u) { ctx->pc = 0x1F6CD8u; }
    }
    if (ctx->pc != 0x1F6CD8u) { return; }
    ctx->pc = 0x1F6CD8u;
label_1f6cd8:
    // 0x1f6cd8: 0x3c010050
    ctx->pc = 0x1f6cd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f6cdc:
    // 0x1f6cdc: 0x8c23fe8c
    ctx->pc = 0x1f6cdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f6ce0:
    // 0x1f6ce0: 0x106000c3
label_1f6ce4:
    if (ctx->pc == 0x1F6CE4u) {
        ctx->pc = 0x1F6CE4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        ctx->pc = 0x1F6CE8u;
        goto label_1f6ce8;
    }
    ctx->pc = 0x1F6CE0u;
    {
        const bool branch_taken_0x1f6ce0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6CE4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1f6ce0) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6CE8u;
label_1f6ce8:
    // 0x1f6ce8: 0x8c23fe88
    ctx->pc = 0x1f6ce8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966920)));
label_1f6cec:
    // 0x1f6cec: 0x10600003
label_1f6cf0:
    if (ctx->pc == 0x1F6CF0u) {
        ctx->pc = 0x1F6CF0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x1F6CF4u;
        goto label_1f6cf4;
    }
    ctx->pc = 0x1F6CECu;
    {
        const bool branch_taken_0x1f6cec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6CF0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x1f6cec) {
            ctx->pc = 0x1F6CFCu;
            goto label_1f6cfc;
        }
    }
    ctx->pc = 0x1F6CF4u;
label_1f6cf4:
    // 0x1f6cf4: 0x100000be
label_1f6cf8:
    if (ctx->pc == 0x1F6CF8u) {
        ctx->pc = 0x1F6CF8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6CFCu;
        goto label_1f6cfc;
    }
    ctx->pc = 0x1F6CF4u;
    {
        const bool branch_taken_0x1f6cf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6CF8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6cf4) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6CFCu;
label_1f6cfc:
    // 0x1f6cfc: 0xc07ddc8
label_1f6d00:
    if (ctx->pc == 0x1F6D00u) {
        ctx->pc = 0x1F6D00u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x1F6D04u;
        goto label_1f6d04;
    }
    ctx->pc = 0x1F6CFCu;
    SET_GPR_U32(ctx, 31, 0x1F6D04u);
    ctx->pc = 0x1F6D00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->pc = 0x1F7720u;
    {
        const uint32_t __entryPc = ctx->pc;
        McCheckGameData__FP14tagUSER_BACKUP_0x1f7720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6D04u; }
        else if (ctx->pc != 0x1F6D04u) { ctx->pc = 0x1F6D04u; }
    }
    if (ctx->pc != 0x1F6D04u) { return; }
    ctx->pc = 0x1F6D04u;
label_1f6d04:
    // 0x1f6d04: 0x14400003
label_1f6d08:
    if (ctx->pc == 0x1F6D08u) {
        ctx->pc = 0x1F6D08u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x1F6D0Cu;
        goto label_1f6d0c;
    }
    ctx->pc = 0x1F6D04u;
    {
        const bool branch_taken_0x1f6d04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F6D08u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x1f6d04) {
            ctx->pc = 0x1F6D14u;
            goto label_1f6d14;
        }
    }
    ctx->pc = 0x1F6D0Cu;
label_1f6d0c:
    // 0x1f6d0c: 0x100000b8
label_1f6d10:
    if (ctx->pc == 0x1F6D10u) {
        ctx->pc = 0x1F6D10u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6D14u;
        goto label_1f6d14;
    }
    ctx->pc = 0x1F6D0Cu;
    {
        const bool branch_taken_0x1f6d0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6D10u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6d0c) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6D14u;
label_1f6d14:
    // 0x1f6d14: 0x8e050030
    ctx->pc = 0x1f6d14u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f6d18:
    // 0x1f6d18: 0x3c020050
    ctx->pc = 0x1f6d18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f6d1c:
    // 0x1f6d1c: 0x2444fec0
    ctx->pc = 0x1f6d1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966976));
label_1f6d20:
    // 0x1f6d20: 0xc06ac12
label_1f6d24:
    if (ctx->pc == 0x1F6D24u) {
        ctx->pc = 0x1F6D24u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 756));
        ctx->pc = 0x1F6D28u;
        goto label_1f6d28;
    }
    ctx->pc = 0x1F6D20u;
    SET_GPR_U32(ctx, 31, 0x1F6D28u);
    ctx->pc = 0x1F6D24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 756));
    ctx->pc = 0x1AB048u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB048_0x1ab048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6D28u; }
        else if (ctx->pc != 0x1F6D28u) { ctx->pc = 0x1F6D28u; }
    }
    if (ctx->pc != 0x1F6D28u) { return; }
    ctx->pc = 0x1F6D28u;
label_1f6d28:
    // 0x1f6d28: 0x3c020050
    ctx->pc = 0x1f6d28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f6d2c:
    // 0x1f6d2c: 0xc074ddc
label_1f6d30:
    if (ctx->pc == 0x1F6D30u) {
        ctx->pc = 0x1F6D30u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
        ctx->pc = 0x1F6D34u;
        goto label_1f6d34;
    }
    ctx->pc = 0x1F6D2Cu;
    SET_GPR_U32(ctx, 31, 0x1F6D34u);
    ctx->pc = 0x1F6D30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
    ctx->pc = 0x1D3770u;
    {
        const uint32_t __entryPc = ctx->pc;
        setLang__14SysCfgMgrClassFv_0x1d3770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6D34u; }
        else if (ctx->pc != 0x1F6D34u) { ctx->pc = 0x1F6D34u; }
    }
    if (ctx->pc != 0x1F6D34u) { return; }
    ctx->pc = 0x1F6D34u;
label_1f6d34:
    // 0x1f6d34: 0x8e020004
    ctx->pc = 0x1f6d34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f6d38:
    // 0x1f6d38: 0x24420001
    ctx->pc = 0x1f6d38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f6d3c:
    // 0x1f6d3c: 0xae020004
    ctx->pc = 0x1f6d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f6d40:
    // 0x1f6d40: 0xc07ded8
label_1f6d44:
    if (ctx->pc == 0x1F6D44u) {
        ctx->pc = 0x1F6D48u;
        goto label_1f6d48;
    }
    ctx->pc = 0x1F6D40u;
    SET_GPR_U32(ctx, 31, 0x1F6D48u);
    ctx->pc = 0x1F7B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_nowloading__Fv_0x1f7b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6D48u; }
        else if (ctx->pc != 0x1F6D48u) { ctx->pc = 0x1F6D48u; }
    }
    if (ctx->pc != 0x1F6D48u) { return; }
    ctx->pc = 0x1F6D48u;
label_1f6d48:
    // 0x1f6d48: 0x8e04002c
    ctx->pc = 0x1f6d48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1f6d4c:
    // 0x1f6d4c: 0x8f838be4
    ctx->pc = 0x1f6d4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
label_1f6d50:
    // 0x1f6d50: 0x641823
    ctx->pc = 0x1f6d50u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f6d54:
    // 0x1f6d54: 0x2c630096
    ctx->pc = 0x1f6d54u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 150));
label_1f6d58:
    // 0x1f6d58: 0x146000a5
label_1f6d5c:
    if (ctx->pc == 0x1F6D5Cu) {
        ctx->pc = 0x1F6D60u;
        goto label_1f6d60;
    }
    ctx->pc = 0x1F6D58u;
    {
        const bool branch_taken_0x1f6d58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f6d58) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6D60u;
label_1f6d60:
    // 0x1f6d60: 0x24020064
    ctx->pc = 0x1f6d60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
label_1f6d64:
    // 0x1f6d64: 0xae02001c
    ctx->pc = 0x1f6d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1f6d68:
    // 0x1f6d68: 0x8e020004
    ctx->pc = 0x1f6d68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f6d6c:
    // 0x1f6d6c: 0x24420001
    ctx->pc = 0x1f6d6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f6d70:
    // 0x1f6d70: 0xae020004
    ctx->pc = 0x1f6d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f6d74:
    // 0x1f6d74: 0xc07defc
label_1f6d78:
    if (ctx->pc == 0x1F6D78u) {
        ctx->pc = 0x1F6D7Cu;
        goto label_1f6d7c;
    }
    ctx->pc = 0x1F6D74u;
    SET_GPR_U32(ctx, 31, 0x1F6D7Cu);
    ctx->pc = 0x1F7BF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_loadcomplete__Fv_0x1f7bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6D7Cu; }
        else if (ctx->pc != 0x1F6D7Cu) { ctx->pc = 0x1F6D7Cu; }
    }
    if (ctx->pc != 0x1F6D7Cu) { return; }
    ctx->pc = 0x1F6D7Cu;
label_1f6d7c:
    // 0x1f6d7c: 0x8e03001c
    ctx->pc = 0x1f6d7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1f6d80:
    // 0x1f6d80: 0x2463ffff
    ctx->pc = 0x1f6d80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f6d84:
    // 0x1f6d84: 0x1c60009a
label_1f6d88:
    if (ctx->pc == 0x1F6D88u) {
        ctx->pc = 0x1F6D88u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6D8Cu;
        goto label_1f6d8c;
    }
    ctx->pc = 0x1F6D84u;
    {
        const bool branch_taken_0x1f6d84 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1F6D88u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6d84) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6D8Cu;
label_1f6d8c:
    // 0x1f6d8c: 0x2403001c
    ctx->pc = 0x1f6d8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_1f6d90:
    // 0x1f6d90: 0x10000097
label_1f6d94:
    if (ctx->pc == 0x1F6D94u) {
        ctx->pc = 0x1F6D94u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6D98u;
        goto label_1f6d98;
    }
    ctx->pc = 0x1F6D90u;
    {
        const bool branch_taken_0x1f6d90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6D94u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6d90) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6D98u;
label_1f6d98:
    // 0x1f6d98: 0x24020001
    ctx->pc = 0x1f6d98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f6d9c:
    // 0x1f6d9c: 0xaf828e3c
    ctx->pc = 0x1f6d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 2));
label_1f6da0:
    // 0x1f6da0: 0x2402ffff
    ctx->pc = 0x1f6da0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f6da4:
    // 0x1f6da4: 0xaf828e40
    ctx->pc = 0x1f6da4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
label_1f6da8:
    // 0x1f6da8: 0x8e020004
    ctx->pc = 0x1f6da8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f6dac:
    // 0x1f6dac: 0x24420001
    ctx->pc = 0x1f6dacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f6db0:
    // 0x1f6db0: 0xae020004
    ctx->pc = 0x1f6db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f6db4:
    // 0x1f6db4: 0xc07e018
label_1f6db8:
    if (ctx->pc == 0x1F6DB8u) {
        ctx->pc = 0x1F6DBCu;
        goto label_1f6dbc;
    }
    ctx->pc = 0x1F6DB4u;
    SET_GPR_U32(ctx, 31, 0x1F6DBCu);
    ctx->pc = 0x1F8060u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_loadnotexist__Fv_0x1f8060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6DBCu; }
        else if (ctx->pc != 0x1F6DBCu) { ctx->pc = 0x1F6DBCu; }
    }
    if (ctx->pc != 0x1F6DBCu) { return; }
    ctx->pc = 0x1F6DBCu;
label_1f6dbc:
    // 0x1f6dbc: 0x8f848e40
    ctx->pc = 0x1f6dbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938176)));
label_1f6dc0:
    // 0x1f6dc0: 0x24030001
    ctx->pc = 0x1f6dc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f6dc4:
    // 0x1f6dc4: 0x10830007
label_1f6dc8:
    if (ctx->pc == 0x1F6DC8u) {
        ctx->pc = 0x1F6DCCu;
        goto label_1f6dcc;
    }
    ctx->pc = 0x1F6DC4u;
    {
        const bool branch_taken_0x1f6dc4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1f6dc4) {
            ctx->pc = 0x1F6DE4u;
            goto label_1f6de4;
        }
    }
    ctx->pc = 0x1F6DCCu;
label_1f6dcc:
    // 0x1f6dcc: 0x10800003
label_1f6dd0:
    if (ctx->pc == 0x1F6DD0u) {
        ctx->pc = 0x1F6DD0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 26));
        ctx->pc = 0x1F6DD4u;
        goto label_1f6dd4;
    }
    ctx->pc = 0x1F6DCCu;
    {
        const bool branch_taken_0x1f6dcc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6DD0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 26));
        if (branch_taken_0x1f6dcc) {
            ctx->pc = 0x1F6DDCu;
            goto label_1f6ddc;
        }
    }
    ctx->pc = 0x1F6DD4u;
label_1f6dd4:
    // 0x1f6dd4: 0x10000086
label_1f6dd8:
    if (ctx->pc == 0x1F6DD8u) {
        ctx->pc = 0x1F6DDCu;
        goto label_1f6ddc;
    }
    ctx->pc = 0x1F6DD4u;
    {
        const bool branch_taken_0x1f6dd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f6dd4) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6DDCu;
label_1f6ddc:
    // 0x1f6ddc: 0x10000084
label_1f6de0:
    if (ctx->pc == 0x1F6DE0u) {
        ctx->pc = 0x1F6DE0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6DE4u;
        goto label_1f6de4;
    }
    ctx->pc = 0x1F6DDCu;
    {
        const bool branch_taken_0x1f6ddc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6DE0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6ddc) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6DE4u;
label_1f6de4:
    // 0x1f6de4: 0x8e03000c
    ctx->pc = 0x1f6de4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f6de8:
    // 0x1f6de8: 0x4600004
label_1f6dec:
    if (ctx->pc == 0x1F6DECu) {
        ctx->pc = 0x1F6DECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F6DF0u;
        goto label_1f6df0;
    }
    ctx->pc = 0x1F6DE8u;
    {
        const bool branch_taken_0x1f6de8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1F6DECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1f6de8) {
            ctx->pc = 0x1F6DFCu;
            goto label_1f6dfc;
        }
    }
    ctx->pc = 0x1F6DF0u;
label_1f6df0:
    // 0x1f6df0: 0xc07dd94
label_1f6df4:
    if (ctx->pc == 0x1F6DF4u) {
        ctx->pc = 0x1F6DF4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x1F6DF8u;
        goto label_1f6df8;
    }
    ctx->pc = 0x1F6DF0u;
    SET_GPR_U32(ctx, 31, 0x1F6DF8u);
    ctx->pc = 0x1F6DF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x1F7650u;
    {
        const uint32_t __entryPc = ctx->pc;
        McSyncClose__FPi_0x1f7650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6DF8u; }
        else if (ctx->pc != 0x1F6DF8u) { ctx->pc = 0x1F6DF8u; }
    }
    if (ctx->pc != 0x1F6DF8u) { return; }
    ctx->pc = 0x1F6DF8u;
label_1f6df8:
    // 0x1f6df8: 0x24030002
    ctx->pc = 0x1f6df8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1f6dfc:
    // 0x1f6dfc: 0x1000007c
label_1f6e00:
    if (ctx->pc == 0x1F6E00u) {
        ctx->pc = 0x1F6E00u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6E04u;
        goto label_1f6e04;
    }
    ctx->pc = 0x1F6DFCu;
    {
        const bool branch_taken_0x1f6dfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6E00u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6dfc) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6E04u;
label_1f6e04:
    // 0x1f6e04: 0xd
    ctx->pc = 0x1f6e04u;
    runtime->handleBreak(rdram, ctx);
label_1f6e08:
    // 0x1f6e08: 0x10000079
label_1f6e0c:
    if (ctx->pc == 0x1F6E0Cu) {
        ctx->pc = 0x1F6E10u;
        goto label_1f6e10;
    }
    ctx->pc = 0x1F6E08u;
    {
        const bool branch_taken_0x1f6e08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f6e08) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6E10u;
label_1f6e10:
    // 0x1f6e10: 0x24020001
    ctx->pc = 0x1f6e10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f6e14:
    // 0x1f6e14: 0xaf828e3c
    ctx->pc = 0x1f6e14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 2));
label_1f6e18:
    // 0x1f6e18: 0x2402ffff
    ctx->pc = 0x1f6e18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f6e1c:
    // 0x1f6e1c: 0xaf828e40
    ctx->pc = 0x1f6e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
label_1f6e20:
    // 0x1f6e20: 0x8e020004
    ctx->pc = 0x1f6e20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f6e24:
    // 0x1f6e24: 0x24420001
    ctx->pc = 0x1f6e24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f6e28:
    // 0x1f6e28: 0xae020004
    ctx->pc = 0x1f6e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f6e2c:
    // 0x1f6e2c: 0xc07e05c
label_1f6e30:
    if (ctx->pc == 0x1F6E30u) {
        ctx->pc = 0x1F6E34u;
        goto label_1f6e34;
    }
    ctx->pc = 0x1F6E2Cu;
    SET_GPR_U32(ctx, 31, 0x1F6E34u);
    ctx->pc = 0x1F8170u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_loadnotfound__Fv_0x1f8170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6E34u; }
        else if (ctx->pc != 0x1F6E34u) { ctx->pc = 0x1F6E34u; }
    }
    if (ctx->pc != 0x1F6E34u) { return; }
    ctx->pc = 0x1F6E34u;
label_1f6e34:
    // 0x1f6e34: 0x8f848e40
    ctx->pc = 0x1f6e34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938176)));
label_1f6e38:
    // 0x1f6e38: 0x24030001
    ctx->pc = 0x1f6e38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f6e3c:
    // 0x1f6e3c: 0x10830007
label_1f6e40:
    if (ctx->pc == 0x1F6E40u) {
        ctx->pc = 0x1F6E44u;
        goto label_1f6e44;
    }
    ctx->pc = 0x1F6E3Cu;
    {
        const bool branch_taken_0x1f6e3c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1f6e3c) {
            ctx->pc = 0x1F6E5Cu;
            goto label_1f6e5c;
        }
    }
    ctx->pc = 0x1F6E44u;
label_1f6e44:
    // 0x1f6e44: 0x10800003
label_1f6e48:
    if (ctx->pc == 0x1F6E48u) {
        ctx->pc = 0x1F6E48u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 26));
        ctx->pc = 0x1F6E4Cu;
        goto label_1f6e4c;
    }
    ctx->pc = 0x1F6E44u;
    {
        const bool branch_taken_0x1f6e44 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6E48u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 26));
        if (branch_taken_0x1f6e44) {
            ctx->pc = 0x1F6E54u;
            goto label_1f6e54;
        }
    }
    ctx->pc = 0x1F6E4Cu;
label_1f6e4c:
    // 0x1f6e4c: 0x1000000b
label_1f6e50:
    if (ctx->pc == 0x1F6E50u) {
        ctx->pc = 0x1F6E50u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        ctx->pc = 0x1F6E54u;
        goto label_1f6e54;
    }
    ctx->pc = 0x1F6E4Cu;
    {
        const bool branch_taken_0x1f6e4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6E50u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1f6e4c) {
            ctx->pc = 0x1F6E7Cu;
            goto label_1f6e7c;
        }
    }
    ctx->pc = 0x1F6E54u;
label_1f6e54:
    // 0x1f6e54: 0x10000066
label_1f6e58:
    if (ctx->pc == 0x1F6E58u) {
        ctx->pc = 0x1F6E58u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6E5Cu;
        goto label_1f6e5c;
    }
    ctx->pc = 0x1F6E54u;
    {
        const bool branch_taken_0x1f6e54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6E58u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6e54) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6E5Cu;
label_1f6e5c:
    // 0x1f6e5c: 0x8e03000c
    ctx->pc = 0x1f6e5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f6e60:
    // 0x1f6e60: 0x4600004
label_1f6e64:
    if (ctx->pc == 0x1F6E64u) {
        ctx->pc = 0x1F6E64u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F6E68u;
        goto label_1f6e68;
    }
    ctx->pc = 0x1F6E60u;
    {
        const bool branch_taken_0x1f6e60 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1F6E64u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1f6e60) {
            ctx->pc = 0x1F6E74u;
            goto label_1f6e74;
        }
    }
    ctx->pc = 0x1F6E68u;
label_1f6e68:
    // 0x1f6e68: 0xc07dd94
label_1f6e6c:
    if (ctx->pc == 0x1F6E6Cu) {
        ctx->pc = 0x1F6E6Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x1F6E70u;
        goto label_1f6e70;
    }
    ctx->pc = 0x1F6E68u;
    SET_GPR_U32(ctx, 31, 0x1F6E70u);
    ctx->pc = 0x1F6E6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x1F7650u;
    {
        const uint32_t __entryPc = ctx->pc;
        McSyncClose__FPi_0x1f7650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6E70u; }
        else if (ctx->pc != 0x1F6E70u) { ctx->pc = 0x1F6E70u; }
    }
    if (ctx->pc != 0x1F6E70u) { return; }
    ctx->pc = 0x1F6E70u;
label_1f6e70:
    // 0x1f6e70: 0x24030002
    ctx->pc = 0x1f6e70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1f6e74:
    // 0x1f6e74: 0x1000005e
label_1f6e78:
    if (ctx->pc == 0x1F6E78u) {
        ctx->pc = 0x1F6E78u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6E7Cu;
        goto label_1f6e7c;
    }
    ctx->pc = 0x1F6E74u;
    {
        const bool branch_taken_0x1f6e74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6E78u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6e74) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6E7Cu;
label_1f6e7c:
    // 0x1f6e7c: 0x8c23fe8c
    ctx->pc = 0x1f6e7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966924)));
label_1f6e80:
    // 0x1f6e80: 0x1060005b
label_1f6e84:
    if (ctx->pc == 0x1F6E84u) {
        ctx->pc = 0x1F6E88u;
        goto label_1f6e88;
    }
    ctx->pc = 0x1F6E80u;
    {
        const bool branch_taken_0x1f6e80 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f6e80) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6E88u;
label_1f6e88:
    // 0x1f6e88: 0x8e040010
    ctx->pc = 0x1f6e88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f6e8c:
    // 0x1f6e8c: 0x24030002
    ctx->pc = 0x1f6e8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1f6e90:
    // 0x1f6e90: 0x1483000b
label_1f6e94:
    if (ctx->pc == 0x1F6E94u) {
        ctx->pc = 0x1F6E94u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F6E98u;
        goto label_1f6e98;
    }
    ctx->pc = 0x1F6E90u;
    {
        const bool branch_taken_0x1f6e90 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1F6E94u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f6e90) {
            ctx->pc = 0x1F6EC0u;
            goto label_1f6ec0;
        }
    }
    ctx->pc = 0x1F6E98u;
label_1f6e98:
    // 0x1f6e98: 0x70002e28
    ctx->pc = 0x1f6e98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f6e9c:
    // 0x1f6e9c: 0x26060010
    ctx->pc = 0x1f6e9cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 16));
label_1f6ea0:
    // 0x1f6ea0: 0x26070014
    ctx->pc = 0x1f6ea0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 20));
label_1f6ea4:
    // 0x1f6ea4: 0xc07ddd8
label_1f6ea8:
    if (ctx->pc == 0x1F6EA8u) {
        ctx->pc = 0x1F6EA8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x1F6EACu;
        goto label_1f6eac;
    }
    ctx->pc = 0x1F6EA4u;
    SET_GPR_U32(ctx, 31, 0x1F6EACu);
    ctx->pc = 0x1F6EA8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 24));
    ctx->pc = 0x1F7760u;
    {
        const uint32_t __entryPc = ctx->pc;
        McGetInfo__FiiPiPiPi_0x1f7760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6EACu; }
        else if (ctx->pc != 0x1F6EACu) { ctx->pc = 0x1F6EACu; }
    }
    if (ctx->pc != 0x1F6EACu) { return; }
    ctx->pc = 0x1F6EACu;
label_1f6eac:
    // 0x1f6eac: 0x3c020050
    ctx->pc = 0x1f6eacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f6eb0:
    // 0x1f6eb0: 0xc074dac
label_1f6eb4:
    if (ctx->pc == 0x1F6EB4u) {
        ctx->pc = 0x1F6EB4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
        ctx->pc = 0x1F6EB8u;
        goto label_1f6eb8;
    }
    ctx->pc = 0x1F6EB0u;
    SET_GPR_U32(ctx, 31, 0x1F6EB8u);
    ctx->pc = 0x1F6EB4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
    ctx->pc = 0x1D36B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        synch__14SysCfgMgrClassFv_0x1d36b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6EB8u; }
        else if (ctx->pc != 0x1F6EB8u) { ctx->pc = 0x1F6EB8u; }
    }
    if (ctx->pc != 0x1F6EB8u) { return; }
    ctx->pc = 0x1F6EB8u;
label_1f6eb8:
    // 0x1f6eb8: 0x1000004d
label_1f6ebc:
    if (ctx->pc == 0x1F6EBCu) {
        ctx->pc = 0x1F6EC0u;
        goto label_1f6ec0;
    }
    ctx->pc = 0x1F6EB8u;
    {
        const bool branch_taken_0x1f6eb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f6eb8) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6EC0u;
label_1f6ec0:
    // 0x1f6ec0: 0x8e03000c
    ctx->pc = 0x1f6ec0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f6ec4:
    // 0x1f6ec4: 0x4600004
label_1f6ec8:
    if (ctx->pc == 0x1F6EC8u) {
        ctx->pc = 0x1F6EC8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F6ECCu;
        goto label_1f6ecc;
    }
    ctx->pc = 0x1F6EC4u;
    {
        const bool branch_taken_0x1f6ec4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1F6EC8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1f6ec4) {
            ctx->pc = 0x1F6ED8u;
            goto label_1f6ed8;
        }
    }
    ctx->pc = 0x1F6ECCu;
label_1f6ecc:
    // 0x1f6ecc: 0xc07dd94
label_1f6ed0:
    if (ctx->pc == 0x1F6ED0u) {
        ctx->pc = 0x1F6ED0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x1F6ED4u;
        goto label_1f6ed4;
    }
    ctx->pc = 0x1F6ECCu;
    SET_GPR_U32(ctx, 31, 0x1F6ED4u);
    ctx->pc = 0x1F6ED0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x1F7650u;
    {
        const uint32_t __entryPc = ctx->pc;
        McSyncClose__FPi_0x1f7650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6ED4u; }
        else if (ctx->pc != 0x1F6ED4u) { ctx->pc = 0x1F6ED4u; }
    }
    if (ctx->pc != 0x1F6ED4u) { return; }
    ctx->pc = 0x1F6ED4u;
label_1f6ed4:
    // 0x1f6ed4: 0x24030002
    ctx->pc = 0x1f6ed4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1f6ed8:
    // 0x1f6ed8: 0x10000045
label_1f6edc:
    if (ctx->pc == 0x1F6EDCu) {
        ctx->pc = 0x1F6EDCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6EE0u;
        goto label_1f6ee0;
    }
    ctx->pc = 0x1F6ED8u;
    {
        const bool branch_taken_0x1f6ed8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6EDCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6ed8) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6EE0u;
label_1f6ee0:
    // 0x1f6ee0: 0x2402ffff
    ctx->pc = 0x1f6ee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f6ee4:
    // 0x1f6ee4: 0xaf808e3c
    ctx->pc = 0x1f6ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
label_1f6ee8:
    // 0x1f6ee8: 0xaf828e40
    ctx->pc = 0x1f6ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
label_1f6eec:
    // 0x1f6eec: 0x8e020004
    ctx->pc = 0x1f6eecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f6ef0:
    // 0x1f6ef0: 0x24420001
    ctx->pc = 0x1f6ef0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f6ef4:
    // 0x1f6ef4: 0xae020004
    ctx->pc = 0x1f6ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f6ef8:
    // 0x1f6ef8: 0xc07ded8
label_1f6efc:
    if (ctx->pc == 0x1F6EFCu) {
        ctx->pc = 0x1F6F00u;
        goto label_1f6f00;
    }
    ctx->pc = 0x1F6EF8u;
    SET_GPR_U32(ctx, 31, 0x1F6F00u);
    ctx->pc = 0x1F7B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_nowloading__Fv_0x1f7b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F00u; }
        else if (ctx->pc != 0x1F6F00u) { ctx->pc = 0x1F6F00u; }
    }
    if (ctx->pc != 0x1F6F00u) { return; }
    ctx->pc = 0x1F6F00u;
label_1f6f00:
    // 0x1f6f00: 0x8e04002c
    ctx->pc = 0x1f6f00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1f6f04:
    // 0x1f6f04: 0x8f838be4
    ctx->pc = 0x1f6f04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
label_1f6f08:
    // 0x1f6f08: 0x641823
    ctx->pc = 0x1f6f08u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f6f0c:
    // 0x1f6f0c: 0x2c630096
    ctx->pc = 0x1f6f0cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 150));
label_1f6f10:
    // 0x1f6f10: 0x14600037
label_1f6f14:
    if (ctx->pc == 0x1F6F14u) {
        ctx->pc = 0x1F6F14u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x1F6F18u;
        goto label_1f6f18;
    }
    ctx->pc = 0x1F6F10u;
    {
        const bool branch_taken_0x1f6f10 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F6F14u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
        if (branch_taken_0x1f6f10) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6F18u;
label_1f6f18:
    // 0x1f6f18: 0x10000035
label_1f6f1c:
    if (ctx->pc == 0x1F6F1Cu) {
        ctx->pc = 0x1F6F1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6F20u;
        goto label_1f6f20;
    }
    ctx->pc = 0x1F6F18u;
    {
        const bool branch_taken_0x1f6f18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6F1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6f18) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6F20u;
label_1f6f20:
    // 0x1f6f20: 0x2402ffff
    ctx->pc = 0x1f6f20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f6f24:
    // 0x1f6f24: 0xaf828e40
    ctx->pc = 0x1f6f24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
label_1f6f28:
    // 0x1f6f28: 0xaf808e3c
    ctx->pc = 0x1f6f28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
label_1f6f2c:
    // 0x1f6f2c: 0x24020064
    ctx->pc = 0x1f6f2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
label_1f6f30:
    // 0x1f6f30: 0xae02001c
    ctx->pc = 0x1f6f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1f6f34:
    // 0x1f6f34: 0x8e020004
    ctx->pc = 0x1f6f34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f6f38:
    // 0x1f6f38: 0x24420001
    ctx->pc = 0x1f6f38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f6f3c:
    // 0x1f6f3c: 0xae020004
    ctx->pc = 0x1f6f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f6f40:
    // 0x1f6f40: 0xc07e0c4
label_1f6f44:
    if (ctx->pc == 0x1F6F44u) {
        ctx->pc = 0x1F6F48u;
        goto label_1f6f48;
    }
    ctx->pc = 0x1F6F40u;
    SET_GPR_U32(ctx, 31, 0x1F6F48u);
    ctx->pc = 0x1F8310u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_loadfailed__Fv_0x1f8310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F48u; }
        else if (ctx->pc != 0x1F6F48u) { ctx->pc = 0x1F6F48u; }
    }
    if (ctx->pc != 0x1F6F48u) { return; }
    ctx->pc = 0x1F6F48u;
label_1f6f48:
    // 0x1f6f48: 0x8e03001c
    ctx->pc = 0x1f6f48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1f6f4c:
    // 0x1f6f4c: 0x2463ffff
    ctx->pc = 0x1f6f4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f6f50:
    // 0x1f6f50: 0x1c600027
label_1f6f54:
    if (ctx->pc == 0x1F6F54u) {
        ctx->pc = 0x1F6F54u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6F58u;
        goto label_1f6f58;
    }
    ctx->pc = 0x1F6F50u;
    {
        const bool branch_taken_0x1f6f50 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1F6F54u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6f50) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6F58u;
label_1f6f58:
    // 0x1f6f58: 0x24030018
    ctx->pc = 0x1f6f58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
label_1f6f5c:
    // 0x1f6f5c: 0x10000024
label_1f6f60:
    if (ctx->pc == 0x1F6F60u) {
        ctx->pc = 0x1F6F60u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6F64u;
        goto label_1f6f64;
    }
    ctx->pc = 0x1F6F5Cu;
    {
        const bool branch_taken_0x1f6f5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6F60u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6f5c) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6F64u;
label_1f6f64:
    // 0x1f6f64: 0x24020001
    ctx->pc = 0x1f6f64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f6f68:
    // 0x1f6f68: 0xaf828e3c
    ctx->pc = 0x1f6f68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 2));
label_1f6f6c:
    // 0x1f6f6c: 0x2402ffff
    ctx->pc = 0x1f6f6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f6f70:
    // 0x1f6f70: 0xaf828e40
    ctx->pc = 0x1f6f70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
label_1f6f74:
    // 0x1f6f74: 0x8e020004
    ctx->pc = 0x1f6f74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f6f78:
    // 0x1f6f78: 0x24420001
    ctx->pc = 0x1f6f78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f6f7c:
    // 0x1f6f7c: 0xae020004
    ctx->pc = 0x1f6f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f6f80:
    // 0x1f6f80: 0xc07e0e8
label_1f6f84:
    if (ctx->pc == 0x1F6F84u) {
        ctx->pc = 0x1F6F88u;
        goto label_1f6f88;
    }
    ctx->pc = 0x1F6F80u;
    SET_GPR_U32(ctx, 31, 0x1F6F88u);
    ctx->pc = 0x1F83A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mcchk_dispmes_loadquit__Fv_0x1f83a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F88u; }
        else if (ctx->pc != 0x1F6F88u) { ctx->pc = 0x1F6F88u; }
    }
    if (ctx->pc != 0x1F6F88u) { return; }
    ctx->pc = 0x1F6F88u;
label_1f6f88:
    // 0x1f6f88: 0x8f848e40
    ctx->pc = 0x1f6f88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938176)));
label_1f6f8c:
    // 0x1f6f8c: 0x24030001
    ctx->pc = 0x1f6f8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f6f90:
    // 0x1f6f90: 0x10830007
label_1f6f94:
    if (ctx->pc == 0x1F6F94u) {
        ctx->pc = 0x1F6F94u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F6F98u;
        goto label_1f6f98;
    }
    ctx->pc = 0x1F6F90u;
    {
        const bool branch_taken_0x1f6f90 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1F6F94u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1f6f90) {
            ctx->pc = 0x1F6FB0u;
            goto label_1f6fb0;
        }
    }
    ctx->pc = 0x1F6F98u;
label_1f6f98:
    // 0x1f6f98: 0x10800003
label_1f6f9c:
    if (ctx->pc == 0x1F6F9Cu) {
        ctx->pc = 0x1F6F9Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 26));
        ctx->pc = 0x1F6FA0u;
        goto label_1f6fa0;
    }
    ctx->pc = 0x1F6F98u;
    {
        const bool branch_taken_0x1f6f98 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6F9Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 26));
        if (branch_taken_0x1f6f98) {
            ctx->pc = 0x1F6FA8u;
            goto label_1f6fa8;
        }
    }
    ctx->pc = 0x1F6FA0u;
label_1f6fa0:
    // 0x1f6fa0: 0x10000013
label_1f6fa4:
    if (ctx->pc == 0x1F6FA4u) {
        ctx->pc = 0x1F6FA8u;
        goto label_1f6fa8;
    }
    ctx->pc = 0x1F6FA0u;
    {
        const bool branch_taken_0x1f6fa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f6fa0) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6FA8u;
label_1f6fa8:
    // 0x1f6fa8: 0x10000011
label_1f6fac:
    if (ctx->pc == 0x1F6FACu) {
        ctx->pc = 0x1F6FACu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6FB0u;
        goto label_1f6fb0;
    }
    ctx->pc = 0x1F6FA8u;
    {
        const bool branch_taken_0x1f6fa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6FACu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6fa8) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6FB0u;
label_1f6fb0:
    // 0x1f6fb0: 0x1000000f
label_1f6fb4:
    if (ctx->pc == 0x1F6FB4u) {
        ctx->pc = 0x1F6FB4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6FB8u;
        goto label_1f6fb8;
    }
    ctx->pc = 0x1F6FB0u;
    {
        const bool branch_taken_0x1f6fb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6FB4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6fb0) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6FB8u;
label_1f6fb8:
    // 0x1f6fb8: 0x24030001
    ctx->pc = 0x1f6fb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f6fbc:
    // 0x1f6fbc: 0xaf838e4c
    ctx->pc = 0x1f6fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938188), GPR_U32(ctx, 3));
label_1f6fc0:
    // 0x1f6fc0: 0x24030002
    ctx->pc = 0x1f6fc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1f6fc4:
    // 0x1f6fc4: 0xaf838e44
    ctx->pc = 0x1f6fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938180), GPR_U32(ctx, 3));
label_1f6fc8:
    // 0x1f6fc8: 0x8e030004
    ctx->pc = 0x1f6fc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f6fcc:
    // 0x1f6fcc: 0x24630001
    ctx->pc = 0x1f6fccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1f6fd0:
    // 0x1f6fd0: 0x10000007
label_1f6fd4:
    if (ctx->pc == 0x1F6FD4u) {
        ctx->pc = 0x1F6FD4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6FD8u;
        goto label_1f6fd8;
    }
    ctx->pc = 0x1F6FD0u;
    {
        const bool branch_taken_0x1f6fd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6FD4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1f6fd0) {
            ctx->pc = 0x1F6FF0u;
            goto label_1f6ff0;
        }
    }
    ctx->pc = 0x1F6FD8u;
label_1f6fd8:
    // 0x1f6fd8: 0x24030001
    ctx->pc = 0x1f6fd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f6fdc:
    // 0x1f6fdc: 0xaf838e4c
    ctx->pc = 0x1f6fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938188), GPR_U32(ctx, 3));
label_1f6fe0:
    // 0x1f6fe0: 0xaf838e44
    ctx->pc = 0x1f6fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938180), GPR_U32(ctx, 3));
label_1f6fe4:
    // 0x1f6fe4: 0x8e030004
    ctx->pc = 0x1f6fe4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f6fe8:
    // 0x1f6fe8: 0x24630001
    ctx->pc = 0x1f6fe8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1f6fec:
    // 0x1f6fec: 0xae030004
    ctx->pc = 0x1f6fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1f6ff0:
    // 0x1f6ff0: 0x7bbf0010
    ctx->pc = 0x1f6ff0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6ff4:
    // 0x1f6ff4: 0x7bb00000
    ctx->pc = 0x1f6ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6ff8:
    // 0x1f6ff8: 0x3e00008
label_1f6ffc:
    if (ctx->pc == 0x1F6FFCu) {
        ctx->pc = 0x1F6FFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F7000u;
        goto label_fallthrough_0x1f6ff8;
    }
    ctx->pc = 0x1F6FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6FFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F69F0u: goto label_1f69f0;
            case 0x1F69F4u: goto label_1f69f4;
            case 0x1F69F8u: goto label_1f69f8;
            case 0x1F69FCu: goto label_1f69fc;
            case 0x1F6A00u: goto label_1f6a00;
            case 0x1F6A04u: goto label_1f6a04;
            case 0x1F6A08u: goto label_1f6a08;
            case 0x1F6A0Cu: goto label_1f6a0c;
            case 0x1F6A10u: goto label_1f6a10;
            case 0x1F6A14u: goto label_1f6a14;
            case 0x1F6A18u: goto label_1f6a18;
            case 0x1F6A1Cu: goto label_1f6a1c;
            case 0x1F6A20u: goto label_1f6a20;
            case 0x1F6A24u: goto label_1f6a24;
            case 0x1F6A28u: goto label_1f6a28;
            case 0x1F6A2Cu: goto label_1f6a2c;
            case 0x1F6A30u: goto label_1f6a30;
            case 0x1F6A34u: goto label_1f6a34;
            case 0x1F6A38u: goto label_1f6a38;
            case 0x1F6A3Cu: goto label_1f6a3c;
            case 0x1F6A40u: goto label_1f6a40;
            case 0x1F6A44u: goto label_1f6a44;
            case 0x1F6A48u: goto label_1f6a48;
            case 0x1F6A4Cu: goto label_1f6a4c;
            case 0x1F6A50u: goto label_1f6a50;
            case 0x1F6A54u: goto label_1f6a54;
            case 0x1F6A58u: goto label_1f6a58;
            case 0x1F6A5Cu: goto label_1f6a5c;
            case 0x1F6A60u: goto label_1f6a60;
            case 0x1F6A64u: goto label_1f6a64;
            case 0x1F6A68u: goto label_1f6a68;
            case 0x1F6A6Cu: goto label_1f6a6c;
            case 0x1F6A70u: goto label_1f6a70;
            case 0x1F6A74u: goto label_1f6a74;
            case 0x1F6A78u: goto label_1f6a78;
            case 0x1F6A7Cu: goto label_1f6a7c;
            case 0x1F6A80u: goto label_1f6a80;
            case 0x1F6A84u: goto label_1f6a84;
            case 0x1F6A88u: goto label_1f6a88;
            case 0x1F6A8Cu: goto label_1f6a8c;
            case 0x1F6A90u: goto label_1f6a90;
            case 0x1F6A94u: goto label_1f6a94;
            case 0x1F6A98u: goto label_1f6a98;
            case 0x1F6A9Cu: goto label_1f6a9c;
            case 0x1F6AA0u: goto label_1f6aa0;
            case 0x1F6AA4u: goto label_1f6aa4;
            case 0x1F6AA8u: goto label_1f6aa8;
            case 0x1F6AACu: goto label_1f6aac;
            case 0x1F6AB0u: goto label_1f6ab0;
            case 0x1F6AB4u: goto label_1f6ab4;
            case 0x1F6AB8u: goto label_1f6ab8;
            case 0x1F6ABCu: goto label_1f6abc;
            case 0x1F6AC0u: goto label_1f6ac0;
            case 0x1F6AC4u: goto label_1f6ac4;
            case 0x1F6AC8u: goto label_1f6ac8;
            case 0x1F6ACCu: goto label_1f6acc;
            case 0x1F6AD0u: goto label_1f6ad0;
            case 0x1F6AD4u: goto label_1f6ad4;
            case 0x1F6AD8u: goto label_1f6ad8;
            case 0x1F6ADCu: goto label_1f6adc;
            case 0x1F6AE0u: goto label_1f6ae0;
            case 0x1F6AE4u: goto label_1f6ae4;
            case 0x1F6AE8u: goto label_1f6ae8;
            case 0x1F6AECu: goto label_1f6aec;
            case 0x1F6AF0u: goto label_1f6af0;
            case 0x1F6AF4u: goto label_1f6af4;
            case 0x1F6AF8u: goto label_1f6af8;
            case 0x1F6AFCu: goto label_1f6afc;
            case 0x1F6B00u: goto label_1f6b00;
            case 0x1F6B04u: goto label_1f6b04;
            case 0x1F6B08u: goto label_1f6b08;
            case 0x1F6B0Cu: goto label_1f6b0c;
            case 0x1F6B10u: goto label_1f6b10;
            case 0x1F6B14u: goto label_1f6b14;
            case 0x1F6B18u: goto label_1f6b18;
            case 0x1F6B1Cu: goto label_1f6b1c;
            case 0x1F6B20u: goto label_1f6b20;
            case 0x1F6B24u: goto label_1f6b24;
            case 0x1F6B28u: goto label_1f6b28;
            case 0x1F6B2Cu: goto label_1f6b2c;
            case 0x1F6B30u: goto label_1f6b30;
            case 0x1F6B34u: goto label_1f6b34;
            case 0x1F6B38u: goto label_1f6b38;
            case 0x1F6B3Cu: goto label_1f6b3c;
            case 0x1F6B40u: goto label_1f6b40;
            case 0x1F6B44u: goto label_1f6b44;
            case 0x1F6B48u: goto label_1f6b48;
            case 0x1F6B4Cu: goto label_1f6b4c;
            case 0x1F6B50u: goto label_1f6b50;
            case 0x1F6B54u: goto label_1f6b54;
            case 0x1F6B58u: goto label_1f6b58;
            case 0x1F6B5Cu: goto label_1f6b5c;
            case 0x1F6B60u: goto label_1f6b60;
            case 0x1F6B64u: goto label_1f6b64;
            case 0x1F6B68u: goto label_1f6b68;
            case 0x1F6B6Cu: goto label_1f6b6c;
            case 0x1F6B70u: goto label_1f6b70;
            case 0x1F6B74u: goto label_1f6b74;
            case 0x1F6B78u: goto label_1f6b78;
            case 0x1F6B7Cu: goto label_1f6b7c;
            case 0x1F6B80u: goto label_1f6b80;
            case 0x1F6B84u: goto label_1f6b84;
            case 0x1F6B88u: goto label_1f6b88;
            case 0x1F6B8Cu: goto label_1f6b8c;
            case 0x1F6B90u: goto label_1f6b90;
            case 0x1F6B94u: goto label_1f6b94;
            case 0x1F6B98u: goto label_1f6b98;
            case 0x1F6B9Cu: goto label_1f6b9c;
            case 0x1F6BA0u: goto label_1f6ba0;
            case 0x1F6BA4u: goto label_1f6ba4;
            case 0x1F6BA8u: goto label_1f6ba8;
            case 0x1F6BACu: goto label_1f6bac;
            case 0x1F6BB0u: goto label_1f6bb0;
            case 0x1F6BB4u: goto label_1f6bb4;
            case 0x1F6BB8u: goto label_1f6bb8;
            case 0x1F6BBCu: goto label_1f6bbc;
            case 0x1F6BC0u: goto label_1f6bc0;
            case 0x1F6BC4u: goto label_1f6bc4;
            case 0x1F6BC8u: goto label_1f6bc8;
            case 0x1F6BCCu: goto label_1f6bcc;
            case 0x1F6BD0u: goto label_1f6bd0;
            case 0x1F6BD4u: goto label_1f6bd4;
            case 0x1F6BD8u: goto label_1f6bd8;
            case 0x1F6BDCu: goto label_1f6bdc;
            case 0x1F6BE0u: goto label_1f6be0;
            case 0x1F6BE4u: goto label_1f6be4;
            case 0x1F6BE8u: goto label_1f6be8;
            case 0x1F6BECu: goto label_1f6bec;
            case 0x1F6BF0u: goto label_1f6bf0;
            case 0x1F6BF4u: goto label_1f6bf4;
            case 0x1F6BF8u: goto label_1f6bf8;
            case 0x1F6BFCu: goto label_1f6bfc;
            case 0x1F6C00u: goto label_1f6c00;
            case 0x1F6C04u: goto label_1f6c04;
            case 0x1F6C08u: goto label_1f6c08;
            case 0x1F6C0Cu: goto label_1f6c0c;
            case 0x1F6C10u: goto label_1f6c10;
            case 0x1F6C14u: goto label_1f6c14;
            case 0x1F6C18u: goto label_1f6c18;
            case 0x1F6C1Cu: goto label_1f6c1c;
            case 0x1F6C20u: goto label_1f6c20;
            case 0x1F6C24u: goto label_1f6c24;
            case 0x1F6C28u: goto label_1f6c28;
            case 0x1F6C2Cu: goto label_1f6c2c;
            case 0x1F6C30u: goto label_1f6c30;
            case 0x1F6C34u: goto label_1f6c34;
            case 0x1F6C38u: goto label_1f6c38;
            case 0x1F6C3Cu: goto label_1f6c3c;
            case 0x1F6C40u: goto label_1f6c40;
            case 0x1F6C44u: goto label_1f6c44;
            case 0x1F6C48u: goto label_1f6c48;
            case 0x1F6C4Cu: goto label_1f6c4c;
            case 0x1F6C50u: goto label_1f6c50;
            case 0x1F6C54u: goto label_1f6c54;
            case 0x1F6C58u: goto label_1f6c58;
            case 0x1F6C5Cu: goto label_1f6c5c;
            case 0x1F6C60u: goto label_1f6c60;
            case 0x1F6C64u: goto label_1f6c64;
            case 0x1F6C68u: goto label_1f6c68;
            case 0x1F6C6Cu: goto label_1f6c6c;
            case 0x1F6C70u: goto label_1f6c70;
            case 0x1F6C74u: goto label_1f6c74;
            case 0x1F6C78u: goto label_1f6c78;
            case 0x1F6C7Cu: goto label_1f6c7c;
            case 0x1F6C80u: goto label_1f6c80;
            case 0x1F6C84u: goto label_1f6c84;
            case 0x1F6C88u: goto label_1f6c88;
            case 0x1F6C8Cu: goto label_1f6c8c;
            case 0x1F6C90u: goto label_1f6c90;
            case 0x1F6C94u: goto label_1f6c94;
            case 0x1F6C98u: goto label_1f6c98;
            case 0x1F6C9Cu: goto label_1f6c9c;
            case 0x1F6CA0u: goto label_1f6ca0;
            case 0x1F6CA4u: goto label_1f6ca4;
            case 0x1F6CA8u: goto label_1f6ca8;
            case 0x1F6CACu: goto label_1f6cac;
            case 0x1F6CB0u: goto label_1f6cb0;
            case 0x1F6CB4u: goto label_1f6cb4;
            case 0x1F6CB8u: goto label_1f6cb8;
            case 0x1F6CBCu: goto label_1f6cbc;
            case 0x1F6CC0u: goto label_1f6cc0;
            case 0x1F6CC4u: goto label_1f6cc4;
            case 0x1F6CC8u: goto label_1f6cc8;
            case 0x1F6CCCu: goto label_1f6ccc;
            case 0x1F6CD0u: goto label_1f6cd0;
            case 0x1F6CD4u: goto label_1f6cd4;
            case 0x1F6CD8u: goto label_1f6cd8;
            case 0x1F6CDCu: goto label_1f6cdc;
            case 0x1F6CE0u: goto label_1f6ce0;
            case 0x1F6CE4u: goto label_1f6ce4;
            case 0x1F6CE8u: goto label_1f6ce8;
            case 0x1F6CECu: goto label_1f6cec;
            case 0x1F6CF0u: goto label_1f6cf0;
            case 0x1F6CF4u: goto label_1f6cf4;
            case 0x1F6CF8u: goto label_1f6cf8;
            case 0x1F6CFCu: goto label_1f6cfc;
            case 0x1F6D00u: goto label_1f6d00;
            case 0x1F6D04u: goto label_1f6d04;
            case 0x1F6D08u: goto label_1f6d08;
            case 0x1F6D0Cu: goto label_1f6d0c;
            case 0x1F6D10u: goto label_1f6d10;
            case 0x1F6D14u: goto label_1f6d14;
            case 0x1F6D18u: goto label_1f6d18;
            case 0x1F6D1Cu: goto label_1f6d1c;
            case 0x1F6D20u: goto label_1f6d20;
            case 0x1F6D24u: goto label_1f6d24;
            case 0x1F6D28u: goto label_1f6d28;
            case 0x1F6D2Cu: goto label_1f6d2c;
            case 0x1F6D30u: goto label_1f6d30;
            case 0x1F6D34u: goto label_1f6d34;
            case 0x1F6D38u: goto label_1f6d38;
            case 0x1F6D3Cu: goto label_1f6d3c;
            case 0x1F6D40u: goto label_1f6d40;
            case 0x1F6D44u: goto label_1f6d44;
            case 0x1F6D48u: goto label_1f6d48;
            case 0x1F6D4Cu: goto label_1f6d4c;
            case 0x1F6D50u: goto label_1f6d50;
            case 0x1F6D54u: goto label_1f6d54;
            case 0x1F6D58u: goto label_1f6d58;
            case 0x1F6D5Cu: goto label_1f6d5c;
            case 0x1F6D60u: goto label_1f6d60;
            case 0x1F6D64u: goto label_1f6d64;
            case 0x1F6D68u: goto label_1f6d68;
            case 0x1F6D6Cu: goto label_1f6d6c;
            case 0x1F6D70u: goto label_1f6d70;
            case 0x1F6D74u: goto label_1f6d74;
            case 0x1F6D78u: goto label_1f6d78;
            case 0x1F6D7Cu: goto label_1f6d7c;
            case 0x1F6D80u: goto label_1f6d80;
            case 0x1F6D84u: goto label_1f6d84;
            case 0x1F6D88u: goto label_1f6d88;
            case 0x1F6D8Cu: goto label_1f6d8c;
            case 0x1F6D90u: goto label_1f6d90;
            case 0x1F6D94u: goto label_1f6d94;
            case 0x1F6D98u: goto label_1f6d98;
            case 0x1F6D9Cu: goto label_1f6d9c;
            case 0x1F6DA0u: goto label_1f6da0;
            case 0x1F6DA4u: goto label_1f6da4;
            case 0x1F6DA8u: goto label_1f6da8;
            case 0x1F6DACu: goto label_1f6dac;
            case 0x1F6DB0u: goto label_1f6db0;
            case 0x1F6DB4u: goto label_1f6db4;
            case 0x1F6DB8u: goto label_1f6db8;
            case 0x1F6DBCu: goto label_1f6dbc;
            case 0x1F6DC0u: goto label_1f6dc0;
            case 0x1F6DC4u: goto label_1f6dc4;
            case 0x1F6DC8u: goto label_1f6dc8;
            case 0x1F6DCCu: goto label_1f6dcc;
            case 0x1F6DD0u: goto label_1f6dd0;
            case 0x1F6DD4u: goto label_1f6dd4;
            case 0x1F6DD8u: goto label_1f6dd8;
            case 0x1F6DDCu: goto label_1f6ddc;
            case 0x1F6DE0u: goto label_1f6de0;
            case 0x1F6DE4u: goto label_1f6de4;
            case 0x1F6DE8u: goto label_1f6de8;
            case 0x1F6DECu: goto label_1f6dec;
            case 0x1F6DF0u: goto label_1f6df0;
            case 0x1F6DF4u: goto label_1f6df4;
            case 0x1F6DF8u: goto label_1f6df8;
            case 0x1F6DFCu: goto label_1f6dfc;
            case 0x1F6E00u: goto label_1f6e00;
            case 0x1F6E04u: goto label_1f6e04;
            case 0x1F6E08u: goto label_1f6e08;
            case 0x1F6E0Cu: goto label_1f6e0c;
            case 0x1F6E10u: goto label_1f6e10;
            case 0x1F6E14u: goto label_1f6e14;
            case 0x1F6E18u: goto label_1f6e18;
            case 0x1F6E1Cu: goto label_1f6e1c;
            case 0x1F6E20u: goto label_1f6e20;
            case 0x1F6E24u: goto label_1f6e24;
            case 0x1F6E28u: goto label_1f6e28;
            case 0x1F6E2Cu: goto label_1f6e2c;
            case 0x1F6E30u: goto label_1f6e30;
            case 0x1F6E34u: goto label_1f6e34;
            case 0x1F6E38u: goto label_1f6e38;
            case 0x1F6E3Cu: goto label_1f6e3c;
            case 0x1F6E40u: goto label_1f6e40;
            case 0x1F6E44u: goto label_1f6e44;
            case 0x1F6E48u: goto label_1f6e48;
            case 0x1F6E4Cu: goto label_1f6e4c;
            case 0x1F6E50u: goto label_1f6e50;
            case 0x1F6E54u: goto label_1f6e54;
            case 0x1F6E58u: goto label_1f6e58;
            case 0x1F6E5Cu: goto label_1f6e5c;
            case 0x1F6E60u: goto label_1f6e60;
            case 0x1F6E64u: goto label_1f6e64;
            case 0x1F6E68u: goto label_1f6e68;
            case 0x1F6E6Cu: goto label_1f6e6c;
            case 0x1F6E70u: goto label_1f6e70;
            case 0x1F6E74u: goto label_1f6e74;
            case 0x1F6E78u: goto label_1f6e78;
            case 0x1F6E7Cu: goto label_1f6e7c;
            case 0x1F6E80u: goto label_1f6e80;
            case 0x1F6E84u: goto label_1f6e84;
            case 0x1F6E88u: goto label_1f6e88;
            case 0x1F6E8Cu: goto label_1f6e8c;
            case 0x1F6E90u: goto label_1f6e90;
            case 0x1F6E94u: goto label_1f6e94;
            case 0x1F6E98u: goto label_1f6e98;
            case 0x1F6E9Cu: goto label_1f6e9c;
            case 0x1F6EA0u: goto label_1f6ea0;
            case 0x1F6EA4u: goto label_1f6ea4;
            case 0x1F6EA8u: goto label_1f6ea8;
            case 0x1F6EACu: goto label_1f6eac;
            case 0x1F6EB0u: goto label_1f6eb0;
            case 0x1F6EB4u: goto label_1f6eb4;
            case 0x1F6EB8u: goto label_1f6eb8;
            case 0x1F6EBCu: goto label_1f6ebc;
            case 0x1F6EC0u: goto label_1f6ec0;
            case 0x1F6EC4u: goto label_1f6ec4;
            case 0x1F6EC8u: goto label_1f6ec8;
            case 0x1F6ECCu: goto label_1f6ecc;
            case 0x1F6ED0u: goto label_1f6ed0;
            case 0x1F6ED4u: goto label_1f6ed4;
            case 0x1F6ED8u: goto label_1f6ed8;
            case 0x1F6EDCu: goto label_1f6edc;
            case 0x1F6EE0u: goto label_1f6ee0;
            case 0x1F6EE4u: goto label_1f6ee4;
            case 0x1F6EE8u: goto label_1f6ee8;
            case 0x1F6EECu: goto label_1f6eec;
            case 0x1F6EF0u: goto label_1f6ef0;
            case 0x1F6EF4u: goto label_1f6ef4;
            case 0x1F6EF8u: goto label_1f6ef8;
            case 0x1F6EFCu: goto label_1f6efc;
            case 0x1F6F00u: goto label_1f6f00;
            case 0x1F6F04u: goto label_1f6f04;
            case 0x1F6F08u: goto label_1f6f08;
            case 0x1F6F0Cu: goto label_1f6f0c;
            case 0x1F6F10u: goto label_1f6f10;
            case 0x1F6F14u: goto label_1f6f14;
            case 0x1F6F18u: goto label_1f6f18;
            case 0x1F6F1Cu: goto label_1f6f1c;
            case 0x1F6F20u: goto label_1f6f20;
            case 0x1F6F24u: goto label_1f6f24;
            case 0x1F6F28u: goto label_1f6f28;
            case 0x1F6F2Cu: goto label_1f6f2c;
            case 0x1F6F30u: goto label_1f6f30;
            case 0x1F6F34u: goto label_1f6f34;
            case 0x1F6F38u: goto label_1f6f38;
            case 0x1F6F3Cu: goto label_1f6f3c;
            case 0x1F6F40u: goto label_1f6f40;
            case 0x1F6F44u: goto label_1f6f44;
            case 0x1F6F48u: goto label_1f6f48;
            case 0x1F6F4Cu: goto label_1f6f4c;
            case 0x1F6F50u: goto label_1f6f50;
            case 0x1F6F54u: goto label_1f6f54;
            case 0x1F6F58u: goto label_1f6f58;
            case 0x1F6F5Cu: goto label_1f6f5c;
            case 0x1F6F60u: goto label_1f6f60;
            case 0x1F6F64u: goto label_1f6f64;
            case 0x1F6F68u: goto label_1f6f68;
            case 0x1F6F6Cu: goto label_1f6f6c;
            case 0x1F6F70u: goto label_1f6f70;
            case 0x1F6F74u: goto label_1f6f74;
            case 0x1F6F78u: goto label_1f6f78;
            case 0x1F6F7Cu: goto label_1f6f7c;
            case 0x1F6F80u: goto label_1f6f80;
            case 0x1F6F84u: goto label_1f6f84;
            case 0x1F6F88u: goto label_1f6f88;
            case 0x1F6F8Cu: goto label_1f6f8c;
            case 0x1F6F90u: goto label_1f6f90;
            case 0x1F6F94u: goto label_1f6f94;
            case 0x1F6F98u: goto label_1f6f98;
            case 0x1F6F9Cu: goto label_1f6f9c;
            case 0x1F6FA0u: goto label_1f6fa0;
            case 0x1F6FA4u: goto label_1f6fa4;
            case 0x1F6FA8u: goto label_1f6fa8;
            case 0x1F6FACu: goto label_1f6fac;
            case 0x1F6FB0u: goto label_1f6fb0;
            case 0x1F6FB4u: goto label_1f6fb4;
            case 0x1F6FB8u: goto label_1f6fb8;
            case 0x1F6FBCu: goto label_1f6fbc;
            case 0x1F6FC0u: goto label_1f6fc0;
            case 0x1F6FC4u: goto label_1f6fc4;
            case 0x1F6FC8u: goto label_1f6fc8;
            case 0x1F6FCCu: goto label_1f6fcc;
            case 0x1F6FD0u: goto label_1f6fd0;
            case 0x1F6FD4u: goto label_1f6fd4;
            case 0x1F6FD8u: goto label_1f6fd8;
            case 0x1F6FDCu: goto label_1f6fdc;
            case 0x1F6FE0u: goto label_1f6fe0;
            case 0x1F6FE4u: goto label_1f6fe4;
            case 0x1F6FE8u: goto label_1f6fe8;
            case 0x1F6FECu: goto label_1f6fec;
            case 0x1F6FF0u: goto label_1f6ff0;
            case 0x1F6FF4u: goto label_1f6ff4;
            case 0x1F6FF8u: goto label_1f6ff8;
            case 0x1F6FFCu: goto label_1f6ffc;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f6ff8:
    ctx->pc = 0x1F7000u;
}
