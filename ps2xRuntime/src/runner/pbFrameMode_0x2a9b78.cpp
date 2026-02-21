#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbFrameMode
// Address: 0x2a9b78 - 0x2aa8d0
void pbFrameMode_0x2a9b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a9b78u;

label_2a9b78:
    // 0x2a9b78: 0x27bdfc20
    ctx->pc = 0x2a9b78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966304));
label_2a9b7c:
    // 0x2a9b7c: 0xffbf03d0
    ctx->pc = 0x2a9b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 976), GPR_U64(ctx, 31));
label_2a9b80:
    // 0x2a9b80: 0xffbe03c0
    ctx->pc = 0x2a9b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 960), GPR_U64(ctx, 30));
label_2a9b84:
    // 0x2a9b84: 0xffb703b0
    ctx->pc = 0x2a9b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 944), GPR_U64(ctx, 23));
label_2a9b88:
    // 0x2a9b88: 0xffb603a0
    ctx->pc = 0x2a9b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 928), GPR_U64(ctx, 22));
label_2a9b8c:
    // 0x2a9b8c: 0xffb50390
    ctx->pc = 0x2a9b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 912), GPR_U64(ctx, 21));
label_2a9b90:
    // 0x2a9b90: 0xffb40380
    ctx->pc = 0x2a9b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 20));
label_2a9b94:
    // 0x2a9b94: 0xffb30370
    ctx->pc = 0x2a9b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 880), GPR_U64(ctx, 19));
label_2a9b98:
    // 0x2a9b98: 0xffb20360
    ctx->pc = 0x2a9b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 18));
label_2a9b9c:
    // 0x2a9b9c: 0xffb10350
    ctx->pc = 0x2a9b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 17));
label_2a9ba0:
    // 0x2a9ba0: 0xffb00340
    ctx->pc = 0x2a9ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 16));
label_2a9ba4:
    // 0x2a9ba4: 0xafa40330
    ctx->pc = 0x2a9ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 4));
label_2a9ba8:
    // 0x2a9ba8: 0xafa50334
    ctx->pc = 0x2a9ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 820), GPR_U32(ctx, 5));
label_2a9bac:
    // 0x2a9bac: 0x3c020036
    ctx->pc = 0x2a9bacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a9bb0:
    // 0x2a9bb0: 0x8c56dee0
    ctx->pc = 0x2a9bb0u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
label_2a9bb4:
    // 0x2a9bb4: 0x3c020037
    ctx->pc = 0x2a9bb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2a9bb8:
    // 0x2a9bb8: 0x8c5e834c
    ctx->pc = 0x2a9bb8u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 2), 4294935372)));
label_2a9bbc:
    // 0x2a9bbc: 0x3c020037
    ctx->pc = 0x2a9bbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2a9bc0:
    // 0x2a9bc0: 0xac40826c
    ctx->pc = 0x2a9bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294935148), GPR_U32(ctx, 0));
label_2a9bc4:
    // 0x2a9bc4: 0x3c030037
    ctx->pc = 0x2a9bc4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
label_2a9bc8:
    // 0x2a9bc8: 0x8c628268
    ctx->pc = 0x2a9bc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294935144)));
label_2a9bcc:
    // 0x2a9bcc: 0x0
    ctx->pc = 0x2a9bccu;
    // NOP
label_2a9bd0:
    // 0x2a9bd0: 0x0
    ctx->pc = 0x2a9bd0u;
    // NOP
label_2a9bd4:
    // 0x2a9bd4: 0x0
    ctx->pc = 0x2a9bd4u;
    // NOP
label_2a9bd8:
    // 0x2a9bd8: 0x0
    ctx->pc = 0x2a9bd8u;
    // NOP
label_2a9bdc:
    // 0x2a9bdc: 0x1440fffa
label_2a9be0:
    if (ctx->pc == 0x2A9BE0u) {
        ctx->pc = 0x2A9BE4u;
        goto label_2a9be4;
    }
    ctx->pc = 0x2A9BDCu;
    {
        const bool branch_taken_0x2a9bdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a9bdc) {
            ctx->pc = 0x2A9BC8u;
            goto label_2a9bc8;
        }
    }
    ctx->pc = 0x2A9BE4u;
label_2a9be4:
    // 0x2a9be4: 0x8fa30330
    ctx->pc = 0x2a9be4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 816)));
label_2a9be8:
    // 0x2a9be8: 0x2c620007
    ctx->pc = 0x2a9be8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 7));
label_2a9bec:
    // 0x2a9bec: 0x1040032c
label_2a9bf0:
    if (ctx->pc == 0x2A9BF0u) {
        ctx->pc = 0x2A9BF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2A9BF4u;
        goto label_2a9bf4;
    }
    ctx->pc = 0x2A9BECu;
    {
        const bool branch_taken_0x2a9bec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A9BF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2a9bec) {
            ctx->pc = 0x2AA8A0u;
            goto label_2aa8a0;
        }
    }
    ctx->pc = 0x2A9BF4u;
label_2a9bf4:
    // 0x2a9bf4: 0x2442f4b0
    ctx->pc = 0x2a9bf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964400));
label_2a9bf8:
    // 0x2a9bf8: 0x31880
    ctx->pc = 0x2a9bf8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2a9bfc:
    // 0x2a9bfc: 0x621821
    ctx->pc = 0x2a9bfcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a9c00:
    // 0x2a9c00: 0x8c620000
    ctx->pc = 0x2a9c00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a9c04:
    // 0x2a9c04: 0x400008
label_2a9c08:
    if (ctx->pc == 0x2A9C08u) {
        ctx->pc = 0x2A9C0Cu;
        goto label_2a9c0c;
    }
    ctx->pc = 0x2A9C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A9B78u: goto label_2a9b78;
            case 0x2A9B7Cu: goto label_2a9b7c;
            case 0x2A9B80u: goto label_2a9b80;
            case 0x2A9B84u: goto label_2a9b84;
            case 0x2A9B88u: goto label_2a9b88;
            case 0x2A9B8Cu: goto label_2a9b8c;
            case 0x2A9B90u: goto label_2a9b90;
            case 0x2A9B94u: goto label_2a9b94;
            case 0x2A9B98u: goto label_2a9b98;
            case 0x2A9B9Cu: goto label_2a9b9c;
            case 0x2A9BA0u: goto label_2a9ba0;
            case 0x2A9BA4u: goto label_2a9ba4;
            case 0x2A9BA8u: goto label_2a9ba8;
            case 0x2A9BACu: goto label_2a9bac;
            case 0x2A9BB0u: goto label_2a9bb0;
            case 0x2A9BB4u: goto label_2a9bb4;
            case 0x2A9BB8u: goto label_2a9bb8;
            case 0x2A9BBCu: goto label_2a9bbc;
            case 0x2A9BC0u: goto label_2a9bc0;
            case 0x2A9BC4u: goto label_2a9bc4;
            case 0x2A9BC8u: goto label_2a9bc8;
            case 0x2A9BCCu: goto label_2a9bcc;
            case 0x2A9BD0u: goto label_2a9bd0;
            case 0x2A9BD4u: goto label_2a9bd4;
            case 0x2A9BD8u: goto label_2a9bd8;
            case 0x2A9BDCu: goto label_2a9bdc;
            case 0x2A9BE0u: goto label_2a9be0;
            case 0x2A9BE4u: goto label_2a9be4;
            case 0x2A9BE8u: goto label_2a9be8;
            case 0x2A9BECu: goto label_2a9bec;
            case 0x2A9BF0u: goto label_2a9bf0;
            case 0x2A9BF4u: goto label_2a9bf4;
            case 0x2A9BF8u: goto label_2a9bf8;
            case 0x2A9BFCu: goto label_2a9bfc;
            case 0x2A9C00u: goto label_2a9c00;
            case 0x2A9C04u: goto label_2a9c04;
            case 0x2A9C08u: goto label_2a9c08;
            case 0x2A9C0Cu: goto label_2a9c0c;
            case 0x2A9C10u: goto label_2a9c10;
            case 0x2A9C14u: goto label_2a9c14;
            case 0x2A9C18u: goto label_2a9c18;
            case 0x2A9C1Cu: goto label_2a9c1c;
            case 0x2A9C20u: goto label_2a9c20;
            case 0x2A9C24u: goto label_2a9c24;
            case 0x2A9C28u: goto label_2a9c28;
            case 0x2A9C2Cu: goto label_2a9c2c;
            case 0x2A9C30u: goto label_2a9c30;
            case 0x2A9C34u: goto label_2a9c34;
            case 0x2A9C38u: goto label_2a9c38;
            case 0x2A9C3Cu: goto label_2a9c3c;
            case 0x2A9C40u: goto label_2a9c40;
            case 0x2A9C44u: goto label_2a9c44;
            case 0x2A9C48u: goto label_2a9c48;
            case 0x2A9C4Cu: goto label_2a9c4c;
            case 0x2A9C50u: goto label_2a9c50;
            case 0x2A9C54u: goto label_2a9c54;
            case 0x2A9C58u: goto label_2a9c58;
            case 0x2A9C5Cu: goto label_2a9c5c;
            case 0x2A9C60u: goto label_2a9c60;
            case 0x2A9C64u: goto label_2a9c64;
            case 0x2A9C68u: goto label_2a9c68;
            case 0x2A9C6Cu: goto label_2a9c6c;
            case 0x2A9C70u: goto label_2a9c70;
            case 0x2A9C74u: goto label_2a9c74;
            case 0x2A9C78u: goto label_2a9c78;
            case 0x2A9C7Cu: goto label_2a9c7c;
            case 0x2A9C80u: goto label_2a9c80;
            case 0x2A9C84u: goto label_2a9c84;
            case 0x2A9C88u: goto label_2a9c88;
            case 0x2A9C8Cu: goto label_2a9c8c;
            case 0x2A9C90u: goto label_2a9c90;
            case 0x2A9C94u: goto label_2a9c94;
            case 0x2A9C98u: goto label_2a9c98;
            case 0x2A9C9Cu: goto label_2a9c9c;
            case 0x2A9CA0u: goto label_2a9ca0;
            case 0x2A9CA4u: goto label_2a9ca4;
            case 0x2A9CA8u: goto label_2a9ca8;
            case 0x2A9CACu: goto label_2a9cac;
            case 0x2A9CB0u: goto label_2a9cb0;
            case 0x2A9CB4u: goto label_2a9cb4;
            case 0x2A9CB8u: goto label_2a9cb8;
            case 0x2A9CBCu: goto label_2a9cbc;
            case 0x2A9CC0u: goto label_2a9cc0;
            case 0x2A9CC4u: goto label_2a9cc4;
            case 0x2A9CC8u: goto label_2a9cc8;
            case 0x2A9CCCu: goto label_2a9ccc;
            case 0x2A9CD0u: goto label_2a9cd0;
            case 0x2A9CD4u: goto label_2a9cd4;
            case 0x2A9CD8u: goto label_2a9cd8;
            case 0x2A9CDCu: goto label_2a9cdc;
            case 0x2A9CE0u: goto label_2a9ce0;
            case 0x2A9CE4u: goto label_2a9ce4;
            case 0x2A9CE8u: goto label_2a9ce8;
            case 0x2A9CECu: goto label_2a9cec;
            case 0x2A9CF0u: goto label_2a9cf0;
            case 0x2A9CF4u: goto label_2a9cf4;
            case 0x2A9CF8u: goto label_2a9cf8;
            case 0x2A9CFCu: goto label_2a9cfc;
            case 0x2A9D00u: goto label_2a9d00;
            case 0x2A9D04u: goto label_2a9d04;
            case 0x2A9D08u: goto label_2a9d08;
            case 0x2A9D0Cu: goto label_2a9d0c;
            case 0x2A9D10u: goto label_2a9d10;
            case 0x2A9D14u: goto label_2a9d14;
            case 0x2A9D18u: goto label_2a9d18;
            case 0x2A9D1Cu: goto label_2a9d1c;
            case 0x2A9D20u: goto label_2a9d20;
            case 0x2A9D24u: goto label_2a9d24;
            case 0x2A9D28u: goto label_2a9d28;
            case 0x2A9D2Cu: goto label_2a9d2c;
            case 0x2A9D30u: goto label_2a9d30;
            case 0x2A9D34u: goto label_2a9d34;
            case 0x2A9D38u: goto label_2a9d38;
            case 0x2A9D3Cu: goto label_2a9d3c;
            case 0x2A9D40u: goto label_2a9d40;
            case 0x2A9D44u: goto label_2a9d44;
            case 0x2A9D48u: goto label_2a9d48;
            case 0x2A9D4Cu: goto label_2a9d4c;
            case 0x2A9D50u: goto label_2a9d50;
            case 0x2A9D54u: goto label_2a9d54;
            case 0x2A9D58u: goto label_2a9d58;
            case 0x2A9D5Cu: goto label_2a9d5c;
            case 0x2A9D60u: goto label_2a9d60;
            case 0x2A9D64u: goto label_2a9d64;
            case 0x2A9D68u: goto label_2a9d68;
            case 0x2A9D6Cu: goto label_2a9d6c;
            case 0x2A9D70u: goto label_2a9d70;
            case 0x2A9D74u: goto label_2a9d74;
            case 0x2A9D78u: goto label_2a9d78;
            case 0x2A9D7Cu: goto label_2a9d7c;
            case 0x2A9D80u: goto label_2a9d80;
            case 0x2A9D84u: goto label_2a9d84;
            case 0x2A9D88u: goto label_2a9d88;
            case 0x2A9D8Cu: goto label_2a9d8c;
            case 0x2A9D90u: goto label_2a9d90;
            case 0x2A9D94u: goto label_2a9d94;
            case 0x2A9D98u: goto label_2a9d98;
            case 0x2A9D9Cu: goto label_2a9d9c;
            case 0x2A9DA0u: goto label_2a9da0;
            case 0x2A9DA4u: goto label_2a9da4;
            case 0x2A9DA8u: goto label_2a9da8;
            case 0x2A9DACu: goto label_2a9dac;
            case 0x2A9DB0u: goto label_2a9db0;
            case 0x2A9DB4u: goto label_2a9db4;
            case 0x2A9DB8u: goto label_2a9db8;
            case 0x2A9DBCu: goto label_2a9dbc;
            case 0x2A9DC0u: goto label_2a9dc0;
            case 0x2A9DC4u: goto label_2a9dc4;
            case 0x2A9DC8u: goto label_2a9dc8;
            case 0x2A9DCCu: goto label_2a9dcc;
            case 0x2A9DD0u: goto label_2a9dd0;
            case 0x2A9DD4u: goto label_2a9dd4;
            case 0x2A9DD8u: goto label_2a9dd8;
            case 0x2A9DDCu: goto label_2a9ddc;
            case 0x2A9DE0u: goto label_2a9de0;
            case 0x2A9DE4u: goto label_2a9de4;
            case 0x2A9DE8u: goto label_2a9de8;
            case 0x2A9DECu: goto label_2a9dec;
            case 0x2A9DF0u: goto label_2a9df0;
            case 0x2A9DF4u: goto label_2a9df4;
            case 0x2A9DF8u: goto label_2a9df8;
            case 0x2A9DFCu: goto label_2a9dfc;
            case 0x2A9E00u: goto label_2a9e00;
            case 0x2A9E04u: goto label_2a9e04;
            case 0x2A9E08u: goto label_2a9e08;
            case 0x2A9E0Cu: goto label_2a9e0c;
            case 0x2A9E10u: goto label_2a9e10;
            case 0x2A9E14u: goto label_2a9e14;
            case 0x2A9E18u: goto label_2a9e18;
            case 0x2A9E1Cu: goto label_2a9e1c;
            case 0x2A9E20u: goto label_2a9e20;
            case 0x2A9E24u: goto label_2a9e24;
            case 0x2A9E28u: goto label_2a9e28;
            case 0x2A9E2Cu: goto label_2a9e2c;
            case 0x2A9E30u: goto label_2a9e30;
            case 0x2A9E34u: goto label_2a9e34;
            case 0x2A9E38u: goto label_2a9e38;
            case 0x2A9E3Cu: goto label_2a9e3c;
            case 0x2A9E40u: goto label_2a9e40;
            case 0x2A9E44u: goto label_2a9e44;
            case 0x2A9E48u: goto label_2a9e48;
            case 0x2A9E4Cu: goto label_2a9e4c;
            case 0x2A9E50u: goto label_2a9e50;
            case 0x2A9E54u: goto label_2a9e54;
            case 0x2A9E58u: goto label_2a9e58;
            case 0x2A9E5Cu: goto label_2a9e5c;
            case 0x2A9E60u: goto label_2a9e60;
            case 0x2A9E64u: goto label_2a9e64;
            case 0x2A9E68u: goto label_2a9e68;
            case 0x2A9E6Cu: goto label_2a9e6c;
            case 0x2A9E70u: goto label_2a9e70;
            case 0x2A9E74u: goto label_2a9e74;
            case 0x2A9E78u: goto label_2a9e78;
            case 0x2A9E7Cu: goto label_2a9e7c;
            case 0x2A9E80u: goto label_2a9e80;
            case 0x2A9E84u: goto label_2a9e84;
            case 0x2A9E88u: goto label_2a9e88;
            case 0x2A9E8Cu: goto label_2a9e8c;
            case 0x2A9E90u: goto label_2a9e90;
            case 0x2A9E94u: goto label_2a9e94;
            case 0x2A9E98u: goto label_2a9e98;
            case 0x2A9E9Cu: goto label_2a9e9c;
            case 0x2A9EA0u: goto label_2a9ea0;
            case 0x2A9EA4u: goto label_2a9ea4;
            case 0x2A9EA8u: goto label_2a9ea8;
            case 0x2A9EACu: goto label_2a9eac;
            case 0x2A9EB0u: goto label_2a9eb0;
            case 0x2A9EB4u: goto label_2a9eb4;
            case 0x2A9EB8u: goto label_2a9eb8;
            case 0x2A9EBCu: goto label_2a9ebc;
            case 0x2A9EC0u: goto label_2a9ec0;
            case 0x2A9EC4u: goto label_2a9ec4;
            case 0x2A9EC8u: goto label_2a9ec8;
            case 0x2A9ECCu: goto label_2a9ecc;
            case 0x2A9ED0u: goto label_2a9ed0;
            case 0x2A9ED4u: goto label_2a9ed4;
            case 0x2A9ED8u: goto label_2a9ed8;
            case 0x2A9EDCu: goto label_2a9edc;
            case 0x2A9EE0u: goto label_2a9ee0;
            case 0x2A9EE4u: goto label_2a9ee4;
            case 0x2A9EE8u: goto label_2a9ee8;
            case 0x2A9EECu: goto label_2a9eec;
            case 0x2A9EF0u: goto label_2a9ef0;
            case 0x2A9EF4u: goto label_2a9ef4;
            case 0x2A9EF8u: goto label_2a9ef8;
            case 0x2A9EFCu: goto label_2a9efc;
            case 0x2A9F00u: goto label_2a9f00;
            case 0x2A9F04u: goto label_2a9f04;
            case 0x2A9F08u: goto label_2a9f08;
            case 0x2A9F0Cu: goto label_2a9f0c;
            case 0x2A9F10u: goto label_2a9f10;
            case 0x2A9F14u: goto label_2a9f14;
            case 0x2A9F18u: goto label_2a9f18;
            case 0x2A9F1Cu: goto label_2a9f1c;
            case 0x2A9F20u: goto label_2a9f20;
            case 0x2A9F24u: goto label_2a9f24;
            case 0x2A9F28u: goto label_2a9f28;
            case 0x2A9F2Cu: goto label_2a9f2c;
            case 0x2A9F30u: goto label_2a9f30;
            case 0x2A9F34u: goto label_2a9f34;
            case 0x2A9F38u: goto label_2a9f38;
            case 0x2A9F3Cu: goto label_2a9f3c;
            case 0x2A9F40u: goto label_2a9f40;
            case 0x2A9F44u: goto label_2a9f44;
            case 0x2A9F48u: goto label_2a9f48;
            case 0x2A9F4Cu: goto label_2a9f4c;
            case 0x2A9F50u: goto label_2a9f50;
            case 0x2A9F54u: goto label_2a9f54;
            case 0x2A9F58u: goto label_2a9f58;
            case 0x2A9F5Cu: goto label_2a9f5c;
            case 0x2A9F60u: goto label_2a9f60;
            case 0x2A9F64u: goto label_2a9f64;
            case 0x2A9F68u: goto label_2a9f68;
            case 0x2A9F6Cu: goto label_2a9f6c;
            case 0x2A9F70u: goto label_2a9f70;
            case 0x2A9F74u: goto label_2a9f74;
            case 0x2A9F78u: goto label_2a9f78;
            case 0x2A9F7Cu: goto label_2a9f7c;
            case 0x2A9F80u: goto label_2a9f80;
            case 0x2A9F84u: goto label_2a9f84;
            case 0x2A9F88u: goto label_2a9f88;
            case 0x2A9F8Cu: goto label_2a9f8c;
            case 0x2A9F90u: goto label_2a9f90;
            case 0x2A9F94u: goto label_2a9f94;
            case 0x2A9F98u: goto label_2a9f98;
            case 0x2A9F9Cu: goto label_2a9f9c;
            case 0x2A9FA0u: goto label_2a9fa0;
            case 0x2A9FA4u: goto label_2a9fa4;
            case 0x2A9FA8u: goto label_2a9fa8;
            case 0x2A9FACu: goto label_2a9fac;
            case 0x2A9FB0u: goto label_2a9fb0;
            case 0x2A9FB4u: goto label_2a9fb4;
            case 0x2A9FB8u: goto label_2a9fb8;
            case 0x2A9FBCu: goto label_2a9fbc;
            case 0x2A9FC0u: goto label_2a9fc0;
            case 0x2A9FC4u: goto label_2a9fc4;
            case 0x2A9FC8u: goto label_2a9fc8;
            case 0x2A9FCCu: goto label_2a9fcc;
            case 0x2A9FD0u: goto label_2a9fd0;
            case 0x2A9FD4u: goto label_2a9fd4;
            case 0x2A9FD8u: goto label_2a9fd8;
            case 0x2A9FDCu: goto label_2a9fdc;
            case 0x2A9FE0u: goto label_2a9fe0;
            case 0x2A9FE4u: goto label_2a9fe4;
            case 0x2A9FE8u: goto label_2a9fe8;
            case 0x2A9FECu: goto label_2a9fec;
            case 0x2A9FF0u: goto label_2a9ff0;
            case 0x2A9FF4u: goto label_2a9ff4;
            case 0x2A9FF8u: goto label_2a9ff8;
            case 0x2A9FFCu: goto label_2a9ffc;
            case 0x2AA000u: goto label_2aa000;
            case 0x2AA004u: goto label_2aa004;
            case 0x2AA008u: goto label_2aa008;
            case 0x2AA00Cu: goto label_2aa00c;
            case 0x2AA010u: goto label_2aa010;
            case 0x2AA014u: goto label_2aa014;
            case 0x2AA018u: goto label_2aa018;
            case 0x2AA01Cu: goto label_2aa01c;
            case 0x2AA020u: goto label_2aa020;
            case 0x2AA024u: goto label_2aa024;
            case 0x2AA028u: goto label_2aa028;
            case 0x2AA02Cu: goto label_2aa02c;
            case 0x2AA030u: goto label_2aa030;
            case 0x2AA034u: goto label_2aa034;
            case 0x2AA038u: goto label_2aa038;
            case 0x2AA03Cu: goto label_2aa03c;
            case 0x2AA040u: goto label_2aa040;
            case 0x2AA044u: goto label_2aa044;
            case 0x2AA048u: goto label_2aa048;
            case 0x2AA04Cu: goto label_2aa04c;
            case 0x2AA050u: goto label_2aa050;
            case 0x2AA054u: goto label_2aa054;
            case 0x2AA058u: goto label_2aa058;
            case 0x2AA05Cu: goto label_2aa05c;
            case 0x2AA060u: goto label_2aa060;
            case 0x2AA064u: goto label_2aa064;
            case 0x2AA068u: goto label_2aa068;
            case 0x2AA06Cu: goto label_2aa06c;
            case 0x2AA070u: goto label_2aa070;
            case 0x2AA074u: goto label_2aa074;
            case 0x2AA078u: goto label_2aa078;
            case 0x2AA07Cu: goto label_2aa07c;
            case 0x2AA080u: goto label_2aa080;
            case 0x2AA084u: goto label_2aa084;
            case 0x2AA088u: goto label_2aa088;
            case 0x2AA08Cu: goto label_2aa08c;
            case 0x2AA090u: goto label_2aa090;
            case 0x2AA094u: goto label_2aa094;
            case 0x2AA098u: goto label_2aa098;
            case 0x2AA09Cu: goto label_2aa09c;
            case 0x2AA0A0u: goto label_2aa0a0;
            case 0x2AA0A4u: goto label_2aa0a4;
            case 0x2AA0A8u: goto label_2aa0a8;
            case 0x2AA0ACu: goto label_2aa0ac;
            case 0x2AA0B0u: goto label_2aa0b0;
            case 0x2AA0B4u: goto label_2aa0b4;
            case 0x2AA0B8u: goto label_2aa0b8;
            case 0x2AA0BCu: goto label_2aa0bc;
            case 0x2AA0C0u: goto label_2aa0c0;
            case 0x2AA0C4u: goto label_2aa0c4;
            case 0x2AA0C8u: goto label_2aa0c8;
            case 0x2AA0CCu: goto label_2aa0cc;
            case 0x2AA0D0u: goto label_2aa0d0;
            case 0x2AA0D4u: goto label_2aa0d4;
            case 0x2AA0D8u: goto label_2aa0d8;
            case 0x2AA0DCu: goto label_2aa0dc;
            case 0x2AA0E0u: goto label_2aa0e0;
            case 0x2AA0E4u: goto label_2aa0e4;
            case 0x2AA0E8u: goto label_2aa0e8;
            case 0x2AA0ECu: goto label_2aa0ec;
            case 0x2AA0F0u: goto label_2aa0f0;
            case 0x2AA0F4u: goto label_2aa0f4;
            case 0x2AA0F8u: goto label_2aa0f8;
            case 0x2AA0FCu: goto label_2aa0fc;
            case 0x2AA100u: goto label_2aa100;
            case 0x2AA104u: goto label_2aa104;
            case 0x2AA108u: goto label_2aa108;
            case 0x2AA10Cu: goto label_2aa10c;
            case 0x2AA110u: goto label_2aa110;
            case 0x2AA114u: goto label_2aa114;
            case 0x2AA118u: goto label_2aa118;
            case 0x2AA11Cu: goto label_2aa11c;
            case 0x2AA120u: goto label_2aa120;
            case 0x2AA124u: goto label_2aa124;
            case 0x2AA128u: goto label_2aa128;
            case 0x2AA12Cu: goto label_2aa12c;
            case 0x2AA130u: goto label_2aa130;
            case 0x2AA134u: goto label_2aa134;
            case 0x2AA138u: goto label_2aa138;
            case 0x2AA13Cu: goto label_2aa13c;
            case 0x2AA140u: goto label_2aa140;
            case 0x2AA144u: goto label_2aa144;
            case 0x2AA148u: goto label_2aa148;
            case 0x2AA14Cu: goto label_2aa14c;
            case 0x2AA150u: goto label_2aa150;
            case 0x2AA154u: goto label_2aa154;
            case 0x2AA158u: goto label_2aa158;
            case 0x2AA15Cu: goto label_2aa15c;
            case 0x2AA160u: goto label_2aa160;
            case 0x2AA164u: goto label_2aa164;
            case 0x2AA168u: goto label_2aa168;
            case 0x2AA16Cu: goto label_2aa16c;
            case 0x2AA170u: goto label_2aa170;
            case 0x2AA174u: goto label_2aa174;
            case 0x2AA178u: goto label_2aa178;
            case 0x2AA17Cu: goto label_2aa17c;
            case 0x2AA180u: goto label_2aa180;
            case 0x2AA184u: goto label_2aa184;
            case 0x2AA188u: goto label_2aa188;
            case 0x2AA18Cu: goto label_2aa18c;
            case 0x2AA190u: goto label_2aa190;
            case 0x2AA194u: goto label_2aa194;
            case 0x2AA198u: goto label_2aa198;
            case 0x2AA19Cu: goto label_2aa19c;
            case 0x2AA1A0u: goto label_2aa1a0;
            case 0x2AA1A4u: goto label_2aa1a4;
            case 0x2AA1A8u: goto label_2aa1a8;
            case 0x2AA1ACu: goto label_2aa1ac;
            case 0x2AA1B0u: goto label_2aa1b0;
            case 0x2AA1B4u: goto label_2aa1b4;
            case 0x2AA1B8u: goto label_2aa1b8;
            case 0x2AA1BCu: goto label_2aa1bc;
            case 0x2AA1C0u: goto label_2aa1c0;
            case 0x2AA1C4u: goto label_2aa1c4;
            case 0x2AA1C8u: goto label_2aa1c8;
            case 0x2AA1CCu: goto label_2aa1cc;
            case 0x2AA1D0u: goto label_2aa1d0;
            case 0x2AA1D4u: goto label_2aa1d4;
            case 0x2AA1D8u: goto label_2aa1d8;
            case 0x2AA1DCu: goto label_2aa1dc;
            case 0x2AA1E0u: goto label_2aa1e0;
            case 0x2AA1E4u: goto label_2aa1e4;
            case 0x2AA1E8u: goto label_2aa1e8;
            case 0x2AA1ECu: goto label_2aa1ec;
            case 0x2AA1F0u: goto label_2aa1f0;
            case 0x2AA1F4u: goto label_2aa1f4;
            case 0x2AA1F8u: goto label_2aa1f8;
            case 0x2AA1FCu: goto label_2aa1fc;
            case 0x2AA200u: goto label_2aa200;
            case 0x2AA204u: goto label_2aa204;
            case 0x2AA208u: goto label_2aa208;
            case 0x2AA20Cu: goto label_2aa20c;
            case 0x2AA210u: goto label_2aa210;
            case 0x2AA214u: goto label_2aa214;
            case 0x2AA218u: goto label_2aa218;
            case 0x2AA21Cu: goto label_2aa21c;
            case 0x2AA220u: goto label_2aa220;
            case 0x2AA224u: goto label_2aa224;
            case 0x2AA228u: goto label_2aa228;
            case 0x2AA22Cu: goto label_2aa22c;
            case 0x2AA230u: goto label_2aa230;
            case 0x2AA234u: goto label_2aa234;
            case 0x2AA238u: goto label_2aa238;
            case 0x2AA23Cu: goto label_2aa23c;
            case 0x2AA240u: goto label_2aa240;
            case 0x2AA244u: goto label_2aa244;
            case 0x2AA248u: goto label_2aa248;
            case 0x2AA24Cu: goto label_2aa24c;
            case 0x2AA250u: goto label_2aa250;
            case 0x2AA254u: goto label_2aa254;
            case 0x2AA258u: goto label_2aa258;
            case 0x2AA25Cu: goto label_2aa25c;
            case 0x2AA260u: goto label_2aa260;
            case 0x2AA264u: goto label_2aa264;
            case 0x2AA268u: goto label_2aa268;
            case 0x2AA26Cu: goto label_2aa26c;
            case 0x2AA270u: goto label_2aa270;
            case 0x2AA274u: goto label_2aa274;
            case 0x2AA278u: goto label_2aa278;
            case 0x2AA27Cu: goto label_2aa27c;
            case 0x2AA280u: goto label_2aa280;
            case 0x2AA284u: goto label_2aa284;
            case 0x2AA288u: goto label_2aa288;
            case 0x2AA28Cu: goto label_2aa28c;
            case 0x2AA290u: goto label_2aa290;
            case 0x2AA294u: goto label_2aa294;
            case 0x2AA298u: goto label_2aa298;
            case 0x2AA29Cu: goto label_2aa29c;
            case 0x2AA2A0u: goto label_2aa2a0;
            case 0x2AA2A4u: goto label_2aa2a4;
            case 0x2AA2A8u: goto label_2aa2a8;
            case 0x2AA2ACu: goto label_2aa2ac;
            case 0x2AA2B0u: goto label_2aa2b0;
            case 0x2AA2B4u: goto label_2aa2b4;
            case 0x2AA2B8u: goto label_2aa2b8;
            case 0x2AA2BCu: goto label_2aa2bc;
            case 0x2AA2C0u: goto label_2aa2c0;
            case 0x2AA2C4u: goto label_2aa2c4;
            case 0x2AA2C8u: goto label_2aa2c8;
            case 0x2AA2CCu: goto label_2aa2cc;
            case 0x2AA2D0u: goto label_2aa2d0;
            case 0x2AA2D4u: goto label_2aa2d4;
            case 0x2AA2D8u: goto label_2aa2d8;
            case 0x2AA2DCu: goto label_2aa2dc;
            case 0x2AA2E0u: goto label_2aa2e0;
            case 0x2AA2E4u: goto label_2aa2e4;
            case 0x2AA2E8u: goto label_2aa2e8;
            case 0x2AA2ECu: goto label_2aa2ec;
            case 0x2AA2F0u: goto label_2aa2f0;
            case 0x2AA2F4u: goto label_2aa2f4;
            case 0x2AA2F8u: goto label_2aa2f8;
            case 0x2AA2FCu: goto label_2aa2fc;
            case 0x2AA300u: goto label_2aa300;
            case 0x2AA304u: goto label_2aa304;
            case 0x2AA308u: goto label_2aa308;
            case 0x2AA30Cu: goto label_2aa30c;
            case 0x2AA310u: goto label_2aa310;
            case 0x2AA314u: goto label_2aa314;
            case 0x2AA318u: goto label_2aa318;
            case 0x2AA31Cu: goto label_2aa31c;
            case 0x2AA320u: goto label_2aa320;
            case 0x2AA324u: goto label_2aa324;
            case 0x2AA328u: goto label_2aa328;
            case 0x2AA32Cu: goto label_2aa32c;
            case 0x2AA330u: goto label_2aa330;
            case 0x2AA334u: goto label_2aa334;
            case 0x2AA338u: goto label_2aa338;
            case 0x2AA33Cu: goto label_2aa33c;
            case 0x2AA340u: goto label_2aa340;
            case 0x2AA344u: goto label_2aa344;
            case 0x2AA348u: goto label_2aa348;
            case 0x2AA34Cu: goto label_2aa34c;
            case 0x2AA350u: goto label_2aa350;
            case 0x2AA354u: goto label_2aa354;
            case 0x2AA358u: goto label_2aa358;
            case 0x2AA35Cu: goto label_2aa35c;
            case 0x2AA360u: goto label_2aa360;
            case 0x2AA364u: goto label_2aa364;
            case 0x2AA368u: goto label_2aa368;
            case 0x2AA36Cu: goto label_2aa36c;
            case 0x2AA370u: goto label_2aa370;
            case 0x2AA374u: goto label_2aa374;
            case 0x2AA378u: goto label_2aa378;
            case 0x2AA37Cu: goto label_2aa37c;
            case 0x2AA380u: goto label_2aa380;
            case 0x2AA384u: goto label_2aa384;
            case 0x2AA388u: goto label_2aa388;
            case 0x2AA38Cu: goto label_2aa38c;
            case 0x2AA390u: goto label_2aa390;
            case 0x2AA394u: goto label_2aa394;
            case 0x2AA398u: goto label_2aa398;
            case 0x2AA39Cu: goto label_2aa39c;
            case 0x2AA3A0u: goto label_2aa3a0;
            case 0x2AA3A4u: goto label_2aa3a4;
            case 0x2AA3A8u: goto label_2aa3a8;
            case 0x2AA3ACu: goto label_2aa3ac;
            case 0x2AA3B0u: goto label_2aa3b0;
            case 0x2AA3B4u: goto label_2aa3b4;
            case 0x2AA3B8u: goto label_2aa3b8;
            case 0x2AA3BCu: goto label_2aa3bc;
            case 0x2AA3C0u: goto label_2aa3c0;
            case 0x2AA3C4u: goto label_2aa3c4;
            case 0x2AA3C8u: goto label_2aa3c8;
            case 0x2AA3CCu: goto label_2aa3cc;
            case 0x2AA3D0u: goto label_2aa3d0;
            case 0x2AA3D4u: goto label_2aa3d4;
            case 0x2AA3D8u: goto label_2aa3d8;
            case 0x2AA3DCu: goto label_2aa3dc;
            case 0x2AA3E0u: goto label_2aa3e0;
            case 0x2AA3E4u: goto label_2aa3e4;
            case 0x2AA3E8u: goto label_2aa3e8;
            case 0x2AA3ECu: goto label_2aa3ec;
            case 0x2AA3F0u: goto label_2aa3f0;
            case 0x2AA3F4u: goto label_2aa3f4;
            case 0x2AA3F8u: goto label_2aa3f8;
            case 0x2AA3FCu: goto label_2aa3fc;
            case 0x2AA400u: goto label_2aa400;
            case 0x2AA404u: goto label_2aa404;
            case 0x2AA408u: goto label_2aa408;
            case 0x2AA40Cu: goto label_2aa40c;
            case 0x2AA410u: goto label_2aa410;
            case 0x2AA414u: goto label_2aa414;
            case 0x2AA418u: goto label_2aa418;
            case 0x2AA41Cu: goto label_2aa41c;
            case 0x2AA420u: goto label_2aa420;
            case 0x2AA424u: goto label_2aa424;
            case 0x2AA428u: goto label_2aa428;
            case 0x2AA42Cu: goto label_2aa42c;
            case 0x2AA430u: goto label_2aa430;
            case 0x2AA434u: goto label_2aa434;
            case 0x2AA438u: goto label_2aa438;
            case 0x2AA43Cu: goto label_2aa43c;
            case 0x2AA440u: goto label_2aa440;
            case 0x2AA444u: goto label_2aa444;
            case 0x2AA448u: goto label_2aa448;
            case 0x2AA44Cu: goto label_2aa44c;
            case 0x2AA450u: goto label_2aa450;
            case 0x2AA454u: goto label_2aa454;
            case 0x2AA458u: goto label_2aa458;
            case 0x2AA45Cu: goto label_2aa45c;
            case 0x2AA460u: goto label_2aa460;
            case 0x2AA464u: goto label_2aa464;
            case 0x2AA468u: goto label_2aa468;
            case 0x2AA46Cu: goto label_2aa46c;
            case 0x2AA470u: goto label_2aa470;
            case 0x2AA474u: goto label_2aa474;
            case 0x2AA478u: goto label_2aa478;
            case 0x2AA47Cu: goto label_2aa47c;
            case 0x2AA480u: goto label_2aa480;
            case 0x2AA484u: goto label_2aa484;
            case 0x2AA488u: goto label_2aa488;
            case 0x2AA48Cu: goto label_2aa48c;
            case 0x2AA490u: goto label_2aa490;
            case 0x2AA494u: goto label_2aa494;
            case 0x2AA498u: goto label_2aa498;
            case 0x2AA49Cu: goto label_2aa49c;
            case 0x2AA4A0u: goto label_2aa4a0;
            case 0x2AA4A4u: goto label_2aa4a4;
            case 0x2AA4A8u: goto label_2aa4a8;
            case 0x2AA4ACu: goto label_2aa4ac;
            case 0x2AA4B0u: goto label_2aa4b0;
            case 0x2AA4B4u: goto label_2aa4b4;
            case 0x2AA4B8u: goto label_2aa4b8;
            case 0x2AA4BCu: goto label_2aa4bc;
            case 0x2AA4C0u: goto label_2aa4c0;
            case 0x2AA4C4u: goto label_2aa4c4;
            case 0x2AA4C8u: goto label_2aa4c8;
            case 0x2AA4CCu: goto label_2aa4cc;
            case 0x2AA4D0u: goto label_2aa4d0;
            case 0x2AA4D4u: goto label_2aa4d4;
            case 0x2AA4D8u: goto label_2aa4d8;
            case 0x2AA4DCu: goto label_2aa4dc;
            case 0x2AA4E0u: goto label_2aa4e0;
            case 0x2AA4E4u: goto label_2aa4e4;
            case 0x2AA4E8u: goto label_2aa4e8;
            case 0x2AA4ECu: goto label_2aa4ec;
            case 0x2AA4F0u: goto label_2aa4f0;
            case 0x2AA4F4u: goto label_2aa4f4;
            case 0x2AA4F8u: goto label_2aa4f8;
            case 0x2AA4FCu: goto label_2aa4fc;
            case 0x2AA500u: goto label_2aa500;
            case 0x2AA504u: goto label_2aa504;
            case 0x2AA508u: goto label_2aa508;
            case 0x2AA50Cu: goto label_2aa50c;
            case 0x2AA510u: goto label_2aa510;
            case 0x2AA514u: goto label_2aa514;
            case 0x2AA518u: goto label_2aa518;
            case 0x2AA51Cu: goto label_2aa51c;
            case 0x2AA520u: goto label_2aa520;
            case 0x2AA524u: goto label_2aa524;
            case 0x2AA528u: goto label_2aa528;
            case 0x2AA52Cu: goto label_2aa52c;
            case 0x2AA530u: goto label_2aa530;
            case 0x2AA534u: goto label_2aa534;
            case 0x2AA538u: goto label_2aa538;
            case 0x2AA53Cu: goto label_2aa53c;
            case 0x2AA540u: goto label_2aa540;
            case 0x2AA544u: goto label_2aa544;
            case 0x2AA548u: goto label_2aa548;
            case 0x2AA54Cu: goto label_2aa54c;
            case 0x2AA550u: goto label_2aa550;
            case 0x2AA554u: goto label_2aa554;
            case 0x2AA558u: goto label_2aa558;
            case 0x2AA55Cu: goto label_2aa55c;
            case 0x2AA560u: goto label_2aa560;
            case 0x2AA564u: goto label_2aa564;
            case 0x2AA568u: goto label_2aa568;
            case 0x2AA56Cu: goto label_2aa56c;
            case 0x2AA570u: goto label_2aa570;
            case 0x2AA574u: goto label_2aa574;
            case 0x2AA578u: goto label_2aa578;
            case 0x2AA57Cu: goto label_2aa57c;
            case 0x2AA580u: goto label_2aa580;
            case 0x2AA584u: goto label_2aa584;
            case 0x2AA588u: goto label_2aa588;
            case 0x2AA58Cu: goto label_2aa58c;
            case 0x2AA590u: goto label_2aa590;
            case 0x2AA594u: goto label_2aa594;
            case 0x2AA598u: goto label_2aa598;
            case 0x2AA59Cu: goto label_2aa59c;
            case 0x2AA5A0u: goto label_2aa5a0;
            case 0x2AA5A4u: goto label_2aa5a4;
            case 0x2AA5A8u: goto label_2aa5a8;
            case 0x2AA5ACu: goto label_2aa5ac;
            case 0x2AA5B0u: goto label_2aa5b0;
            case 0x2AA5B4u: goto label_2aa5b4;
            case 0x2AA5B8u: goto label_2aa5b8;
            case 0x2AA5BCu: goto label_2aa5bc;
            case 0x2AA5C0u: goto label_2aa5c0;
            case 0x2AA5C4u: goto label_2aa5c4;
            case 0x2AA5C8u: goto label_2aa5c8;
            case 0x2AA5CCu: goto label_2aa5cc;
            case 0x2AA5D0u: goto label_2aa5d0;
            case 0x2AA5D4u: goto label_2aa5d4;
            case 0x2AA5D8u: goto label_2aa5d8;
            case 0x2AA5DCu: goto label_2aa5dc;
            case 0x2AA5E0u: goto label_2aa5e0;
            case 0x2AA5E4u: goto label_2aa5e4;
            case 0x2AA5E8u: goto label_2aa5e8;
            case 0x2AA5ECu: goto label_2aa5ec;
            case 0x2AA5F0u: goto label_2aa5f0;
            case 0x2AA5F4u: goto label_2aa5f4;
            case 0x2AA5F8u: goto label_2aa5f8;
            case 0x2AA5FCu: goto label_2aa5fc;
            case 0x2AA600u: goto label_2aa600;
            case 0x2AA604u: goto label_2aa604;
            case 0x2AA608u: goto label_2aa608;
            case 0x2AA60Cu: goto label_2aa60c;
            case 0x2AA610u: goto label_2aa610;
            case 0x2AA614u: goto label_2aa614;
            case 0x2AA618u: goto label_2aa618;
            case 0x2AA61Cu: goto label_2aa61c;
            case 0x2AA620u: goto label_2aa620;
            case 0x2AA624u: goto label_2aa624;
            case 0x2AA628u: goto label_2aa628;
            case 0x2AA62Cu: goto label_2aa62c;
            case 0x2AA630u: goto label_2aa630;
            case 0x2AA634u: goto label_2aa634;
            case 0x2AA638u: goto label_2aa638;
            case 0x2AA63Cu: goto label_2aa63c;
            case 0x2AA640u: goto label_2aa640;
            case 0x2AA644u: goto label_2aa644;
            case 0x2AA648u: goto label_2aa648;
            case 0x2AA64Cu: goto label_2aa64c;
            case 0x2AA650u: goto label_2aa650;
            case 0x2AA654u: goto label_2aa654;
            case 0x2AA658u: goto label_2aa658;
            case 0x2AA65Cu: goto label_2aa65c;
            case 0x2AA660u: goto label_2aa660;
            case 0x2AA664u: goto label_2aa664;
            case 0x2AA668u: goto label_2aa668;
            case 0x2AA66Cu: goto label_2aa66c;
            case 0x2AA670u: goto label_2aa670;
            case 0x2AA674u: goto label_2aa674;
            case 0x2AA678u: goto label_2aa678;
            case 0x2AA67Cu: goto label_2aa67c;
            case 0x2AA680u: goto label_2aa680;
            case 0x2AA684u: goto label_2aa684;
            case 0x2AA688u: goto label_2aa688;
            case 0x2AA68Cu: goto label_2aa68c;
            case 0x2AA690u: goto label_2aa690;
            case 0x2AA694u: goto label_2aa694;
            case 0x2AA698u: goto label_2aa698;
            case 0x2AA69Cu: goto label_2aa69c;
            case 0x2AA6A0u: goto label_2aa6a0;
            case 0x2AA6A4u: goto label_2aa6a4;
            case 0x2AA6A8u: goto label_2aa6a8;
            case 0x2AA6ACu: goto label_2aa6ac;
            case 0x2AA6B0u: goto label_2aa6b0;
            case 0x2AA6B4u: goto label_2aa6b4;
            case 0x2AA6B8u: goto label_2aa6b8;
            case 0x2AA6BCu: goto label_2aa6bc;
            case 0x2AA6C0u: goto label_2aa6c0;
            case 0x2AA6C4u: goto label_2aa6c4;
            case 0x2AA6C8u: goto label_2aa6c8;
            case 0x2AA6CCu: goto label_2aa6cc;
            case 0x2AA6D0u: goto label_2aa6d0;
            case 0x2AA6D4u: goto label_2aa6d4;
            case 0x2AA6D8u: goto label_2aa6d8;
            case 0x2AA6DCu: goto label_2aa6dc;
            case 0x2AA6E0u: goto label_2aa6e0;
            case 0x2AA6E4u: goto label_2aa6e4;
            case 0x2AA6E8u: goto label_2aa6e8;
            case 0x2AA6ECu: goto label_2aa6ec;
            case 0x2AA6F0u: goto label_2aa6f0;
            case 0x2AA6F4u: goto label_2aa6f4;
            case 0x2AA6F8u: goto label_2aa6f8;
            case 0x2AA6FCu: goto label_2aa6fc;
            case 0x2AA700u: goto label_2aa700;
            case 0x2AA704u: goto label_2aa704;
            case 0x2AA708u: goto label_2aa708;
            case 0x2AA70Cu: goto label_2aa70c;
            case 0x2AA710u: goto label_2aa710;
            case 0x2AA714u: goto label_2aa714;
            case 0x2AA718u: goto label_2aa718;
            case 0x2AA71Cu: goto label_2aa71c;
            case 0x2AA720u: goto label_2aa720;
            case 0x2AA724u: goto label_2aa724;
            case 0x2AA728u: goto label_2aa728;
            case 0x2AA72Cu: goto label_2aa72c;
            case 0x2AA730u: goto label_2aa730;
            case 0x2AA734u: goto label_2aa734;
            case 0x2AA738u: goto label_2aa738;
            case 0x2AA73Cu: goto label_2aa73c;
            case 0x2AA740u: goto label_2aa740;
            case 0x2AA744u: goto label_2aa744;
            case 0x2AA748u: goto label_2aa748;
            case 0x2AA74Cu: goto label_2aa74c;
            case 0x2AA750u: goto label_2aa750;
            case 0x2AA754u: goto label_2aa754;
            case 0x2AA758u: goto label_2aa758;
            case 0x2AA75Cu: goto label_2aa75c;
            case 0x2AA760u: goto label_2aa760;
            case 0x2AA764u: goto label_2aa764;
            case 0x2AA768u: goto label_2aa768;
            case 0x2AA76Cu: goto label_2aa76c;
            case 0x2AA770u: goto label_2aa770;
            case 0x2AA774u: goto label_2aa774;
            case 0x2AA778u: goto label_2aa778;
            case 0x2AA77Cu: goto label_2aa77c;
            case 0x2AA780u: goto label_2aa780;
            case 0x2AA784u: goto label_2aa784;
            case 0x2AA788u: goto label_2aa788;
            case 0x2AA78Cu: goto label_2aa78c;
            case 0x2AA790u: goto label_2aa790;
            case 0x2AA794u: goto label_2aa794;
            case 0x2AA798u: goto label_2aa798;
            case 0x2AA79Cu: goto label_2aa79c;
            case 0x2AA7A0u: goto label_2aa7a0;
            case 0x2AA7A4u: goto label_2aa7a4;
            case 0x2AA7A8u: goto label_2aa7a8;
            case 0x2AA7ACu: goto label_2aa7ac;
            case 0x2AA7B0u: goto label_2aa7b0;
            case 0x2AA7B4u: goto label_2aa7b4;
            case 0x2AA7B8u: goto label_2aa7b8;
            case 0x2AA7BCu: goto label_2aa7bc;
            case 0x2AA7C0u: goto label_2aa7c0;
            case 0x2AA7C4u: goto label_2aa7c4;
            case 0x2AA7C8u: goto label_2aa7c8;
            case 0x2AA7CCu: goto label_2aa7cc;
            case 0x2AA7D0u: goto label_2aa7d0;
            case 0x2AA7D4u: goto label_2aa7d4;
            case 0x2AA7D8u: goto label_2aa7d8;
            case 0x2AA7DCu: goto label_2aa7dc;
            case 0x2AA7E0u: goto label_2aa7e0;
            case 0x2AA7E4u: goto label_2aa7e4;
            case 0x2AA7E8u: goto label_2aa7e8;
            case 0x2AA7ECu: goto label_2aa7ec;
            case 0x2AA7F0u: goto label_2aa7f0;
            case 0x2AA7F4u: goto label_2aa7f4;
            case 0x2AA7F8u: goto label_2aa7f8;
            case 0x2AA7FCu: goto label_2aa7fc;
            case 0x2AA800u: goto label_2aa800;
            case 0x2AA804u: goto label_2aa804;
            case 0x2AA808u: goto label_2aa808;
            case 0x2AA80Cu: goto label_2aa80c;
            case 0x2AA810u: goto label_2aa810;
            case 0x2AA814u: goto label_2aa814;
            case 0x2AA818u: goto label_2aa818;
            case 0x2AA81Cu: goto label_2aa81c;
            case 0x2AA820u: goto label_2aa820;
            case 0x2AA824u: goto label_2aa824;
            case 0x2AA828u: goto label_2aa828;
            case 0x2AA82Cu: goto label_2aa82c;
            case 0x2AA830u: goto label_2aa830;
            case 0x2AA834u: goto label_2aa834;
            case 0x2AA838u: goto label_2aa838;
            case 0x2AA83Cu: goto label_2aa83c;
            case 0x2AA840u: goto label_2aa840;
            case 0x2AA844u: goto label_2aa844;
            case 0x2AA848u: goto label_2aa848;
            case 0x2AA84Cu: goto label_2aa84c;
            case 0x2AA850u: goto label_2aa850;
            case 0x2AA854u: goto label_2aa854;
            case 0x2AA858u: goto label_2aa858;
            case 0x2AA85Cu: goto label_2aa85c;
            case 0x2AA860u: goto label_2aa860;
            case 0x2AA864u: goto label_2aa864;
            case 0x2AA868u: goto label_2aa868;
            case 0x2AA86Cu: goto label_2aa86c;
            case 0x2AA870u: goto label_2aa870;
            case 0x2AA874u: goto label_2aa874;
            case 0x2AA878u: goto label_2aa878;
            case 0x2AA87Cu: goto label_2aa87c;
            case 0x2AA880u: goto label_2aa880;
            case 0x2AA884u: goto label_2aa884;
            case 0x2AA888u: goto label_2aa888;
            case 0x2AA88Cu: goto label_2aa88c;
            case 0x2AA890u: goto label_2aa890;
            case 0x2AA894u: goto label_2aa894;
            case 0x2AA898u: goto label_2aa898;
            case 0x2AA89Cu: goto label_2aa89c;
            case 0x2AA8A0u: goto label_2aa8a0;
            case 0x2AA8A4u: goto label_2aa8a4;
            case 0x2AA8A8u: goto label_2aa8a8;
            case 0x2AA8ACu: goto label_2aa8ac;
            case 0x2AA8B0u: goto label_2aa8b0;
            case 0x2AA8B4u: goto label_2aa8b4;
            case 0x2AA8B8u: goto label_2aa8b8;
            case 0x2AA8BCu: goto label_2aa8bc;
            case 0x2AA8C0u: goto label_2aa8c0;
            case 0x2AA8C4u: goto label_2aa8c4;
            case 0x2AA8C8u: goto label_2aa8c8;
            case 0x2AA8CCu: goto label_2aa8cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A9C0Cu;
label_2a9c0c:
    // 0x2a9c0c: 0x3c100037
    ctx->pc = 0x2a9c0cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
label_2a9c10:
    // 0x2a9c10: 0x3c020037
    ctx->pc = 0x2a9c10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2a9c14:
    // 0x2a9c14: 0x8c428358
    ctx->pc = 0x2a9c14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935384)));
label_2a9c18:
    // 0x2a9c18: 0x21fc2
    ctx->pc = 0x2a9c18u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
label_2a9c1c:
    // 0x2a9c1c: 0x431021
    ctx->pc = 0x2a9c1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a9c20:
    // 0x2a9c20: 0x21043
    ctx->pc = 0x2a9c20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2a9c24:
    // 0x2a9c24: 0xc60c8350
    ctx->pc = 0x2a9c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294935376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a9c28:
    // 0x2a9c28: 0x46806320
    ctx->pc = 0x2a9c28u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2a9c2c:
    // 0x2a9c2c: 0x44826800
    ctx->pc = 0x2a9c2cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
label_2a9c30:
    // 0x2a9c30: 0x46806b60
    ctx->pc = 0x2a9c30u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
label_2a9c34:
    // 0x2a9c34: 0x3c014b7f
    ctx->pc = 0x2a9c34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)19327 << 16));
label_2a9c38:
    // 0x2a9c38: 0x3421ffff
    ctx->pc = 0x2a9c38u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65535));
label_2a9c3c:
    // 0x2a9c3c: 0x44817000
    ctx->pc = 0x2a9c3cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
label_2a9c40:
    // 0x2a9c40: 0xc0aa420
label_2a9c44:
    if (ctx->pc == 0x2A9C44u) {
        ctx->pc = 0x2A9C44u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2A9C48u;
        goto label_2a9c48;
    }
    ctx->pc = 0x2A9C40u;
    SET_GPR_U32(ctx, 31, 0x2A9C48u);
    ctx->pc = 0x2A9C44u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x2A9080u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetScreenSize_0x2a9080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9C48u; }
    }
    if (ctx->pc != 0x2A9C48u) { return; }
    ctx->pc = 0x2A9C48u;
label_2a9c48:
    // 0x2a9c48: 0x8e128350
    ctx->pc = 0x2a9c48u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 4294935376)));
label_2a9c4c:
    // 0x2a9c4c: 0x3c020037
    ctx->pc = 0x2a9c4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2a9c50:
    // 0x2a9c50: 0x8c428354
    ctx->pc = 0x2a9c50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935380)));
label_2a9c54:
    // 0x2a9c54: 0x21fc2
    ctx->pc = 0x2a9c54u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
label_2a9c58:
    // 0x2a9c58: 0x431021
    ctx->pc = 0x2a9c58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a9c5c:
    // 0x2a9c5c: 0x28043
    ctx->pc = 0x2a9c5cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_2a9c60:
    // 0x2a9c60: 0x24170031
    ctx->pc = 0x2a9c60u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 49));
label_2a9c64:
    // 0x2a9c64: 0x882d
    ctx->pc = 0x2a9c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9c68:
    // 0x2a9c68: 0x24130001
    ctx->pc = 0x2a9c68u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_2a9c6c:
    // 0x2a9c6c: 0x8ec30010
    ctx->pc = 0x2a9c6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_2a9c70:
    // 0x2a9c70: 0x24020002
    ctx->pc = 0x2a9c70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2a9c74:
    // 0x2a9c74: 0x1000004c
label_2a9c78:
    if (ctx->pc == 0x2A9C78u) {
        ctx->pc = 0x2A9C78u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2A9C7Cu;
        goto label_2a9c7c;
    }
    ctx->pc = 0x2A9C74u;
    {
        const bool branch_taken_0x2a9c74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A9C78u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2a9c74) {
            ctx->pc = 0x2A9DA8u;
            goto label_2a9da8;
        }
    }
    ctx->pc = 0x2A9C7Cu;
label_2a9c7c:
    // 0x2a9c7c: 0x3c100037
    ctx->pc = 0x2a9c7cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
label_2a9c80:
    // 0x2a9c80: 0x3c020037
    ctx->pc = 0x2a9c80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2a9c84:
    // 0x2a9c84: 0xc60c8350
    ctx->pc = 0x2a9c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294935376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a9c88:
    // 0x2a9c88: 0x46806320
    ctx->pc = 0x2a9c88u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2a9c8c:
    // 0x2a9c8c: 0xc44d8358
    ctx->pc = 0x2a9c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a9c90:
    // 0x2a9c90: 0x46806b60
    ctx->pc = 0x2a9c90u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
label_2a9c94:
    // 0x2a9c94: 0x3c014b7f
    ctx->pc = 0x2a9c94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)19327 << 16));
label_2a9c98:
    // 0x2a9c98: 0x3421ffff
    ctx->pc = 0x2a9c98u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65535));
label_2a9c9c:
    // 0x2a9c9c: 0x44817000
    ctx->pc = 0x2a9c9cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
label_2a9ca0:
    // 0x2a9ca0: 0xc0aa420
label_2a9ca4:
    if (ctx->pc == 0x2A9CA4u) {
        ctx->pc = 0x2A9CA4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2A9CA8u;
        goto label_2a9ca8;
    }
    ctx->pc = 0x2A9CA0u;
    SET_GPR_U32(ctx, 31, 0x2A9CA8u);
    ctx->pc = 0x2A9CA4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x2A9080u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetScreenSize_0x2a9080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9CA8u; }
    }
    if (ctx->pc != 0x2A9CA8u) { return; }
    ctx->pc = 0x2A9CA8u;
label_2a9ca8:
    // 0x2a9ca8: 0x8e128350
    ctx->pc = 0x2a9ca8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 4294935376)));
label_2a9cac:
    // 0x2a9cac: 0x3c020037
    ctx->pc = 0x2a9cacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2a9cb0:
    // 0x2a9cb0: 0x8c508354
    ctx->pc = 0x2a9cb0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294935380)));
label_2a9cb4:
    // 0x2a9cb4: 0x1000002b
label_2a9cb8:
    if (ctx->pc == 0x2A9CB8u) {
        ctx->pc = 0x2A9CB8u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 49));
        ctx->pc = 0x2A9CBCu;
        goto label_2a9cbc;
    }
    ctx->pc = 0x2A9CB4u;
    {
        const bool branch_taken_0x2a9cb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A9CB8u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 49));
        if (branch_taken_0x2a9cb4) {
            ctx->pc = 0x2A9D64u;
            goto label_2a9d64;
        }
    }
    ctx->pc = 0x2A9CBCu;
label_2a9cbc:
    // 0x2a9cbc: 0x3c100037
    ctx->pc = 0x2a9cbcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
label_2a9cc0:
    // 0x2a9cc0: 0x3c020037
    ctx->pc = 0x2a9cc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2a9cc4:
    // 0x2a9cc4: 0x8c428358
    ctx->pc = 0x2a9cc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935384)));
label_2a9cc8:
    // 0x2a9cc8: 0x21fc2
    ctx->pc = 0x2a9cc8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
label_2a9ccc:
    // 0x2a9ccc: 0x431021
    ctx->pc = 0x2a9cccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a9cd0:
    // 0x2a9cd0: 0x21043
    ctx->pc = 0x2a9cd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2a9cd4:
    // 0x2a9cd4: 0xc60c8350
    ctx->pc = 0x2a9cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294935376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a9cd8:
    // 0x2a9cd8: 0x46806320
    ctx->pc = 0x2a9cd8u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2a9cdc:
    // 0x2a9cdc: 0x44826800
    ctx->pc = 0x2a9cdcu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
label_2a9ce0:
    // 0x2a9ce0: 0x46806b60
    ctx->pc = 0x2a9ce0u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
label_2a9ce4:
    // 0x2a9ce4: 0x3c01477f
    ctx->pc = 0x2a9ce4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18303 << 16));
label_2a9ce8:
    // 0x2a9ce8: 0x3421ff00
    ctx->pc = 0x2a9ce8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65280));
label_2a9cec:
    // 0x2a9cec: 0x44817000
    ctx->pc = 0x2a9cecu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
label_2a9cf0:
    // 0x2a9cf0: 0xc0aa420
label_2a9cf4:
    if (ctx->pc == 0x2A9CF4u) {
        ctx->pc = 0x2A9CF4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2A9CF8u;
        goto label_2a9cf8;
    }
    ctx->pc = 0x2A9CF0u;
    SET_GPR_U32(ctx, 31, 0x2A9CF8u);
    ctx->pc = 0x2A9CF4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2A9080u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetScreenSize_0x2a9080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9CF8u; }
    }
    if (ctx->pc != 0x2A9CF8u) { return; }
    ctx->pc = 0x2A9CF8u;
label_2a9cf8:
    // 0x2a9cf8: 0x8e128350
    ctx->pc = 0x2a9cf8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 4294935376)));
label_2a9cfc:
    // 0x2a9cfc: 0x3c020037
    ctx->pc = 0x2a9cfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2a9d00:
    // 0x2a9d00: 0x8c428354
    ctx->pc = 0x2a9d00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935380)));
label_2a9d04:
    // 0x2a9d04: 0x21fc2
    ctx->pc = 0x2a9d04u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
label_2a9d08:
    // 0x2a9d08: 0x431021
    ctx->pc = 0x2a9d08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a9d0c:
    // 0x2a9d0c: 0x28043
    ctx->pc = 0x2a9d0cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_2a9d10:
    // 0x2a9d10: 0x24170032
    ctx->pc = 0x2a9d10u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 50));
label_2a9d14:
    // 0x2a9d14: 0x882d
    ctx->pc = 0x2a9d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d18:
    // 0x2a9d18: 0x24130001
    ctx->pc = 0x2a9d18u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_2a9d1c:
    // 0x2a9d1c: 0x8ec20010
    ctx->pc = 0x2a9d1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_2a9d20:
    // 0x2a9d20: 0x10000021
label_2a9d24:
    if (ctx->pc == 0x2A9D24u) {
        ctx->pc = 0x2A9D24u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
        ctx->pc = 0x2A9D28u;
        goto label_2a9d28;
    }
    ctx->pc = 0x2A9D20u;
    {
        const bool branch_taken_0x2a9d20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A9D24u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
        if (branch_taken_0x2a9d20) {
            ctx->pc = 0x2A9DA8u;
            goto label_2a9da8;
        }
    }
    ctx->pc = 0x2A9D28u;
label_2a9d28:
    // 0x2a9d28: 0x3c100037
    ctx->pc = 0x2a9d28u;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
label_2a9d2c:
    // 0x2a9d2c: 0x3c020037
    ctx->pc = 0x2a9d2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2a9d30:
    // 0x2a9d30: 0xc60c8350
    ctx->pc = 0x2a9d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294935376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a9d34:
    // 0x2a9d34: 0x46806320
    ctx->pc = 0x2a9d34u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2a9d38:
    // 0x2a9d38: 0xc44d8358
    ctx->pc = 0x2a9d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a9d3c:
    // 0x2a9d3c: 0x46806b60
    ctx->pc = 0x2a9d3cu;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
label_2a9d40:
    // 0x2a9d40: 0x3c01477f
    ctx->pc = 0x2a9d40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18303 << 16));
label_2a9d44:
    // 0x2a9d44: 0x3421ff00
    ctx->pc = 0x2a9d44u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65280));
label_2a9d48:
    // 0x2a9d48: 0x44817000
    ctx->pc = 0x2a9d48u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
label_2a9d4c:
    // 0x2a9d4c: 0xc0aa420
label_2a9d50:
    if (ctx->pc == 0x2A9D50u) {
        ctx->pc = 0x2A9D50u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2A9D54u;
        goto label_2a9d54;
    }
    ctx->pc = 0x2A9D4Cu;
    SET_GPR_U32(ctx, 31, 0x2A9D54u);
    ctx->pc = 0x2A9D50u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2A9080u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetScreenSize_0x2a9080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9D54u; }
    }
    if (ctx->pc != 0x2A9D54u) { return; }
    ctx->pc = 0x2A9D54u;
label_2a9d54:
    // 0x2a9d54: 0x8e128350
    ctx->pc = 0x2a9d54u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 4294935376)));
label_2a9d58:
    // 0x2a9d58: 0x3c020037
    ctx->pc = 0x2a9d58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2a9d5c:
    // 0x2a9d5c: 0x8c508354
    ctx->pc = 0x2a9d5cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294935380)));
label_2a9d60:
    // 0x2a9d60: 0x24170032
    ctx->pc = 0x2a9d60u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 50));
label_2a9d64:
    // 0x2a9d64: 0x24110001
    ctx->pc = 0x2a9d64u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_2a9d68:
    // 0x2a9d68: 0x982d
    ctx->pc = 0x2a9d68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d6c:
    // 0x2a9d6c: 0x8ec20010
    ctx->pc = 0x2a9d6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_2a9d70:
    // 0x2a9d70: 0x1000000d
label_2a9d74:
    if (ctx->pc == 0x2A9D74u) {
        ctx->pc = 0x2A9D74u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->pc = 0x2A9D78u;
        goto label_2a9d78;
    }
    ctx->pc = 0x2A9D70u;
    {
        const bool branch_taken_0x2a9d70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A9D74u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        if (branch_taken_0x2a9d70) {
            ctx->pc = 0x2A9DA8u;
            goto label_2a9da8;
        }
    }
    ctx->pc = 0x2A9D78u;
label_2a9d78:
    // 0x2a9d78: 0x8ec20010
    ctx->pc = 0x2a9d78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_2a9d7c:
    // 0x2a9d7c: 0x8fa40330
    ctx->pc = 0x2a9d7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 816)));
label_2a9d80:
    // 0x2a9d80: 0xac440010
    ctx->pc = 0x2a9d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
label_2a9d84:
    // 0x2a9d84: 0x3c040037
    ctx->pc = 0x2a9d84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
label_2a9d88:
    // 0x2a9d88: 0x3c030037
    ctx->pc = 0x2a9d88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
label_2a9d8c:
    // 0x2a9d8c: 0x24638248
    ctx->pc = 0x2a9d8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294935112));
label_2a9d90:
    // 0x2a9d90: 0x8fa50330
    ctx->pc = 0x2a9d90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 816)));
label_2a9d94:
    // 0x2a9d94: 0x51080
    ctx->pc = 0x2a9d94u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
label_2a9d98:
    // 0x2a9d98: 0x431021
    ctx->pc = 0x2a9d98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a9d9c:
    // 0x2a9d9c: 0x8c420000
    ctx->pc = 0x2a9d9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a9da0:
    // 0x2a9da0: 0x100002bf
label_2a9da4:
    if (ctx->pc == 0x2A9DA4u) {
        ctx->pc = 0x2A9DA4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294935104), GPR_U32(ctx, 2));
        ctx->pc = 0x2A9DA8u;
        goto label_2a9da8;
    }
    ctx->pc = 0x2A9DA0u;
    {
        const bool branch_taken_0x2a9da0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A9DA4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294935104), GPR_U32(ctx, 2));
        if (branch_taken_0x2a9da0) {
            ctx->pc = 0x2AA8A0u;
            goto label_2aa8a0;
        }
    }
    ctx->pc = 0x2A9DA8u;
label_2a9da8:
    // 0x2a9da8: 0x3c040037
    ctx->pc = 0x2a9da8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
label_2a9dac:
    // 0x2a9dac: 0x3c030037
    ctx->pc = 0x2a9dacu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
label_2a9db0:
    // 0x2a9db0: 0x24638248
    ctx->pc = 0x2a9db0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294935112));
label_2a9db4:
    // 0x2a9db4: 0x8fa50330
    ctx->pc = 0x2a9db4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 816)));
label_2a9db8:
    // 0x2a9db8: 0x51080
    ctx->pc = 0x2a9db8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
label_2a9dbc:
    // 0x2a9dbc: 0x431021
    ctx->pc = 0x2a9dbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a9dc0:
    // 0x2a9dc0: 0x8c420000
    ctx->pc = 0x2a9dc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a9dc4:
    // 0x2a9dc4: 0xac828240
    ctx->pc = 0x2a9dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294935104), GPR_U32(ctx, 2));
label_2a9dc8:
    // 0x2a9dc8: 0x2642003f
    ctx->pc = 0x2a9dc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 63));
label_2a9dcc:
    // 0x2a9dcc: 0x21183
    ctx->pc = 0x2a9dccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_2a9dd0:
    // 0x2a9dd0: 0x50a818
    ctx->pc = 0x2a9dd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a9dd4:
    // 0x2a9dd4: 0x26b5001f
    ctx->pc = 0x2a9dd4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 31));
label_2a9dd8:
    // 0x2a9dd8: 0x15a943
    ctx->pc = 0x2a9dd8u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 21), 5));
label_2a9ddc:
    // 0x2a9ddc: 0x502018
    ctx->pc = 0x2a9ddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a9de0:
    // 0x2a9de0: 0x2484001f
    ctx->pc = 0x2a9de0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31));
label_2a9de4:
    // 0x2a9de4: 0x24020002
    ctx->pc = 0x2a9de4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2a9de8:
    // 0x2a9de8: 0x12820004
label_2a9dec:
    if (ctx->pc == 0x2A9DECu) {
        ctx->pc = 0x2A9DECu;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
        ctx->pc = 0x2A9DF0u;
        goto label_2a9df0;
    }
    ctx->pc = 0x2A9DE8u;
    {
        const bool branch_taken_0x2a9de8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x2A9DECu;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
        if (branch_taken_0x2a9de8) {
            ctx->pc = 0x2A9DFCu;
            goto label_2a9dfc;
        }
    }
    ctx->pc = 0x2A9DF0u;
label_2a9df0:
    // 0x2a9df0: 0x2402000a
    ctx->pc = 0x2a9df0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_2a9df4:
    // 0x2a9df4: 0x16820004
label_2a9df8:
    if (ctx->pc == 0x2A9DF8u) {
        ctx->pc = 0x2A9DF8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x2A9DFCu;
        goto label_2a9dfc;
    }
    ctx->pc = 0x2A9DF4u;
    {
        const bool branch_taken_0x2a9df4 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        ctx->pc = 0x2A9DF8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 50));
        if (branch_taken_0x2a9df4) {
            ctx->pc = 0x2A9E08u;
            goto label_2a9e08;
        }
    }
    ctx->pc = 0x2A9DFCu;
label_2a9dfc:
    // 0x2a9dfc: 0x26b50001
    ctx->pc = 0x2a9dfcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_2a9e00:
    // 0x2a9e00: 0x15a843
    ctx->pc = 0x2a9e00u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 21), 1));
label_2a9e04:
    // 0x2a9e04: 0x24020032
    ctx->pc = 0x2a9e04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 50));
label_2a9e08:
    // 0x2a9e08: 0x12e20003
label_2a9e0c:
    if (ctx->pc == 0x2A9E0Cu) {
        ctx->pc = 0x2A9E0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 58));
        ctx->pc = 0x2A9E10u;
        goto label_2a9e10;
    }
    ctx->pc = 0x2A9E08u;
    {
        const bool branch_taken_0x2a9e08 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 2));
        ctx->pc = 0x2A9E0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 58));
        if (branch_taken_0x2a9e08) {
            ctx->pc = 0x2A9E18u;
            goto label_2a9e18;
        }
    }
    ctx->pc = 0x2A9E10u;
label_2a9e10:
    // 0x2a9e10: 0x56e20004
label_2a9e14:
    if (ctx->pc == 0x2A9E14u) {
        ctx->pc = 0x2A9E14u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->pc = 0x2A9E18u;
        goto label_2a9e18;
    }
    ctx->pc = 0x2A9E10u;
    {
        const bool branch_taken_0x2a9e10 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 2));
        if (branch_taken_0x2a9e10) {
            ctx->pc = 0x2A9E14u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 16)));
            ctx->pc = 0x2A9E24u;
            goto label_2a9e24;
        }
    }
    ctx->pc = 0x2A9E18u;
label_2a9e18:
    // 0x2a9e18: 0x24840001
    ctx->pc = 0x2a9e18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_2a9e1c:
    // 0x2a9e1c: 0x42043
    ctx->pc = 0x2a9e1cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_2a9e20:
    // 0x2a9e20: 0x8ec30010
    ctx->pc = 0x2a9e20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_2a9e24:
    // 0x2a9e24: 0x151040
    ctx->pc = 0x2a9e24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 1));
label_2a9e28:
    // 0x2a9e28: 0x441021
    ctx->pc = 0x2a9e28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a9e2c:
    // 0x2a9e2c: 0xac620044
    ctx->pc = 0x2a9e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
label_2a9e30:
    // 0x2a9e30: 0xc0b8312
label_2a9e34:
    if (ctx->pc == 0x2A9E34u) {
        ctx->pc = 0x2A9E34u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9E38u;
        goto label_2a9e38;
    }
    ctx->pc = 0x2A9E30u;
    SET_GPR_U32(ctx, 31, 0x2A9E38u);
    ctx->pc = 0x2A9E34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E0C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x2e0c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9E38u; }
    }
    if (ctx->pc != 0x2A9E38u) { return; }
    ctx->pc = 0x2A9E38u;
label_2a9e38:
    // 0x2a9e38: 0x8ec30010
    ctx->pc = 0x2a9e38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_2a9e3c:
    // 0x2a9e3c: 0x2c420001
    ctx->pc = 0x2a9e3cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_2a9e40:
    // 0x2a9e40: 0xac620008
    ctx->pc = 0x2a9e40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_2a9e44:
    // 0x2a9e44: 0x8fa20334
    ctx->pc = 0x2a9e44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 820)));
label_2a9e48:
    // 0x2a9e48: 0x10400008
label_2a9e4c:
    if (ctx->pc == 0x2A9E4Cu) {
        ctx->pc = 0x2A9E4Cu;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 30), 16));
        ctx->pc = 0x2A9E50u;
        goto label_2a9e50;
    }
    ctx->pc = 0x2A9E48u;
    {
        const bool branch_taken_0x2a9e48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A9E4Cu;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 30), 16));
        if (branch_taken_0x2a9e48) {
            ctx->pc = 0x2A9E6Cu;
            goto label_2a9e6c;
        }
    }
    ctx->pc = 0x2A9E50u;
label_2a9e50:
    // 0x2a9e50: 0x202d
    ctx->pc = 0x2a9e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9e54:
    // 0x2a9e54: 0x220282d
    ctx->pc = 0x2a9e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a9e58:
    // 0x2a9e58: 0x63403
    ctx->pc = 0x2a9e58u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
label_2a9e5c:
    // 0x2a9e5c: 0xc0b8072
label_2a9e60:
    if (ctx->pc == 0x2A9E60u) {
        ctx->pc = 0x2A9E60u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9E64u;
        goto label_2a9e64;
    }
    ctx->pc = 0x2A9E5Cu;
    SET_GPR_U32(ctx, 31, 0x2A9E64u);
    ctx->pc = 0x2A9E60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E01C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetGraph_0x2e01c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9E64u; }
    }
    if (ctx->pc != 0x2A9E64u) { return; }
    ctx->pc = 0x2A9E64u;
label_2a9e64:
    // 0x2a9e64: 0xc0b80ba
label_2a9e68:
    if (ctx->pc == 0x2A9E68u) {
        ctx->pc = 0x2A9E6Cu;
        goto label_2a9e6c;
    }
    ctx->pc = 0x2A9E64u;
    SET_GPR_U32(ctx, 31, 0x2A9E6Cu);
    ctx->pc = 0x2E02E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetPath_0x2e02e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9E6Cu; }
    }
    if (ctx->pc != 0x2A9E6Cu) { return; }
    ctx->pc = 0x2A9E6Cu;
label_2a9e6c:
    // 0x2a9e6c: 0x123400
    ctx->pc = 0x2a9e6cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 18), 16));
label_2a9e70:
    // 0x2a9e70: 0x103c00
    ctx->pc = 0x2a9e70u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 16), 16));
label_2a9e74:
    // 0x2a9e74: 0x3a0202d
    ctx->pc = 0x2a9e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a9e78:
    // 0x2a9e78: 0x280282d
    ctx->pc = 0x2a9e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a9e7c:
    // 0x2a9e7c: 0x63403
    ctx->pc = 0x2a9e7cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
label_2a9e80:
    // 0x2a9e80: 0x73c03
    ctx->pc = 0x2a9e80u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
label_2a9e84:
    // 0x2a9e84: 0x24080003
    ctx->pc = 0x2a9e84u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 3));
label_2a9e88:
    // 0x2a9e88: 0x2e0482d
    ctx->pc = 0x2a9e88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a9e8c:
    // 0x2a9e8c: 0xc0b850a
label_2a9e90:
    if (ctx->pc == 0x2A9E90u) {
        ctx->pc = 0x2A9E90u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A9E94u;
        goto label_2a9e94;
    }
    ctx->pc = 0x2A9E8Cu;
    SET_GPR_U32(ctx, 31, 0x2A9E94u);
    ctx->pc = 0x2A9E90u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2E1428u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefDBuffDc_0x2e1428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9E94u; }
    }
    if (ctx->pc != 0x2A9E94u) { return; }
    ctx->pc = 0x2A9E94u;
label_2a9e94:
    // 0x2a9e94: 0xc0a9890
label_2a9e98:
    if (ctx->pc == 0x2A9E98u) {
        ctx->pc = 0x2A9E98u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9E9Cu;
        goto label_2a9e9c;
    }
    ctx->pc = 0x2A9E94u;
    SET_GPR_U32(ctx, 31, 0x2A9E9Cu);
    ctx->pc = 0x2A9E98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A6240u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitGSState_0x2a6240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9E9Cu; }
    }
    if (ctx->pc != 0x2A9E9Cu) { return; }
    ctx->pc = 0x2A9E9Cu;
label_2a9e9c:
    // 0x2a9e9c: 0x3c100037
    ctx->pc = 0x2a9e9cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
label_2a9ea0:
    // 0x2a9ea0: 0x24180001
    ctx->pc = 0x2a9ea0u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 1));
label_2a9ea4:
    // 0x2a9ea4: 0x2417f800
    ctx->pc = 0x2a9ea4u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 4294965248));
label_2a9ea8:
    // 0x2a9ea8: 0x17bc38
    ctx->pc = 0x2a9ea8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 16);
label_2a9eac:
    // 0x2a9eac: 0x36f7ffff
    ctx->pc = 0x2a9eacu;
    SET_GPR_U32(ctx, 23, OR32(GPR_U32(ctx, 23), 65535));
label_2a9eb0:
    // 0x2a9eb0: 0x17bc38
    ctx->pc = 0x2a9eb0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 16);
label_2a9eb4:
    // 0x2a9eb4: 0x36f7ffff
    ctx->pc = 0x2a9eb4u;
    SET_GPR_U32(ctx, 23, OR32(GPR_U32(ctx, 23), 65535));
label_2a9eb8:
    // 0x2a9eb8: 0x3c13ffc0
    ctx->pc = 0x2a9eb8u;
    SET_GPR_U32(ctx, 19, ((uint32_t)65472 << 16));
label_2a9ebc:
    // 0x2a9ebc: 0x367307ff
    ctx->pc = 0x2a9ebcu;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 2047));
label_2a9ec0:
    // 0x2a9ec0: 0x139c38
    ctx->pc = 0x2a9ec0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 16);
label_2a9ec4:
    // 0x2a9ec4: 0x3673ffff
    ctx->pc = 0x2a9ec4u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 65535));
label_2a9ec8:
    // 0x2a9ec8: 0x139c38
    ctx->pc = 0x2a9ec8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 16);
label_2a9ecc:
    // 0x2a9ecc: 0x3673ffff
    ctx->pc = 0x2a9eccu;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 65535));
label_2a9ed0:
    // 0x2a9ed0: 0x3c12ff80
    ctx->pc = 0x2a9ed0u;
    SET_GPR_U32(ctx, 18, ((uint32_t)65408 << 16));
label_2a9ed4:
    // 0x2a9ed4: 0x36520fff
    ctx->pc = 0x2a9ed4u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 4095));
label_2a9ed8:
    // 0x2a9ed8: 0x129438
    ctx->pc = 0x2a9ed8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 16);
label_2a9edc:
    // 0x2a9edc: 0x3652ffff
    ctx->pc = 0x2a9edcu;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 65535));
label_2a9ee0:
    // 0x2a9ee0: 0x129438
    ctx->pc = 0x2a9ee0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 16);
label_2a9ee4:
    // 0x2a9ee4: 0x3652ffff
    ctx->pc = 0x2a9ee4u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 65535));
label_2a9ee8:
    // 0x2a9ee8: 0x8ec20010
    ctx->pc = 0x2a9ee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_2a9eec:
    // 0x2a9eec: 0x111a40
    ctx->pc = 0x2a9eecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 9));
label_2a9ef0:
    // 0x2a9ef0: 0x8c42000c
    ctx->pc = 0x2a9ef0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2a9ef4:
    // 0x2a9ef4: 0x625821
    ctx->pc = 0x2a9ef4u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a9ef8:
    // 0x2a9ef8: 0x24020028
    ctx->pc = 0x2a9ef8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
label_2a9efc:
    // 0x2a9efc: 0x2221818
    ctx->pc = 0x2a9efcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a9f00:
    // 0x2a9f00: 0x7d6021
    ctx->pc = 0x2a9f00u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2a9f04:
    // 0x2a9f04: 0x27ad01d0
    ctx->pc = 0x2a9f04u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 29), 464));
label_2a9f08:
    // 0x2a9f08: 0x27a20060
    ctx->pc = 0x2a9f08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 96));
label_2a9f0c:
    // 0x2a9f0c: 0x51680b
    ctx->pc = 0x2a9f0cu;
    if (GPR_U32(ctx, 17) != 0) SET_GPR_U32(ctx, 13, GPR_U32(ctx, 2));
label_2a9f10:
    // 0x2a9f10: 0x27ae0250
    ctx->pc = 0x2a9f10u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 29), 592));
label_2a9f14:
    // 0x2a9f14: 0x27a200e0
    ctx->pc = 0x2a9f14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 224));
label_2a9f18:
    // 0x2a9f18: 0x51700b
    ctx->pc = 0x2a9f18u;
    if (GPR_U32(ctx, 17) != 0) SET_GPR_U32(ctx, 14, GPR_U32(ctx, 2));
label_2a9f1c:
    // 0x2a9f1c: 0x27af02d0
    ctx->pc = 0x2a9f1cu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 29), 720));
label_2a9f20:
    // 0x2a9f20: 0x27a20160
    ctx->pc = 0x2a9f20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 352));
label_2a9f24:
    // 0x2a9f24: 0x51780b
    ctx->pc = 0x2a9f24u;
    if (GPR_U32(ctx, 17) != 0) SET_GPR_U32(ctx, 15, GPR_U32(ctx, 2));
label_2a9f28:
    // 0x2a9f28: 0x69840007
    ctx->pc = 0x2a9f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
label_2a9f2c:
    // 0x2a9f2c: 0x6d840000
    ctx->pc = 0x2a9f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2a9f30:
    // 0x2a9f30: 0xb16401c7
    ctx->pc = 0x2a9f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 455); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9f34:
    // 0x2a9f34: 0xb56401c0
    ctx->pc = 0x2a9f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 448); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9f38:
    // 0x2a9f38: 0x69840007
    ctx->pc = 0x2a9f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
label_2a9f3c:
    // 0x2a9f3c: 0x6d840000
    ctx->pc = 0x2a9f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2a9f40:
    // 0x2a9f40: 0xb16401cf
    ctx->pc = 0x2a9f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 463); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9f44:
    // 0x2a9f44: 0xb56401c8
    ctx->pc = 0x2a9f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 456); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9f48:
    // 0x2a9f48: 0x6984000f
    ctx->pc = 0x2a9f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
label_2a9f4c:
    // 0x2a9f4c: 0x6d840008
    ctx->pc = 0x2a9f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2a9f50:
    // 0x2a9f50: 0xb16401d7
    ctx->pc = 0x2a9f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 471); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9f54:
    // 0x2a9f54: 0xb56401d0
    ctx->pc = 0x2a9f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 464); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9f58:
    // 0x2a9f58: 0x69840027
    ctx->pc = 0x2a9f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
label_2a9f5c:
    // 0x2a9f5c: 0x6d840020
    ctx->pc = 0x2a9f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 32); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2a9f60:
    // 0x2a9f60: 0xb16401df
    ctx->pc = 0x2a9f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 479); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9f64:
    // 0x2a9f64: 0xb56401d8
    ctx->pc = 0x2a9f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 472); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9f68:
    // 0x2a9f68: 0x69840017
    ctx->pc = 0x2a9f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
label_2a9f6c:
    // 0x2a9f6c: 0x6d840010
    ctx->pc = 0x2a9f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2a9f70:
    // 0x2a9f70: 0xb16401f7
    ctx->pc = 0x2a9f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 503); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9f74:
    // 0x2a9f74: 0xb56401f0
    ctx->pc = 0x2a9f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 496); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9f78:
    // 0x2a9f78: 0x6984001f
    ctx->pc = 0x2a9f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
label_2a9f7c:
    // 0x2a9f7c: 0x6d840018
    ctx->pc = 0x2a9f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2a9f80:
    // 0x2a9f80: 0xb16401ff
    ctx->pc = 0x2a9f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 511); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9f84:
    // 0x2a9f84: 0xb56401f8
    ctx->pc = 0x2a9f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 504); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9f88:
    // 0x2a9f88: 0x69840017
    ctx->pc = 0x2a9f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
label_2a9f8c:
    // 0x2a9f8c: 0x6d840010
    ctx->pc = 0x2a9f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2a9f90:
    // 0x2a9f90: 0xb16401e7
    ctx->pc = 0x2a9f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 487); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9f94:
    // 0x2a9f94: 0xb56401e0
    ctx->pc = 0x2a9f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 480); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9f98:
    // 0x2a9f98: 0x6984001f
    ctx->pc = 0x2a9f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
label_2a9f9c:
    // 0x2a9f9c: 0x6d840018
    ctx->pc = 0x2a9f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2a9fa0:
    // 0x2a9fa0: 0xb16401ef
    ctx->pc = 0x2a9fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 495); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9fa4:
    // 0x2a9fa4: 0xb56401e8
    ctx->pc = 0x2a9fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 488); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9fa8:
    // 0x2a9fa8: 0x8e028334
    ctx->pc = 0x2a9fa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294935348)));
label_2a9fac:
    // 0x2a9fac: 0x144000a3
label_2a9fb0:
    if (ctx->pc == 0x2A9FB0u) {
        ctx->pc = 0x2A9FB0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2A9FB4u;
        goto label_2a9fb4;
    }
    ctx->pc = 0x2A9FACu;
    {
        const bool branch_taken_0x2a9fac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A9FB0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x2a9fac) {
            ctx->pc = 0x2AA23Cu;
            goto label_2aa23c;
        }
    }
    ctx->pc = 0x2A9FB4u;
label_2a9fb4:
    // 0x2a9fb4: 0x3c020037
    ctx->pc = 0x2a9fb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2a9fb8:
    // 0x2a9fb8: 0x8c4a8348
    ctx->pc = 0x2a9fb8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 4294935368)));
label_2a9fbc:
    // 0x2a9fbc: 0xdd6201c0
    ctx->pc = 0x2a9fbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 448)));
label_2a9fc0:
    // 0x2a9fc0: 0x581025
    ctx->pc = 0x2a9fc0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
label_2a9fc4:
    // 0x2a9fc4: 0x24040002
    ctx->pc = 0x2a9fc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_2a9fc8:
    // 0x2a9fc8: 0x441025
    ctx->pc = 0x2a9fc8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a9fcc:
    // 0x2a9fcc: 0xfd6201c0
    ctx->pc = 0x2a9fccu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 448), GPR_U64(ctx, 2));
label_2a9fd0:
    // 0x2a9fd0: 0x24020080
    ctx->pc = 0x2a9fd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_2a9fd4:
    // 0x2a9fd4: 0xa16201c1
    ctx->pc = 0x2a9fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 449), (uint8_t)GPR_U32(ctx, 2));
label_2a9fd8:
    // 0x2a9fd8: 0xdd6201c0
    ctx->pc = 0x2a9fd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 448)));
label_2a9fdc:
    // 0x2a9fdc: 0xfd6201c8
    ctx->pc = 0x2a9fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 456), GPR_U64(ctx, 2));
label_2a9fe0:
    // 0x2a9fe0: 0xdd6201e0
    ctx->pc = 0x2a9fe0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 480)));
label_2a9fe4:
    // 0x2a9fe4: 0x571024
    ctx->pc = 0x2a9fe4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_2a9fe8:
    // 0x2a9fe8: 0x34058000
    ctx->pc = 0x2a9fe8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32768));
label_2a9fec:
    // 0x2a9fec: 0x52c78
    ctx->pc = 0x2a9fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
label_2a9ff0:
    // 0x2a9ff0: 0x451025
    ctx->pc = 0x2a9ff0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a9ff4:
    // 0x2a9ff4: 0x531024
    ctx->pc = 0x2a9ff4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2a9ff8:
    // 0x2a9ff8: 0xfd6201e0
    ctx->pc = 0x2a9ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 480), GPR_U64(ctx, 2));
label_2a9ffc:
    // 0x2a9ffc: 0x8d820018
    ctx->pc = 0x2a9ffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 24)));
label_2aa000:
    // 0x2aa000: 0x215c2
    ctx->pc = 0x2aa000u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 23));
label_2aa004:
    // 0x2aa004: 0x3042000f
    ctx->pc = 0x2aa004u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
label_2aa008:
    // 0x2aa008: 0x215f8
    ctx->pc = 0x2aa008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
label_2aa00c:
    // 0x2aa00c: 0xdd6401e8
    ctx->pc = 0x2aa00cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 488)));
label_2aa010:
    // 0x2aa010: 0x3c03f87f
    ctx->pc = 0x2aa010u;
    SET_GPR_U32(ctx, 3, ((uint32_t)63615 << 16));
label_2aa014:
    // 0x2aa014: 0x3463ffff
    ctx->pc = 0x2aa014u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_2aa018:
    // 0x2aa018: 0x832024
    ctx->pc = 0x2aa018u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2aa01c:
    // 0x2aa01c: 0x822025
    ctx->pc = 0x2aa01cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa020:
    // 0x2aa020: 0xfd6401e8
    ctx->pc = 0x2aa020u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 488), GPR_U64(ctx, 4));
label_2aa024:
    // 0x2aa024: 0x8d820018
    ctx->pc = 0x2aa024u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 24)));
label_2aa028:
    // 0x2aa028: 0x216c2
    ctx->pc = 0x2aa028u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 27));
label_2aa02c:
    // 0x2aa02c: 0x30420003
    ctx->pc = 0x2aa02cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
label_2aa030:
    // 0x2aa030: 0x216f8
    ctx->pc = 0x2aa030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
label_2aa034:
    // 0x2aa034: 0x3c05e7ff
    ctx->pc = 0x2aa034u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59391 << 16));
label_2aa038:
    // 0x2aa038: 0x34a5ffff
    ctx->pc = 0x2aa038u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
label_2aa03c:
    // 0x2aa03c: 0x852024
    ctx->pc = 0x2aa03cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2aa040:
    // 0x2aa040: 0x822025
    ctx->pc = 0x2aa040u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa044:
    // 0x2aa044: 0xfd6401e8
    ctx->pc = 0x2aa044u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 488), GPR_U64(ctx, 4));
label_2aa048:
    // 0x2aa048: 0x8d820018
    ctx->pc = 0x2aa048u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 24)));
label_2aa04c:
    // 0x2aa04c: 0x30420fff
    ctx->pc = 0x2aa04cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
label_2aa050:
    // 0x2aa050: 0x3c030037
    ctx->pc = 0x2aa050u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
label_2aa054:
    // 0x2aa054: 0x8c68833c
    ctx->pc = 0x2aa054u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 4294935356)));
label_2aa058:
    // 0x2aa058: 0x481021
    ctx->pc = 0x2aa058u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2aa05c:
    // 0x2aa05c: 0x3c030037
    ctx->pc = 0x2aa05cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
label_2aa060:
    // 0x2aa060: 0x8c698344
    ctx->pc = 0x2aa060u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 4294935364)));
label_2aa064:
    // 0x2aa064: 0x491021
    ctx->pc = 0x2aa064u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2aa068:
    // 0x2aa068: 0x30420fff
    ctx->pc = 0x2aa068u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
label_2aa06c:
    // 0x2aa06c: 0x2403f000
    ctx->pc = 0x2aa06cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294963200));
label_2aa070:
    // 0x2aa070: 0x832024
    ctx->pc = 0x2aa070u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2aa074:
    // 0x2aa074: 0x822025
    ctx->pc = 0x2aa074u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa078:
    // 0x2aa078: 0xfd6401e8
    ctx->pc = 0x2aa078u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 488), GPR_U64(ctx, 4));
label_2aa07c:
    // 0x2aa07c: 0x8d820018
    ctx->pc = 0x2aa07cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 24)));
label_2aa080:
    // 0x2aa080: 0x21302
    ctx->pc = 0x2aa080u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 12));
label_2aa084:
    // 0x2aa084: 0x304207ff
    ctx->pc = 0x2aa084u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
label_2aa088:
    // 0x2aa088: 0x3c030037
    ctx->pc = 0x2aa088u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
label_2aa08c:
    // 0x2aa08c: 0x8c678340
    ctx->pc = 0x2aa08cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 4294935360)));
label_2aa090:
    // 0x2aa090: 0x471021
    ctx->pc = 0x2aa090u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2aa094:
    // 0x2aa094: 0x4a1021
    ctx->pc = 0x2aa094u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_2aa098:
    // 0x2aa098: 0x304207ff
    ctx->pc = 0x2aa098u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
label_2aa09c:
    // 0x2aa09c: 0x21338
    ctx->pc = 0x2aa09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
label_2aa0a0:
    // 0x2aa0a0: 0x3c05ff80
    ctx->pc = 0x2aa0a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65408 << 16));
label_2aa0a4:
    // 0x2aa0a4: 0x34a50fff
    ctx->pc = 0x2aa0a4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 4095));
label_2aa0a8:
    // 0x2aa0a8: 0x852024
    ctx->pc = 0x2aa0a8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2aa0ac:
    // 0x2aa0ac: 0x822025
    ctx->pc = 0x2aa0acu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa0b0:
    // 0x2aa0b0: 0xfd6401e8
    ctx->pc = 0x2aa0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 488), GPR_U64(ctx, 4));
label_2aa0b4:
    // 0x2aa0b4: 0x8d82001c
    ctx->pc = 0x2aa0b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 28)));
label_2aa0b8:
    // 0x2aa0b8: 0x30420fff
    ctx->pc = 0x2aa0b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
label_2aa0bc:
    // 0x2aa0bc: 0x83040
    ctx->pc = 0x2aa0bcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 8), 1));
label_2aa0c0:
    // 0x2aa0c0: 0x24c60004
    ctx->pc = 0x2aa0c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
label_2aa0c4:
    // 0x2aa0c4: 0x461023
    ctx->pc = 0x2aa0c4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2aa0c8:
    // 0x2aa0c8: 0x30420fff
    ctx->pc = 0x2aa0c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
label_2aa0cc:
    // 0x2aa0cc: 0x2103c
    ctx->pc = 0x2aa0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2aa0d0:
    // 0x2aa0d0: 0x2403f000
    ctx->pc = 0x2aa0d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294963200));
label_2aa0d4:
    // 0x2aa0d4: 0x31c38
    ctx->pc = 0x2aa0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2aa0d8:
    // 0x2aa0d8: 0x3463ffff
    ctx->pc = 0x2aa0d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_2aa0dc:
    // 0x2aa0dc: 0x31c38
    ctx->pc = 0x2aa0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2aa0e0:
    // 0x2aa0e0: 0x3463ffff
    ctx->pc = 0x2aa0e0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_2aa0e4:
    // 0x2aa0e4: 0x832024
    ctx->pc = 0x2aa0e4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2aa0e8:
    // 0x2aa0e8: 0x822025
    ctx->pc = 0x2aa0e8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa0ec:
    // 0x2aa0ec: 0xfd6401e8
    ctx->pc = 0x2aa0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 488), GPR_U64(ctx, 4));
label_2aa0f0:
    // 0x2aa0f0: 0x8d82001c
    ctx->pc = 0x2aa0f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 28)));
label_2aa0f4:
    // 0x2aa0f4: 0x21302
    ctx->pc = 0x2aa0f4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 12));
label_2aa0f8:
    // 0x2aa0f8: 0x304207ff
    ctx->pc = 0x2aa0f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
label_2aa0fc:
    // 0x2aa0fc: 0x72840
    ctx->pc = 0x2aa0fcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 7), 1));
label_2aa100:
    // 0x2aa100: 0x451023
    ctx->pc = 0x2aa100u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2aa104:
    // 0x2aa104: 0x304207ff
    ctx->pc = 0x2aa104u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
label_2aa108:
    // 0x2aa108: 0x2133c
    ctx->pc = 0x2aa108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
label_2aa10c:
    // 0x2aa10c: 0x922024
    ctx->pc = 0x2aa10cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_2aa110:
    // 0x2aa110: 0x822025
    ctx->pc = 0x2aa110u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa114:
    // 0x2aa114: 0xfd6401e8
    ctx->pc = 0x2aa114u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 488), GPR_U64(ctx, 4));
label_2aa118:
    // 0x2aa118: 0xdd6201f0
    ctx->pc = 0x2aa118u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 496)));
label_2aa11c:
    // 0x2aa11c: 0x571024
    ctx->pc = 0x2aa11cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_2aa120:
    // 0x2aa120: 0x34048000
    ctx->pc = 0x2aa120u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32768));
label_2aa124:
    // 0x2aa124: 0x42478
    ctx->pc = 0x2aa124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
label_2aa128:
    // 0x2aa128: 0x441025
    ctx->pc = 0x2aa128u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aa12c:
    // 0x2aa12c: 0x531024
    ctx->pc = 0x2aa12cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2aa130:
    // 0x2aa130: 0x34038000
    ctx->pc = 0x2aa130u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
label_2aa134:
    // 0x2aa134: 0x31f38
    ctx->pc = 0x2aa134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
label_2aa138:
    // 0x2aa138: 0x431025
    ctx->pc = 0x2aa138u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa13c:
    // 0x2aa13c: 0xfd6201f0
    ctx->pc = 0x2aa13cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 496), GPR_U64(ctx, 2));
label_2aa140:
    // 0x2aa140: 0x8d820018
    ctx->pc = 0x2aa140u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 24)));
label_2aa144:
    // 0x2aa144: 0x215c2
    ctx->pc = 0x2aa144u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 23));
label_2aa148:
    // 0x2aa148: 0x3042000f
    ctx->pc = 0x2aa148u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
label_2aa14c:
    // 0x2aa14c: 0x215f8
    ctx->pc = 0x2aa14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
label_2aa150:
    // 0x2aa150: 0xdd6401f8
    ctx->pc = 0x2aa150u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 504)));
label_2aa154:
    // 0x2aa154: 0x3c03f87f
    ctx->pc = 0x2aa154u;
    SET_GPR_U32(ctx, 3, ((uint32_t)63615 << 16));
label_2aa158:
    // 0x2aa158: 0x3463ffff
    ctx->pc = 0x2aa158u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_2aa15c:
    // 0x2aa15c: 0x832024
    ctx->pc = 0x2aa15cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2aa160:
    // 0x2aa160: 0x822025
    ctx->pc = 0x2aa160u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa164:
    // 0x2aa164: 0xfd6401f8
    ctx->pc = 0x2aa164u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 504), GPR_U64(ctx, 4));
label_2aa168:
    // 0x2aa168: 0x8d820018
    ctx->pc = 0x2aa168u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 24)));
label_2aa16c:
    // 0x2aa16c: 0x216c2
    ctx->pc = 0x2aa16cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 27));
label_2aa170:
    // 0x2aa170: 0x30420003
    ctx->pc = 0x2aa170u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
label_2aa174:
    // 0x2aa174: 0x216f8
    ctx->pc = 0x2aa174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
label_2aa178:
    // 0x2aa178: 0x3c03e7ff
    ctx->pc = 0x2aa178u;
    SET_GPR_U32(ctx, 3, ((uint32_t)59391 << 16));
label_2aa17c:
    // 0x2aa17c: 0x3463ffff
    ctx->pc = 0x2aa17cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_2aa180:
    // 0x2aa180: 0x832024
    ctx->pc = 0x2aa180u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2aa184:
    // 0x2aa184: 0x822025
    ctx->pc = 0x2aa184u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa188:
    // 0x2aa188: 0xfd6401f8
    ctx->pc = 0x2aa188u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 504), GPR_U64(ctx, 4));
label_2aa18c:
    // 0x2aa18c: 0x8d830018
    ctx->pc = 0x2aa18cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 12), 24)));
label_2aa190:
    // 0x2aa190: 0x30620fff
    ctx->pc = 0x2aa190u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4095));
label_2aa194:
    // 0x2aa194: 0x24420001
    ctx->pc = 0x2aa194u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2aa198:
    // 0x2aa198: 0x31dc2
    ctx->pc = 0x2aa198u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 23));
label_2aa19c:
    // 0x2aa19c: 0x3063000f
    ctx->pc = 0x2aa19cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
label_2aa1a0:
    // 0x2aa1a0: 0x431021
    ctx->pc = 0x2aa1a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa1a4:
    // 0x2aa1a4: 0x481021
    ctx->pc = 0x2aa1a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2aa1a8:
    // 0x2aa1a8: 0x491021
    ctx->pc = 0x2aa1a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2aa1ac:
    // 0x2aa1ac: 0x30420fff
    ctx->pc = 0x2aa1acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
label_2aa1b0:
    // 0x2aa1b0: 0x2403f000
    ctx->pc = 0x2aa1b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294963200));
label_2aa1b4:
    // 0x2aa1b4: 0x832024
    ctx->pc = 0x2aa1b4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2aa1b8:
    // 0x2aa1b8: 0x822025
    ctx->pc = 0x2aa1b8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa1bc:
    // 0x2aa1bc: 0xfd6401f8
    ctx->pc = 0x2aa1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 504), GPR_U64(ctx, 4));
label_2aa1c0:
    // 0x2aa1c0: 0x8d820018
    ctx->pc = 0x2aa1c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 24)));
label_2aa1c4:
    // 0x2aa1c4: 0x21302
    ctx->pc = 0x2aa1c4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 12));
label_2aa1c8:
    // 0x2aa1c8: 0x304207ff
    ctx->pc = 0x2aa1c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
label_2aa1cc:
    // 0x2aa1cc: 0x471021
    ctx->pc = 0x2aa1ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2aa1d0:
    // 0x2aa1d0: 0x4a1021
    ctx->pc = 0x2aa1d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_2aa1d4:
    // 0x2aa1d4: 0x304207ff
    ctx->pc = 0x2aa1d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
label_2aa1d8:
    // 0x2aa1d8: 0x21338
    ctx->pc = 0x2aa1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
label_2aa1dc:
    // 0x2aa1dc: 0x3c03ff80
    ctx->pc = 0x2aa1dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65408 << 16));
label_2aa1e0:
    // 0x2aa1e0: 0x34630fff
    ctx->pc = 0x2aa1e0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4095));
label_2aa1e4:
    // 0x2aa1e4: 0x832024
    ctx->pc = 0x2aa1e4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2aa1e8:
    // 0x2aa1e8: 0x822025
    ctx->pc = 0x2aa1e8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa1ec:
    // 0x2aa1ec: 0xfd6401f8
    ctx->pc = 0x2aa1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 504), GPR_U64(ctx, 4));
label_2aa1f0:
    // 0x2aa1f0: 0x8d82001c
    ctx->pc = 0x2aa1f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 28)));
label_2aa1f4:
    // 0x2aa1f4: 0x30420fff
    ctx->pc = 0x2aa1f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
label_2aa1f8:
    // 0x2aa1f8: 0x461023
    ctx->pc = 0x2aa1f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2aa1fc:
    // 0x2aa1fc: 0x30420fff
    ctx->pc = 0x2aa1fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
label_2aa200:
    // 0x2aa200: 0x2103c
    ctx->pc = 0x2aa200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2aa204:
    // 0x2aa204: 0x2403f000
    ctx->pc = 0x2aa204u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294963200));
label_2aa208:
    // 0x2aa208: 0x31c38
    ctx->pc = 0x2aa208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2aa20c:
    // 0x2aa20c: 0x3463ffff
    ctx->pc = 0x2aa20cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_2aa210:
    // 0x2aa210: 0x31c38
    ctx->pc = 0x2aa210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2aa214:
    // 0x2aa214: 0x3463ffff
    ctx->pc = 0x2aa214u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_2aa218:
    // 0x2aa218: 0x832024
    ctx->pc = 0x2aa218u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2aa21c:
    // 0x2aa21c: 0x822025
    ctx->pc = 0x2aa21cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa220:
    // 0x2aa220: 0xfd6401f8
    ctx->pc = 0x2aa220u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 504), GPR_U64(ctx, 4));
label_2aa224:
    // 0x2aa224: 0x8d82001c
    ctx->pc = 0x2aa224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 28)));
label_2aa228:
    // 0x2aa228: 0x21302
    ctx->pc = 0x2aa228u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 12));
label_2aa22c:
    // 0x2aa22c: 0x304207ff
    ctx->pc = 0x2aa22cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
label_2aa230:
    // 0x2aa230: 0x24a50001
    ctx->pc = 0x2aa230u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_2aa234:
    // 0x2aa234: 0x100000e6
label_2aa238:
    if (ctx->pc == 0x2AA238u) {
        ctx->pc = 0x2AA238u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->pc = 0x2AA23Cu;
        goto label_2aa23c;
    }
    ctx->pc = 0x2AA234u;
    {
        const bool branch_taken_0x2aa234 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AA238u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        if (branch_taken_0x2aa234) {
            ctx->pc = 0x2AA5D0u;
            goto label_2aa5d0;
        }
    }
    ctx->pc = 0x2AA23Cu;
label_2aa23c:
    // 0x2aa23c: 0x24050080
    ctx->pc = 0x2aa23cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 128));
label_2aa240:
    // 0x2aa240: 0x24060001
    ctx->pc = 0x2aa240u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_2aa244:
    // 0x2aa244: 0x402d
    ctx->pc = 0x2aa244u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa248:
    // 0x2aa248: 0xf02d
    ctx->pc = 0x2aa248u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa24c:
    // 0x2aa24c: 0x502d
    ctx->pc = 0x2aa24cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa250:
    // 0x2aa250: 0x382d
    ctx->pc = 0x2aa250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa254:
    // 0x2aa254: 0xa02d
    ctx->pc = 0x2aa254u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa258:
    // 0x2aa258: 0x482d
    ctx->pc = 0x2aa258u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa25c:
    // 0x2aa25c: 0x8e038334
    ctx->pc = 0x2aa25cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294935348)));
label_2aa260:
    // 0x2aa260: 0x28620006
    ctx->pc = 0x2aa260u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 6));
label_2aa264:
    // 0x2aa264: 0x1040000c
label_2aa268:
    if (ctx->pc == 0x2AA268u) {
        ctx->pc = 0x2AA268u;
        SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AA26Cu;
        goto label_2aa26c;
    }
    ctx->pc = 0x2AA264u;
    {
        const bool branch_taken_0x2aa264 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AA268u;
        SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2aa264) {
            ctx->pc = 0x2AA298u;
            goto label_2aa298;
        }
    }
    ctx->pc = 0x2AA26Cu;
label_2aa26c:
    // 0x2aa26c: 0x302d
    ctx->pc = 0x2aa26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa270:
    // 0x2aa270: 0x2464ffff
    ctx->pc = 0x2aa270u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967295));
label_2aa274:
    // 0x2aa274: 0x42180
    ctx->pc = 0x2aa274u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 6));
label_2aa278:
    // 0x2aa278: 0x24020100
    ctx->pc = 0x2aa278u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
label_2aa27c:
    // 0x2aa27c: 0x442823
    ctx->pc = 0x2aa27cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aa280:
    // 0x2aa280: 0x28820100
    ctx->pc = 0x2aa280u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 256));
label_2aa284:
    // 0x2aa284: 0x240300ff
    ctx->pc = 0x2aa284u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
label_2aa288:
    // 0x2aa288: 0x62200a
    ctx->pc = 0x2aa288u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
label_2aa28c:
    // 0x2aa28c: 0x28a20100
    ctx->pc = 0x2aa28cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 256));
label_2aa290:
    // 0x2aa290: 0x10000019
label_2aa294:
    if (ctx->pc == 0x2AA294u) {
        ctx->pc = 0x2AA294u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        ctx->pc = 0x2AA298u;
        goto label_2aa298;
    }
    ctx->pc = 0x2AA290u;
    {
        const bool branch_taken_0x2aa290 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AA294u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        if (branch_taken_0x2aa290) {
            ctx->pc = 0x2AA2F8u;
            goto label_2aa2f8;
        }
    }
    ctx->pc = 0x2AA298u;
label_2aa298:
    // 0x2aa298: 0x24020006
    ctx->pc = 0x2aa298u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_2aa29c:
    // 0x2aa29c: 0x14620004
label_2aa2a0:
    if (ctx->pc == 0x2AA2A0u) {
        ctx->pc = 0x2AA2A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2AA2A4u;
        goto label_2aa2a4;
    }
    ctx->pc = 0x2AA29Cu;
    {
        const bool branch_taken_0x2aa29c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2AA2A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x2aa29c) {
            ctx->pc = 0x2AA2B0u;
            goto label_2aa2b0;
        }
    }
    ctx->pc = 0x2AA2A4u;
label_2aa2a4:
    // 0x2aa2a4: 0x302d
    ctx->pc = 0x2aa2a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa2a8:
    // 0x2aa2a8: 0x10000013
label_2aa2ac:
    if (ctx->pc == 0x2AA2ACu) {
        ctx->pc = 0x2AA2ACu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AA2B0u;
        goto label_2aa2b0;
    }
    ctx->pc = 0x2AA2A8u;
    {
        const bool branch_taken_0x2aa2a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AA2ACu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2aa2a8) {
            ctx->pc = 0x2AA2F8u;
            goto label_2aa2f8;
        }
    }
    ctx->pc = 0x2AA2B0u;
label_2aa2b0:
    // 0x2aa2b0: 0x14620006
label_2aa2b4:
    if (ctx->pc == 0x2AA2B4u) {
        ctx->pc = 0x2AA2B4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294935348)));
        ctx->pc = 0x2AA2B8u;
        goto label_2aa2b8;
    }
    ctx->pc = 0x2AA2B0u;
    {
        const bool branch_taken_0x2aa2b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2AA2B4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294935348)));
        if (branch_taken_0x2aa2b0) {
            ctx->pc = 0x2AA2CCu;
            goto label_2aa2cc;
        }
    }
    ctx->pc = 0x2AA2B8u;
label_2aa2b8:
    // 0x2aa2b8: 0x302d
    ctx->pc = 0x2aa2b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa2bc:
    // 0x2aa2bc: 0x402d
    ctx->pc = 0x2aa2bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa2c0:
    // 0x2aa2c0: 0xf02d
    ctx->pc = 0x2aa2c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa2c4:
    // 0x2aa2c4: 0x1000000d
label_2aa2c8:
    if (ctx->pc == 0x2AA2C8u) {
        ctx->pc = 0x2AA2C8u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AA2CCu;
        goto label_2aa2cc;
    }
    ctx->pc = 0x2AA2C4u;
    {
        const bool branch_taken_0x2aa2c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AA2C8u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2aa2c4) {
            ctx->pc = 0x2AA2FCu;
            goto label_2aa2fc;
        }
    }
    ctx->pc = 0x2AA2CCu;
label_2aa2cc:
    // 0x2aa2cc: 0x2402000a
    ctx->pc = 0x2aa2ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_2aa2d0:
    // 0x2aa2d0: 0x14620004
label_2aa2d4:
    if (ctx->pc == 0x2AA2D4u) {
        ctx->pc = 0x2AA2D4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294935348)));
        ctx->pc = 0x2AA2D8u;
        goto label_2aa2d8;
    }
    ctx->pc = 0x2AA2D0u;
    {
        const bool branch_taken_0x2aa2d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2AA2D4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294935348)));
        if (branch_taken_0x2aa2d0) {
            ctx->pc = 0x2AA2E4u;
            goto label_2aa2e4;
        }
    }
    ctx->pc = 0x2AA2D8u;
label_2aa2d8:
    // 0x2aa2d8: 0x24040040
    ctx->pc = 0x2aa2d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
label_2aa2dc:
    // 0x2aa2dc: 0x10000007
label_2aa2e0:
    if (ctx->pc == 0x2AA2E0u) {
        ctx->pc = 0x2AA2E0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 192));
        ctx->pc = 0x2AA2E4u;
        goto label_2aa2e4;
    }
    ctx->pc = 0x2AA2DCu;
    {
        const bool branch_taken_0x2aa2dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AA2E0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 192));
        if (branch_taken_0x2aa2dc) {
            ctx->pc = 0x2AA2FCu;
            goto label_2aa2fc;
        }
    }
    ctx->pc = 0x2AA2E4u;
label_2aa2e4:
    // 0x2aa2e4: 0x2402000b
    ctx->pc = 0x2aa2e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
label_2aa2e8:
    // 0x2aa2e8: 0x14620004
label_2aa2ec:
    if (ctx->pc == 0x2AA2ECu) {
        ctx->pc = 0x2AA2ECu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294935348)));
        ctx->pc = 0x2AA2F0u;
        goto label_2aa2f0;
    }
    ctx->pc = 0x2AA2E8u;
    {
        const bool branch_taken_0x2aa2e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2AA2ECu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294935348)));
        if (branch_taken_0x2aa2e8) {
            ctx->pc = 0x2AA2FCu;
            goto label_2aa2fc;
        }
    }
    ctx->pc = 0x2AA2F0u;
label_2aa2f0:
    // 0x2aa2f0: 0x240400c0
    ctx->pc = 0x2aa2f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 192));
label_2aa2f4:
    // 0x2aa2f4: 0x24050040
    ctx->pc = 0x2aa2f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
label_2aa2f8:
    // 0x2aa2f8: 0x8e038334
    ctx->pc = 0x2aa2f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294935348)));
label_2aa2fc:
    // 0x2aa2fc: 0x24020008
    ctx->pc = 0x2aa2fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_2aa300:
    // 0x2aa300: 0x1462000d
label_2aa304:
    if (ctx->pc == 0x2AA304u) {
        ctx->pc = 0x2AA304u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294935348)));
        ctx->pc = 0x2AA308u;
        goto label_2aa308;
    }
    ctx->pc = 0x2AA300u;
    {
        const bool branch_taken_0x2aa300 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2AA304u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294935348)));
        if (branch_taken_0x2aa300) {
            ctx->pc = 0x2AA338u;
            goto label_2aa338;
        }
    }
    ctx->pc = 0x2AA308u;
label_2aa308:
    // 0x2aa308: 0xdd6201c0
    ctx->pc = 0x2aa308u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 448)));
label_2aa30c:
    // 0x2aa30c: 0x581025
    ctx->pc = 0x2aa30cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
label_2aa310:
    // 0x2aa310: 0x24040002
    ctx->pc = 0x2aa310u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_2aa314:
    // 0x2aa314: 0x441025
    ctx->pc = 0x2aa314u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aa318:
    // 0x2aa318: 0x24030020
    ctx->pc = 0x2aa318u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
label_2aa31c:
    // 0x2aa31c: 0x431025
    ctx->pc = 0x2aa31cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa320:
    // 0x2aa320: 0xfd6201c0
    ctx->pc = 0x2aa320u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 448), GPR_U64(ctx, 2));
label_2aa324:
    // 0x2aa324: 0x24020080
    ctx->pc = 0x2aa324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_2aa328:
    // 0x2aa328: 0xa16201c1
    ctx->pc = 0x2aa328u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 449), (uint8_t)GPR_U32(ctx, 2));
label_2aa32c:
    // 0x2aa32c: 0xdd6201c0
    ctx->pc = 0x2aa32cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 448)));
label_2aa330:
    // 0x2aa330: 0x1000000b
label_2aa334:
    if (ctx->pc == 0x2AA334u) {
        ctx->pc = 0x2AA334u;
        WRITE64(ADD32(GPR_U32(ctx, 11), 456), GPR_U64(ctx, 2));
        ctx->pc = 0x2AA338u;
        goto label_2aa338;
    }
    ctx->pc = 0x2AA330u;
    {
        const bool branch_taken_0x2aa330 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AA334u;
        WRITE64(ADD32(GPR_U32(ctx, 11), 456), GPR_U64(ctx, 2));
        if (branch_taken_0x2aa330) {
            ctx->pc = 0x2AA360u;
            goto label_2aa360;
        }
    }
    ctx->pc = 0x2AA338u;
label_2aa338:
    // 0x2aa338: 0x24020009
    ctx->pc = 0x2aa338u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
label_2aa33c:
    // 0x2aa33c: 0x54620013
label_2aa340:
    if (ctx->pc == 0x2AA340u) {
        ctx->pc = 0x2AA340u;
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 448)));
        ctx->pc = 0x2AA344u;
        goto label_2aa344;
    }
    ctx->pc = 0x2AA33Cu;
    {
        const bool branch_taken_0x2aa33c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2aa33c) {
            ctx->pc = 0x2AA340u;
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 448)));
            ctx->pc = 0x2AA38Cu;
            goto label_2aa38c;
        }
    }
    ctx->pc = 0x2AA344u;
label_2aa344:
    // 0x2aa344: 0xdd6201f0
    ctx->pc = 0x2aa344u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 496)));
label_2aa348:
    // 0x2aa348: 0x571024
    ctx->pc = 0x2aa348u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_2aa34c:
    // 0x2aa34c: 0x531024
    ctx->pc = 0x2aa34cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2aa350:
    // 0x2aa350: 0x34038000
    ctx->pc = 0x2aa350u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
label_2aa354:
    // 0x2aa354: 0x31f38
    ctx->pc = 0x2aa354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
label_2aa358:
    // 0x2aa358: 0x431025
    ctx->pc = 0x2aa358u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa35c:
    // 0x2aa35c: 0xfd6201f0
    ctx->pc = 0x2aa35cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 496), GPR_U64(ctx, 2));
label_2aa360:
    // 0x2aa360: 0x8d82001c
    ctx->pc = 0x2aa360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 28)));
label_2aa364:
    // 0x2aa364: 0x21302
    ctx->pc = 0x2aa364u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 12));
label_2aa368:
    // 0x2aa368: 0x304207ff
    ctx->pc = 0x2aa368u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
label_2aa36c:
    // 0x2aa36c: 0x2442ffff
    ctx->pc = 0x2aa36cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2aa370:
    // 0x2aa370: 0x304207ff
    ctx->pc = 0x2aa370u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
label_2aa374:
    // 0x2aa374: 0x2133c
    ctx->pc = 0x2aa374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
label_2aa378:
    // 0x2aa378: 0xdd6301f8
    ctx->pc = 0x2aa378u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 504)));
label_2aa37c:
    // 0x2aa37c: 0x721824
    ctx->pc = 0x2aa37cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2aa380:
    // 0x2aa380: 0x621825
    ctx->pc = 0x2aa380u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2aa384:
    // 0x2aa384: 0x10000097
label_2aa388:
    if (ctx->pc == 0x2AA388u) {
        ctx->pc = 0x2AA388u;
        WRITE64(ADD32(GPR_U32(ctx, 11), 504), GPR_U64(ctx, 3));
        ctx->pc = 0x2AA38Cu;
        goto label_2aa38c;
    }
    ctx->pc = 0x2AA384u;
    {
        const bool branch_taken_0x2aa384 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AA388u;
        WRITE64(ADD32(GPR_U32(ctx, 11), 504), GPR_U64(ctx, 3));
        if (branch_taken_0x2aa384) {
            ctx->pc = 0x2AA5E4u;
            goto label_2aa5e4;
        }
    }
    ctx->pc = 0x2AA38Cu;
label_2aa38c:
    // 0x2aa38c: 0x581025
    ctx->pc = 0x2aa38cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
label_2aa390:
    // 0x2aa390: 0x24030002
    ctx->pc = 0x2aa390u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_2aa394:
    // 0x2aa394: 0x431025
    ctx->pc = 0x2aa394u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa398:
    // 0x2aa398: 0xfd6201c0
    ctx->pc = 0x2aa398u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 448), GPR_U64(ctx, 2));
label_2aa39c:
    // 0x2aa39c: 0xa16401c1
    ctx->pc = 0x2aa39cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 449), (uint8_t)GPR_U32(ctx, 4));
label_2aa3a0:
    // 0x2aa3a0: 0xdd6201c8
    ctx->pc = 0x2aa3a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 456)));
label_2aa3a4:
    // 0x2aa3a4: 0x581025
    ctx->pc = 0x2aa3a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
label_2aa3a8:
    // 0x2aa3a8: 0x431025
    ctx->pc = 0x2aa3a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa3ac:
    // 0x2aa3ac: 0xfd6201c8
    ctx->pc = 0x2aa3acu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 456), GPR_U64(ctx, 2));
label_2aa3b0:
    // 0x2aa3b0: 0xa16501c9
    ctx->pc = 0x2aa3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 457), (uint8_t)GPR_U32(ctx, 5));
label_2aa3b4:
    // 0x2aa3b4: 0xdd6201e0
    ctx->pc = 0x2aa3b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 480)));
label_2aa3b8:
    // 0x2aa3b8: 0x571024
    ctx->pc = 0x2aa3b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_2aa3bc:
    // 0x2aa3bc: 0x531024
    ctx->pc = 0x2aa3bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2aa3c0:
    // 0x2aa3c0: 0xfd6201e0
    ctx->pc = 0x2aa3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 480), GPR_U64(ctx, 2));
label_2aa3c4:
    // 0x2aa3c4: 0x8d820018
    ctx->pc = 0x2aa3c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 24)));
label_2aa3c8:
    // 0x2aa3c8: 0x215c2
    ctx->pc = 0x2aa3c8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 23));
label_2aa3cc:
    // 0x2aa3cc: 0x3042000f
    ctx->pc = 0x2aa3ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
label_2aa3d0:
    // 0x2aa3d0: 0x215f8
    ctx->pc = 0x2aa3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
label_2aa3d4:
    // 0x2aa3d4: 0xdd6401e8
    ctx->pc = 0x2aa3d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 488)));
label_2aa3d8:
    // 0x2aa3d8: 0x3c05f87f
    ctx->pc = 0x2aa3d8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)63615 << 16));
label_2aa3dc:
    // 0x2aa3dc: 0x34a5ffff
    ctx->pc = 0x2aa3dcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
label_2aa3e0:
    // 0x2aa3e0: 0x852024
    ctx->pc = 0x2aa3e0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2aa3e4:
    // 0x2aa3e4: 0x822025
    ctx->pc = 0x2aa3e4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa3e8:
    // 0x2aa3e8: 0xfd6401e8
    ctx->pc = 0x2aa3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 488), GPR_U64(ctx, 4));
label_2aa3ec:
    // 0x2aa3ec: 0x8d820018
    ctx->pc = 0x2aa3ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 24)));
label_2aa3f0:
    // 0x2aa3f0: 0x216c2
    ctx->pc = 0x2aa3f0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 27));
label_2aa3f4:
    // 0x2aa3f4: 0x30420003
    ctx->pc = 0x2aa3f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
label_2aa3f8:
    // 0x2aa3f8: 0x216f8
    ctx->pc = 0x2aa3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
label_2aa3fc:
    // 0x2aa3fc: 0x3c03e7ff
    ctx->pc = 0x2aa3fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)59391 << 16));
label_2aa400:
    // 0x2aa400: 0x3463ffff
    ctx->pc = 0x2aa400u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_2aa404:
    // 0x2aa404: 0x832024
    ctx->pc = 0x2aa404u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2aa408:
    // 0x2aa408: 0x822025
    ctx->pc = 0x2aa408u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa40c:
    // 0x2aa40c: 0xfd6401e8
    ctx->pc = 0x2aa40cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 488), GPR_U64(ctx, 4));
label_2aa410:
    // 0x2aa410: 0x8d820018
    ctx->pc = 0x2aa410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 24)));
label_2aa414:
    // 0x2aa414: 0x30430fff
    ctx->pc = 0x2aa414u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 4095));
label_2aa418:
    // 0x2aa418: 0x215c2
    ctx->pc = 0x2aa418u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 23));
label_2aa41c:
    // 0x2aa41c: 0x3042000f
    ctx->pc = 0x2aa41cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
label_2aa420:
    // 0x2aa420: 0x24420001
    ctx->pc = 0x2aa420u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2aa424:
    // 0x2aa424: 0xc21018
    ctx->pc = 0x2aa424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2aa428:
    // 0x2aa428: 0x621821
    ctx->pc = 0x2aa428u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2aa42c:
    // 0x2aa42c: 0x30630fff
    ctx->pc = 0x2aa42cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4095));
label_2aa430:
    // 0x2aa430: 0x2405f000
    ctx->pc = 0x2aa430u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294963200));
label_2aa434:
    // 0x2aa434: 0x852024
    ctx->pc = 0x2aa434u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2aa438:
    // 0x2aa438: 0x832025
    ctx->pc = 0x2aa438u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2aa43c:
    // 0x2aa43c: 0xfd6401e8
    ctx->pc = 0x2aa43cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 488), GPR_U64(ctx, 4));
label_2aa440:
    // 0x2aa440: 0x8d820018
    ctx->pc = 0x2aa440u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 24)));
label_2aa444:
    // 0x2aa444: 0x21b02
    ctx->pc = 0x2aa444u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 12));
label_2aa448:
    // 0x2aa448: 0x306307ff
    ctx->pc = 0x2aa448u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
label_2aa44c:
    // 0x2aa44c: 0x216c2
    ctx->pc = 0x2aa44cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 27));
label_2aa450:
    // 0x2aa450: 0x30420003
    ctx->pc = 0x2aa450u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
label_2aa454:
    // 0x2aa454: 0x24420001
    ctx->pc = 0x2aa454u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2aa458:
    // 0x2aa458: 0x3c21018
    ctx->pc = 0x2aa458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2aa45c:
    // 0x2aa45c: 0x621821
    ctx->pc = 0x2aa45cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2aa460:
    // 0x2aa460: 0x306307ff
    ctx->pc = 0x2aa460u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
label_2aa464:
    // 0x2aa464: 0x31b38
    ctx->pc = 0x2aa464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 12);
label_2aa468:
    // 0x2aa468: 0x3c02ff80
    ctx->pc = 0x2aa468u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65408 << 16));
label_2aa46c:
    // 0x2aa46c: 0x34420fff
    ctx->pc = 0x2aa46cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4095));
label_2aa470:
    // 0x2aa470: 0x822024
    ctx->pc = 0x2aa470u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa474:
    // 0x2aa474: 0x832025
    ctx->pc = 0x2aa474u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2aa478:
    // 0x2aa478: 0xfd6401e8
    ctx->pc = 0x2aa478u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 488), GPR_U64(ctx, 4));
label_2aa47c:
    // 0x2aa47c: 0x8d82001c
    ctx->pc = 0x2aa47cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 28)));
label_2aa480:
    // 0x2aa480: 0x30420fff
    ctx->pc = 0x2aa480u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
label_2aa484:
    // 0x2aa484: 0x2103c
    ctx->pc = 0x2aa484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2aa488:
    // 0x2aa488: 0x2403f000
    ctx->pc = 0x2aa488u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294963200));
label_2aa48c:
    // 0x2aa48c: 0x31c38
    ctx->pc = 0x2aa48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2aa490:
    // 0x2aa490: 0x3463ffff
    ctx->pc = 0x2aa490u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_2aa494:
    // 0x2aa494: 0x31c38
    ctx->pc = 0x2aa494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2aa498:
    // 0x2aa498: 0x3463ffff
    ctx->pc = 0x2aa498u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_2aa49c:
    // 0x2aa49c: 0x832024
    ctx->pc = 0x2aa49cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2aa4a0:
    // 0x2aa4a0: 0x822025
    ctx->pc = 0x2aa4a0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa4a4:
    // 0x2aa4a4: 0xfd6401e8
    ctx->pc = 0x2aa4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 488), GPR_U64(ctx, 4));
label_2aa4a8:
    // 0x2aa4a8: 0x8d82001c
    ctx->pc = 0x2aa4a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 28)));
label_2aa4ac:
    // 0x2aa4ac: 0x21302
    ctx->pc = 0x2aa4acu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 12));
label_2aa4b0:
    // 0x2aa4b0: 0x304207ff
    ctx->pc = 0x2aa4b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
label_2aa4b4:
    // 0x2aa4b4: 0x2133c
    ctx->pc = 0x2aa4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
label_2aa4b8:
    // 0x2aa4b8: 0x922024
    ctx->pc = 0x2aa4b8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_2aa4bc:
    // 0x2aa4bc: 0x822025
    ctx->pc = 0x2aa4bcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa4c0:
    // 0x2aa4c0: 0xfd6401e8
    ctx->pc = 0x2aa4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 488), GPR_U64(ctx, 4));
label_2aa4c4:
    // 0x2aa4c4: 0xdd6201f0
    ctx->pc = 0x2aa4c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 496)));
label_2aa4c8:
    // 0x2aa4c8: 0x571024
    ctx->pc = 0x2aa4c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_2aa4cc:
    // 0x2aa4cc: 0x191afc
    ctx->pc = 0x2aa4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) << (32 + 11));
label_2aa4d0:
    // 0x2aa4d0: 0x531024
    ctx->pc = 0x2aa4d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2aa4d4:
    // 0x2aa4d4: 0x431025
    ctx->pc = 0x2aa4d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa4d8:
    // 0x2aa4d8: 0xfd6201f0
    ctx->pc = 0x2aa4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 496), GPR_U64(ctx, 2));
label_2aa4dc:
    // 0x2aa4dc: 0x8d820018
    ctx->pc = 0x2aa4dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 24)));
label_2aa4e0:
    // 0x2aa4e0: 0x215c2
    ctx->pc = 0x2aa4e0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 23));
label_2aa4e4:
    // 0x2aa4e4: 0x3042000f
    ctx->pc = 0x2aa4e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
label_2aa4e8:
    // 0x2aa4e8: 0x215f8
    ctx->pc = 0x2aa4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
label_2aa4ec:
    // 0x2aa4ec: 0xdd6401f8
    ctx->pc = 0x2aa4ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 504)));
label_2aa4f0:
    // 0x2aa4f0: 0x3c05f87f
    ctx->pc = 0x2aa4f0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)63615 << 16));
label_2aa4f4:
    // 0x2aa4f4: 0x34a5ffff
    ctx->pc = 0x2aa4f4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
label_2aa4f8:
    // 0x2aa4f8: 0x852024
    ctx->pc = 0x2aa4f8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2aa4fc:
    // 0x2aa4fc: 0x822025
    ctx->pc = 0x2aa4fcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa500:
    // 0x2aa500: 0xfd6401f8
    ctx->pc = 0x2aa500u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 504), GPR_U64(ctx, 4));
label_2aa504:
    // 0x2aa504: 0x8d820018
    ctx->pc = 0x2aa504u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 24)));
label_2aa508:
    // 0x2aa508: 0x216c2
    ctx->pc = 0x2aa508u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 27));
label_2aa50c:
    // 0x2aa50c: 0x30420003
    ctx->pc = 0x2aa50cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
label_2aa510:
    // 0x2aa510: 0x216f8
    ctx->pc = 0x2aa510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
label_2aa514:
    // 0x2aa514: 0x3c03e7ff
    ctx->pc = 0x2aa514u;
    SET_GPR_U32(ctx, 3, ((uint32_t)59391 << 16));
label_2aa518:
    // 0x2aa518: 0x3463ffff
    ctx->pc = 0x2aa518u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_2aa51c:
    // 0x2aa51c: 0x832024
    ctx->pc = 0x2aa51cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2aa520:
    // 0x2aa520: 0x822025
    ctx->pc = 0x2aa520u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa524:
    // 0x2aa524: 0xfd6401f8
    ctx->pc = 0x2aa524u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 504), GPR_U64(ctx, 4));
label_2aa528:
    // 0x2aa528: 0x8d820018
    ctx->pc = 0x2aa528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 24)));
label_2aa52c:
    // 0x2aa52c: 0x30430fff
    ctx->pc = 0x2aa52cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 4095));
label_2aa530:
    // 0x2aa530: 0x215c2
    ctx->pc = 0x2aa530u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 23));
label_2aa534:
    // 0x2aa534: 0x3042000f
    ctx->pc = 0x2aa534u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
label_2aa538:
    // 0x2aa538: 0x24420001
    ctx->pc = 0x2aa538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2aa53c:
    // 0x2aa53c: 0x1021018
    ctx->pc = 0x2aa53cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2aa540:
    // 0x2aa540: 0x621821
    ctx->pc = 0x2aa540u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2aa544:
    // 0x2aa544: 0x30630fff
    ctx->pc = 0x2aa544u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4095));
label_2aa548:
    // 0x2aa548: 0x2405f000
    ctx->pc = 0x2aa548u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294963200));
label_2aa54c:
    // 0x2aa54c: 0x852024
    ctx->pc = 0x2aa54cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2aa550:
    // 0x2aa550: 0x832025
    ctx->pc = 0x2aa550u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2aa554:
    // 0x2aa554: 0xfd6401f8
    ctx->pc = 0x2aa554u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 504), GPR_U64(ctx, 4));
label_2aa558:
    // 0x2aa558: 0x8d820018
    ctx->pc = 0x2aa558u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 24)));
label_2aa55c:
    // 0x2aa55c: 0x21b02
    ctx->pc = 0x2aa55cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 12));
label_2aa560:
    // 0x2aa560: 0x306307ff
    ctx->pc = 0x2aa560u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
label_2aa564:
    // 0x2aa564: 0x216c2
    ctx->pc = 0x2aa564u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 27));
label_2aa568:
    // 0x2aa568: 0x30420003
    ctx->pc = 0x2aa568u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
label_2aa56c:
    // 0x2aa56c: 0x24420001
    ctx->pc = 0x2aa56cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2aa570:
    // 0x2aa570: 0x1421018
    ctx->pc = 0x2aa570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2aa574:
    // 0x2aa574: 0x621821
    ctx->pc = 0x2aa574u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2aa578:
    // 0x2aa578: 0x306307ff
    ctx->pc = 0x2aa578u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
label_2aa57c:
    // 0x2aa57c: 0x31b38
    ctx->pc = 0x2aa57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 12);
label_2aa580:
    // 0x2aa580: 0x3c02ff80
    ctx->pc = 0x2aa580u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65408 << 16));
label_2aa584:
    // 0x2aa584: 0x34420fff
    ctx->pc = 0x2aa584u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4095));
label_2aa588:
    // 0x2aa588: 0x822024
    ctx->pc = 0x2aa588u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa58c:
    // 0x2aa58c: 0x832025
    ctx->pc = 0x2aa58cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2aa590:
    // 0x2aa590: 0xfd6401f8
    ctx->pc = 0x2aa590u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 504), GPR_U64(ctx, 4));
label_2aa594:
    // 0x2aa594: 0x8d82001c
    ctx->pc = 0x2aa594u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 28)));
label_2aa598:
    // 0x2aa598: 0x30420fff
    ctx->pc = 0x2aa598u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
label_2aa59c:
    // 0x2aa59c: 0x2103c
    ctx->pc = 0x2aa59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2aa5a0:
    // 0x2aa5a0: 0x2403f000
    ctx->pc = 0x2aa5a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294963200));
label_2aa5a4:
    // 0x2aa5a4: 0x31c38
    ctx->pc = 0x2aa5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2aa5a8:
    // 0x2aa5a8: 0x3463ffff
    ctx->pc = 0x2aa5a8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_2aa5ac:
    // 0x2aa5ac: 0x31c38
    ctx->pc = 0x2aa5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2aa5b0:
    // 0x2aa5b0: 0x3463ffff
    ctx->pc = 0x2aa5b0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_2aa5b4:
    // 0x2aa5b4: 0x832024
    ctx->pc = 0x2aa5b4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2aa5b8:
    // 0x2aa5b8: 0x822025
    ctx->pc = 0x2aa5b8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa5bc:
    // 0x2aa5bc: 0xfd6401f8
    ctx->pc = 0x2aa5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 504), GPR_U64(ctx, 4));
label_2aa5c0:
    // 0x2aa5c0: 0x8d82001c
    ctx->pc = 0x2aa5c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 28)));
label_2aa5c4:
    // 0x2aa5c4: 0x21302
    ctx->pc = 0x2aa5c4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 12));
label_2aa5c8:
    // 0x2aa5c8: 0x304207ff
    ctx->pc = 0x2aa5c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
label_2aa5cc:
    // 0x2aa5cc: 0x2442ffff
    ctx->pc = 0x2aa5ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2aa5d0:
    // 0x2aa5d0: 0x304207ff
    ctx->pc = 0x2aa5d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
label_2aa5d4:
    // 0x2aa5d4: 0x2133c
    ctx->pc = 0x2aa5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
label_2aa5d8:
    // 0x2aa5d8: 0x922024
    ctx->pc = 0x2aa5d8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_2aa5dc:
    // 0x2aa5dc: 0x822025
    ctx->pc = 0x2aa5dcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aa5e0:
    // 0x2aa5e0: 0xfd6401f8
    ctx->pc = 0x2aa5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 504), GPR_U64(ctx, 4));
label_2aa5e4:
    // 0x2aa5e4: 0xdda20000
    ctx->pc = 0x2aa5e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 13), 0)));
label_2aa5e8:
    // 0x2aa5e8: 0xfd620020
    ctx->pc = 0x2aa5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 32), GPR_U64(ctx, 2));
label_2aa5ec:
    // 0x2aa5ec: 0xdda20010
    ctx->pc = 0x2aa5ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 13), 16)));
label_2aa5f0:
    // 0x2aa5f0: 0xfd620030
    ctx->pc = 0x2aa5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 48), GPR_U64(ctx, 2));
label_2aa5f4:
    // 0x2aa5f4: 0xdda20020
    ctx->pc = 0x2aa5f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 13), 32)));
label_2aa5f8:
    // 0x2aa5f8: 0xfd620040
    ctx->pc = 0x2aa5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 64), GPR_U64(ctx, 2));
label_2aa5fc:
    // 0x2aa5fc: 0xdda20030
    ctx->pc = 0x2aa5fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 13), 48)));
label_2aa600:
    // 0x2aa600: 0xfd620050
    ctx->pc = 0x2aa600u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 80), GPR_U64(ctx, 2));
label_2aa604:
    // 0x2aa604: 0xdda20070
    ctx->pc = 0x2aa604u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 13), 112)));
label_2aa608:
    // 0x2aa608: 0xfd620190
    ctx->pc = 0x2aa608u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 400), GPR_U64(ctx, 2));
label_2aa60c:
    // 0x2aa60c: 0xddc20000
    ctx->pc = 0x2aa60cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 14), 0)));
label_2aa610:
    // 0x2aa610: 0xfd620070
    ctx->pc = 0x2aa610u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 112), GPR_U64(ctx, 2));
label_2aa614:
    // 0x2aa614: 0xddc20010
    ctx->pc = 0x2aa614u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 14), 16)));
label_2aa618:
    // 0x2aa618: 0xfd620080
    ctx->pc = 0x2aa618u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 128), GPR_U64(ctx, 2));
label_2aa61c:
    // 0x2aa61c: 0xddc20020
    ctx->pc = 0x2aa61cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 14), 32)));
label_2aa620:
    // 0x2aa620: 0xfd620090
    ctx->pc = 0x2aa620u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 144), GPR_U64(ctx, 2));
label_2aa624:
    // 0x2aa624: 0xddc20030
    ctx->pc = 0x2aa624u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 14), 48)));
label_2aa628:
    // 0x2aa628: 0xfd6200a0
    ctx->pc = 0x2aa628u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 160), GPR_U64(ctx, 2));
label_2aa62c:
    // 0x2aa62c: 0xddc20070
    ctx->pc = 0x2aa62cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 14), 112)));
label_2aa630:
    // 0x2aa630: 0xfd6201a0
    ctx->pc = 0x2aa630u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 416), GPR_U64(ctx, 2));
label_2aa634:
    // 0x2aa634: 0xdda20040
    ctx->pc = 0x2aa634u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 13), 64)));
label_2aa638:
    // 0x2aa638: 0xfd6200c0
    ctx->pc = 0x2aa638u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 192), GPR_U64(ctx, 2));
label_2aa63c:
    // 0x2aa63c: 0xdda20050
    ctx->pc = 0x2aa63cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 13), 80)));
label_2aa640:
    // 0x2aa640: 0xfd6200d0
    ctx->pc = 0x2aa640u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 208), GPR_U64(ctx, 2));
label_2aa644:
    // 0x2aa644: 0xdda20060
    ctx->pc = 0x2aa644u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 13), 96)));
label_2aa648:
    // 0x2aa648: 0xfd6200e0
    ctx->pc = 0x2aa648u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 224), GPR_U64(ctx, 2));
label_2aa64c:
    // 0x2aa64c: 0xfd600060
    ctx->pc = 0x2aa64cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 96), GPR_U64(ctx, 0));
label_2aa650:
    // 0x2aa650: 0xfd6000b0
    ctx->pc = 0x2aa650u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 176), GPR_U64(ctx, 0));
label_2aa654:
    // 0x2aa654: 0x3c027160
    ctx->pc = 0x2aa654u;
    SET_GPR_U32(ctx, 2, ((uint32_t)29024 << 16));
label_2aa658:
    // 0x2aa658: 0x34423524
    ctx->pc = 0x2aa658u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13604));
label_2aa65c:
    // 0x2aa65c: 0xad6200f0
    ctx->pc = 0x2aa65cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 240), GPR_U32(ctx, 2));
label_2aa660:
    // 0x2aa660: 0x3c026071
    ctx->pc = 0x2aa660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)24689 << 16));
label_2aa664:
    // 0x2aa664: 0x34422435
    ctx->pc = 0x2aa664u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 9269));
label_2aa668:
    // 0x2aa668: 0xad6200f4
    ctx->pc = 0x2aa668u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 244), GPR_U32(ctx, 2));
label_2aa66c:
    // 0x2aa66c: 0xfd600100
    ctx->pc = 0x2aa66cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 256), GPR_U64(ctx, 0));
label_2aa670:
    // 0x2aa670: 0x3c0200ff
    ctx->pc = 0x2aa670u;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
label_2aa674:
    // 0x2aa674: 0x3442ffff
    ctx->pc = 0x2aa674u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_2aa678:
    // 0x2aa678: 0xfd620110
    ctx->pc = 0x2aa678u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 272), GPR_U64(ctx, 2));
label_2aa67c:
    // 0x2aa67c: 0xfd600120
    ctx->pc = 0x2aa67cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 288), GPR_U64(ctx, 0));
label_2aa680:
    // 0x2aa680: 0xad600130
    ctx->pc = 0x2aa680u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 304), GPR_U32(ctx, 0));
label_2aa684:
    // 0x2aa684: 0x24020080
    ctx->pc = 0x2aa684u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_2aa688:
    // 0x2aa688: 0xad620134
    ctx->pc = 0x2aa688u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 308), GPR_U32(ctx, 2));
label_2aa68c:
    // 0x2aa68c: 0xdde20000
    ctx->pc = 0x2aa68cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
label_2aa690:
    // 0x2aa690: 0xfd620140
    ctx->pc = 0x2aa690u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 320), GPR_U64(ctx, 2));
label_2aa694:
    // 0x2aa694: 0xdde20010
    ctx->pc = 0x2aa694u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 16)));
label_2aa698:
    // 0x2aa698: 0xfd620150
    ctx->pc = 0x2aa698u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 336), GPR_U64(ctx, 2));
label_2aa69c:
    // 0x2aa69c: 0xdde20020
    ctx->pc = 0x2aa69cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 32)));
label_2aa6a0:
    // 0x2aa6a0: 0xfd620160
    ctx->pc = 0x2aa6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 352), GPR_U64(ctx, 2));
label_2aa6a4:
    // 0x2aa6a4: 0xdde20030
    ctx->pc = 0x2aa6a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 48)));
label_2aa6a8:
    // 0x2aa6a8: 0xfd620170
    ctx->pc = 0x2aa6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 368), GPR_U64(ctx, 2));
label_2aa6ac:
    // 0x2aa6ac: 0xdde20040
    ctx->pc = 0x2aa6acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 64)));
label_2aa6b0:
    // 0x2aa6b0: 0xfd620180
    ctx->pc = 0x2aa6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 384), GPR_U64(ctx, 2));
label_2aa6b4:
    // 0x2aa6b4: 0x2402004c
    ctx->pc = 0x2aa6b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 76));
label_2aa6b8:
    // 0x2aa6b8: 0xfd620028
    ctx->pc = 0x2aa6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 40), GPR_U64(ctx, 2));
label_2aa6bc:
    // 0x2aa6bc: 0x2402004e
    ctx->pc = 0x2aa6bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 78));
label_2aa6c0:
    // 0x2aa6c0: 0xfd620038
    ctx->pc = 0x2aa6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 56), GPR_U64(ctx, 2));
label_2aa6c4:
    // 0x2aa6c4: 0x24020018
    ctx->pc = 0x2aa6c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
label_2aa6c8:
    // 0x2aa6c8: 0xfd620048
    ctx->pc = 0x2aa6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 72), GPR_U64(ctx, 2));
label_2aa6cc:
    // 0x2aa6cc: 0x24020040
    ctx->pc = 0x2aa6ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
label_2aa6d0:
    // 0x2aa6d0: 0xfd620058
    ctx->pc = 0x2aa6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 88), GPR_U64(ctx, 2));
label_2aa6d4:
    // 0x2aa6d4: 0x2402004a
    ctx->pc = 0x2aa6d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 74));
label_2aa6d8:
    // 0x2aa6d8: 0xfd620068
    ctx->pc = 0x2aa6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 104), GPR_U64(ctx, 2));
label_2aa6dc:
    // 0x2aa6dc: 0x24040047
    ctx->pc = 0x2aa6dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 71));
label_2aa6e0:
    // 0x2aa6e0: 0xfd640198
    ctx->pc = 0x2aa6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 408), GPR_U64(ctx, 4));
label_2aa6e4:
    // 0x2aa6e4: 0x2402004d
    ctx->pc = 0x2aa6e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 77));
label_2aa6e8:
    // 0x2aa6e8: 0xfd620078
    ctx->pc = 0x2aa6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 120), GPR_U64(ctx, 2));
label_2aa6ec:
    // 0x2aa6ec: 0x2402004f
    ctx->pc = 0x2aa6ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 79));
label_2aa6f0:
    // 0x2aa6f0: 0xfd620088
    ctx->pc = 0x2aa6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 136), GPR_U64(ctx, 2));
label_2aa6f4:
    // 0x2aa6f4: 0x24020019
    ctx->pc = 0x2aa6f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25));
label_2aa6f8:
    // 0x2aa6f8: 0xfd620098
    ctx->pc = 0x2aa6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 152), GPR_U64(ctx, 2));
label_2aa6fc:
    // 0x2aa6fc: 0x24020041
    ctx->pc = 0x2aa6fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
label_2aa700:
    // 0x2aa700: 0xfd6200a8
    ctx->pc = 0x2aa700u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 168), GPR_U64(ctx, 2));
label_2aa704:
    // 0x2aa704: 0x2402004b
    ctx->pc = 0x2aa704u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 75));
label_2aa708:
    // 0x2aa708: 0xfd6200b8
    ctx->pc = 0x2aa708u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 184), GPR_U64(ctx, 2));
label_2aa70c:
    // 0x2aa70c: 0x24020048
    ctx->pc = 0x2aa70cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 72));
label_2aa710:
    // 0x2aa710: 0xfd6201a8
    ctx->pc = 0x2aa710u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 424), GPR_U64(ctx, 2));
label_2aa714:
    // 0x2aa714: 0x2402001a
    ctx->pc = 0x2aa714u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 26));
label_2aa718:
    // 0x2aa718: 0xfd6200c8
    ctx->pc = 0x2aa718u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 200), GPR_U64(ctx, 2));
label_2aa71c:
    // 0x2aa71c: 0x24020046
    ctx->pc = 0x2aa71cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 70));
label_2aa720:
    // 0x2aa720: 0xfd6200d8
    ctx->pc = 0x2aa720u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 216), GPR_U64(ctx, 2));
label_2aa724:
    // 0x2aa724: 0x24020045
    ctx->pc = 0x2aa724u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 69));
label_2aa728:
    // 0x2aa728: 0xfd6200e8
    ctx->pc = 0x2aa728u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 232), GPR_U64(ctx, 2));
label_2aa72c:
    // 0x2aa72c: 0x24020044
    ctx->pc = 0x2aa72cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 68));
label_2aa730:
    // 0x2aa730: 0xfd6200f8
    ctx->pc = 0x2aa730u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 248), GPR_U64(ctx, 2));
label_2aa734:
    // 0x2aa734: 0x24020022
    ctx->pc = 0x2aa734u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
label_2aa738:
    // 0x2aa738: 0xfd620108
    ctx->pc = 0x2aa738u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 264), GPR_U64(ctx, 2));
label_2aa73c:
    // 0x2aa73c: 0x2402003d
    ctx->pc = 0x2aa73cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 61));
label_2aa740:
    // 0x2aa740: 0xfd620118
    ctx->pc = 0x2aa740u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 280), GPR_U64(ctx, 2));
label_2aa744:
    // 0x2aa744: 0x24020049
    ctx->pc = 0x2aa744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 73));
label_2aa748:
    // 0x2aa748: 0xfd620128
    ctx->pc = 0x2aa748u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 296), GPR_U64(ctx, 2));
label_2aa74c:
    // 0x2aa74c: 0x2402003b
    ctx->pc = 0x2aa74cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 59));
label_2aa750:
    // 0x2aa750: 0xfd620138
    ctx->pc = 0x2aa750u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 312), GPR_U64(ctx, 2));
label_2aa754:
    // 0x2aa754: 0xfd640148
    ctx->pc = 0x2aa754u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 328), GPR_U64(ctx, 4));
label_2aa758:
    // 0x2aa758: 0xfd600158
    ctx->pc = 0x2aa758u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 344), GPR_U64(ctx, 0));
label_2aa75c:
    // 0x2aa75c: 0xfd780168
    ctx->pc = 0x2aa75cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 360), GPR_U64(ctx, 24));
label_2aa760:
    // 0x2aa760: 0x24020005
    ctx->pc = 0x2aa760u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_2aa764:
    // 0x2aa764: 0xfd620178
    ctx->pc = 0x2aa764u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 376), GPR_U64(ctx, 2));
label_2aa768:
    // 0x2aa768: 0xfd620188
    ctx->pc = 0x2aa768u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 392), GPR_U64(ctx, 2));
label_2aa76c:
    // 0x2aa76c: 0xfd600008
    ctx->pc = 0x2aa76cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 0));
label_2aa770:
    // 0x2aa770: 0x34028019
    ctx->pc = 0x2aa770u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32793));
label_2aa774:
    // 0x2aa774: 0xad620010
    ctx->pc = 0x2aa774u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
label_2aa778:
    // 0x2aa778: 0x3c021000
    ctx->pc = 0x2aa778u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_2aa77c:
    // 0x2aa77c: 0xad620014
    ctx->pc = 0x2aa77cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 2));
label_2aa780:
    // 0x2aa780: 0x2402000e
    ctx->pc = 0x2aa780u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
label_2aa784:
    // 0x2aa784: 0xfd620018
    ctx->pc = 0x2aa784u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 24), GPR_U64(ctx, 2));
label_2aa788:
    // 0x2aa788: 0x3c027000
    ctx->pc = 0x2aa788u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
label_2aa78c:
    // 0x2aa78c: 0x3442001a
    ctx->pc = 0x2aa78cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26));
label_2aa790:
    // 0x2aa790: 0xad620000
    ctx->pc = 0x2aa790u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_2aa794:
    // 0x2aa794: 0x26310001
    ctx->pc = 0x2aa794u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2aa798:
    // 0x2aa798: 0x2a220002
    ctx->pc = 0x2aa798u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 2));
label_2aa79c:
    // 0x2aa79c: 0x1440fdd2
label_2aa7a0:
    if (ctx->pc == 0x2AA7A0u) {
        ctx->pc = 0x2AA7A0u;
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x2AA7A4u;
        goto label_2aa7a4;
    }
    ctx->pc = 0x2AA79Cu;
    {
        const bool branch_taken_0x2aa79c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AA7A0u;
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x2aa79c) {
            ctx->pc = 0x2A9EE8u;
            goto label_2a9ee8;
        }
    }
    ctx->pc = 0x2AA7A4u;
label_2aa7a4:
    // 0x2aa7a4: 0x8ec20010
    ctx->pc = 0x2aa7a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_2aa7a8:
    // 0x2aa7a8: 0x8c4b000c
    ctx->pc = 0x2aa7a8u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2aa7ac:
    // 0x2aa7ac: 0x32a401ff
    ctx->pc = 0x2aa7acu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 21), 511));
label_2aa7b0:
    // 0x2aa7b0: 0xdd6201e0
    ctx->pc = 0x2aa7b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 480)));
label_2aa7b4:
    // 0x2aa7b4: 0x2403fe00
    ctx->pc = 0x2aa7b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294966784));
label_2aa7b8:
    // 0x2aa7b8: 0x431024
    ctx->pc = 0x2aa7b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa7bc:
    // 0x2aa7bc: 0x441025
    ctx->pc = 0x2aa7bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aa7c0:
    // 0x2aa7c0: 0xfd6201e0
    ctx->pc = 0x2aa7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 480), GPR_U64(ctx, 2));
label_2aa7c4:
    // 0x2aa7c4: 0xdd6201f0
    ctx->pc = 0x2aa7c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 496)));
label_2aa7c8:
    // 0x2aa7c8: 0x431024
    ctx->pc = 0x2aa7c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa7cc:
    // 0x2aa7cc: 0x441025
    ctx->pc = 0x2aa7ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aa7d0:
    // 0x2aa7d0: 0xfd6201f0
    ctx->pc = 0x2aa7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 496), GPR_U64(ctx, 2));
label_2aa7d4:
    // 0x2aa7d4: 0xdd620020
    ctx->pc = 0x2aa7d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 32)));
label_2aa7d8:
    // 0x2aa7d8: 0x431024
    ctx->pc = 0x2aa7d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa7dc:
    // 0x2aa7dc: 0xfd620020
    ctx->pc = 0x2aa7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 32), GPR_U64(ctx, 2));
label_2aa7e0:
    // 0x2aa7e0: 0xdd620070
    ctx->pc = 0x2aa7e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 112)));
label_2aa7e4:
    // 0x2aa7e4: 0x431024
    ctx->pc = 0x2aa7e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa7e8:
    // 0x2aa7e8: 0xfd620070
    ctx->pc = 0x2aa7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 112), GPR_U64(ctx, 2));
label_2aa7ec:
    // 0x2aa7ec: 0x152840
    ctx->pc = 0x2aa7ecu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 21), 1));
label_2aa7f0:
    // 0x2aa7f0: 0x30a501fe
    ctx->pc = 0x2aa7f0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 510));
label_2aa7f4:
    // 0x2aa7f4: 0xdd620030
    ctx->pc = 0x2aa7f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 48)));
label_2aa7f8:
    // 0x2aa7f8: 0x431024
    ctx->pc = 0x2aa7f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa7fc:
    // 0x2aa7fc: 0x451025
    ctx->pc = 0x2aa7fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2aa800:
    // 0x2aa800: 0xfd620030
    ctx->pc = 0x2aa800u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 48), GPR_U64(ctx, 2));
label_2aa804:
    // 0x2aa804: 0xdd620080
    ctx->pc = 0x2aa804u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 128)));
label_2aa808:
    // 0x2aa808: 0x431024
    ctx->pc = 0x2aa808u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa80c:
    // 0x2aa80c: 0x451025
    ctx->pc = 0x2aa80cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2aa810:
    // 0x2aa810: 0xfd620080
    ctx->pc = 0x2aa810u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 128), GPR_U64(ctx, 2));
label_2aa814:
    // 0x2aa814: 0x8ec20010
    ctx->pc = 0x2aa814u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_2aa818:
    // 0x2aa818: 0x8c42000c
    ctx->pc = 0x2aa818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2aa81c:
    // 0x2aa81c: 0x244b0200
    ctx->pc = 0x2aa81cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 512));
label_2aa820:
    // 0x2aa820: 0xdd6201e0
    ctx->pc = 0x2aa820u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 480)));
label_2aa824:
    // 0x2aa824: 0x431024
    ctx->pc = 0x2aa824u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa828:
    // 0x2aa828: 0xfd6201e0
    ctx->pc = 0x2aa828u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 480), GPR_U64(ctx, 2));
label_2aa82c:
    // 0x2aa82c: 0xdd6201f0
    ctx->pc = 0x2aa82cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 496)));
label_2aa830:
    // 0x2aa830: 0x431024
    ctx->pc = 0x2aa830u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa834:
    // 0x2aa834: 0xfd6201f0
    ctx->pc = 0x2aa834u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 496), GPR_U64(ctx, 2));
label_2aa838:
    // 0x2aa838: 0xdd620020
    ctx->pc = 0x2aa838u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 32)));
label_2aa83c:
    // 0x2aa83c: 0x431024
    ctx->pc = 0x2aa83cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa840:
    // 0x2aa840: 0x441025
    ctx->pc = 0x2aa840u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aa844:
    // 0x2aa844: 0xfd620020
    ctx->pc = 0x2aa844u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 32), GPR_U64(ctx, 2));
label_2aa848:
    // 0x2aa848: 0xdd620070
    ctx->pc = 0x2aa848u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 112)));
label_2aa84c:
    // 0x2aa84c: 0x431024
    ctx->pc = 0x2aa84cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa850:
    // 0x2aa850: 0x441025
    ctx->pc = 0x2aa850u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aa854:
    // 0x2aa854: 0xfd620070
    ctx->pc = 0x2aa854u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 112), GPR_U64(ctx, 2));
label_2aa858:
    // 0x2aa858: 0xdd620030
    ctx->pc = 0x2aa858u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 48)));
label_2aa85c:
    // 0x2aa85c: 0x431024
    ctx->pc = 0x2aa85cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa860:
    // 0x2aa860: 0x451025
    ctx->pc = 0x2aa860u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2aa864:
    // 0x2aa864: 0xfd620030
    ctx->pc = 0x2aa864u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 48), GPR_U64(ctx, 2));
label_2aa868:
    // 0x2aa868: 0xdd620080
    ctx->pc = 0x2aa868u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 128)));
label_2aa86c:
    // 0x2aa86c: 0x431024
    ctx->pc = 0x2aa86cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa870:
    // 0x2aa870: 0x451025
    ctx->pc = 0x2aa870u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2aa874:
    // 0x2aa874: 0xfd620080
    ctx->pc = 0x2aa874u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 128), GPR_U64(ctx, 2));
label_2aa878:
    // 0x2aa878: 0x8ec20010
    ctx->pc = 0x2aa878u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_2aa87c:
    // 0x2aa87c: 0x8fa50330
    ctx->pc = 0x2aa87cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 816)));
label_2aa880:
    // 0x2aa880: 0xac450010
    ctx->pc = 0x2aa880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
label_2aa884:
    // 0x2aa884: 0xc0c0e18
label_2aa888:
    if (ctx->pc == 0x2AA888u) {
        ctx->pc = 0x2AA888u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA88Cu;
        goto label_2aa88c;
    }
    ctx->pc = 0x2AA884u;
    SET_GPR_U32(ctx, 31, 0x2AA88Cu);
    ctx->pc = 0x2AA888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA88Cu; }
    }
    if (ctx->pc != 0x2AA88Cu) { return; }
    ctx->pc = 0x2AA88Cu;
label_2aa88c:
    // 0x2aa88c: 0x3c030037
    ctx->pc = 0x2aa88cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
label_2aa890:
    // 0x2aa890: 0x24020001
    ctx->pc = 0x2aa890u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2aa894:
    // 0x2aa894: 0xac62826c
    ctx->pc = 0x2aa894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935148), GPR_U32(ctx, 2));
label_2aa898:
    // 0x2aa898: 0x8ec20010
    ctx->pc = 0x2aa898u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_2aa89c:
    // 0x2aa89c: 0xac400048
    ctx->pc = 0x2aa89cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
label_2aa8a0:
    // 0x2aa8a0: 0xdfbf03d0
    ctx->pc = 0x2aa8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 976)));
label_2aa8a4:
    // 0x2aa8a4: 0xdfbe03c0
    ctx->pc = 0x2aa8a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 960)));
label_2aa8a8:
    // 0x2aa8a8: 0xdfb703b0
    ctx->pc = 0x2aa8a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 944)));
label_2aa8ac:
    // 0x2aa8ac: 0xdfb603a0
    ctx->pc = 0x2aa8acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 928)));
label_2aa8b0:
    // 0x2aa8b0: 0xdfb50390
    ctx->pc = 0x2aa8b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 912)));
label_2aa8b4:
    // 0x2aa8b4: 0xdfb40380
    ctx->pc = 0x2aa8b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 896)));
label_2aa8b8:
    // 0x2aa8b8: 0xdfb30370
    ctx->pc = 0x2aa8b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 880)));
label_2aa8bc:
    // 0x2aa8bc: 0xdfb20360
    ctx->pc = 0x2aa8bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 864)));
label_2aa8c0:
    // 0x2aa8c0: 0xdfb10350
    ctx->pc = 0x2aa8c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 848)));
label_2aa8c4:
    // 0x2aa8c4: 0xdfb00340
    ctx->pc = 0x2aa8c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 832)));
label_2aa8c8:
    // 0x2aa8c8: 0x3e00008
label_2aa8cc:
    if (ctx->pc == 0x2AA8CCu) {
        ctx->pc = 0x2AA8CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 992));
        ctx->pc = 0x2AA8D0u;
        goto label_fallthrough_0x2aa8c8;
    }
    ctx->pc = 0x2AA8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA8CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 992));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A9B78u: goto label_2a9b78;
            case 0x2A9B7Cu: goto label_2a9b7c;
            case 0x2A9B80u: goto label_2a9b80;
            case 0x2A9B84u: goto label_2a9b84;
            case 0x2A9B88u: goto label_2a9b88;
            case 0x2A9B8Cu: goto label_2a9b8c;
            case 0x2A9B90u: goto label_2a9b90;
            case 0x2A9B94u: goto label_2a9b94;
            case 0x2A9B98u: goto label_2a9b98;
            case 0x2A9B9Cu: goto label_2a9b9c;
            case 0x2A9BA0u: goto label_2a9ba0;
            case 0x2A9BA4u: goto label_2a9ba4;
            case 0x2A9BA8u: goto label_2a9ba8;
            case 0x2A9BACu: goto label_2a9bac;
            case 0x2A9BB0u: goto label_2a9bb0;
            case 0x2A9BB4u: goto label_2a9bb4;
            case 0x2A9BB8u: goto label_2a9bb8;
            case 0x2A9BBCu: goto label_2a9bbc;
            case 0x2A9BC0u: goto label_2a9bc0;
            case 0x2A9BC4u: goto label_2a9bc4;
            case 0x2A9BC8u: goto label_2a9bc8;
            case 0x2A9BCCu: goto label_2a9bcc;
            case 0x2A9BD0u: goto label_2a9bd0;
            case 0x2A9BD4u: goto label_2a9bd4;
            case 0x2A9BD8u: goto label_2a9bd8;
            case 0x2A9BDCu: goto label_2a9bdc;
            case 0x2A9BE0u: goto label_2a9be0;
            case 0x2A9BE4u: goto label_2a9be4;
            case 0x2A9BE8u: goto label_2a9be8;
            case 0x2A9BECu: goto label_2a9bec;
            case 0x2A9BF0u: goto label_2a9bf0;
            case 0x2A9BF4u: goto label_2a9bf4;
            case 0x2A9BF8u: goto label_2a9bf8;
            case 0x2A9BFCu: goto label_2a9bfc;
            case 0x2A9C00u: goto label_2a9c00;
            case 0x2A9C04u: goto label_2a9c04;
            case 0x2A9C08u: goto label_2a9c08;
            case 0x2A9C0Cu: goto label_2a9c0c;
            case 0x2A9C10u: goto label_2a9c10;
            case 0x2A9C14u: goto label_2a9c14;
            case 0x2A9C18u: goto label_2a9c18;
            case 0x2A9C1Cu: goto label_2a9c1c;
            case 0x2A9C20u: goto label_2a9c20;
            case 0x2A9C24u: goto label_2a9c24;
            case 0x2A9C28u: goto label_2a9c28;
            case 0x2A9C2Cu: goto label_2a9c2c;
            case 0x2A9C30u: goto label_2a9c30;
            case 0x2A9C34u: goto label_2a9c34;
            case 0x2A9C38u: goto label_2a9c38;
            case 0x2A9C3Cu: goto label_2a9c3c;
            case 0x2A9C40u: goto label_2a9c40;
            case 0x2A9C44u: goto label_2a9c44;
            case 0x2A9C48u: goto label_2a9c48;
            case 0x2A9C4Cu: goto label_2a9c4c;
            case 0x2A9C50u: goto label_2a9c50;
            case 0x2A9C54u: goto label_2a9c54;
            case 0x2A9C58u: goto label_2a9c58;
            case 0x2A9C5Cu: goto label_2a9c5c;
            case 0x2A9C60u: goto label_2a9c60;
            case 0x2A9C64u: goto label_2a9c64;
            case 0x2A9C68u: goto label_2a9c68;
            case 0x2A9C6Cu: goto label_2a9c6c;
            case 0x2A9C70u: goto label_2a9c70;
            case 0x2A9C74u: goto label_2a9c74;
            case 0x2A9C78u: goto label_2a9c78;
            case 0x2A9C7Cu: goto label_2a9c7c;
            case 0x2A9C80u: goto label_2a9c80;
            case 0x2A9C84u: goto label_2a9c84;
            case 0x2A9C88u: goto label_2a9c88;
            case 0x2A9C8Cu: goto label_2a9c8c;
            case 0x2A9C90u: goto label_2a9c90;
            case 0x2A9C94u: goto label_2a9c94;
            case 0x2A9C98u: goto label_2a9c98;
            case 0x2A9C9Cu: goto label_2a9c9c;
            case 0x2A9CA0u: goto label_2a9ca0;
            case 0x2A9CA4u: goto label_2a9ca4;
            case 0x2A9CA8u: goto label_2a9ca8;
            case 0x2A9CACu: goto label_2a9cac;
            case 0x2A9CB0u: goto label_2a9cb0;
            case 0x2A9CB4u: goto label_2a9cb4;
            case 0x2A9CB8u: goto label_2a9cb8;
            case 0x2A9CBCu: goto label_2a9cbc;
            case 0x2A9CC0u: goto label_2a9cc0;
            case 0x2A9CC4u: goto label_2a9cc4;
            case 0x2A9CC8u: goto label_2a9cc8;
            case 0x2A9CCCu: goto label_2a9ccc;
            case 0x2A9CD0u: goto label_2a9cd0;
            case 0x2A9CD4u: goto label_2a9cd4;
            case 0x2A9CD8u: goto label_2a9cd8;
            case 0x2A9CDCu: goto label_2a9cdc;
            case 0x2A9CE0u: goto label_2a9ce0;
            case 0x2A9CE4u: goto label_2a9ce4;
            case 0x2A9CE8u: goto label_2a9ce8;
            case 0x2A9CECu: goto label_2a9cec;
            case 0x2A9CF0u: goto label_2a9cf0;
            case 0x2A9CF4u: goto label_2a9cf4;
            case 0x2A9CF8u: goto label_2a9cf8;
            case 0x2A9CFCu: goto label_2a9cfc;
            case 0x2A9D00u: goto label_2a9d00;
            case 0x2A9D04u: goto label_2a9d04;
            case 0x2A9D08u: goto label_2a9d08;
            case 0x2A9D0Cu: goto label_2a9d0c;
            case 0x2A9D10u: goto label_2a9d10;
            case 0x2A9D14u: goto label_2a9d14;
            case 0x2A9D18u: goto label_2a9d18;
            case 0x2A9D1Cu: goto label_2a9d1c;
            case 0x2A9D20u: goto label_2a9d20;
            case 0x2A9D24u: goto label_2a9d24;
            case 0x2A9D28u: goto label_2a9d28;
            case 0x2A9D2Cu: goto label_2a9d2c;
            case 0x2A9D30u: goto label_2a9d30;
            case 0x2A9D34u: goto label_2a9d34;
            case 0x2A9D38u: goto label_2a9d38;
            case 0x2A9D3Cu: goto label_2a9d3c;
            case 0x2A9D40u: goto label_2a9d40;
            case 0x2A9D44u: goto label_2a9d44;
            case 0x2A9D48u: goto label_2a9d48;
            case 0x2A9D4Cu: goto label_2a9d4c;
            case 0x2A9D50u: goto label_2a9d50;
            case 0x2A9D54u: goto label_2a9d54;
            case 0x2A9D58u: goto label_2a9d58;
            case 0x2A9D5Cu: goto label_2a9d5c;
            case 0x2A9D60u: goto label_2a9d60;
            case 0x2A9D64u: goto label_2a9d64;
            case 0x2A9D68u: goto label_2a9d68;
            case 0x2A9D6Cu: goto label_2a9d6c;
            case 0x2A9D70u: goto label_2a9d70;
            case 0x2A9D74u: goto label_2a9d74;
            case 0x2A9D78u: goto label_2a9d78;
            case 0x2A9D7Cu: goto label_2a9d7c;
            case 0x2A9D80u: goto label_2a9d80;
            case 0x2A9D84u: goto label_2a9d84;
            case 0x2A9D88u: goto label_2a9d88;
            case 0x2A9D8Cu: goto label_2a9d8c;
            case 0x2A9D90u: goto label_2a9d90;
            case 0x2A9D94u: goto label_2a9d94;
            case 0x2A9D98u: goto label_2a9d98;
            case 0x2A9D9Cu: goto label_2a9d9c;
            case 0x2A9DA0u: goto label_2a9da0;
            case 0x2A9DA4u: goto label_2a9da4;
            case 0x2A9DA8u: goto label_2a9da8;
            case 0x2A9DACu: goto label_2a9dac;
            case 0x2A9DB0u: goto label_2a9db0;
            case 0x2A9DB4u: goto label_2a9db4;
            case 0x2A9DB8u: goto label_2a9db8;
            case 0x2A9DBCu: goto label_2a9dbc;
            case 0x2A9DC0u: goto label_2a9dc0;
            case 0x2A9DC4u: goto label_2a9dc4;
            case 0x2A9DC8u: goto label_2a9dc8;
            case 0x2A9DCCu: goto label_2a9dcc;
            case 0x2A9DD0u: goto label_2a9dd0;
            case 0x2A9DD4u: goto label_2a9dd4;
            case 0x2A9DD8u: goto label_2a9dd8;
            case 0x2A9DDCu: goto label_2a9ddc;
            case 0x2A9DE0u: goto label_2a9de0;
            case 0x2A9DE4u: goto label_2a9de4;
            case 0x2A9DE8u: goto label_2a9de8;
            case 0x2A9DECu: goto label_2a9dec;
            case 0x2A9DF0u: goto label_2a9df0;
            case 0x2A9DF4u: goto label_2a9df4;
            case 0x2A9DF8u: goto label_2a9df8;
            case 0x2A9DFCu: goto label_2a9dfc;
            case 0x2A9E00u: goto label_2a9e00;
            case 0x2A9E04u: goto label_2a9e04;
            case 0x2A9E08u: goto label_2a9e08;
            case 0x2A9E0Cu: goto label_2a9e0c;
            case 0x2A9E10u: goto label_2a9e10;
            case 0x2A9E14u: goto label_2a9e14;
            case 0x2A9E18u: goto label_2a9e18;
            case 0x2A9E1Cu: goto label_2a9e1c;
            case 0x2A9E20u: goto label_2a9e20;
            case 0x2A9E24u: goto label_2a9e24;
            case 0x2A9E28u: goto label_2a9e28;
            case 0x2A9E2Cu: goto label_2a9e2c;
            case 0x2A9E30u: goto label_2a9e30;
            case 0x2A9E34u: goto label_2a9e34;
            case 0x2A9E38u: goto label_2a9e38;
            case 0x2A9E3Cu: goto label_2a9e3c;
            case 0x2A9E40u: goto label_2a9e40;
            case 0x2A9E44u: goto label_2a9e44;
            case 0x2A9E48u: goto label_2a9e48;
            case 0x2A9E4Cu: goto label_2a9e4c;
            case 0x2A9E50u: goto label_2a9e50;
            case 0x2A9E54u: goto label_2a9e54;
            case 0x2A9E58u: goto label_2a9e58;
            case 0x2A9E5Cu: goto label_2a9e5c;
            case 0x2A9E60u: goto label_2a9e60;
            case 0x2A9E64u: goto label_2a9e64;
            case 0x2A9E68u: goto label_2a9e68;
            case 0x2A9E6Cu: goto label_2a9e6c;
            case 0x2A9E70u: goto label_2a9e70;
            case 0x2A9E74u: goto label_2a9e74;
            case 0x2A9E78u: goto label_2a9e78;
            case 0x2A9E7Cu: goto label_2a9e7c;
            case 0x2A9E80u: goto label_2a9e80;
            case 0x2A9E84u: goto label_2a9e84;
            case 0x2A9E88u: goto label_2a9e88;
            case 0x2A9E8Cu: goto label_2a9e8c;
            case 0x2A9E90u: goto label_2a9e90;
            case 0x2A9E94u: goto label_2a9e94;
            case 0x2A9E98u: goto label_2a9e98;
            case 0x2A9E9Cu: goto label_2a9e9c;
            case 0x2A9EA0u: goto label_2a9ea0;
            case 0x2A9EA4u: goto label_2a9ea4;
            case 0x2A9EA8u: goto label_2a9ea8;
            case 0x2A9EACu: goto label_2a9eac;
            case 0x2A9EB0u: goto label_2a9eb0;
            case 0x2A9EB4u: goto label_2a9eb4;
            case 0x2A9EB8u: goto label_2a9eb8;
            case 0x2A9EBCu: goto label_2a9ebc;
            case 0x2A9EC0u: goto label_2a9ec0;
            case 0x2A9EC4u: goto label_2a9ec4;
            case 0x2A9EC8u: goto label_2a9ec8;
            case 0x2A9ECCu: goto label_2a9ecc;
            case 0x2A9ED0u: goto label_2a9ed0;
            case 0x2A9ED4u: goto label_2a9ed4;
            case 0x2A9ED8u: goto label_2a9ed8;
            case 0x2A9EDCu: goto label_2a9edc;
            case 0x2A9EE0u: goto label_2a9ee0;
            case 0x2A9EE4u: goto label_2a9ee4;
            case 0x2A9EE8u: goto label_2a9ee8;
            case 0x2A9EECu: goto label_2a9eec;
            case 0x2A9EF0u: goto label_2a9ef0;
            case 0x2A9EF4u: goto label_2a9ef4;
            case 0x2A9EF8u: goto label_2a9ef8;
            case 0x2A9EFCu: goto label_2a9efc;
            case 0x2A9F00u: goto label_2a9f00;
            case 0x2A9F04u: goto label_2a9f04;
            case 0x2A9F08u: goto label_2a9f08;
            case 0x2A9F0Cu: goto label_2a9f0c;
            case 0x2A9F10u: goto label_2a9f10;
            case 0x2A9F14u: goto label_2a9f14;
            case 0x2A9F18u: goto label_2a9f18;
            case 0x2A9F1Cu: goto label_2a9f1c;
            case 0x2A9F20u: goto label_2a9f20;
            case 0x2A9F24u: goto label_2a9f24;
            case 0x2A9F28u: goto label_2a9f28;
            case 0x2A9F2Cu: goto label_2a9f2c;
            case 0x2A9F30u: goto label_2a9f30;
            case 0x2A9F34u: goto label_2a9f34;
            case 0x2A9F38u: goto label_2a9f38;
            case 0x2A9F3Cu: goto label_2a9f3c;
            case 0x2A9F40u: goto label_2a9f40;
            case 0x2A9F44u: goto label_2a9f44;
            case 0x2A9F48u: goto label_2a9f48;
            case 0x2A9F4Cu: goto label_2a9f4c;
            case 0x2A9F50u: goto label_2a9f50;
            case 0x2A9F54u: goto label_2a9f54;
            case 0x2A9F58u: goto label_2a9f58;
            case 0x2A9F5Cu: goto label_2a9f5c;
            case 0x2A9F60u: goto label_2a9f60;
            case 0x2A9F64u: goto label_2a9f64;
            case 0x2A9F68u: goto label_2a9f68;
            case 0x2A9F6Cu: goto label_2a9f6c;
            case 0x2A9F70u: goto label_2a9f70;
            case 0x2A9F74u: goto label_2a9f74;
            case 0x2A9F78u: goto label_2a9f78;
            case 0x2A9F7Cu: goto label_2a9f7c;
            case 0x2A9F80u: goto label_2a9f80;
            case 0x2A9F84u: goto label_2a9f84;
            case 0x2A9F88u: goto label_2a9f88;
            case 0x2A9F8Cu: goto label_2a9f8c;
            case 0x2A9F90u: goto label_2a9f90;
            case 0x2A9F94u: goto label_2a9f94;
            case 0x2A9F98u: goto label_2a9f98;
            case 0x2A9F9Cu: goto label_2a9f9c;
            case 0x2A9FA0u: goto label_2a9fa0;
            case 0x2A9FA4u: goto label_2a9fa4;
            case 0x2A9FA8u: goto label_2a9fa8;
            case 0x2A9FACu: goto label_2a9fac;
            case 0x2A9FB0u: goto label_2a9fb0;
            case 0x2A9FB4u: goto label_2a9fb4;
            case 0x2A9FB8u: goto label_2a9fb8;
            case 0x2A9FBCu: goto label_2a9fbc;
            case 0x2A9FC0u: goto label_2a9fc0;
            case 0x2A9FC4u: goto label_2a9fc4;
            case 0x2A9FC8u: goto label_2a9fc8;
            case 0x2A9FCCu: goto label_2a9fcc;
            case 0x2A9FD0u: goto label_2a9fd0;
            case 0x2A9FD4u: goto label_2a9fd4;
            case 0x2A9FD8u: goto label_2a9fd8;
            case 0x2A9FDCu: goto label_2a9fdc;
            case 0x2A9FE0u: goto label_2a9fe0;
            case 0x2A9FE4u: goto label_2a9fe4;
            case 0x2A9FE8u: goto label_2a9fe8;
            case 0x2A9FECu: goto label_2a9fec;
            case 0x2A9FF0u: goto label_2a9ff0;
            case 0x2A9FF4u: goto label_2a9ff4;
            case 0x2A9FF8u: goto label_2a9ff8;
            case 0x2A9FFCu: goto label_2a9ffc;
            case 0x2AA000u: goto label_2aa000;
            case 0x2AA004u: goto label_2aa004;
            case 0x2AA008u: goto label_2aa008;
            case 0x2AA00Cu: goto label_2aa00c;
            case 0x2AA010u: goto label_2aa010;
            case 0x2AA014u: goto label_2aa014;
            case 0x2AA018u: goto label_2aa018;
            case 0x2AA01Cu: goto label_2aa01c;
            case 0x2AA020u: goto label_2aa020;
            case 0x2AA024u: goto label_2aa024;
            case 0x2AA028u: goto label_2aa028;
            case 0x2AA02Cu: goto label_2aa02c;
            case 0x2AA030u: goto label_2aa030;
            case 0x2AA034u: goto label_2aa034;
            case 0x2AA038u: goto label_2aa038;
            case 0x2AA03Cu: goto label_2aa03c;
            case 0x2AA040u: goto label_2aa040;
            case 0x2AA044u: goto label_2aa044;
            case 0x2AA048u: goto label_2aa048;
            case 0x2AA04Cu: goto label_2aa04c;
            case 0x2AA050u: goto label_2aa050;
            case 0x2AA054u: goto label_2aa054;
            case 0x2AA058u: goto label_2aa058;
            case 0x2AA05Cu: goto label_2aa05c;
            case 0x2AA060u: goto label_2aa060;
            case 0x2AA064u: goto label_2aa064;
            case 0x2AA068u: goto label_2aa068;
            case 0x2AA06Cu: goto label_2aa06c;
            case 0x2AA070u: goto label_2aa070;
            case 0x2AA074u: goto label_2aa074;
            case 0x2AA078u: goto label_2aa078;
            case 0x2AA07Cu: goto label_2aa07c;
            case 0x2AA080u: goto label_2aa080;
            case 0x2AA084u: goto label_2aa084;
            case 0x2AA088u: goto label_2aa088;
            case 0x2AA08Cu: goto label_2aa08c;
            case 0x2AA090u: goto label_2aa090;
            case 0x2AA094u: goto label_2aa094;
            case 0x2AA098u: goto label_2aa098;
            case 0x2AA09Cu: goto label_2aa09c;
            case 0x2AA0A0u: goto label_2aa0a0;
            case 0x2AA0A4u: goto label_2aa0a4;
            case 0x2AA0A8u: goto label_2aa0a8;
            case 0x2AA0ACu: goto label_2aa0ac;
            case 0x2AA0B0u: goto label_2aa0b0;
            case 0x2AA0B4u: goto label_2aa0b4;
            case 0x2AA0B8u: goto label_2aa0b8;
            case 0x2AA0BCu: goto label_2aa0bc;
            case 0x2AA0C0u: goto label_2aa0c0;
            case 0x2AA0C4u: goto label_2aa0c4;
            case 0x2AA0C8u: goto label_2aa0c8;
            case 0x2AA0CCu: goto label_2aa0cc;
            case 0x2AA0D0u: goto label_2aa0d0;
            case 0x2AA0D4u: goto label_2aa0d4;
            case 0x2AA0D8u: goto label_2aa0d8;
            case 0x2AA0DCu: goto label_2aa0dc;
            case 0x2AA0E0u: goto label_2aa0e0;
            case 0x2AA0E4u: goto label_2aa0e4;
            case 0x2AA0E8u: goto label_2aa0e8;
            case 0x2AA0ECu: goto label_2aa0ec;
            case 0x2AA0F0u: goto label_2aa0f0;
            case 0x2AA0F4u: goto label_2aa0f4;
            case 0x2AA0F8u: goto label_2aa0f8;
            case 0x2AA0FCu: goto label_2aa0fc;
            case 0x2AA100u: goto label_2aa100;
            case 0x2AA104u: goto label_2aa104;
            case 0x2AA108u: goto label_2aa108;
            case 0x2AA10Cu: goto label_2aa10c;
            case 0x2AA110u: goto label_2aa110;
            case 0x2AA114u: goto label_2aa114;
            case 0x2AA118u: goto label_2aa118;
            case 0x2AA11Cu: goto label_2aa11c;
            case 0x2AA120u: goto label_2aa120;
            case 0x2AA124u: goto label_2aa124;
            case 0x2AA128u: goto label_2aa128;
            case 0x2AA12Cu: goto label_2aa12c;
            case 0x2AA130u: goto label_2aa130;
            case 0x2AA134u: goto label_2aa134;
            case 0x2AA138u: goto label_2aa138;
            case 0x2AA13Cu: goto label_2aa13c;
            case 0x2AA140u: goto label_2aa140;
            case 0x2AA144u: goto label_2aa144;
            case 0x2AA148u: goto label_2aa148;
            case 0x2AA14Cu: goto label_2aa14c;
            case 0x2AA150u: goto label_2aa150;
            case 0x2AA154u: goto label_2aa154;
            case 0x2AA158u: goto label_2aa158;
            case 0x2AA15Cu: goto label_2aa15c;
            case 0x2AA160u: goto label_2aa160;
            case 0x2AA164u: goto label_2aa164;
            case 0x2AA168u: goto label_2aa168;
            case 0x2AA16Cu: goto label_2aa16c;
            case 0x2AA170u: goto label_2aa170;
            case 0x2AA174u: goto label_2aa174;
            case 0x2AA178u: goto label_2aa178;
            case 0x2AA17Cu: goto label_2aa17c;
            case 0x2AA180u: goto label_2aa180;
            case 0x2AA184u: goto label_2aa184;
            case 0x2AA188u: goto label_2aa188;
            case 0x2AA18Cu: goto label_2aa18c;
            case 0x2AA190u: goto label_2aa190;
            case 0x2AA194u: goto label_2aa194;
            case 0x2AA198u: goto label_2aa198;
            case 0x2AA19Cu: goto label_2aa19c;
            case 0x2AA1A0u: goto label_2aa1a0;
            case 0x2AA1A4u: goto label_2aa1a4;
            case 0x2AA1A8u: goto label_2aa1a8;
            case 0x2AA1ACu: goto label_2aa1ac;
            case 0x2AA1B0u: goto label_2aa1b0;
            case 0x2AA1B4u: goto label_2aa1b4;
            case 0x2AA1B8u: goto label_2aa1b8;
            case 0x2AA1BCu: goto label_2aa1bc;
            case 0x2AA1C0u: goto label_2aa1c0;
            case 0x2AA1C4u: goto label_2aa1c4;
            case 0x2AA1C8u: goto label_2aa1c8;
            case 0x2AA1CCu: goto label_2aa1cc;
            case 0x2AA1D0u: goto label_2aa1d0;
            case 0x2AA1D4u: goto label_2aa1d4;
            case 0x2AA1D8u: goto label_2aa1d8;
            case 0x2AA1DCu: goto label_2aa1dc;
            case 0x2AA1E0u: goto label_2aa1e0;
            case 0x2AA1E4u: goto label_2aa1e4;
            case 0x2AA1E8u: goto label_2aa1e8;
            case 0x2AA1ECu: goto label_2aa1ec;
            case 0x2AA1F0u: goto label_2aa1f0;
            case 0x2AA1F4u: goto label_2aa1f4;
            case 0x2AA1F8u: goto label_2aa1f8;
            case 0x2AA1FCu: goto label_2aa1fc;
            case 0x2AA200u: goto label_2aa200;
            case 0x2AA204u: goto label_2aa204;
            case 0x2AA208u: goto label_2aa208;
            case 0x2AA20Cu: goto label_2aa20c;
            case 0x2AA210u: goto label_2aa210;
            case 0x2AA214u: goto label_2aa214;
            case 0x2AA218u: goto label_2aa218;
            case 0x2AA21Cu: goto label_2aa21c;
            case 0x2AA220u: goto label_2aa220;
            case 0x2AA224u: goto label_2aa224;
            case 0x2AA228u: goto label_2aa228;
            case 0x2AA22Cu: goto label_2aa22c;
            case 0x2AA230u: goto label_2aa230;
            case 0x2AA234u: goto label_2aa234;
            case 0x2AA238u: goto label_2aa238;
            case 0x2AA23Cu: goto label_2aa23c;
            case 0x2AA240u: goto label_2aa240;
            case 0x2AA244u: goto label_2aa244;
            case 0x2AA248u: goto label_2aa248;
            case 0x2AA24Cu: goto label_2aa24c;
            case 0x2AA250u: goto label_2aa250;
            case 0x2AA254u: goto label_2aa254;
            case 0x2AA258u: goto label_2aa258;
            case 0x2AA25Cu: goto label_2aa25c;
            case 0x2AA260u: goto label_2aa260;
            case 0x2AA264u: goto label_2aa264;
            case 0x2AA268u: goto label_2aa268;
            case 0x2AA26Cu: goto label_2aa26c;
            case 0x2AA270u: goto label_2aa270;
            case 0x2AA274u: goto label_2aa274;
            case 0x2AA278u: goto label_2aa278;
            case 0x2AA27Cu: goto label_2aa27c;
            case 0x2AA280u: goto label_2aa280;
            case 0x2AA284u: goto label_2aa284;
            case 0x2AA288u: goto label_2aa288;
            case 0x2AA28Cu: goto label_2aa28c;
            case 0x2AA290u: goto label_2aa290;
            case 0x2AA294u: goto label_2aa294;
            case 0x2AA298u: goto label_2aa298;
            case 0x2AA29Cu: goto label_2aa29c;
            case 0x2AA2A0u: goto label_2aa2a0;
            case 0x2AA2A4u: goto label_2aa2a4;
            case 0x2AA2A8u: goto label_2aa2a8;
            case 0x2AA2ACu: goto label_2aa2ac;
            case 0x2AA2B0u: goto label_2aa2b0;
            case 0x2AA2B4u: goto label_2aa2b4;
            case 0x2AA2B8u: goto label_2aa2b8;
            case 0x2AA2BCu: goto label_2aa2bc;
            case 0x2AA2C0u: goto label_2aa2c0;
            case 0x2AA2C4u: goto label_2aa2c4;
            case 0x2AA2C8u: goto label_2aa2c8;
            case 0x2AA2CCu: goto label_2aa2cc;
            case 0x2AA2D0u: goto label_2aa2d0;
            case 0x2AA2D4u: goto label_2aa2d4;
            case 0x2AA2D8u: goto label_2aa2d8;
            case 0x2AA2DCu: goto label_2aa2dc;
            case 0x2AA2E0u: goto label_2aa2e0;
            case 0x2AA2E4u: goto label_2aa2e4;
            case 0x2AA2E8u: goto label_2aa2e8;
            case 0x2AA2ECu: goto label_2aa2ec;
            case 0x2AA2F0u: goto label_2aa2f0;
            case 0x2AA2F4u: goto label_2aa2f4;
            case 0x2AA2F8u: goto label_2aa2f8;
            case 0x2AA2FCu: goto label_2aa2fc;
            case 0x2AA300u: goto label_2aa300;
            case 0x2AA304u: goto label_2aa304;
            case 0x2AA308u: goto label_2aa308;
            case 0x2AA30Cu: goto label_2aa30c;
            case 0x2AA310u: goto label_2aa310;
            case 0x2AA314u: goto label_2aa314;
            case 0x2AA318u: goto label_2aa318;
            case 0x2AA31Cu: goto label_2aa31c;
            case 0x2AA320u: goto label_2aa320;
            case 0x2AA324u: goto label_2aa324;
            case 0x2AA328u: goto label_2aa328;
            case 0x2AA32Cu: goto label_2aa32c;
            case 0x2AA330u: goto label_2aa330;
            case 0x2AA334u: goto label_2aa334;
            case 0x2AA338u: goto label_2aa338;
            case 0x2AA33Cu: goto label_2aa33c;
            case 0x2AA340u: goto label_2aa340;
            case 0x2AA344u: goto label_2aa344;
            case 0x2AA348u: goto label_2aa348;
            case 0x2AA34Cu: goto label_2aa34c;
            case 0x2AA350u: goto label_2aa350;
            case 0x2AA354u: goto label_2aa354;
            case 0x2AA358u: goto label_2aa358;
            case 0x2AA35Cu: goto label_2aa35c;
            case 0x2AA360u: goto label_2aa360;
            case 0x2AA364u: goto label_2aa364;
            case 0x2AA368u: goto label_2aa368;
            case 0x2AA36Cu: goto label_2aa36c;
            case 0x2AA370u: goto label_2aa370;
            case 0x2AA374u: goto label_2aa374;
            case 0x2AA378u: goto label_2aa378;
            case 0x2AA37Cu: goto label_2aa37c;
            case 0x2AA380u: goto label_2aa380;
            case 0x2AA384u: goto label_2aa384;
            case 0x2AA388u: goto label_2aa388;
            case 0x2AA38Cu: goto label_2aa38c;
            case 0x2AA390u: goto label_2aa390;
            case 0x2AA394u: goto label_2aa394;
            case 0x2AA398u: goto label_2aa398;
            case 0x2AA39Cu: goto label_2aa39c;
            case 0x2AA3A0u: goto label_2aa3a0;
            case 0x2AA3A4u: goto label_2aa3a4;
            case 0x2AA3A8u: goto label_2aa3a8;
            case 0x2AA3ACu: goto label_2aa3ac;
            case 0x2AA3B0u: goto label_2aa3b0;
            case 0x2AA3B4u: goto label_2aa3b4;
            case 0x2AA3B8u: goto label_2aa3b8;
            case 0x2AA3BCu: goto label_2aa3bc;
            case 0x2AA3C0u: goto label_2aa3c0;
            case 0x2AA3C4u: goto label_2aa3c4;
            case 0x2AA3C8u: goto label_2aa3c8;
            case 0x2AA3CCu: goto label_2aa3cc;
            case 0x2AA3D0u: goto label_2aa3d0;
            case 0x2AA3D4u: goto label_2aa3d4;
            case 0x2AA3D8u: goto label_2aa3d8;
            case 0x2AA3DCu: goto label_2aa3dc;
            case 0x2AA3E0u: goto label_2aa3e0;
            case 0x2AA3E4u: goto label_2aa3e4;
            case 0x2AA3E8u: goto label_2aa3e8;
            case 0x2AA3ECu: goto label_2aa3ec;
            case 0x2AA3F0u: goto label_2aa3f0;
            case 0x2AA3F4u: goto label_2aa3f4;
            case 0x2AA3F8u: goto label_2aa3f8;
            case 0x2AA3FCu: goto label_2aa3fc;
            case 0x2AA400u: goto label_2aa400;
            case 0x2AA404u: goto label_2aa404;
            case 0x2AA408u: goto label_2aa408;
            case 0x2AA40Cu: goto label_2aa40c;
            case 0x2AA410u: goto label_2aa410;
            case 0x2AA414u: goto label_2aa414;
            case 0x2AA418u: goto label_2aa418;
            case 0x2AA41Cu: goto label_2aa41c;
            case 0x2AA420u: goto label_2aa420;
            case 0x2AA424u: goto label_2aa424;
            case 0x2AA428u: goto label_2aa428;
            case 0x2AA42Cu: goto label_2aa42c;
            case 0x2AA430u: goto label_2aa430;
            case 0x2AA434u: goto label_2aa434;
            case 0x2AA438u: goto label_2aa438;
            case 0x2AA43Cu: goto label_2aa43c;
            case 0x2AA440u: goto label_2aa440;
            case 0x2AA444u: goto label_2aa444;
            case 0x2AA448u: goto label_2aa448;
            case 0x2AA44Cu: goto label_2aa44c;
            case 0x2AA450u: goto label_2aa450;
            case 0x2AA454u: goto label_2aa454;
            case 0x2AA458u: goto label_2aa458;
            case 0x2AA45Cu: goto label_2aa45c;
            case 0x2AA460u: goto label_2aa460;
            case 0x2AA464u: goto label_2aa464;
            case 0x2AA468u: goto label_2aa468;
            case 0x2AA46Cu: goto label_2aa46c;
            case 0x2AA470u: goto label_2aa470;
            case 0x2AA474u: goto label_2aa474;
            case 0x2AA478u: goto label_2aa478;
            case 0x2AA47Cu: goto label_2aa47c;
            case 0x2AA480u: goto label_2aa480;
            case 0x2AA484u: goto label_2aa484;
            case 0x2AA488u: goto label_2aa488;
            case 0x2AA48Cu: goto label_2aa48c;
            case 0x2AA490u: goto label_2aa490;
            case 0x2AA494u: goto label_2aa494;
            case 0x2AA498u: goto label_2aa498;
            case 0x2AA49Cu: goto label_2aa49c;
            case 0x2AA4A0u: goto label_2aa4a0;
            case 0x2AA4A4u: goto label_2aa4a4;
            case 0x2AA4A8u: goto label_2aa4a8;
            case 0x2AA4ACu: goto label_2aa4ac;
            case 0x2AA4B0u: goto label_2aa4b0;
            case 0x2AA4B4u: goto label_2aa4b4;
            case 0x2AA4B8u: goto label_2aa4b8;
            case 0x2AA4BCu: goto label_2aa4bc;
            case 0x2AA4C0u: goto label_2aa4c0;
            case 0x2AA4C4u: goto label_2aa4c4;
            case 0x2AA4C8u: goto label_2aa4c8;
            case 0x2AA4CCu: goto label_2aa4cc;
            case 0x2AA4D0u: goto label_2aa4d0;
            case 0x2AA4D4u: goto label_2aa4d4;
            case 0x2AA4D8u: goto label_2aa4d8;
            case 0x2AA4DCu: goto label_2aa4dc;
            case 0x2AA4E0u: goto label_2aa4e0;
            case 0x2AA4E4u: goto label_2aa4e4;
            case 0x2AA4E8u: goto label_2aa4e8;
            case 0x2AA4ECu: goto label_2aa4ec;
            case 0x2AA4F0u: goto label_2aa4f0;
            case 0x2AA4F4u: goto label_2aa4f4;
            case 0x2AA4F8u: goto label_2aa4f8;
            case 0x2AA4FCu: goto label_2aa4fc;
            case 0x2AA500u: goto label_2aa500;
            case 0x2AA504u: goto label_2aa504;
            case 0x2AA508u: goto label_2aa508;
            case 0x2AA50Cu: goto label_2aa50c;
            case 0x2AA510u: goto label_2aa510;
            case 0x2AA514u: goto label_2aa514;
            case 0x2AA518u: goto label_2aa518;
            case 0x2AA51Cu: goto label_2aa51c;
            case 0x2AA520u: goto label_2aa520;
            case 0x2AA524u: goto label_2aa524;
            case 0x2AA528u: goto label_2aa528;
            case 0x2AA52Cu: goto label_2aa52c;
            case 0x2AA530u: goto label_2aa530;
            case 0x2AA534u: goto label_2aa534;
            case 0x2AA538u: goto label_2aa538;
            case 0x2AA53Cu: goto label_2aa53c;
            case 0x2AA540u: goto label_2aa540;
            case 0x2AA544u: goto label_2aa544;
            case 0x2AA548u: goto label_2aa548;
            case 0x2AA54Cu: goto label_2aa54c;
            case 0x2AA550u: goto label_2aa550;
            case 0x2AA554u: goto label_2aa554;
            case 0x2AA558u: goto label_2aa558;
            case 0x2AA55Cu: goto label_2aa55c;
            case 0x2AA560u: goto label_2aa560;
            case 0x2AA564u: goto label_2aa564;
            case 0x2AA568u: goto label_2aa568;
            case 0x2AA56Cu: goto label_2aa56c;
            case 0x2AA570u: goto label_2aa570;
            case 0x2AA574u: goto label_2aa574;
            case 0x2AA578u: goto label_2aa578;
            case 0x2AA57Cu: goto label_2aa57c;
            case 0x2AA580u: goto label_2aa580;
            case 0x2AA584u: goto label_2aa584;
            case 0x2AA588u: goto label_2aa588;
            case 0x2AA58Cu: goto label_2aa58c;
            case 0x2AA590u: goto label_2aa590;
            case 0x2AA594u: goto label_2aa594;
            case 0x2AA598u: goto label_2aa598;
            case 0x2AA59Cu: goto label_2aa59c;
            case 0x2AA5A0u: goto label_2aa5a0;
            case 0x2AA5A4u: goto label_2aa5a4;
            case 0x2AA5A8u: goto label_2aa5a8;
            case 0x2AA5ACu: goto label_2aa5ac;
            case 0x2AA5B0u: goto label_2aa5b0;
            case 0x2AA5B4u: goto label_2aa5b4;
            case 0x2AA5B8u: goto label_2aa5b8;
            case 0x2AA5BCu: goto label_2aa5bc;
            case 0x2AA5C0u: goto label_2aa5c0;
            case 0x2AA5C4u: goto label_2aa5c4;
            case 0x2AA5C8u: goto label_2aa5c8;
            case 0x2AA5CCu: goto label_2aa5cc;
            case 0x2AA5D0u: goto label_2aa5d0;
            case 0x2AA5D4u: goto label_2aa5d4;
            case 0x2AA5D8u: goto label_2aa5d8;
            case 0x2AA5DCu: goto label_2aa5dc;
            case 0x2AA5E0u: goto label_2aa5e0;
            case 0x2AA5E4u: goto label_2aa5e4;
            case 0x2AA5E8u: goto label_2aa5e8;
            case 0x2AA5ECu: goto label_2aa5ec;
            case 0x2AA5F0u: goto label_2aa5f0;
            case 0x2AA5F4u: goto label_2aa5f4;
            case 0x2AA5F8u: goto label_2aa5f8;
            case 0x2AA5FCu: goto label_2aa5fc;
            case 0x2AA600u: goto label_2aa600;
            case 0x2AA604u: goto label_2aa604;
            case 0x2AA608u: goto label_2aa608;
            case 0x2AA60Cu: goto label_2aa60c;
            case 0x2AA610u: goto label_2aa610;
            case 0x2AA614u: goto label_2aa614;
            case 0x2AA618u: goto label_2aa618;
            case 0x2AA61Cu: goto label_2aa61c;
            case 0x2AA620u: goto label_2aa620;
            case 0x2AA624u: goto label_2aa624;
            case 0x2AA628u: goto label_2aa628;
            case 0x2AA62Cu: goto label_2aa62c;
            case 0x2AA630u: goto label_2aa630;
            case 0x2AA634u: goto label_2aa634;
            case 0x2AA638u: goto label_2aa638;
            case 0x2AA63Cu: goto label_2aa63c;
            case 0x2AA640u: goto label_2aa640;
            case 0x2AA644u: goto label_2aa644;
            case 0x2AA648u: goto label_2aa648;
            case 0x2AA64Cu: goto label_2aa64c;
            case 0x2AA650u: goto label_2aa650;
            case 0x2AA654u: goto label_2aa654;
            case 0x2AA658u: goto label_2aa658;
            case 0x2AA65Cu: goto label_2aa65c;
            case 0x2AA660u: goto label_2aa660;
            case 0x2AA664u: goto label_2aa664;
            case 0x2AA668u: goto label_2aa668;
            case 0x2AA66Cu: goto label_2aa66c;
            case 0x2AA670u: goto label_2aa670;
            case 0x2AA674u: goto label_2aa674;
            case 0x2AA678u: goto label_2aa678;
            case 0x2AA67Cu: goto label_2aa67c;
            case 0x2AA680u: goto label_2aa680;
            case 0x2AA684u: goto label_2aa684;
            case 0x2AA688u: goto label_2aa688;
            case 0x2AA68Cu: goto label_2aa68c;
            case 0x2AA690u: goto label_2aa690;
            case 0x2AA694u: goto label_2aa694;
            case 0x2AA698u: goto label_2aa698;
            case 0x2AA69Cu: goto label_2aa69c;
            case 0x2AA6A0u: goto label_2aa6a0;
            case 0x2AA6A4u: goto label_2aa6a4;
            case 0x2AA6A8u: goto label_2aa6a8;
            case 0x2AA6ACu: goto label_2aa6ac;
            case 0x2AA6B0u: goto label_2aa6b0;
            case 0x2AA6B4u: goto label_2aa6b4;
            case 0x2AA6B8u: goto label_2aa6b8;
            case 0x2AA6BCu: goto label_2aa6bc;
            case 0x2AA6C0u: goto label_2aa6c0;
            case 0x2AA6C4u: goto label_2aa6c4;
            case 0x2AA6C8u: goto label_2aa6c8;
            case 0x2AA6CCu: goto label_2aa6cc;
            case 0x2AA6D0u: goto label_2aa6d0;
            case 0x2AA6D4u: goto label_2aa6d4;
            case 0x2AA6D8u: goto label_2aa6d8;
            case 0x2AA6DCu: goto label_2aa6dc;
            case 0x2AA6E0u: goto label_2aa6e0;
            case 0x2AA6E4u: goto label_2aa6e4;
            case 0x2AA6E8u: goto label_2aa6e8;
            case 0x2AA6ECu: goto label_2aa6ec;
            case 0x2AA6F0u: goto label_2aa6f0;
            case 0x2AA6F4u: goto label_2aa6f4;
            case 0x2AA6F8u: goto label_2aa6f8;
            case 0x2AA6FCu: goto label_2aa6fc;
            case 0x2AA700u: goto label_2aa700;
            case 0x2AA704u: goto label_2aa704;
            case 0x2AA708u: goto label_2aa708;
            case 0x2AA70Cu: goto label_2aa70c;
            case 0x2AA710u: goto label_2aa710;
            case 0x2AA714u: goto label_2aa714;
            case 0x2AA718u: goto label_2aa718;
            case 0x2AA71Cu: goto label_2aa71c;
            case 0x2AA720u: goto label_2aa720;
            case 0x2AA724u: goto label_2aa724;
            case 0x2AA728u: goto label_2aa728;
            case 0x2AA72Cu: goto label_2aa72c;
            case 0x2AA730u: goto label_2aa730;
            case 0x2AA734u: goto label_2aa734;
            case 0x2AA738u: goto label_2aa738;
            case 0x2AA73Cu: goto label_2aa73c;
            case 0x2AA740u: goto label_2aa740;
            case 0x2AA744u: goto label_2aa744;
            case 0x2AA748u: goto label_2aa748;
            case 0x2AA74Cu: goto label_2aa74c;
            case 0x2AA750u: goto label_2aa750;
            case 0x2AA754u: goto label_2aa754;
            case 0x2AA758u: goto label_2aa758;
            case 0x2AA75Cu: goto label_2aa75c;
            case 0x2AA760u: goto label_2aa760;
            case 0x2AA764u: goto label_2aa764;
            case 0x2AA768u: goto label_2aa768;
            case 0x2AA76Cu: goto label_2aa76c;
            case 0x2AA770u: goto label_2aa770;
            case 0x2AA774u: goto label_2aa774;
            case 0x2AA778u: goto label_2aa778;
            case 0x2AA77Cu: goto label_2aa77c;
            case 0x2AA780u: goto label_2aa780;
            case 0x2AA784u: goto label_2aa784;
            case 0x2AA788u: goto label_2aa788;
            case 0x2AA78Cu: goto label_2aa78c;
            case 0x2AA790u: goto label_2aa790;
            case 0x2AA794u: goto label_2aa794;
            case 0x2AA798u: goto label_2aa798;
            case 0x2AA79Cu: goto label_2aa79c;
            case 0x2AA7A0u: goto label_2aa7a0;
            case 0x2AA7A4u: goto label_2aa7a4;
            case 0x2AA7A8u: goto label_2aa7a8;
            case 0x2AA7ACu: goto label_2aa7ac;
            case 0x2AA7B0u: goto label_2aa7b0;
            case 0x2AA7B4u: goto label_2aa7b4;
            case 0x2AA7B8u: goto label_2aa7b8;
            case 0x2AA7BCu: goto label_2aa7bc;
            case 0x2AA7C0u: goto label_2aa7c0;
            case 0x2AA7C4u: goto label_2aa7c4;
            case 0x2AA7C8u: goto label_2aa7c8;
            case 0x2AA7CCu: goto label_2aa7cc;
            case 0x2AA7D0u: goto label_2aa7d0;
            case 0x2AA7D4u: goto label_2aa7d4;
            case 0x2AA7D8u: goto label_2aa7d8;
            case 0x2AA7DCu: goto label_2aa7dc;
            case 0x2AA7E0u: goto label_2aa7e0;
            case 0x2AA7E4u: goto label_2aa7e4;
            case 0x2AA7E8u: goto label_2aa7e8;
            case 0x2AA7ECu: goto label_2aa7ec;
            case 0x2AA7F0u: goto label_2aa7f0;
            case 0x2AA7F4u: goto label_2aa7f4;
            case 0x2AA7F8u: goto label_2aa7f8;
            case 0x2AA7FCu: goto label_2aa7fc;
            case 0x2AA800u: goto label_2aa800;
            case 0x2AA804u: goto label_2aa804;
            case 0x2AA808u: goto label_2aa808;
            case 0x2AA80Cu: goto label_2aa80c;
            case 0x2AA810u: goto label_2aa810;
            case 0x2AA814u: goto label_2aa814;
            case 0x2AA818u: goto label_2aa818;
            case 0x2AA81Cu: goto label_2aa81c;
            case 0x2AA820u: goto label_2aa820;
            case 0x2AA824u: goto label_2aa824;
            case 0x2AA828u: goto label_2aa828;
            case 0x2AA82Cu: goto label_2aa82c;
            case 0x2AA830u: goto label_2aa830;
            case 0x2AA834u: goto label_2aa834;
            case 0x2AA838u: goto label_2aa838;
            case 0x2AA83Cu: goto label_2aa83c;
            case 0x2AA840u: goto label_2aa840;
            case 0x2AA844u: goto label_2aa844;
            case 0x2AA848u: goto label_2aa848;
            case 0x2AA84Cu: goto label_2aa84c;
            case 0x2AA850u: goto label_2aa850;
            case 0x2AA854u: goto label_2aa854;
            case 0x2AA858u: goto label_2aa858;
            case 0x2AA85Cu: goto label_2aa85c;
            case 0x2AA860u: goto label_2aa860;
            case 0x2AA864u: goto label_2aa864;
            case 0x2AA868u: goto label_2aa868;
            case 0x2AA86Cu: goto label_2aa86c;
            case 0x2AA870u: goto label_2aa870;
            case 0x2AA874u: goto label_2aa874;
            case 0x2AA878u: goto label_2aa878;
            case 0x2AA87Cu: goto label_2aa87c;
            case 0x2AA880u: goto label_2aa880;
            case 0x2AA884u: goto label_2aa884;
            case 0x2AA888u: goto label_2aa888;
            case 0x2AA88Cu: goto label_2aa88c;
            case 0x2AA890u: goto label_2aa890;
            case 0x2AA894u: goto label_2aa894;
            case 0x2AA898u: goto label_2aa898;
            case 0x2AA89Cu: goto label_2aa89c;
            case 0x2AA8A0u: goto label_2aa8a0;
            case 0x2AA8A4u: goto label_2aa8a4;
            case 0x2AA8A8u: goto label_2aa8a8;
            case 0x2AA8ACu: goto label_2aa8ac;
            case 0x2AA8B0u: goto label_2aa8b0;
            case 0x2AA8B4u: goto label_2aa8b4;
            case 0x2AA8B8u: goto label_2aa8b8;
            case 0x2AA8BCu: goto label_2aa8bc;
            case 0x2AA8C0u: goto label_2aa8c0;
            case 0x2AA8C4u: goto label_2aa8c4;
            case 0x2AA8C8u: goto label_2aa8c8;
            case 0x2AA8CCu: goto label_2aa8cc;
            default: break;
        }
        return;
    }
label_fallthrough_0x2aa8c8:
    ctx->pc = 0x2AA8D0u;
}
