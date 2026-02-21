#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_camera
// Address: 0x272a68 - 0x2732e0
void move_camera_0x272a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x272a68u;

label_272a68:
    // 0x272a68: 0x27bdffa0
    ctx->pc = 0x272a68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_272a6c:
    // 0x272a6c: 0xffbf0050
    ctx->pc = 0x272a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_272a70:
    // 0x272a70: 0xffb20040
    ctx->pc = 0x272a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_272a74:
    // 0x272a74: 0xffb10030
    ctx->pc = 0x272a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_272a78:
    // 0x272a78: 0xffb00020
    ctx->pc = 0x272a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_272a7c:
    // 0x272a7c: 0x80902d
    ctx->pc = 0x272a7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_272a80:
    // 0x272a80: 0x240301a0
    ctx->pc = 0x272a80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
label_272a84:
    // 0x272a84: 0x2431818
    ctx->pc = 0x272a84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_272a88:
    // 0x272a88: 0x3c020034
    ctx->pc = 0x272a88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_272a8c:
    // 0x272a8c: 0x2442eb60
    ctx->pc = 0x272a8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
label_272a90:
    // 0x272a90: 0x628821
    ctx->pc = 0x272a90u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_272a94:
    // 0x272a94: 0x8e220100
    ctx->pc = 0x272a94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_272a98:
    // 0x272a98: 0x10400004
label_272a9c:
    if (ctx->pc == 0x272A9Cu) {
        ctx->pc = 0x272A9Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->pc = 0x272AA0u;
        goto label_272aa0;
    }
    ctx->pc = 0x272A98u;
    {
        const bool branch_taken_0x272a98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x272A9Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 260)));
        if (branch_taken_0x272a98) {
            ctx->pc = 0x272AACu;
            goto label_272aac;
        }
    }
    ctx->pc = 0x272AA0u;
label_272aa0:
    // 0x272aa0: 0x8c420060
    ctx->pc = 0x272aa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_272aa4:
    // 0x272aa4: 0x50400001
label_272aa8:
    if (ctx->pc == 0x272AA8u) {
        ctx->pc = 0x272AA8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
        ctx->pc = 0x272AACu;
        goto label_272aac;
    }
    ctx->pc = 0x272AA4u;
    {
        const bool branch_taken_0x272aa4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x272aa4) {
            ctx->pc = 0x272AA8u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
            ctx->pc = 0x272AACu;
            goto label_272aac;
        }
    }
    ctx->pc = 0x272AACu;
label_272aac:
    // 0x272aac: 0x8e220124
    ctx->pc = 0x272aacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_272ab0:
    // 0x272ab0: 0x10400004
label_272ab4:
    if (ctx->pc == 0x272AB4u) {
        ctx->pc = 0x272AB8u;
        goto label_272ab8;
    }
    ctx->pc = 0x272AB0u;
    {
        const bool branch_taken_0x272ab0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x272ab0) {
            ctx->pc = 0x272AC4u;
            goto label_272ac4;
        }
    }
    ctx->pc = 0x272AB8u;
label_272ab8:
    // 0x272ab8: 0x8c420060
    ctx->pc = 0x272ab8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_272abc:
    // 0x272abc: 0x50400001
label_272ac0:
    if (ctx->pc == 0x272AC0u) {
        ctx->pc = 0x272AC0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
        ctx->pc = 0x272AC4u;
        goto label_272ac4;
    }
    ctx->pc = 0x272ABCu;
    {
        const bool branch_taken_0x272abc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x272abc) {
            ctx->pc = 0x272AC0u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
            ctx->pc = 0x272AC4u;
            goto label_272ac4;
        }
    }
    ctx->pc = 0x272AC4u;
label_272ac4:
    // 0x272ac4: 0x520001a6
label_272ac8:
    if (ctx->pc == 0x272AC8u) {
        ctx->pc = 0x272AC8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 248)));
        ctx->pc = 0x272ACCu;
        goto label_272acc;
    }
    ctx->pc = 0x272AC4u;
    {
        const bool branch_taken_0x272ac4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x272ac4) {
            ctx->pc = 0x272AC8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 248)));
            ctx->pc = 0x273160u;
            goto label_273160;
        }
    }
    ctx->pc = 0x272ACCu;
label_272acc:
    // 0x272acc: 0x60001fe
label_272ad0:
    if (ctx->pc == 0x272AD0u) {
        ctx->pc = 0x272AD0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 11));
        ctx->pc = 0x272AD4u;
        goto label_272ad4;
    }
    ctx->pc = 0x272ACCu;
    {
        const bool branch_taken_0x272acc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x272AD0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 11));
        if (branch_taken_0x272acc) {
            ctx->pc = 0x2732C8u;
            goto label_2732c8;
        }
    }
    ctx->pc = 0x272AD4u;
label_272ad4:
    // 0x272ad4: 0x104001fd
label_272ad8:
    if (ctx->pc == 0x272AD8u) {
        ctx->pc = 0x272AD8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x272ADCu;
        goto label_272adc;
    }
    ctx->pc = 0x272AD4u;
    {
        const bool branch_taken_0x272ad4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x272AD8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x272ad4) {
            ctx->pc = 0x2732CCu;
            goto label_2732cc;
        }
    }
    ctx->pc = 0x272ADCu;
label_272adc:
    // 0x272adc: 0x8e2300f8
    ctx->pc = 0x272adcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_272ae0:
    // 0x272ae0: 0x2c62000d
    ctx->pc = 0x272ae0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 13));
label_272ae4:
    // 0x272ae4: 0x104001f9
label_272ae8:
    if (ctx->pc == 0x272AE8u) {
        ctx->pc = 0x272AE8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x272AECu;
        goto label_272aec;
    }
    ctx->pc = 0x272AE4u;
    {
        const bool branch_taken_0x272ae4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x272AE8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x272ae4) {
            ctx->pc = 0x2732CCu;
            goto label_2732cc;
        }
    }
    ctx->pc = 0x272AECu;
label_272aec:
    // 0x272aec: 0x2442a6f0
    ctx->pc = 0x272aecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944496));
label_272af0:
    // 0x272af0: 0x31880
    ctx->pc = 0x272af0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_272af4:
    // 0x272af4: 0x621821
    ctx->pc = 0x272af4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_272af8:
    // 0x272af8: 0x8c620000
    ctx->pc = 0x272af8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_272afc:
    // 0x272afc: 0x400008
label_272b00:
    if (ctx->pc == 0x272B00u) {
        ctx->pc = 0x272B04u;
        goto label_272b04;
    }
    ctx->pc = 0x272AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x272A68u: goto label_272a68;
            case 0x272A6Cu: goto label_272a6c;
            case 0x272A70u: goto label_272a70;
            case 0x272A74u: goto label_272a74;
            case 0x272A78u: goto label_272a78;
            case 0x272A7Cu: goto label_272a7c;
            case 0x272A80u: goto label_272a80;
            case 0x272A84u: goto label_272a84;
            case 0x272A88u: goto label_272a88;
            case 0x272A8Cu: goto label_272a8c;
            case 0x272A90u: goto label_272a90;
            case 0x272A94u: goto label_272a94;
            case 0x272A98u: goto label_272a98;
            case 0x272A9Cu: goto label_272a9c;
            case 0x272AA0u: goto label_272aa0;
            case 0x272AA4u: goto label_272aa4;
            case 0x272AA8u: goto label_272aa8;
            case 0x272AACu: goto label_272aac;
            case 0x272AB0u: goto label_272ab0;
            case 0x272AB4u: goto label_272ab4;
            case 0x272AB8u: goto label_272ab8;
            case 0x272ABCu: goto label_272abc;
            case 0x272AC0u: goto label_272ac0;
            case 0x272AC4u: goto label_272ac4;
            case 0x272AC8u: goto label_272ac8;
            case 0x272ACCu: goto label_272acc;
            case 0x272AD0u: goto label_272ad0;
            case 0x272AD4u: goto label_272ad4;
            case 0x272AD8u: goto label_272ad8;
            case 0x272ADCu: goto label_272adc;
            case 0x272AE0u: goto label_272ae0;
            case 0x272AE4u: goto label_272ae4;
            case 0x272AE8u: goto label_272ae8;
            case 0x272AECu: goto label_272aec;
            case 0x272AF0u: goto label_272af0;
            case 0x272AF4u: goto label_272af4;
            case 0x272AF8u: goto label_272af8;
            case 0x272AFCu: goto label_272afc;
            case 0x272B00u: goto label_272b00;
            case 0x272B04u: goto label_272b04;
            case 0x272B08u: goto label_272b08;
            case 0x272B0Cu: goto label_272b0c;
            case 0x272B10u: goto label_272b10;
            case 0x272B14u: goto label_272b14;
            case 0x272B18u: goto label_272b18;
            case 0x272B1Cu: goto label_272b1c;
            case 0x272B20u: goto label_272b20;
            case 0x272B24u: goto label_272b24;
            case 0x272B28u: goto label_272b28;
            case 0x272B2Cu: goto label_272b2c;
            case 0x272B30u: goto label_272b30;
            case 0x272B34u: goto label_272b34;
            case 0x272B38u: goto label_272b38;
            case 0x272B3Cu: goto label_272b3c;
            case 0x272B40u: goto label_272b40;
            case 0x272B44u: goto label_272b44;
            case 0x272B48u: goto label_272b48;
            case 0x272B4Cu: goto label_272b4c;
            case 0x272B50u: goto label_272b50;
            case 0x272B54u: goto label_272b54;
            case 0x272B58u: goto label_272b58;
            case 0x272B5Cu: goto label_272b5c;
            case 0x272B60u: goto label_272b60;
            case 0x272B64u: goto label_272b64;
            case 0x272B68u: goto label_272b68;
            case 0x272B6Cu: goto label_272b6c;
            case 0x272B70u: goto label_272b70;
            case 0x272B74u: goto label_272b74;
            case 0x272B78u: goto label_272b78;
            case 0x272B7Cu: goto label_272b7c;
            case 0x272B80u: goto label_272b80;
            case 0x272B84u: goto label_272b84;
            case 0x272B88u: goto label_272b88;
            case 0x272B8Cu: goto label_272b8c;
            case 0x272B90u: goto label_272b90;
            case 0x272B94u: goto label_272b94;
            case 0x272B98u: goto label_272b98;
            case 0x272B9Cu: goto label_272b9c;
            case 0x272BA0u: goto label_272ba0;
            case 0x272BA4u: goto label_272ba4;
            case 0x272BA8u: goto label_272ba8;
            case 0x272BACu: goto label_272bac;
            case 0x272BB0u: goto label_272bb0;
            case 0x272BB4u: goto label_272bb4;
            case 0x272BB8u: goto label_272bb8;
            case 0x272BBCu: goto label_272bbc;
            case 0x272BC0u: goto label_272bc0;
            case 0x272BC4u: goto label_272bc4;
            case 0x272BC8u: goto label_272bc8;
            case 0x272BCCu: goto label_272bcc;
            case 0x272BD0u: goto label_272bd0;
            case 0x272BD4u: goto label_272bd4;
            case 0x272BD8u: goto label_272bd8;
            case 0x272BDCu: goto label_272bdc;
            case 0x272BE0u: goto label_272be0;
            case 0x272BE4u: goto label_272be4;
            case 0x272BE8u: goto label_272be8;
            case 0x272BECu: goto label_272bec;
            case 0x272BF0u: goto label_272bf0;
            case 0x272BF4u: goto label_272bf4;
            case 0x272BF8u: goto label_272bf8;
            case 0x272BFCu: goto label_272bfc;
            case 0x272C00u: goto label_272c00;
            case 0x272C04u: goto label_272c04;
            case 0x272C08u: goto label_272c08;
            case 0x272C0Cu: goto label_272c0c;
            case 0x272C10u: goto label_272c10;
            case 0x272C14u: goto label_272c14;
            case 0x272C18u: goto label_272c18;
            case 0x272C1Cu: goto label_272c1c;
            case 0x272C20u: goto label_272c20;
            case 0x272C24u: goto label_272c24;
            case 0x272C28u: goto label_272c28;
            case 0x272C2Cu: goto label_272c2c;
            case 0x272C30u: goto label_272c30;
            case 0x272C34u: goto label_272c34;
            case 0x272C38u: goto label_272c38;
            case 0x272C3Cu: goto label_272c3c;
            case 0x272C40u: goto label_272c40;
            case 0x272C44u: goto label_272c44;
            case 0x272C48u: goto label_272c48;
            case 0x272C4Cu: goto label_272c4c;
            case 0x272C50u: goto label_272c50;
            case 0x272C54u: goto label_272c54;
            case 0x272C58u: goto label_272c58;
            case 0x272C5Cu: goto label_272c5c;
            case 0x272C60u: goto label_272c60;
            case 0x272C64u: goto label_272c64;
            case 0x272C68u: goto label_272c68;
            case 0x272C6Cu: goto label_272c6c;
            case 0x272C70u: goto label_272c70;
            case 0x272C74u: goto label_272c74;
            case 0x272C78u: goto label_272c78;
            case 0x272C7Cu: goto label_272c7c;
            case 0x272C80u: goto label_272c80;
            case 0x272C84u: goto label_272c84;
            case 0x272C88u: goto label_272c88;
            case 0x272C8Cu: goto label_272c8c;
            case 0x272C90u: goto label_272c90;
            case 0x272C94u: goto label_272c94;
            case 0x272C98u: goto label_272c98;
            case 0x272C9Cu: goto label_272c9c;
            case 0x272CA0u: goto label_272ca0;
            case 0x272CA4u: goto label_272ca4;
            case 0x272CA8u: goto label_272ca8;
            case 0x272CACu: goto label_272cac;
            case 0x272CB0u: goto label_272cb0;
            case 0x272CB4u: goto label_272cb4;
            case 0x272CB8u: goto label_272cb8;
            case 0x272CBCu: goto label_272cbc;
            case 0x272CC0u: goto label_272cc0;
            case 0x272CC4u: goto label_272cc4;
            case 0x272CC8u: goto label_272cc8;
            case 0x272CCCu: goto label_272ccc;
            case 0x272CD0u: goto label_272cd0;
            case 0x272CD4u: goto label_272cd4;
            case 0x272CD8u: goto label_272cd8;
            case 0x272CDCu: goto label_272cdc;
            case 0x272CE0u: goto label_272ce0;
            case 0x272CE4u: goto label_272ce4;
            case 0x272CE8u: goto label_272ce8;
            case 0x272CECu: goto label_272cec;
            case 0x272CF0u: goto label_272cf0;
            case 0x272CF4u: goto label_272cf4;
            case 0x272CF8u: goto label_272cf8;
            case 0x272CFCu: goto label_272cfc;
            case 0x272D00u: goto label_272d00;
            case 0x272D04u: goto label_272d04;
            case 0x272D08u: goto label_272d08;
            case 0x272D0Cu: goto label_272d0c;
            case 0x272D10u: goto label_272d10;
            case 0x272D14u: goto label_272d14;
            case 0x272D18u: goto label_272d18;
            case 0x272D1Cu: goto label_272d1c;
            case 0x272D20u: goto label_272d20;
            case 0x272D24u: goto label_272d24;
            case 0x272D28u: goto label_272d28;
            case 0x272D2Cu: goto label_272d2c;
            case 0x272D30u: goto label_272d30;
            case 0x272D34u: goto label_272d34;
            case 0x272D38u: goto label_272d38;
            case 0x272D3Cu: goto label_272d3c;
            case 0x272D40u: goto label_272d40;
            case 0x272D44u: goto label_272d44;
            case 0x272D48u: goto label_272d48;
            case 0x272D4Cu: goto label_272d4c;
            case 0x272D50u: goto label_272d50;
            case 0x272D54u: goto label_272d54;
            case 0x272D58u: goto label_272d58;
            case 0x272D5Cu: goto label_272d5c;
            case 0x272D60u: goto label_272d60;
            case 0x272D64u: goto label_272d64;
            case 0x272D68u: goto label_272d68;
            case 0x272D6Cu: goto label_272d6c;
            case 0x272D70u: goto label_272d70;
            case 0x272D74u: goto label_272d74;
            case 0x272D78u: goto label_272d78;
            case 0x272D7Cu: goto label_272d7c;
            case 0x272D80u: goto label_272d80;
            case 0x272D84u: goto label_272d84;
            case 0x272D88u: goto label_272d88;
            case 0x272D8Cu: goto label_272d8c;
            case 0x272D90u: goto label_272d90;
            case 0x272D94u: goto label_272d94;
            case 0x272D98u: goto label_272d98;
            case 0x272D9Cu: goto label_272d9c;
            case 0x272DA0u: goto label_272da0;
            case 0x272DA4u: goto label_272da4;
            case 0x272DA8u: goto label_272da8;
            case 0x272DACu: goto label_272dac;
            case 0x272DB0u: goto label_272db0;
            case 0x272DB4u: goto label_272db4;
            case 0x272DB8u: goto label_272db8;
            case 0x272DBCu: goto label_272dbc;
            case 0x272DC0u: goto label_272dc0;
            case 0x272DC4u: goto label_272dc4;
            case 0x272DC8u: goto label_272dc8;
            case 0x272DCCu: goto label_272dcc;
            case 0x272DD0u: goto label_272dd0;
            case 0x272DD4u: goto label_272dd4;
            case 0x272DD8u: goto label_272dd8;
            case 0x272DDCu: goto label_272ddc;
            case 0x272DE0u: goto label_272de0;
            case 0x272DE4u: goto label_272de4;
            case 0x272DE8u: goto label_272de8;
            case 0x272DECu: goto label_272dec;
            case 0x272DF0u: goto label_272df0;
            case 0x272DF4u: goto label_272df4;
            case 0x272DF8u: goto label_272df8;
            case 0x272DFCu: goto label_272dfc;
            case 0x272E00u: goto label_272e00;
            case 0x272E04u: goto label_272e04;
            case 0x272E08u: goto label_272e08;
            case 0x272E0Cu: goto label_272e0c;
            case 0x272E10u: goto label_272e10;
            case 0x272E14u: goto label_272e14;
            case 0x272E18u: goto label_272e18;
            case 0x272E1Cu: goto label_272e1c;
            case 0x272E20u: goto label_272e20;
            case 0x272E24u: goto label_272e24;
            case 0x272E28u: goto label_272e28;
            case 0x272E2Cu: goto label_272e2c;
            case 0x272E30u: goto label_272e30;
            case 0x272E34u: goto label_272e34;
            case 0x272E38u: goto label_272e38;
            case 0x272E3Cu: goto label_272e3c;
            case 0x272E40u: goto label_272e40;
            case 0x272E44u: goto label_272e44;
            case 0x272E48u: goto label_272e48;
            case 0x272E4Cu: goto label_272e4c;
            case 0x272E50u: goto label_272e50;
            case 0x272E54u: goto label_272e54;
            case 0x272E58u: goto label_272e58;
            case 0x272E5Cu: goto label_272e5c;
            case 0x272E60u: goto label_272e60;
            case 0x272E64u: goto label_272e64;
            case 0x272E68u: goto label_272e68;
            case 0x272E6Cu: goto label_272e6c;
            case 0x272E70u: goto label_272e70;
            case 0x272E74u: goto label_272e74;
            case 0x272E78u: goto label_272e78;
            case 0x272E7Cu: goto label_272e7c;
            case 0x272E80u: goto label_272e80;
            case 0x272E84u: goto label_272e84;
            case 0x272E88u: goto label_272e88;
            case 0x272E8Cu: goto label_272e8c;
            case 0x272E90u: goto label_272e90;
            case 0x272E94u: goto label_272e94;
            case 0x272E98u: goto label_272e98;
            case 0x272E9Cu: goto label_272e9c;
            case 0x272EA0u: goto label_272ea0;
            case 0x272EA4u: goto label_272ea4;
            case 0x272EA8u: goto label_272ea8;
            case 0x272EACu: goto label_272eac;
            case 0x272EB0u: goto label_272eb0;
            case 0x272EB4u: goto label_272eb4;
            case 0x272EB8u: goto label_272eb8;
            case 0x272EBCu: goto label_272ebc;
            case 0x272EC0u: goto label_272ec0;
            case 0x272EC4u: goto label_272ec4;
            case 0x272EC8u: goto label_272ec8;
            case 0x272ECCu: goto label_272ecc;
            case 0x272ED0u: goto label_272ed0;
            case 0x272ED4u: goto label_272ed4;
            case 0x272ED8u: goto label_272ed8;
            case 0x272EDCu: goto label_272edc;
            case 0x272EE0u: goto label_272ee0;
            case 0x272EE4u: goto label_272ee4;
            case 0x272EE8u: goto label_272ee8;
            case 0x272EECu: goto label_272eec;
            case 0x272EF0u: goto label_272ef0;
            case 0x272EF4u: goto label_272ef4;
            case 0x272EF8u: goto label_272ef8;
            case 0x272EFCu: goto label_272efc;
            case 0x272F00u: goto label_272f00;
            case 0x272F04u: goto label_272f04;
            case 0x272F08u: goto label_272f08;
            case 0x272F0Cu: goto label_272f0c;
            case 0x272F10u: goto label_272f10;
            case 0x272F14u: goto label_272f14;
            case 0x272F18u: goto label_272f18;
            case 0x272F1Cu: goto label_272f1c;
            case 0x272F20u: goto label_272f20;
            case 0x272F24u: goto label_272f24;
            case 0x272F28u: goto label_272f28;
            case 0x272F2Cu: goto label_272f2c;
            case 0x272F30u: goto label_272f30;
            case 0x272F34u: goto label_272f34;
            case 0x272F38u: goto label_272f38;
            case 0x272F3Cu: goto label_272f3c;
            case 0x272F40u: goto label_272f40;
            case 0x272F44u: goto label_272f44;
            case 0x272F48u: goto label_272f48;
            case 0x272F4Cu: goto label_272f4c;
            case 0x272F50u: goto label_272f50;
            case 0x272F54u: goto label_272f54;
            case 0x272F58u: goto label_272f58;
            case 0x272F5Cu: goto label_272f5c;
            case 0x272F60u: goto label_272f60;
            case 0x272F64u: goto label_272f64;
            case 0x272F68u: goto label_272f68;
            case 0x272F6Cu: goto label_272f6c;
            case 0x272F70u: goto label_272f70;
            case 0x272F74u: goto label_272f74;
            case 0x272F78u: goto label_272f78;
            case 0x272F7Cu: goto label_272f7c;
            case 0x272F80u: goto label_272f80;
            case 0x272F84u: goto label_272f84;
            case 0x272F88u: goto label_272f88;
            case 0x272F8Cu: goto label_272f8c;
            case 0x272F90u: goto label_272f90;
            case 0x272F94u: goto label_272f94;
            case 0x272F98u: goto label_272f98;
            case 0x272F9Cu: goto label_272f9c;
            case 0x272FA0u: goto label_272fa0;
            case 0x272FA4u: goto label_272fa4;
            case 0x272FA8u: goto label_272fa8;
            case 0x272FACu: goto label_272fac;
            case 0x272FB0u: goto label_272fb0;
            case 0x272FB4u: goto label_272fb4;
            case 0x272FB8u: goto label_272fb8;
            case 0x272FBCu: goto label_272fbc;
            case 0x272FC0u: goto label_272fc0;
            case 0x272FC4u: goto label_272fc4;
            case 0x272FC8u: goto label_272fc8;
            case 0x272FCCu: goto label_272fcc;
            case 0x272FD0u: goto label_272fd0;
            case 0x272FD4u: goto label_272fd4;
            case 0x272FD8u: goto label_272fd8;
            case 0x272FDCu: goto label_272fdc;
            case 0x272FE0u: goto label_272fe0;
            case 0x272FE4u: goto label_272fe4;
            case 0x272FE8u: goto label_272fe8;
            case 0x272FECu: goto label_272fec;
            case 0x272FF0u: goto label_272ff0;
            case 0x272FF4u: goto label_272ff4;
            case 0x272FF8u: goto label_272ff8;
            case 0x272FFCu: goto label_272ffc;
            case 0x273000u: goto label_273000;
            case 0x273004u: goto label_273004;
            case 0x273008u: goto label_273008;
            case 0x27300Cu: goto label_27300c;
            case 0x273010u: goto label_273010;
            case 0x273014u: goto label_273014;
            case 0x273018u: goto label_273018;
            case 0x27301Cu: goto label_27301c;
            case 0x273020u: goto label_273020;
            case 0x273024u: goto label_273024;
            case 0x273028u: goto label_273028;
            case 0x27302Cu: goto label_27302c;
            case 0x273030u: goto label_273030;
            case 0x273034u: goto label_273034;
            case 0x273038u: goto label_273038;
            case 0x27303Cu: goto label_27303c;
            case 0x273040u: goto label_273040;
            case 0x273044u: goto label_273044;
            case 0x273048u: goto label_273048;
            case 0x27304Cu: goto label_27304c;
            case 0x273050u: goto label_273050;
            case 0x273054u: goto label_273054;
            case 0x273058u: goto label_273058;
            case 0x27305Cu: goto label_27305c;
            case 0x273060u: goto label_273060;
            case 0x273064u: goto label_273064;
            case 0x273068u: goto label_273068;
            case 0x27306Cu: goto label_27306c;
            case 0x273070u: goto label_273070;
            case 0x273074u: goto label_273074;
            case 0x273078u: goto label_273078;
            case 0x27307Cu: goto label_27307c;
            case 0x273080u: goto label_273080;
            case 0x273084u: goto label_273084;
            case 0x273088u: goto label_273088;
            case 0x27308Cu: goto label_27308c;
            case 0x273090u: goto label_273090;
            case 0x273094u: goto label_273094;
            case 0x273098u: goto label_273098;
            case 0x27309Cu: goto label_27309c;
            case 0x2730A0u: goto label_2730a0;
            case 0x2730A4u: goto label_2730a4;
            case 0x2730A8u: goto label_2730a8;
            case 0x2730ACu: goto label_2730ac;
            case 0x2730B0u: goto label_2730b0;
            case 0x2730B4u: goto label_2730b4;
            case 0x2730B8u: goto label_2730b8;
            case 0x2730BCu: goto label_2730bc;
            case 0x2730C0u: goto label_2730c0;
            case 0x2730C4u: goto label_2730c4;
            case 0x2730C8u: goto label_2730c8;
            case 0x2730CCu: goto label_2730cc;
            case 0x2730D0u: goto label_2730d0;
            case 0x2730D4u: goto label_2730d4;
            case 0x2730D8u: goto label_2730d8;
            case 0x2730DCu: goto label_2730dc;
            case 0x2730E0u: goto label_2730e0;
            case 0x2730E4u: goto label_2730e4;
            case 0x2730E8u: goto label_2730e8;
            case 0x2730ECu: goto label_2730ec;
            case 0x2730F0u: goto label_2730f0;
            case 0x2730F4u: goto label_2730f4;
            case 0x2730F8u: goto label_2730f8;
            case 0x2730FCu: goto label_2730fc;
            case 0x273100u: goto label_273100;
            case 0x273104u: goto label_273104;
            case 0x273108u: goto label_273108;
            case 0x27310Cu: goto label_27310c;
            case 0x273110u: goto label_273110;
            case 0x273114u: goto label_273114;
            case 0x273118u: goto label_273118;
            case 0x27311Cu: goto label_27311c;
            case 0x273120u: goto label_273120;
            case 0x273124u: goto label_273124;
            case 0x273128u: goto label_273128;
            case 0x27312Cu: goto label_27312c;
            case 0x273130u: goto label_273130;
            case 0x273134u: goto label_273134;
            case 0x273138u: goto label_273138;
            case 0x27313Cu: goto label_27313c;
            case 0x273140u: goto label_273140;
            case 0x273144u: goto label_273144;
            case 0x273148u: goto label_273148;
            case 0x27314Cu: goto label_27314c;
            case 0x273150u: goto label_273150;
            case 0x273154u: goto label_273154;
            case 0x273158u: goto label_273158;
            case 0x27315Cu: goto label_27315c;
            case 0x273160u: goto label_273160;
            case 0x273164u: goto label_273164;
            case 0x273168u: goto label_273168;
            case 0x27316Cu: goto label_27316c;
            case 0x273170u: goto label_273170;
            case 0x273174u: goto label_273174;
            case 0x273178u: goto label_273178;
            case 0x27317Cu: goto label_27317c;
            case 0x273180u: goto label_273180;
            case 0x273184u: goto label_273184;
            case 0x273188u: goto label_273188;
            case 0x27318Cu: goto label_27318c;
            case 0x273190u: goto label_273190;
            case 0x273194u: goto label_273194;
            case 0x273198u: goto label_273198;
            case 0x27319Cu: goto label_27319c;
            case 0x2731A0u: goto label_2731a0;
            case 0x2731A4u: goto label_2731a4;
            case 0x2731A8u: goto label_2731a8;
            case 0x2731ACu: goto label_2731ac;
            case 0x2731B0u: goto label_2731b0;
            case 0x2731B4u: goto label_2731b4;
            case 0x2731B8u: goto label_2731b8;
            case 0x2731BCu: goto label_2731bc;
            case 0x2731C0u: goto label_2731c0;
            case 0x2731C4u: goto label_2731c4;
            case 0x2731C8u: goto label_2731c8;
            case 0x2731CCu: goto label_2731cc;
            case 0x2731D0u: goto label_2731d0;
            case 0x2731D4u: goto label_2731d4;
            case 0x2731D8u: goto label_2731d8;
            case 0x2731DCu: goto label_2731dc;
            case 0x2731E0u: goto label_2731e0;
            case 0x2731E4u: goto label_2731e4;
            case 0x2731E8u: goto label_2731e8;
            case 0x2731ECu: goto label_2731ec;
            case 0x2731F0u: goto label_2731f0;
            case 0x2731F4u: goto label_2731f4;
            case 0x2731F8u: goto label_2731f8;
            case 0x2731FCu: goto label_2731fc;
            case 0x273200u: goto label_273200;
            case 0x273204u: goto label_273204;
            case 0x273208u: goto label_273208;
            case 0x27320Cu: goto label_27320c;
            case 0x273210u: goto label_273210;
            case 0x273214u: goto label_273214;
            case 0x273218u: goto label_273218;
            case 0x27321Cu: goto label_27321c;
            case 0x273220u: goto label_273220;
            case 0x273224u: goto label_273224;
            case 0x273228u: goto label_273228;
            case 0x27322Cu: goto label_27322c;
            case 0x273230u: goto label_273230;
            case 0x273234u: goto label_273234;
            case 0x273238u: goto label_273238;
            case 0x27323Cu: goto label_27323c;
            case 0x273240u: goto label_273240;
            case 0x273244u: goto label_273244;
            case 0x273248u: goto label_273248;
            case 0x27324Cu: goto label_27324c;
            case 0x273250u: goto label_273250;
            case 0x273254u: goto label_273254;
            case 0x273258u: goto label_273258;
            case 0x27325Cu: goto label_27325c;
            case 0x273260u: goto label_273260;
            case 0x273264u: goto label_273264;
            case 0x273268u: goto label_273268;
            case 0x27326Cu: goto label_27326c;
            case 0x273270u: goto label_273270;
            case 0x273274u: goto label_273274;
            case 0x273278u: goto label_273278;
            case 0x27327Cu: goto label_27327c;
            case 0x273280u: goto label_273280;
            case 0x273284u: goto label_273284;
            case 0x273288u: goto label_273288;
            case 0x27328Cu: goto label_27328c;
            case 0x273290u: goto label_273290;
            case 0x273294u: goto label_273294;
            case 0x273298u: goto label_273298;
            case 0x27329Cu: goto label_27329c;
            case 0x2732A0u: goto label_2732a0;
            case 0x2732A4u: goto label_2732a4;
            case 0x2732A8u: goto label_2732a8;
            case 0x2732ACu: goto label_2732ac;
            case 0x2732B0u: goto label_2732b0;
            case 0x2732B4u: goto label_2732b4;
            case 0x2732B8u: goto label_2732b8;
            case 0x2732BCu: goto label_2732bc;
            case 0x2732C0u: goto label_2732c0;
            case 0x2732C4u: goto label_2732c4;
            case 0x2732C8u: goto label_2732c8;
            case 0x2732CCu: goto label_2732cc;
            case 0x2732D0u: goto label_2732d0;
            case 0x2732D4u: goto label_2732d4;
            case 0x2732D8u: goto label_2732d8;
            case 0x2732DCu: goto label_2732dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x272B04u;
label_272b04:
    // 0x272b04: 0x8e2200d4
    ctx->pc = 0x272b04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_272b08:
    // 0x272b08: 0x14400039
label_272b0c:
    if (ctx->pc == 0x272B0Cu) {
        ctx->pc = 0x272B0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272B10u;
        goto label_272b10;
    }
    ctx->pc = 0x272B08u;
    {
        const bool branch_taken_0x272b08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x272B0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x272b08) {
            ctx->pc = 0x272BF0u;
            goto label_272bf0;
        }
    }
    ctx->pc = 0x272B10u;
label_272b10:
    // 0x272b10: 0xc62000d0
    ctx->pc = 0x272b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272b14:
    // 0x272b14: 0x3c014170
    ctx->pc = 0x272b14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
label_272b18:
    // 0x272b18: 0x44810800
    ctx->pc = 0x272b18u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_272b1c:
    // 0x272b1c: 0x46010034
    ctx->pc = 0x272b1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_272b20:
    // 0x272b20: 0x0
    ctx->pc = 0x272b20u;
    // NOP
label_272b24:
    // 0x272b24: 0x4502002a
label_272b28:
    if (ctx->pc == 0x272B28u) {
        ctx->pc = 0x272B28u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x272B2Cu;
        goto label_272b2c;
    }
    ctx->pc = 0x272B24u;
    {
        const bool branch_taken_0x272b24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x272b24) {
            ctx->pc = 0x272B28u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x272BD0u;
            goto label_272bd0;
        }
    }
    ctx->pc = 0x272B2Cu;
label_272b2c:
    // 0x272b2c: 0x46000841
    ctx->pc = 0x272b2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_272b30:
    // 0x272b30: 0x3c013daa
    ctx->pc = 0x272b30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15786 << 16));
label_272b34:
    // 0x272b34: 0x3421aaaa
    ctx->pc = 0x272b34u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 43690));
label_272b38:
    // 0x272b38: 0x44810000
    ctx->pc = 0x272b38u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_272b3c:
    // 0x272b3c: 0x46000842
    ctx->pc = 0x272b3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_272b40:
    // 0x272b40: 0x3c013e19
    ctx->pc = 0x272b40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15897 << 16));
label_272b44:
    // 0x272b44: 0x3421999a
    ctx->pc = 0x272b44u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
label_272b48:
    // 0x272b48: 0x44810000
    ctx->pc = 0x272b48u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_272b4c:
    // 0x272b4c: 0x46000834
    ctx->pc = 0x272b4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_272b50:
    // 0x272b50: 0x0
    ctx->pc = 0x272b50u;
    // NOP
label_272b54:
    // 0x272b54: 0x45030001
label_272b58:
    if (ctx->pc == 0x272B58u) {
        ctx->pc = 0x272B58u;
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x272B5Cu;
        goto label_272b5c;
    }
    ctx->pc = 0x272B54u;
    {
        const bool branch_taken_0x272b54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x272b54) {
            ctx->pc = 0x272B58u;
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x272B5Cu;
            goto label_272b5c;
        }
    }
    ctx->pc = 0x272B5Cu;
label_272b5c:
    // 0x272b5c: 0x3c030031
    ctx->pc = 0x272b5cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_272b60:
    // 0x272b60: 0x8c62ffbc
    ctx->pc = 0x272b60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_272b64:
    // 0x272b64: 0x4400005
label_272b68:
    if (ctx->pc == 0x272B68u) {
        ctx->pc = 0x272B68u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        ctx->pc = 0x272B6Cu;
        goto label_272b6c;
    }
    ctx->pc = 0x272B64u;
    {
        const bool branch_taken_0x272b64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x272B68u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x272b64) {
            ctx->pc = 0x272B7Cu;
            goto label_272b7c;
        }
    }
    ctx->pc = 0x272B6Cu;
label_272b6c:
    // 0x272b6c: 0x44820000
    ctx->pc = 0x272b6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_272b70:
    // 0x272b70: 0x46800020
    ctx->pc = 0x272b70u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_272b74:
    // 0x272b74: 0x10000009
label_272b78:
    if (ctx->pc == 0x272B78u) {
        ctx->pc = 0x272B78u;
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x272B7Cu;
        goto label_272b7c;
    }
    ctx->pc = 0x272B74u;
    {
        const bool branch_taken_0x272b74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x272B78u;
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x272b74) {
            ctx->pc = 0x272B9Cu;
            goto label_272b9c;
        }
    }
    ctx->pc = 0x272B7Cu;
label_272b7c:
    // 0x272b7c: 0x8c820000
    ctx->pc = 0x272b7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_272b80:
    // 0x272b80: 0x30430001
    ctx->pc = 0x272b80u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
label_272b84:
    // 0x272b84: 0x21042
    ctx->pc = 0x272b84u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_272b88:
    // 0x272b88: 0x621825
    ctx->pc = 0x272b88u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_272b8c:
    // 0x272b8c: 0x44830000
    ctx->pc = 0x272b8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_272b90:
    // 0x272b90: 0x46800020
    ctx->pc = 0x272b90u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_272b94:
    // 0x272b94: 0x46000000
    ctx->pc = 0x272b94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_272b98:
    // 0x272b98: 0x46000802
    ctx->pc = 0x272b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_272b9c:
    // 0x272b9c: 0xc62100d0
    ctx->pc = 0x272b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272ba0:
    // 0x272ba0: 0x46010000
    ctx->pc = 0x272ba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_272ba4:
    // 0x272ba4: 0x3c014170
    ctx->pc = 0x272ba4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
label_272ba8:
    // 0x272ba8: 0x44810800
    ctx->pc = 0x272ba8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_272bac:
    // 0x272bac: 0x46000836
    ctx->pc = 0x272bacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_272bb0:
    // 0x272bb0: 0x0
    ctx->pc = 0x272bb0u;
    // NOP
label_272bb4:
    // 0x272bb4: 0x45000002
label_272bb8:
    if (ctx->pc == 0x272BB8u) {
        ctx->pc = 0x272BB8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->pc = 0x272BBCu;
        goto label_272bbc;
    }
    ctx->pc = 0x272BB4u;
    {
        const bool branch_taken_0x272bb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x272BB8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        if (branch_taken_0x272bb4) {
            ctx->pc = 0x272BC0u;
            goto label_272bc0;
        }
    }
    ctx->pc = 0x272BBCu;
label_272bbc:
    // 0x272bbc: 0xe62100d0
    ctx->pc = 0x272bbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
label_272bc0:
    // 0x272bc0: 0x3c03003c
    ctx->pc = 0x272bc0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_272bc4:
    // 0x272bc4: 0x24020001
    ctx->pc = 0x272bc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_272bc8:
    // 0x272bc8: 0xac6238d4
    ctx->pc = 0x272bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14548), GPR_U32(ctx, 2));
label_272bcc:
    // 0x272bcc: 0xc62100d0
    ctx->pc = 0x272bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272bd0:
    // 0x272bd0: 0x3c014170
    ctx->pc = 0x272bd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
label_272bd4:
    // 0x272bd4: 0x44810000
    ctx->pc = 0x272bd4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_272bd8:
    // 0x272bd8: 0x46010036
    ctx->pc = 0x272bd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_272bdc:
    // 0x272bdc: 0x0
    ctx->pc = 0x272bdcu;
    // NOP
label_272be0:
    // 0x272be0: 0x45000002
label_272be4:
    if (ctx->pc == 0x272BE4u) {
        ctx->pc = 0x272BE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x272BE8u;
        goto label_272be8;
    }
    ctx->pc = 0x272BE0u;
    {
        const bool branch_taken_0x272be0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x272BE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x272be0) {
            ctx->pc = 0x272BECu;
            goto label_272bec;
        }
    }
    ctx->pc = 0x272BE8u;
label_272be8:
    // 0x272be8: 0xae2200d4
    ctx->pc = 0x272be8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
label_272bec:
    // 0x272bec: 0x240202d
    ctx->pc = 0x272becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272bf0:
    // 0x272bf0: 0xc09a106
label_272bf4:
    if (ctx->pc == 0x272BF4u) {
        ctx->pc = 0x272BF4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x272BF8u;
        goto label_272bf8;
    }
    ctx->pc = 0x272BF0u;
    SET_GPR_U32(ctx, 31, 0x272BF8u);
    ctx->pc = 0x272BF4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x268418u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_attn_pos_0x268418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272BF8u; }
    }
    if (ctx->pc != 0x272BF8u) { return; }
    ctx->pc = 0x272BF8u;
label_272bf8:
    // 0x272bf8: 0xc7a10010
    ctx->pc = 0x272bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272bfc:
    // 0x272bfc: 0xc6200140
    ctx->pc = 0x272bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272c00:
    // 0x272c00: 0x46000b01
    ctx->pc = 0x272c00u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_272c04:
    // 0x272c04: 0xe62c0160
    ctx->pc = 0x272c04u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 352), bits); }
label_272c08:
    // 0x272c08: 0xc7a20014
    ctx->pc = 0x272c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_272c0c:
    // 0x272c0c: 0xc6200144
    ctx->pc = 0x272c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272c10:
    // 0x272c10: 0x46001081
    ctx->pc = 0x272c10u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_272c14:
    // 0x272c14: 0xe6220164
    ctx->pc = 0x272c14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 356), bits); }
label_272c18:
    // 0x272c18: 0xc7a10018
    ctx->pc = 0x272c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272c1c:
    // 0x272c1c: 0xc6200148
    ctx->pc = 0x272c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272c20:
    // 0x272c20: 0x46000841
    ctx->pc = 0x272c20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_272c24:
    // 0x272c24: 0xe6210168
    ctx->pc = 0x272c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 360), bits); }
label_272c28:
    // 0x272c28: 0x460c6002
    ctx->pc = 0x272c28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_272c2c:
    // 0x272c2c: 0x46021082
    ctx->pc = 0x272c2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_272c30:
    // 0x272c30: 0x46020000
    ctx->pc = 0x272c30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_272c34:
    // 0x272c34: 0x46010842
    ctx->pc = 0x272c34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_272c38:
    // 0x272c38: 0x46010000
    ctx->pc = 0x272c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_272c3c:
    // 0x272c3c: 0x0
    ctx->pc = 0x272c3cu;
    // NOP
label_272c40:
    // 0x272c40: 0x0
    ctx->pc = 0x272c40u;
    // NOP
label_272c44:
    // 0x272c44: 0x46000004
    ctx->pc = 0x272c44u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_272c48:
    // 0x272c48: 0x46000032
    ctx->pc = 0x272c48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_272c4c:
    // 0x272c4c: 0x0
    ctx->pc = 0x272c4cu;
    // NOP
label_272c50:
    // 0x272c50: 0x45030006
label_272c54:
    if (ctx->pc == 0x272C54u) {
        ctx->pc = 0x272C54u;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x272C58u;
        goto label_272c58;
    }
    ctx->pc = 0x272C50u;
    {
        const bool branch_taken_0x272c50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x272c50) {
            ctx->pc = 0x272C54u;
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x272C6Cu;
            goto label_272c6c;
        }
    }
    ctx->pc = 0x272C58u;
label_272c58:
    // 0x272c58: 0x460c6302
    ctx->pc = 0x272c58u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_272c5c:
    // 0x272c5c: 0x46026300
    ctx->pc = 0x272c5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_272c60:
    // 0x272c60: 0xc0ba284
label_272c64:
    if (ctx->pc == 0x272C64u) {
        ctx->pc = 0x272C64u;
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->pc = 0x272C68u;
        goto label_272c68;
    }
    ctx->pc = 0x272C60u;
    SET_GPR_U32(ctx, 31, 0x272C68u);
    ctx->pc = 0x272C64u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272C68u; }
    }
    if (ctx->pc != 0x272C68u) { return; }
    ctx->pc = 0x272C68u;
label_272c68:
    // 0x272c68: 0x46000086
    ctx->pc = 0x272c68u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_272c6c:
    // 0x272c6c: 0x3c030031
    ctx->pc = 0x272c6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_272c70:
    // 0x272c70: 0x8c62ffbc
    ctx->pc = 0x272c70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_272c74:
    // 0x272c74: 0x4400005
label_272c78:
    if (ctx->pc == 0x272C78u) {
        ctx->pc = 0x272C78u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        ctx->pc = 0x272C7Cu;
        goto label_272c7c;
    }
    ctx->pc = 0x272C74u;
    {
        const bool branch_taken_0x272c74 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x272C78u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x272c74) {
            ctx->pc = 0x272C8Cu;
            goto label_272c8c;
        }
    }
    ctx->pc = 0x272C7Cu;
label_272c7c:
    // 0x272c7c: 0x44820800
    ctx->pc = 0x272c7cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_272c80:
    // 0x272c80: 0x46800860
    ctx->pc = 0x272c80u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_272c84:
    // 0x272c84: 0x10000008
label_272c88:
    if (ctx->pc == 0x272C88u) {
        ctx->pc = 0x272C8Cu;
        goto label_272c8c;
    }
    ctx->pc = 0x272C84u;
    {
        const bool branch_taken_0x272c84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x272c84) {
            ctx->pc = 0x272CA8u;
            goto label_272ca8;
        }
    }
    ctx->pc = 0x272C8Cu;
label_272c8c:
    // 0x272c8c: 0x8c820000
    ctx->pc = 0x272c8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_272c90:
    // 0x272c90: 0x30430001
    ctx->pc = 0x272c90u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
label_272c94:
    // 0x272c94: 0x21042
    ctx->pc = 0x272c94u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_272c98:
    // 0x272c98: 0x621825
    ctx->pc = 0x272c98u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_272c9c:
    // 0x272c9c: 0x44830800
    ctx->pc = 0x272c9cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_272ca0:
    // 0x272ca0: 0x46800860
    ctx->pc = 0x272ca0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_272ca4:
    // 0x272ca4: 0x46010840
    ctx->pc = 0x272ca4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_272ca8:
    // 0x272ca8: 0x3c013e99
    ctx->pc = 0x272ca8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16025 << 16));
label_272cac:
    // 0x272cac: 0x3421999a
    ctx->pc = 0x272cacu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
label_272cb0:
    // 0x272cb0: 0x44810000
    ctx->pc = 0x272cb0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_272cb4:
    // 0x272cb4: 0x46000802
    ctx->pc = 0x272cb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_272cb8:
    // 0x272cb8: 0x46020036
    ctx->pc = 0x272cb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_272cbc:
    // 0x272cbc: 0x0
    ctx->pc = 0x272cbcu;
    // NOP
label_272cc0:
    // 0x272cc0: 0x45020038
label_272cc4:
    if (ctx->pc == 0x272CC4u) {
        ctx->pc = 0x272CC4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x272CC8u;
        goto label_272cc8;
    }
    ctx->pc = 0x272CC0u;
    {
        const bool branch_taken_0x272cc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x272cc0) {
            ctx->pc = 0x272CC4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x272DA4u;
            goto label_272da4;
        }
    }
    ctx->pc = 0x272CC8u;
label_272cc8:
    // 0x272cc8: 0x3c014140
    ctx->pc = 0x272cc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16704 << 16));
label_272ccc:
    // 0x272ccc: 0x44810000
    ctx->pc = 0x272cccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_272cd0:
    // 0x272cd0: 0x46020034
    ctx->pc = 0x272cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_272cd4:
    // 0x272cd4: 0x0
    ctx->pc = 0x272cd4u;
    // NOP
label_272cd8:
    // 0x272cd8: 0x45030001
label_272cdc:
    if (ctx->pc == 0x272CDCu) {
        ctx->pc = 0x272CDCu;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x272CE0u;
        goto label_272ce0;
    }
    ctx->pc = 0x272CD8u;
    {
        const bool branch_taken_0x272cd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x272cd8) {
            ctx->pc = 0x272CDCu;
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x272CE0u;
            goto label_272ce0;
        }
    }
    ctx->pc = 0x272CE0u;
label_272ce0:
    // 0x272ce0: 0x3c030031
    ctx->pc = 0x272ce0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_272ce4:
    // 0x272ce4: 0x8c62ffbc
    ctx->pc = 0x272ce4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_272ce8:
    // 0x272ce8: 0x4400005
label_272cec:
    if (ctx->pc == 0x272CECu) {
        ctx->pc = 0x272CECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        ctx->pc = 0x272CF0u;
        goto label_272cf0;
    }
    ctx->pc = 0x272CE8u;
    {
        const bool branch_taken_0x272ce8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x272CECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x272ce8) {
            ctx->pc = 0x272D00u;
            goto label_272d00;
        }
    }
    ctx->pc = 0x272CF0u;
label_272cf0:
    // 0x272cf0: 0x44822000
    ctx->pc = 0x272cf0u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
label_272cf4:
    // 0x272cf4: 0x46802120
    ctx->pc = 0x272cf4u;
    ctx->f[4] = FPU_CVT_S_W(*(int32_t*)&ctx->f[4]);
label_272cf8:
    // 0x272cf8: 0x10000008
label_272cfc:
    if (ctx->pc == 0x272CFCu) {
        ctx->pc = 0x272D00u;
        goto label_272d00;
    }
    ctx->pc = 0x272CF8u;
    {
        const bool branch_taken_0x272cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x272cf8) {
            ctx->pc = 0x272D1Cu;
            goto label_272d1c;
        }
    }
    ctx->pc = 0x272D00u;
label_272d00:
    // 0x272d00: 0x8c820000
    ctx->pc = 0x272d00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_272d04:
    // 0x272d04: 0x30430001
    ctx->pc = 0x272d04u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
label_272d08:
    // 0x272d08: 0x21042
    ctx->pc = 0x272d08u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_272d0c:
    // 0x272d0c: 0x621825
    ctx->pc = 0x272d0cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_272d10:
    // 0x272d10: 0x44832000
    ctx->pc = 0x272d10u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 3);
label_272d14:
    // 0x272d14: 0x46802120
    ctx->pc = 0x272d14u;
    ctx->f[4] = FPU_CVT_S_W(*(int32_t*)&ctx->f[4]);
label_272d18:
    // 0x272d18: 0x46042100
    ctx->pc = 0x272d18u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_272d1c:
    // 0x272d1c: 0x3c013e99
    ctx->pc = 0x272d1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16025 << 16));
label_272d20:
    // 0x272d20: 0x3421999a
    ctx->pc = 0x272d20u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
label_272d24:
    // 0x272d24: 0x44810000
    ctx->pc = 0x272d24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_272d28:
    // 0x272d28: 0x46002102
    ctx->pc = 0x272d28u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_272d2c:
    // 0x272d2c: 0x0
    ctx->pc = 0x272d2cu;
    // NOP
label_272d30:
    // 0x272d30: 0x0
    ctx->pc = 0x272d30u;
    // NOP
label_272d34:
    // 0x272d34: 0x46022103
    ctx->pc = 0x272d34u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[2];
label_272d38:
    // 0x272d38: 0xc6210160
    ctx->pc = 0x272d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272d3c:
    // 0x272d3c: 0x46012042
    ctx->pc = 0x272d3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_272d40:
    // 0x272d40: 0xe6210160
    ctx->pc = 0x272d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 352), bits); }
label_272d44:
    // 0x272d44: 0xc6220164
    ctx->pc = 0x272d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_272d48:
    // 0x272d48: 0x46022082
    ctx->pc = 0x272d48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_272d4c:
    // 0x272d4c: 0xe6220164
    ctx->pc = 0x272d4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 356), bits); }
label_272d50:
    // 0x272d50: 0xc6230168
    ctx->pc = 0x272d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_272d54:
    // 0x272d54: 0x460320c2
    ctx->pc = 0x272d54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_272d58:
    // 0x272d58: 0xe6230168
    ctx->pc = 0x272d58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 360), bits); }
label_272d5c:
    // 0x272d5c: 0xc6200070
    ctx->pc = 0x272d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272d60:
    // 0x272d60: 0x46010000
    ctx->pc = 0x272d60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_272d64:
    // 0x272d64: 0xe6200070
    ctx->pc = 0x272d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
label_272d68:
    // 0x272d68: 0xc6200074
    ctx->pc = 0x272d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272d6c:
    // 0x272d6c: 0x46020000
    ctx->pc = 0x272d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_272d70:
    // 0x272d70: 0xe6200074
    ctx->pc = 0x272d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_272d74:
    // 0x272d74: 0xc6200078
    ctx->pc = 0x272d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272d78:
    // 0x272d78: 0x46030000
    ctx->pc = 0x272d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_272d7c:
    // 0x272d7c: 0xe6200078
    ctx->pc = 0x272d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
label_272d80:
    // 0x272d80: 0xc6200140
    ctx->pc = 0x272d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272d84:
    // 0x272d84: 0x46010000
    ctx->pc = 0x272d84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_272d88:
    // 0x272d88: 0xe6200140
    ctx->pc = 0x272d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
label_272d8c:
    // 0x272d8c: 0xc6200144
    ctx->pc = 0x272d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272d90:
    // 0x272d90: 0x46020000
    ctx->pc = 0x272d90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_272d94:
    // 0x272d94: 0xe6200144
    ctx->pc = 0x272d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
label_272d98:
    // 0x272d98: 0xc6200148
    ctx->pc = 0x272d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272d9c:
    // 0x272d9c: 0x10000011
label_272da0:
    if (ctx->pc == 0x272DA0u) {
        ctx->pc = 0x272DA0u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->pc = 0x272DA4u;
        goto label_272da4;
    }
    ctx->pc = 0x272D9Cu;
    {
        const bool branch_taken_0x272d9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x272DA0u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        if (branch_taken_0x272d9c) {
            ctx->pc = 0x272DE4u;
            goto label_272de4;
        }
    }
    ctx->pc = 0x272DA4u;
label_272da4:
    // 0x272da4: 0xc6210160
    ctx->pc = 0x272da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272da8:
    // 0x272da8: 0x46010000
    ctx->pc = 0x272da8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_272dac:
    // 0x272dac: 0xe6200070
    ctx->pc = 0x272dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
label_272db0:
    // 0x272db0: 0xc6200074
    ctx->pc = 0x272db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272db4:
    // 0x272db4: 0xc6210164
    ctx->pc = 0x272db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272db8:
    // 0x272db8: 0x46010000
    ctx->pc = 0x272db8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_272dbc:
    // 0x272dbc: 0xe6200074
    ctx->pc = 0x272dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_272dc0:
    // 0x272dc0: 0xc6200078
    ctx->pc = 0x272dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272dc4:
    // 0x272dc4: 0xc6210168
    ctx->pc = 0x272dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272dc8:
    // 0x272dc8: 0x46010000
    ctx->pc = 0x272dc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_272dcc:
    // 0x272dcc: 0xe6200078
    ctx->pc = 0x272dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
label_272dd0:
    // 0x272dd0: 0xc7a00010
    ctx->pc = 0x272dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272dd4:
    // 0x272dd4: 0xe6200140
    ctx->pc = 0x272dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
label_272dd8:
    // 0x272dd8: 0xc7a00014
    ctx->pc = 0x272dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272ddc:
    // 0x272ddc: 0xe6200144
    ctx->pc = 0x272ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
label_272de0:
    // 0x272de0: 0xc7a00018
    ctx->pc = 0x272de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272de4:
    // 0x272de4: 0xe6200148
    ctx->pc = 0x272de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
label_272de8:
    // 0x272de8: 0x3c020031
    ctx->pc = 0x272de8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_272dec:
    // 0x272dec: 0x8c430018
    ctx->pc = 0x272decu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_272df0:
    // 0x272df0: 0x34028008
    ctx->pc = 0x272df0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
label_272df4:
    // 0x272df4: 0x14620005
label_272df8:
    if (ctx->pc == 0x272DF8u) {
        ctx->pc = 0x272DF8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x272DFCu;
        goto label_272dfc;
    }
    ctx->pc = 0x272DF4u;
    {
        const bool branch_taken_0x272df4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x272DF8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x272df4) {
            ctx->pc = 0x272E0Cu;
            goto label_272e0c;
        }
    }
    ctx->pc = 0x272DFCu;
label_272dfc:
    // 0x272dfc: 0xc09b514
label_272e00:
    if (ctx->pc == 0x272E00u) {
        ctx->pc = 0x272E00u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272E04u;
        goto label_272e04;
    }
    ctx->pc = 0x272DFCu;
    SET_GPR_U32(ctx, 31, 0x272E04u);
    ctx->pc = 0x272E00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26D450u;
    {
        const uint32_t __entryPc = ctx->pc;
        MoveCam_flyby_mode_0x26d450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272E04u; }
    }
    if (ctx->pc != 0x272E04u) { return; }
    ctx->pc = 0x272E04u;
label_272e04:
    // 0x272e04: 0x10000119
label_272e08:
    if (ctx->pc == 0x272E08u) {
        ctx->pc = 0x272E08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x272E0Cu;
        goto label_272e0c;
    }
    ctx->pc = 0x272E04u;
    {
        const bool branch_taken_0x272e04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x272E08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x272e04) {
            ctx->pc = 0x27326Cu;
            goto label_27326c;
        }
    }
    ctx->pc = 0x272E0Cu;
label_272e0c:
    // 0x272e0c: 0x8c430018
    ctx->pc = 0x272e0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_272e10:
    // 0x272e10: 0x24024010
    ctx->pc = 0x272e10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_272e14:
    // 0x272e14: 0x14620115
label_272e18:
    if (ctx->pc == 0x272E18u) {
        ctx->pc = 0x272E18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x272E1Cu;
        goto label_272e1c;
    }
    ctx->pc = 0x272E14u;
    {
        const bool branch_taken_0x272e14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x272E18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x272e14) {
            ctx->pc = 0x27326Cu;
            goto label_27326c;
        }
    }
    ctx->pc = 0x272E1Cu;
label_272e1c:
    // 0x272e1c: 0xc09b0fe
label_272e20:
    if (ctx->pc == 0x272E20u) {
        ctx->pc = 0x272E20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272E24u;
        goto label_272e24;
    }
    ctx->pc = 0x272E1Cu;
    SET_GPR_U32(ctx, 31, 0x272E24u);
    ctx->pc = 0x272E20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26C3F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MoveCam_satellite_0x26c3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272E24u; }
    }
    if (ctx->pc != 0x272E24u) { return; }
    ctx->pc = 0x272E24u;
label_272e24:
    // 0x272e24: 0x10000111
label_272e28:
    if (ctx->pc == 0x272E28u) {
        ctx->pc = 0x272E28u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x272E2Cu;
        goto label_272e2c;
    }
    ctx->pc = 0x272E24u;
    {
        const bool branch_taken_0x272e24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x272E28u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x272e24) {
            ctx->pc = 0x27326Cu;
            goto label_27326c;
        }
    }
    ctx->pc = 0x272E2Cu;
label_272e2c:
    // 0x272e2c: 0x8e2200d4
    ctx->pc = 0x272e2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_272e30:
    // 0x272e30: 0x14400004
label_272e34:
    if (ctx->pc == 0x272E34u) {
        ctx->pc = 0x272E34u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x272E38u;
        goto label_272e38;
    }
    ctx->pc = 0x272E30u;
    {
        const bool branch_taken_0x272e30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x272E34u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x272e30) {
            ctx->pc = 0x272E44u;
            goto label_272e44;
        }
    }
    ctx->pc = 0x272E38u;
label_272e38:
    // 0x272e38: 0x2402ffff
    ctx->pc = 0x272e38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_272e3c:
    // 0x272e3c: 0xae2200d4
    ctx->pc = 0x272e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
label_272e40:
    // 0x272e40: 0x3c020031
    ctx->pc = 0x272e40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_272e44:
    // 0x272e44: 0x8c430018
    ctx->pc = 0x272e44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_272e48:
    // 0x272e48: 0x34028008
    ctx->pc = 0x272e48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
label_272e4c:
    // 0x272e4c: 0x14620005
label_272e50:
    if (ctx->pc == 0x272E50u) {
        ctx->pc = 0x272E50u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x272E54u;
        goto label_272e54;
    }
    ctx->pc = 0x272E4Cu;
    {
        const bool branch_taken_0x272e4c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x272E50u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x272e4c) {
            ctx->pc = 0x272E64u;
            goto label_272e64;
        }
    }
    ctx->pc = 0x272E54u;
label_272e54:
    // 0x272e54: 0xc09b514
label_272e58:
    if (ctx->pc == 0x272E58u) {
        ctx->pc = 0x272E58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272E5Cu;
        goto label_272e5c;
    }
    ctx->pc = 0x272E54u;
    SET_GPR_U32(ctx, 31, 0x272E5Cu);
    ctx->pc = 0x272E58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26D450u;
    {
        const uint32_t __entryPc = ctx->pc;
        MoveCam_flyby_mode_0x26d450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272E5Cu; }
    }
    if (ctx->pc != 0x272E5Cu) { return; }
    ctx->pc = 0x272E5Cu;
label_272e5c:
    // 0x272e5c: 0x10000014
label_272e60:
    if (ctx->pc == 0x272E60u) {
        ctx->pc = 0x272E60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x272E64u;
        goto label_272e64;
    }
    ctx->pc = 0x272E5Cu;
    {
        const bool branch_taken_0x272e5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x272E60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x272e5c) {
            ctx->pc = 0x272EB0u;
            goto label_272eb0;
        }
    }
    ctx->pc = 0x272E64u;
label_272e64:
    // 0x272e64: 0x8c430018
    ctx->pc = 0x272e64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_272e68:
    // 0x272e68: 0x34028007
    ctx->pc = 0x272e68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32775));
label_272e6c:
    // 0x272e6c: 0x14620005
label_272e70:
    if (ctx->pc == 0x272E70u) {
        ctx->pc = 0x272E70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x272E74u;
        goto label_272e74;
    }
    ctx->pc = 0x272E6Cu;
    {
        const bool branch_taken_0x272e6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x272E70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x272e6c) {
            ctx->pc = 0x272E84u;
            goto label_272e84;
        }
    }
    ctx->pc = 0x272E74u;
label_272e74:
    // 0x272e74: 0xc09b7fe
label_272e78:
    if (ctx->pc == 0x272E78u) {
        ctx->pc = 0x272E78u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272E7Cu;
        goto label_272e7c;
    }
    ctx->pc = 0x272E74u;
    SET_GPR_U32(ctx, 31, 0x272E7Cu);
    ctx->pc = 0x272E78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26DFF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MoveCam_hstable_0x26dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272E7Cu; }
    }
    if (ctx->pc != 0x272E7Cu) { return; }
    ctx->pc = 0x272E7Cu;
label_272e7c:
    // 0x272e7c: 0x1000000c
label_272e80:
    if (ctx->pc == 0x272E80u) {
        ctx->pc = 0x272E80u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x272E84u;
        goto label_272e84;
    }
    ctx->pc = 0x272E7Cu;
    {
        const bool branch_taken_0x272e7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x272E80u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x272e7c) {
            ctx->pc = 0x272EB0u;
            goto label_272eb0;
        }
    }
    ctx->pc = 0x272E84u;
label_272e84:
    // 0x272e84: 0x8c430018
    ctx->pc = 0x272e84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_272e88:
    // 0x272e88: 0x2402400d
    ctx->pc = 0x272e88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
label_272e8c:
    // 0x272e8c: 0x10620005
label_272e90:
    if (ctx->pc == 0x272E90u) {
        ctx->pc = 0x272E90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16403));
        ctx->pc = 0x272E94u;
        goto label_272e94;
    }
    ctx->pc = 0x272E8Cu;
    {
        const bool branch_taken_0x272e8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x272E90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16403));
        if (branch_taken_0x272e8c) {
            ctx->pc = 0x272EA4u;
            goto label_272ea4;
        }
    }
    ctx->pc = 0x272E94u;
label_272e94:
    // 0x272e94: 0x10620003
label_272e98:
    if (ctx->pc == 0x272E98u) {
        ctx->pc = 0x272E98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16407));
        ctx->pc = 0x272E9Cu;
        goto label_272e9c;
    }
    ctx->pc = 0x272E94u;
    {
        const bool branch_taken_0x272e94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x272E98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16407));
        if (branch_taken_0x272e94) {
            ctx->pc = 0x272EA4u;
            goto label_272ea4;
        }
    }
    ctx->pc = 0x272E9Cu;
label_272e9c:
    // 0x272e9c: 0x14620004
label_272ea0:
    if (ctx->pc == 0x272EA0u) {
        ctx->pc = 0x272EA0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x272EA4u;
        goto label_272ea4;
    }
    ctx->pc = 0x272E9Cu;
    {
        const bool branch_taken_0x272e9c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x272EA0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x272e9c) {
            ctx->pc = 0x272EB0u;
            goto label_272eb0;
        }
    }
    ctx->pc = 0x272EA4u;
label_272ea4:
    // 0x272ea4: 0xc09ba0e
label_272ea8:
    if (ctx->pc == 0x272EA8u) {
        ctx->pc = 0x272EA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272EACu;
        goto label_272eac;
    }
    ctx->pc = 0x272EA4u;
    SET_GPR_U32(ctx, 31, 0x272EACu);
    ctx->pc = 0x272EA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26E838u;
    {
        const uint32_t __entryPc = ctx->pc;
        MoveCam_worldsel_0x26e838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272EACu; }
    }
    if (ctx->pc != 0x272EACu) { return; }
    ctx->pc = 0x272EACu;
label_272eac:
    // 0x272eac: 0x3c020032
    ctx->pc = 0x272eacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_272eb0:
    // 0x272eb0: 0x8c42080c
    ctx->pc = 0x272eb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
label_272eb4:
    // 0x272eb4: 0x10400010
label_272eb8:
    if (ctx->pc == 0x272EB8u) {
        ctx->pc = 0x272EB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x272EBCu;
        goto label_272ebc;
    }
    ctx->pc = 0x272EB4u;
    {
        const bool branch_taken_0x272eb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x272EB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x272eb4) {
            ctx->pc = 0x272EF8u;
            goto label_272ef8;
        }
    }
    ctx->pc = 0x272EBCu;
label_272ebc:
    // 0x272ebc: 0x8c42f944
    ctx->pc = 0x272ebcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965572)));
label_272ec0:
    // 0x272ec0: 0x4400007
label_272ec4:
    if (ctx->pc == 0x272EC4u) {
        ctx->pc = 0x272EC8u;
        goto label_272ec8;
    }
    ctx->pc = 0x272EC0u;
    {
        const bool branch_taken_0x272ec0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x272ec0) {
            ctx->pc = 0x272EE0u;
            goto label_272ee0;
        }
    }
    ctx->pc = 0x272EC8u;
label_272ec8:
    // 0x272ec8: 0xc09b0c4
label_272ecc:
    if (ctx->pc == 0x272ECCu) {
        ctx->pc = 0x272ECCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272ED0u;
        goto label_272ed0;
    }
    ctx->pc = 0x272EC8u;
    SET_GPR_U32(ctx, 31, 0x272ED0u);
    ctx->pc = 0x272ECCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26C310u;
    {
        const uint32_t __entryPc = ctx->pc;
        MoveCam_event_0x26c310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272ED0u; }
    }
    if (ctx->pc != 0x272ED0u) { return; }
    ctx->pc = 0x272ED0u;
label_272ed0:
    // 0x272ed0: 0x104000fd
label_272ed4:
    if (ctx->pc == 0x272ED4u) {
        ctx->pc = 0x272ED4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x272ED8u;
        goto label_272ed8;
    }
    ctx->pc = 0x272ED0u;
    {
        const bool branch_taken_0x272ed0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x272ED4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x272ed0) {
            ctx->pc = 0x2732C8u;
            goto label_2732c8;
        }
    }
    ctx->pc = 0x272ED8u;
label_272ed8:
    // 0x272ed8: 0x1000000c
label_272edc:
    if (ctx->pc == 0x272EDCu) {
        ctx->pc = 0x272EDCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->pc = 0x272EE0u;
        goto label_272ee0;
    }
    ctx->pc = 0x272ED8u;
    {
        const bool branch_taken_0x272ed8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x272EDCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
        if (branch_taken_0x272ed8) {
            ctx->pc = 0x272F0Cu;
            goto label_272f0c;
        }
    }
    ctx->pc = 0x272EE0u;
label_272ee0:
    // 0x272ee0: 0xc09af7a
label_272ee4:
    if (ctx->pc == 0x272EE4u) {
        ctx->pc = 0x272EE4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272EE8u;
        goto label_272ee8;
    }
    ctx->pc = 0x272EE0u;
    SET_GPR_U32(ctx, 31, 0x272EE8u);
    ctx->pc = 0x272EE4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26BDE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MoveCam_startstage_0x26bde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272EE8u; }
    }
    if (ctx->pc != 0x272EE8u) { return; }
    ctx->pc = 0x272EE8u;
label_272ee8:
    // 0x272ee8: 0x104000f7
label_272eec:
    if (ctx->pc == 0x272EECu) {
        ctx->pc = 0x272EECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x272EF0u;
        goto label_272ef0;
    }
    ctx->pc = 0x272EE8u;
    {
        const bool branch_taken_0x272ee8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x272EECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x272ee8) {
            ctx->pc = 0x2732C8u;
            goto label_2732c8;
        }
    }
    ctx->pc = 0x272EF0u;
label_272ef0:
    // 0x272ef0: 0x10000006
label_272ef4:
    if (ctx->pc == 0x272EF4u) {
        ctx->pc = 0x272EF4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->pc = 0x272EF8u;
        goto label_272ef8;
    }
    ctx->pc = 0x272EF0u;
    {
        const bool branch_taken_0x272ef0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x272EF4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
        if (branch_taken_0x272ef0) {
            ctx->pc = 0x272F0Cu;
            goto label_272f0c;
        }
    }
    ctx->pc = 0x272EF8u;
label_272ef8:
    // 0x272ef8: 0x240202d
    ctx->pc = 0x272ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272efc:
    // 0x272efc: 0xc09a106
label_272f00:
    if (ctx->pc == 0x272F00u) {
        ctx->pc = 0x272F00u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
        ctx->pc = 0x272F04u;
        goto label_272f04;
    }
    ctx->pc = 0x272EFCu;
    SET_GPR_U32(ctx, 31, 0x272F04u);
    ctx->pc = 0x272F00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
    ctx->pc = 0x268418u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_attn_pos_0x268418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272F04u; }
    }
    if (ctx->pc != 0x272F04u) { return; }
    ctx->pc = 0x272F04u;
label_272f04:
    // 0x272f04: 0x3c020031
    ctx->pc = 0x272f04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_272f08:
    // 0x272f08: 0x8c430018
    ctx->pc = 0x272f08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_272f0c:
    // 0x272f0c: 0x34028008
    ctx->pc = 0x272f0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
label_272f10:
    // 0x272f10: 0x10620007
label_272f14:
    if (ctx->pc == 0x272F14u) {
        ctx->pc = 0x272F14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
        ctx->pc = 0x272F18u;
        goto label_272f18;
    }
    ctx->pc = 0x272F10u;
    {
        const bool branch_taken_0x272f10 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x272F14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
        if (branch_taken_0x272f10) {
            ctx->pc = 0x272F30u;
            goto label_272f30;
        }
    }
    ctx->pc = 0x272F18u;
label_272f18:
    // 0x272f18: 0x10620005
label_272f1c:
    if (ctx->pc == 0x272F1Cu) {
        ctx->pc = 0x272F1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16403));
        ctx->pc = 0x272F20u;
        goto label_272f20;
    }
    ctx->pc = 0x272F18u;
    {
        const bool branch_taken_0x272f18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x272F1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16403));
        if (branch_taken_0x272f18) {
            ctx->pc = 0x272F30u;
            goto label_272f30;
        }
    }
    ctx->pc = 0x272F20u;
label_272f20:
    // 0x272f20: 0x10620003
label_272f24:
    if (ctx->pc == 0x272F24u) {
        ctx->pc = 0x272F24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16407));
        ctx->pc = 0x272F28u;
        goto label_272f28;
    }
    ctx->pc = 0x272F20u;
    {
        const bool branch_taken_0x272f20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x272F24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16407));
        if (branch_taken_0x272f20) {
            ctx->pc = 0x272F30u;
            goto label_272f30;
        }
    }
    ctx->pc = 0x272F28u;
label_272f28:
    // 0x272f28: 0x54620006
label_272f2c:
    if (ctx->pc == 0x272F2Cu) {
        ctx->pc = 0x272F2Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x272F30u;
        goto label_272f30;
    }
    ctx->pc = 0x272F28u;
    {
        const bool branch_taken_0x272f28 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x272f28) {
            ctx->pc = 0x272F2Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x272F44u;
            goto label_272f44;
        }
    }
    ctx->pc = 0x272F30u;
label_272f30:
    // 0x272f30: 0x8e2300f8
    ctx->pc = 0x272f30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_272f34:
    // 0x272f34: 0x24020002
    ctx->pc = 0x272f34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_272f38:
    // 0x272f38: 0x10620081
label_272f3c:
    if (ctx->pc == 0x272F3Cu) {
        ctx->pc = 0x272F3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272F40u;
        goto label_272f40;
    }
    ctx->pc = 0x272F38u;
    {
        const bool branch_taken_0x272f38 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x272F3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x272f38) {
            ctx->pc = 0x273140u;
            goto label_273140;
        }
    }
    ctx->pc = 0x272F40u;
label_272f40:
    // 0x272f40: 0xc6210070
    ctx->pc = 0x272f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272f44:
    // 0x272f44: 0xc6200140
    ctx->pc = 0x272f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272f48:
    // 0x272f48: 0x46000b01
    ctx->pc = 0x272f48u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_272f4c:
    // 0x272f4c: 0xe7ac0000
    ctx->pc = 0x272f4cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_272f50:
    // 0x272f50: 0xc6220074
    ctx->pc = 0x272f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_272f54:
    // 0x272f54: 0xc6200144
    ctx->pc = 0x272f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272f58:
    // 0x272f58: 0x46001081
    ctx->pc = 0x272f58u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_272f5c:
    // 0x272f5c: 0xe7a20004
    ctx->pc = 0x272f5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_272f60:
    // 0x272f60: 0xc6210078
    ctx->pc = 0x272f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272f64:
    // 0x272f64: 0xc6200148
    ctx->pc = 0x272f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272f68:
    // 0x272f68: 0x46000841
    ctx->pc = 0x272f68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_272f6c:
    // 0x272f6c: 0xe7a10008
    ctx->pc = 0x272f6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_272f70:
    // 0x272f70: 0x460c6002
    ctx->pc = 0x272f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_272f74:
    // 0x272f74: 0x46021082
    ctx->pc = 0x272f74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_272f78:
    // 0x272f78: 0x46020000
    ctx->pc = 0x272f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_272f7c:
    // 0x272f7c: 0x46010842
    ctx->pc = 0x272f7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_272f80:
    // 0x272f80: 0x46010000
    ctx->pc = 0x272f80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_272f84:
    // 0x272f84: 0x0
    ctx->pc = 0x272f84u;
    // NOP
label_272f88:
    // 0x272f88: 0x0
    ctx->pc = 0x272f88u;
    // NOP
label_272f8c:
    // 0x272f8c: 0x46000004
    ctx->pc = 0x272f8cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_272f90:
    // 0x272f90: 0x46000032
    ctx->pc = 0x272f90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_272f94:
    // 0x272f94: 0x0
    ctx->pc = 0x272f94u;
    // NOP
label_272f98:
    // 0x272f98: 0x45030006
label_272f9c:
    if (ctx->pc == 0x272F9Cu) {
        ctx->pc = 0x272F9Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->pc = 0x272FA0u;
        goto label_272fa0;
    }
    ctx->pc = 0x272F98u;
    {
        const bool branch_taken_0x272f98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x272f98) {
            ctx->pc = 0x272F9Cu;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
            ctx->pc = 0x272FB4u;
            goto label_272fb4;
        }
    }
    ctx->pc = 0x272FA0u;
label_272fa0:
    // 0x272fa0: 0x460c6302
    ctx->pc = 0x272fa0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_272fa4:
    // 0x272fa4: 0x46026300
    ctx->pc = 0x272fa4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_272fa8:
    // 0x272fa8: 0xc0ba284
label_272fac:
    if (ctx->pc == 0x272FACu) {
        ctx->pc = 0x272FACu;
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->pc = 0x272FB0u;
        goto label_272fb0;
    }
    ctx->pc = 0x272FA8u;
    SET_GPR_U32(ctx, 31, 0x272FB0u);
    ctx->pc = 0x272FACu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272FB0u; }
    }
    if (ctx->pc != 0x272FB0u) { return; }
    ctx->pc = 0x272FB0u;
label_272fb0:
    // 0x272fb0: 0xe62000d0
    ctx->pc = 0x272fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
label_272fb4:
    // 0x272fb4: 0x3c03003c
    ctx->pc = 0x272fb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_272fb8:
    // 0x272fb8: 0x24020001
    ctx->pc = 0x272fb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_272fbc:
    // 0x272fbc: 0xac6238d4
    ctx->pc = 0x272fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14548), GPR_U32(ctx, 2));
label_272fc0:
    // 0x272fc0: 0x26300140
    ctx->pc = 0x272fc0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 320));
label_272fc4:
    // 0x272fc4: 0x200202d
    ctx->pc = 0x272fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272fc8:
    // 0x272fc8: 0x26250070
    ctx->pc = 0x272fc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 112));
label_272fcc:
    // 0x272fcc: 0xc099c08
label_272fd0:
    if (ctx->pc == 0x272FD0u) {
        ctx->pc = 0x272FD0u;
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x272FD4u;
        goto label_272fd4;
    }
    ctx->pc = 0x272FCCu;
    SET_GPR_U32(ctx, 31, 0x272FD4u);
    ctx->pc = 0x272FD0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x267020u;
    {
        const uint32_t __entryPc = ctx->pc;
        fix_radius_0x267020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272FD4u; }
    }
    if (ctx->pc != 0x272FD4u) { return; }
    ctx->pc = 0x272FD4u;
label_272fd4:
    // 0x272fd4: 0x240202d
    ctx->pc = 0x272fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272fd8:
    // 0x272fd8: 0xc09a2e4
label_272fdc:
    if (ctx->pc == 0x272FDCu) {
        ctx->pc = 0x272FDCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272FE0u;
        goto label_272fe0;
    }
    ctx->pc = 0x272FD8u;
    SET_GPR_U32(ctx, 31, 0x272FE0u);
    ctx->pc = 0x272FDCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x268B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_cam_pyr_0x268b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272FE0u; }
    }
    if (ctx->pc != 0x272FE0u) { return; }
    ctx->pc = 0x272FE0u;
label_272fe0:
    // 0x272fe0: 0xc62000b0
    ctx->pc = 0x272fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272fe4:
    // 0x272fe4: 0x46000007
    ctx->pc = 0x272fe4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_272fe8:
    // 0x272fe8: 0x10000054
label_272fec:
    if (ctx->pc == 0x272FECu) {
        ctx->pc = 0x272FECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
        ctx->pc = 0x272FF0u;
        goto label_272ff0;
    }
    ctx->pc = 0x272FE8u;
    {
        const bool branch_taken_0x272fe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x272FECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
        if (branch_taken_0x272fe8) {
            ctx->pc = 0x27313Cu;
            goto label_27313c;
        }
    }
    ctx->pc = 0x272FF0u;
label_272ff0:
    // 0x272ff0: 0x8e2200d4
    ctx->pc = 0x272ff0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_272ff4:
    // 0x272ff4: 0x14400002
label_272ff8:
    if (ctx->pc == 0x272FF8u) {
        ctx->pc = 0x272FF8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x272FFCu;
        goto label_272ffc;
    }
    ctx->pc = 0x272FF4u;
    {
        const bool branch_taken_0x272ff4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x272FF8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x272ff4) {
            ctx->pc = 0x273000u;
            goto label_273000;
        }
    }
    ctx->pc = 0x272FFCu;
label_272ffc:
    // 0x272ffc: 0xae2200d4
    ctx->pc = 0x272ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
label_273000:
    // 0x273000: 0xc09ac5a
label_273004:
    if (ctx->pc == 0x273004u) {
        ctx->pc = 0x273004u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x273008u;
        goto label_273008;
    }
    ctx->pc = 0x273000u;
    SET_GPR_U32(ctx, 31, 0x273008u);
    ctx->pc = 0x273004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26B168u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextPlayer_0x26b168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273008u; }
    }
    if (ctx->pc != 0x273008u) { return; }
    ctx->pc = 0x273008u;
label_273008:
    // 0x273008: 0x40182d
    ctx->pc = 0x273008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27300c:
    // 0x27300c: 0x1060000a
label_273010:
    if (ctx->pc == 0x273010u) {
        ctx->pc = 0x273010u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 3));
        ctx->pc = 0x273014u;
        goto label_273014;
    }
    ctx->pc = 0x27300Cu;
    {
        const bool branch_taken_0x27300c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x273010u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 3));
        if (branch_taken_0x27300c) {
            ctx->pc = 0x273038u;
            goto label_273038;
        }
    }
    ctx->pc = 0x273014u;
label_273014:
    // 0x273014: 0x8c620060
    ctx->pc = 0x273014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_273018:
    // 0x273018: 0x10400008
label_27301c:
    if (ctx->pc == 0x27301Cu) {
        ctx->pc = 0x27301Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x273020u;
        goto label_273020;
    }
    ctx->pc = 0x273018u;
    {
        const bool branch_taken_0x273018 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27301Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x273018) {
            ctx->pc = 0x27303Cu;
            goto label_27303c;
        }
    }
    ctx->pc = 0x273020u;
label_273020:
    // 0x273020: 0xc4600040
    ctx->pc = 0x273020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273024:
    // 0x273024: 0xe6200070
    ctx->pc = 0x273024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
label_273028:
    // 0x273028: 0xc4600044
    ctx->pc = 0x273028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27302c:
    // 0x27302c: 0xe6200074
    ctx->pc = 0x27302cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_273030:
    // 0x273030: 0xc4600048
    ctx->pc = 0x273030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273034:
    // 0x273034: 0xe6200078
    ctx->pc = 0x273034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
label_273038:
    // 0x273038: 0x24020003
    ctx->pc = 0x273038u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_27303c:
    // 0x27303c: 0x1202000b
label_273040:
    if (ctx->pc == 0x273040u) {
        ctx->pc = 0x273040u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x273044u;
        goto label_273044;
    }
    ctx->pc = 0x27303Cu;
    {
        const bool branch_taken_0x27303c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x273040u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x27303c) {
            ctx->pc = 0x27306Cu;
            goto label_27306c;
        }
    }
    ctx->pc = 0x273044u;
label_273044:
    // 0x273044: 0x12020009
label_273048:
    if (ctx->pc == 0x273048u) {
        ctx->pc = 0x273048u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x27304Cu;
        goto label_27304c;
    }
    ctx->pc = 0x273044u;
    {
        const bool branch_taken_0x273044 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x273048u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x273044) {
            ctx->pc = 0x27306Cu;
            goto label_27306c;
        }
    }
    ctx->pc = 0x27304Cu;
label_27304c:
    // 0x27304c: 0x12020007
label_273050:
    if (ctx->pc == 0x273050u) {
        ctx->pc = 0x273050u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x273054u;
        goto label_273054;
    }
    ctx->pc = 0x27304Cu;
    {
        const bool branch_taken_0x27304c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x273050u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x27304c) {
            ctx->pc = 0x27306Cu;
            goto label_27306c;
        }
    }
    ctx->pc = 0x273054u;
label_273054:
    // 0x273054: 0x12020005
label_273058:
    if (ctx->pc == 0x273058u) {
        ctx->pc = 0x273058u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x27305Cu;
        goto label_27305c;
    }
    ctx->pc = 0x273054u;
    {
        const bool branch_taken_0x273054 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x273058u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x273054) {
            ctx->pc = 0x27306Cu;
            goto label_27306c;
        }
    }
    ctx->pc = 0x27305Cu;
label_27305c:
    // 0x27305c: 0x12020003
label_273060:
    if (ctx->pc == 0x273060u) {
        ctx->pc = 0x273060u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x273064u;
        goto label_273064;
    }
    ctx->pc = 0x27305Cu;
    {
        const bool branch_taken_0x27305c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x273060u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x27305c) {
            ctx->pc = 0x27306Cu;
            goto label_27306c;
        }
    }
    ctx->pc = 0x273064u;
label_273064:
    // 0x273064: 0x1602000b
label_273068:
    if (ctx->pc == 0x273068u) {
        ctx->pc = 0x273068u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x27306Cu;
        goto label_27306c;
    }
    ctx->pc = 0x273064u;
    {
        const bool branch_taken_0x273064 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x273068u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x273064) {
            ctx->pc = 0x273094u;
            goto label_273094;
        }
    }
    ctx->pc = 0x27306Cu;
label_27306c:
    // 0x27306c: 0x8e220124
    ctx->pc = 0x27306cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_273070:
    // 0x273070: 0x1040000d
label_273074:
    if (ctx->pc == 0x273074u) {
        ctx->pc = 0x273074u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x273078u;
        goto label_273078;
    }
    ctx->pc = 0x273070u;
    {
        const bool branch_taken_0x273070 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x273074u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x273070) {
            ctx->pc = 0x2730A8u;
            goto label_2730a8;
        }
    }
    ctx->pc = 0x273078u;
label_273078:
    // 0x273078: 0xc4400040
    ctx->pc = 0x273078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27307c:
    // 0x27307c: 0xe6200140
    ctx->pc = 0x27307cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
label_273080:
    // 0x273080: 0xc4400044
    ctx->pc = 0x273080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273084:
    // 0x273084: 0xe6200144
    ctx->pc = 0x273084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
label_273088:
    // 0x273088: 0xc4400048
    ctx->pc = 0x273088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27308c:
    // 0x27308c: 0x10000006
label_273090:
    if (ctx->pc == 0x273090u) {
        ctx->pc = 0x273090u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
        ctx->pc = 0x273094u;
        goto label_273094;
    }
    ctx->pc = 0x27308Cu;
    {
        const bool branch_taken_0x27308c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x273090u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
        if (branch_taken_0x27308c) {
            ctx->pc = 0x2730A8u;
            goto label_2730a8;
        }
    }
    ctx->pc = 0x273094u;
label_273094:
    // 0x273094: 0x16020004
label_273098:
    if (ctx->pc == 0x273098u) {
        ctx->pc = 0x273098u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27309Cu;
        goto label_27309c;
    }
    ctx->pc = 0x273094u;
    {
        const bool branch_taken_0x273094 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x273098u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x273094) {
            ctx->pc = 0x2730A8u;
            goto label_2730a8;
        }
    }
    ctx->pc = 0x27309Cu;
label_27309c:
    // 0x27309c: 0xc09a106
label_2730a0:
    if (ctx->pc == 0x2730A0u) {
        ctx->pc = 0x2730A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
        ctx->pc = 0x2730A4u;
        goto label_2730a4;
    }
    ctx->pc = 0x27309Cu;
    SET_GPR_U32(ctx, 31, 0x2730A4u);
    ctx->pc = 0x2730A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
    ctx->pc = 0x268418u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_attn_pos_0x268418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2730A4u; }
    }
    if (ctx->pc != 0x2730A4u) { return; }
    ctx->pc = 0x2730A4u;
label_2730a4:
    // 0x2730a4: 0x240202d
    ctx->pc = 0x2730a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2730a8:
    // 0x2730a8: 0xc09a2e4
label_2730ac:
    if (ctx->pc == 0x2730ACu) {
        ctx->pc = 0x2730ACu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
        ctx->pc = 0x2730B0u;
        goto label_2730b0;
    }
    ctx->pc = 0x2730A8u;
    SET_GPR_U32(ctx, 31, 0x2730B0u);
    ctx->pc = 0x2730ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
    ctx->pc = 0x268B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_cam_pyr_0x268b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2730B0u; }
    }
    if (ctx->pc != 0x2730B0u) { return; }
    ctx->pc = 0x2730B0u;
label_2730b0:
    // 0x2730b0: 0x3c014049
    ctx->pc = 0x2730b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
label_2730b4:
    // 0x2730b4: 0x34210fdb
    ctx->pc = 0x2730b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_2730b8:
    // 0x2730b8: 0x44816800
    ctx->pc = 0x2730b8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_2730bc:
    // 0x2730bc: 0xc0b5a46
label_2730c0:
    if (ctx->pc == 0x2730C0u) {
        ctx->pc = 0x2730C0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2730C4u;
        goto label_2730c4;
    }
    ctx->pc = 0x2730BCu;
    SET_GPR_U32(ctx, 31, 0x2730C4u);
    ctx->pc = 0x2730C0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D6918u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddAngle_0x2d6918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2730C4u; }
    }
    if (ctx->pc != 0x2730C4u) { return; }
    ctx->pc = 0x2730C4u;
label_2730c4:
    // 0x2730c4: 0xe62000b4
    ctx->pc = 0x2730c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
label_2730c8:
    // 0x2730c8: 0xc6210070
    ctx->pc = 0x2730c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2730cc:
    // 0x2730cc: 0xc6200140
    ctx->pc = 0x2730ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2730d0:
    // 0x2730d0: 0x46000b01
    ctx->pc = 0x2730d0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2730d4:
    // 0x2730d4: 0xe7ac0000
    ctx->pc = 0x2730d4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2730d8:
    // 0x2730d8: 0xc6220074
    ctx->pc = 0x2730d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2730dc:
    // 0x2730dc: 0xc6200144
    ctx->pc = 0x2730dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2730e0:
    // 0x2730e0: 0x46001081
    ctx->pc = 0x2730e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2730e4:
    // 0x2730e4: 0xe7a20004
    ctx->pc = 0x2730e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2730e8:
    // 0x2730e8: 0xc6210078
    ctx->pc = 0x2730e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2730ec:
    // 0x2730ec: 0xc6200148
    ctx->pc = 0x2730ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2730f0:
    // 0x2730f0: 0x46000841
    ctx->pc = 0x2730f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2730f4:
    // 0x2730f4: 0xe7a10008
    ctx->pc = 0x2730f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2730f8:
    // 0x2730f8: 0x460c6002
    ctx->pc = 0x2730f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_2730fc:
    // 0x2730fc: 0x46021082
    ctx->pc = 0x2730fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_273100:
    // 0x273100: 0x46020000
    ctx->pc = 0x273100u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_273104:
    // 0x273104: 0x46010842
    ctx->pc = 0x273104u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_273108:
    // 0x273108: 0x46010000
    ctx->pc = 0x273108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27310c:
    // 0x27310c: 0x0
    ctx->pc = 0x27310cu;
    // NOP
label_273110:
    // 0x273110: 0x0
    ctx->pc = 0x273110u;
    // NOP
label_273114:
    // 0x273114: 0x46000004
    ctx->pc = 0x273114u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_273118:
    // 0x273118: 0x46000032
    ctx->pc = 0x273118u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27311c:
    // 0x27311c: 0x0
    ctx->pc = 0x27311cu;
    // NOP
label_273120:
    // 0x273120: 0x45030006
label_273124:
    if (ctx->pc == 0x273124u) {
        ctx->pc = 0x273124u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->pc = 0x273128u;
        goto label_273128;
    }
    ctx->pc = 0x273120u;
    {
        const bool branch_taken_0x273120 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273120) {
            ctx->pc = 0x273124u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
            ctx->pc = 0x27313Cu;
            goto label_27313c;
        }
    }
    ctx->pc = 0x273128u;
label_273128:
    // 0x273128: 0x460c6302
    ctx->pc = 0x273128u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_27312c:
    // 0x27312c: 0x46026300
    ctx->pc = 0x27312cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_273130:
    // 0x273130: 0xc0ba284
label_273134:
    if (ctx->pc == 0x273134u) {
        ctx->pc = 0x273134u;
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->pc = 0x273138u;
        goto label_273138;
    }
    ctx->pc = 0x273130u;
    SET_GPR_U32(ctx, 31, 0x273138u);
    ctx->pc = 0x273134u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273138u; }
    }
    if (ctx->pc != 0x273138u) { return; }
    ctx->pc = 0x273138u;
label_273138:
    // 0x273138: 0xe62000d0
    ctx->pc = 0x273138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
label_27313c:
    // 0x27313c: 0x240202d
    ctx->pc = 0x27313cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_273140:
    // 0x273140: 0xc09a760
label_273144:
    if (ctx->pc == 0x273144u) {
        ctx->pc = 0x273144u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
        ctx->pc = 0x273148u;
        goto label_273148;
    }
    ctx->pc = 0x273140u;
    SET_GPR_U32(ctx, 31, 0x273148u);
    ctx->pc = 0x273144u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
    ctx->pc = 0x269D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_orient_to_0x269d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273148u; }
    }
    if (ctx->pc != 0x273148u) { return; }
    ctx->pc = 0x273148u;
label_273148:
    // 0x273148: 0x10000060
label_27314c:
    if (ctx->pc == 0x27314Cu) {
        ctx->pc = 0x27314Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x273150u;
        goto label_273150;
    }
    ctx->pc = 0x273148u;
    {
        const bool branch_taken_0x273148 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27314Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x273148) {
            ctx->pc = 0x2732CCu;
            goto label_2732cc;
        }
    }
    ctx->pc = 0x273150u;
label_273150:
    // 0x273150: 0xc09c75a
label_273154:
    if (ctx->pc == 0x273154u) {
        ctx->pc = 0x273154u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x273158u;
        goto label_273158;
    }
    ctx->pc = 0x273150u;
    SET_GPR_U32(ctx, 31, 0x273158u);
    ctx->pc = 0x273154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x271D68u;
    {
        const uint32_t __entryPc = ctx->pc;
        StandardCamera_0x271d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273158u; }
    }
    if (ctx->pc != 0x273158u) { return; }
    ctx->pc = 0x273158u;
label_273158:
    // 0x273158: 0x1000005c
label_27315c:
    if (ctx->pc == 0x27315Cu) {
        ctx->pc = 0x27315Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x273160u;
        goto label_273160;
    }
    ctx->pc = 0x273158u;
    {
        const bool branch_taken_0x273158 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27315Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x273158) {
            ctx->pc = 0x2732CCu;
            goto label_2732cc;
        }
    }
    ctx->pc = 0x273160u;
label_273160:
    // 0x273160: 0x2c62000c
    ctx->pc = 0x273160u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 12));
label_273164:
    // 0x273164: 0x10400058
label_273168:
    if (ctx->pc == 0x273168u) {
        ctx->pc = 0x273168u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x27316Cu;
        goto label_27316c;
    }
    ctx->pc = 0x273164u;
    {
        const bool branch_taken_0x273164 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x273168u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x273164) {
            ctx->pc = 0x2732C8u;
            goto label_2732c8;
        }
    }
    ctx->pc = 0x27316Cu;
label_27316c:
    // 0x27316c: 0x2442a730
    ctx->pc = 0x27316cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944560));
label_273170:
    // 0x273170: 0x31880
    ctx->pc = 0x273170u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_273174:
    // 0x273174: 0x621821
    ctx->pc = 0x273174u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_273178:
    // 0x273178: 0x8c620000
    ctx->pc = 0x273178u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27317c:
    // 0x27317c: 0x400008
label_273180:
    if (ctx->pc == 0x273180u) {
        ctx->pc = 0x273184u;
        goto label_273184;
    }
    ctx->pc = 0x27317Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x272A68u: goto label_272a68;
            case 0x272A6Cu: goto label_272a6c;
            case 0x272A70u: goto label_272a70;
            case 0x272A74u: goto label_272a74;
            case 0x272A78u: goto label_272a78;
            case 0x272A7Cu: goto label_272a7c;
            case 0x272A80u: goto label_272a80;
            case 0x272A84u: goto label_272a84;
            case 0x272A88u: goto label_272a88;
            case 0x272A8Cu: goto label_272a8c;
            case 0x272A90u: goto label_272a90;
            case 0x272A94u: goto label_272a94;
            case 0x272A98u: goto label_272a98;
            case 0x272A9Cu: goto label_272a9c;
            case 0x272AA0u: goto label_272aa0;
            case 0x272AA4u: goto label_272aa4;
            case 0x272AA8u: goto label_272aa8;
            case 0x272AACu: goto label_272aac;
            case 0x272AB0u: goto label_272ab0;
            case 0x272AB4u: goto label_272ab4;
            case 0x272AB8u: goto label_272ab8;
            case 0x272ABCu: goto label_272abc;
            case 0x272AC0u: goto label_272ac0;
            case 0x272AC4u: goto label_272ac4;
            case 0x272AC8u: goto label_272ac8;
            case 0x272ACCu: goto label_272acc;
            case 0x272AD0u: goto label_272ad0;
            case 0x272AD4u: goto label_272ad4;
            case 0x272AD8u: goto label_272ad8;
            case 0x272ADCu: goto label_272adc;
            case 0x272AE0u: goto label_272ae0;
            case 0x272AE4u: goto label_272ae4;
            case 0x272AE8u: goto label_272ae8;
            case 0x272AECu: goto label_272aec;
            case 0x272AF0u: goto label_272af0;
            case 0x272AF4u: goto label_272af4;
            case 0x272AF8u: goto label_272af8;
            case 0x272AFCu: goto label_272afc;
            case 0x272B00u: goto label_272b00;
            case 0x272B04u: goto label_272b04;
            case 0x272B08u: goto label_272b08;
            case 0x272B0Cu: goto label_272b0c;
            case 0x272B10u: goto label_272b10;
            case 0x272B14u: goto label_272b14;
            case 0x272B18u: goto label_272b18;
            case 0x272B1Cu: goto label_272b1c;
            case 0x272B20u: goto label_272b20;
            case 0x272B24u: goto label_272b24;
            case 0x272B28u: goto label_272b28;
            case 0x272B2Cu: goto label_272b2c;
            case 0x272B30u: goto label_272b30;
            case 0x272B34u: goto label_272b34;
            case 0x272B38u: goto label_272b38;
            case 0x272B3Cu: goto label_272b3c;
            case 0x272B40u: goto label_272b40;
            case 0x272B44u: goto label_272b44;
            case 0x272B48u: goto label_272b48;
            case 0x272B4Cu: goto label_272b4c;
            case 0x272B50u: goto label_272b50;
            case 0x272B54u: goto label_272b54;
            case 0x272B58u: goto label_272b58;
            case 0x272B5Cu: goto label_272b5c;
            case 0x272B60u: goto label_272b60;
            case 0x272B64u: goto label_272b64;
            case 0x272B68u: goto label_272b68;
            case 0x272B6Cu: goto label_272b6c;
            case 0x272B70u: goto label_272b70;
            case 0x272B74u: goto label_272b74;
            case 0x272B78u: goto label_272b78;
            case 0x272B7Cu: goto label_272b7c;
            case 0x272B80u: goto label_272b80;
            case 0x272B84u: goto label_272b84;
            case 0x272B88u: goto label_272b88;
            case 0x272B8Cu: goto label_272b8c;
            case 0x272B90u: goto label_272b90;
            case 0x272B94u: goto label_272b94;
            case 0x272B98u: goto label_272b98;
            case 0x272B9Cu: goto label_272b9c;
            case 0x272BA0u: goto label_272ba0;
            case 0x272BA4u: goto label_272ba4;
            case 0x272BA8u: goto label_272ba8;
            case 0x272BACu: goto label_272bac;
            case 0x272BB0u: goto label_272bb0;
            case 0x272BB4u: goto label_272bb4;
            case 0x272BB8u: goto label_272bb8;
            case 0x272BBCu: goto label_272bbc;
            case 0x272BC0u: goto label_272bc0;
            case 0x272BC4u: goto label_272bc4;
            case 0x272BC8u: goto label_272bc8;
            case 0x272BCCu: goto label_272bcc;
            case 0x272BD0u: goto label_272bd0;
            case 0x272BD4u: goto label_272bd4;
            case 0x272BD8u: goto label_272bd8;
            case 0x272BDCu: goto label_272bdc;
            case 0x272BE0u: goto label_272be0;
            case 0x272BE4u: goto label_272be4;
            case 0x272BE8u: goto label_272be8;
            case 0x272BECu: goto label_272bec;
            case 0x272BF0u: goto label_272bf0;
            case 0x272BF4u: goto label_272bf4;
            case 0x272BF8u: goto label_272bf8;
            case 0x272BFCu: goto label_272bfc;
            case 0x272C00u: goto label_272c00;
            case 0x272C04u: goto label_272c04;
            case 0x272C08u: goto label_272c08;
            case 0x272C0Cu: goto label_272c0c;
            case 0x272C10u: goto label_272c10;
            case 0x272C14u: goto label_272c14;
            case 0x272C18u: goto label_272c18;
            case 0x272C1Cu: goto label_272c1c;
            case 0x272C20u: goto label_272c20;
            case 0x272C24u: goto label_272c24;
            case 0x272C28u: goto label_272c28;
            case 0x272C2Cu: goto label_272c2c;
            case 0x272C30u: goto label_272c30;
            case 0x272C34u: goto label_272c34;
            case 0x272C38u: goto label_272c38;
            case 0x272C3Cu: goto label_272c3c;
            case 0x272C40u: goto label_272c40;
            case 0x272C44u: goto label_272c44;
            case 0x272C48u: goto label_272c48;
            case 0x272C4Cu: goto label_272c4c;
            case 0x272C50u: goto label_272c50;
            case 0x272C54u: goto label_272c54;
            case 0x272C58u: goto label_272c58;
            case 0x272C5Cu: goto label_272c5c;
            case 0x272C60u: goto label_272c60;
            case 0x272C64u: goto label_272c64;
            case 0x272C68u: goto label_272c68;
            case 0x272C6Cu: goto label_272c6c;
            case 0x272C70u: goto label_272c70;
            case 0x272C74u: goto label_272c74;
            case 0x272C78u: goto label_272c78;
            case 0x272C7Cu: goto label_272c7c;
            case 0x272C80u: goto label_272c80;
            case 0x272C84u: goto label_272c84;
            case 0x272C88u: goto label_272c88;
            case 0x272C8Cu: goto label_272c8c;
            case 0x272C90u: goto label_272c90;
            case 0x272C94u: goto label_272c94;
            case 0x272C98u: goto label_272c98;
            case 0x272C9Cu: goto label_272c9c;
            case 0x272CA0u: goto label_272ca0;
            case 0x272CA4u: goto label_272ca4;
            case 0x272CA8u: goto label_272ca8;
            case 0x272CACu: goto label_272cac;
            case 0x272CB0u: goto label_272cb0;
            case 0x272CB4u: goto label_272cb4;
            case 0x272CB8u: goto label_272cb8;
            case 0x272CBCu: goto label_272cbc;
            case 0x272CC0u: goto label_272cc0;
            case 0x272CC4u: goto label_272cc4;
            case 0x272CC8u: goto label_272cc8;
            case 0x272CCCu: goto label_272ccc;
            case 0x272CD0u: goto label_272cd0;
            case 0x272CD4u: goto label_272cd4;
            case 0x272CD8u: goto label_272cd8;
            case 0x272CDCu: goto label_272cdc;
            case 0x272CE0u: goto label_272ce0;
            case 0x272CE4u: goto label_272ce4;
            case 0x272CE8u: goto label_272ce8;
            case 0x272CECu: goto label_272cec;
            case 0x272CF0u: goto label_272cf0;
            case 0x272CF4u: goto label_272cf4;
            case 0x272CF8u: goto label_272cf8;
            case 0x272CFCu: goto label_272cfc;
            case 0x272D00u: goto label_272d00;
            case 0x272D04u: goto label_272d04;
            case 0x272D08u: goto label_272d08;
            case 0x272D0Cu: goto label_272d0c;
            case 0x272D10u: goto label_272d10;
            case 0x272D14u: goto label_272d14;
            case 0x272D18u: goto label_272d18;
            case 0x272D1Cu: goto label_272d1c;
            case 0x272D20u: goto label_272d20;
            case 0x272D24u: goto label_272d24;
            case 0x272D28u: goto label_272d28;
            case 0x272D2Cu: goto label_272d2c;
            case 0x272D30u: goto label_272d30;
            case 0x272D34u: goto label_272d34;
            case 0x272D38u: goto label_272d38;
            case 0x272D3Cu: goto label_272d3c;
            case 0x272D40u: goto label_272d40;
            case 0x272D44u: goto label_272d44;
            case 0x272D48u: goto label_272d48;
            case 0x272D4Cu: goto label_272d4c;
            case 0x272D50u: goto label_272d50;
            case 0x272D54u: goto label_272d54;
            case 0x272D58u: goto label_272d58;
            case 0x272D5Cu: goto label_272d5c;
            case 0x272D60u: goto label_272d60;
            case 0x272D64u: goto label_272d64;
            case 0x272D68u: goto label_272d68;
            case 0x272D6Cu: goto label_272d6c;
            case 0x272D70u: goto label_272d70;
            case 0x272D74u: goto label_272d74;
            case 0x272D78u: goto label_272d78;
            case 0x272D7Cu: goto label_272d7c;
            case 0x272D80u: goto label_272d80;
            case 0x272D84u: goto label_272d84;
            case 0x272D88u: goto label_272d88;
            case 0x272D8Cu: goto label_272d8c;
            case 0x272D90u: goto label_272d90;
            case 0x272D94u: goto label_272d94;
            case 0x272D98u: goto label_272d98;
            case 0x272D9Cu: goto label_272d9c;
            case 0x272DA0u: goto label_272da0;
            case 0x272DA4u: goto label_272da4;
            case 0x272DA8u: goto label_272da8;
            case 0x272DACu: goto label_272dac;
            case 0x272DB0u: goto label_272db0;
            case 0x272DB4u: goto label_272db4;
            case 0x272DB8u: goto label_272db8;
            case 0x272DBCu: goto label_272dbc;
            case 0x272DC0u: goto label_272dc0;
            case 0x272DC4u: goto label_272dc4;
            case 0x272DC8u: goto label_272dc8;
            case 0x272DCCu: goto label_272dcc;
            case 0x272DD0u: goto label_272dd0;
            case 0x272DD4u: goto label_272dd4;
            case 0x272DD8u: goto label_272dd8;
            case 0x272DDCu: goto label_272ddc;
            case 0x272DE0u: goto label_272de0;
            case 0x272DE4u: goto label_272de4;
            case 0x272DE8u: goto label_272de8;
            case 0x272DECu: goto label_272dec;
            case 0x272DF0u: goto label_272df0;
            case 0x272DF4u: goto label_272df4;
            case 0x272DF8u: goto label_272df8;
            case 0x272DFCu: goto label_272dfc;
            case 0x272E00u: goto label_272e00;
            case 0x272E04u: goto label_272e04;
            case 0x272E08u: goto label_272e08;
            case 0x272E0Cu: goto label_272e0c;
            case 0x272E10u: goto label_272e10;
            case 0x272E14u: goto label_272e14;
            case 0x272E18u: goto label_272e18;
            case 0x272E1Cu: goto label_272e1c;
            case 0x272E20u: goto label_272e20;
            case 0x272E24u: goto label_272e24;
            case 0x272E28u: goto label_272e28;
            case 0x272E2Cu: goto label_272e2c;
            case 0x272E30u: goto label_272e30;
            case 0x272E34u: goto label_272e34;
            case 0x272E38u: goto label_272e38;
            case 0x272E3Cu: goto label_272e3c;
            case 0x272E40u: goto label_272e40;
            case 0x272E44u: goto label_272e44;
            case 0x272E48u: goto label_272e48;
            case 0x272E4Cu: goto label_272e4c;
            case 0x272E50u: goto label_272e50;
            case 0x272E54u: goto label_272e54;
            case 0x272E58u: goto label_272e58;
            case 0x272E5Cu: goto label_272e5c;
            case 0x272E60u: goto label_272e60;
            case 0x272E64u: goto label_272e64;
            case 0x272E68u: goto label_272e68;
            case 0x272E6Cu: goto label_272e6c;
            case 0x272E70u: goto label_272e70;
            case 0x272E74u: goto label_272e74;
            case 0x272E78u: goto label_272e78;
            case 0x272E7Cu: goto label_272e7c;
            case 0x272E80u: goto label_272e80;
            case 0x272E84u: goto label_272e84;
            case 0x272E88u: goto label_272e88;
            case 0x272E8Cu: goto label_272e8c;
            case 0x272E90u: goto label_272e90;
            case 0x272E94u: goto label_272e94;
            case 0x272E98u: goto label_272e98;
            case 0x272E9Cu: goto label_272e9c;
            case 0x272EA0u: goto label_272ea0;
            case 0x272EA4u: goto label_272ea4;
            case 0x272EA8u: goto label_272ea8;
            case 0x272EACu: goto label_272eac;
            case 0x272EB0u: goto label_272eb0;
            case 0x272EB4u: goto label_272eb4;
            case 0x272EB8u: goto label_272eb8;
            case 0x272EBCu: goto label_272ebc;
            case 0x272EC0u: goto label_272ec0;
            case 0x272EC4u: goto label_272ec4;
            case 0x272EC8u: goto label_272ec8;
            case 0x272ECCu: goto label_272ecc;
            case 0x272ED0u: goto label_272ed0;
            case 0x272ED4u: goto label_272ed4;
            case 0x272ED8u: goto label_272ed8;
            case 0x272EDCu: goto label_272edc;
            case 0x272EE0u: goto label_272ee0;
            case 0x272EE4u: goto label_272ee4;
            case 0x272EE8u: goto label_272ee8;
            case 0x272EECu: goto label_272eec;
            case 0x272EF0u: goto label_272ef0;
            case 0x272EF4u: goto label_272ef4;
            case 0x272EF8u: goto label_272ef8;
            case 0x272EFCu: goto label_272efc;
            case 0x272F00u: goto label_272f00;
            case 0x272F04u: goto label_272f04;
            case 0x272F08u: goto label_272f08;
            case 0x272F0Cu: goto label_272f0c;
            case 0x272F10u: goto label_272f10;
            case 0x272F14u: goto label_272f14;
            case 0x272F18u: goto label_272f18;
            case 0x272F1Cu: goto label_272f1c;
            case 0x272F20u: goto label_272f20;
            case 0x272F24u: goto label_272f24;
            case 0x272F28u: goto label_272f28;
            case 0x272F2Cu: goto label_272f2c;
            case 0x272F30u: goto label_272f30;
            case 0x272F34u: goto label_272f34;
            case 0x272F38u: goto label_272f38;
            case 0x272F3Cu: goto label_272f3c;
            case 0x272F40u: goto label_272f40;
            case 0x272F44u: goto label_272f44;
            case 0x272F48u: goto label_272f48;
            case 0x272F4Cu: goto label_272f4c;
            case 0x272F50u: goto label_272f50;
            case 0x272F54u: goto label_272f54;
            case 0x272F58u: goto label_272f58;
            case 0x272F5Cu: goto label_272f5c;
            case 0x272F60u: goto label_272f60;
            case 0x272F64u: goto label_272f64;
            case 0x272F68u: goto label_272f68;
            case 0x272F6Cu: goto label_272f6c;
            case 0x272F70u: goto label_272f70;
            case 0x272F74u: goto label_272f74;
            case 0x272F78u: goto label_272f78;
            case 0x272F7Cu: goto label_272f7c;
            case 0x272F80u: goto label_272f80;
            case 0x272F84u: goto label_272f84;
            case 0x272F88u: goto label_272f88;
            case 0x272F8Cu: goto label_272f8c;
            case 0x272F90u: goto label_272f90;
            case 0x272F94u: goto label_272f94;
            case 0x272F98u: goto label_272f98;
            case 0x272F9Cu: goto label_272f9c;
            case 0x272FA0u: goto label_272fa0;
            case 0x272FA4u: goto label_272fa4;
            case 0x272FA8u: goto label_272fa8;
            case 0x272FACu: goto label_272fac;
            case 0x272FB0u: goto label_272fb0;
            case 0x272FB4u: goto label_272fb4;
            case 0x272FB8u: goto label_272fb8;
            case 0x272FBCu: goto label_272fbc;
            case 0x272FC0u: goto label_272fc0;
            case 0x272FC4u: goto label_272fc4;
            case 0x272FC8u: goto label_272fc8;
            case 0x272FCCu: goto label_272fcc;
            case 0x272FD0u: goto label_272fd0;
            case 0x272FD4u: goto label_272fd4;
            case 0x272FD8u: goto label_272fd8;
            case 0x272FDCu: goto label_272fdc;
            case 0x272FE0u: goto label_272fe0;
            case 0x272FE4u: goto label_272fe4;
            case 0x272FE8u: goto label_272fe8;
            case 0x272FECu: goto label_272fec;
            case 0x272FF0u: goto label_272ff0;
            case 0x272FF4u: goto label_272ff4;
            case 0x272FF8u: goto label_272ff8;
            case 0x272FFCu: goto label_272ffc;
            case 0x273000u: goto label_273000;
            case 0x273004u: goto label_273004;
            case 0x273008u: goto label_273008;
            case 0x27300Cu: goto label_27300c;
            case 0x273010u: goto label_273010;
            case 0x273014u: goto label_273014;
            case 0x273018u: goto label_273018;
            case 0x27301Cu: goto label_27301c;
            case 0x273020u: goto label_273020;
            case 0x273024u: goto label_273024;
            case 0x273028u: goto label_273028;
            case 0x27302Cu: goto label_27302c;
            case 0x273030u: goto label_273030;
            case 0x273034u: goto label_273034;
            case 0x273038u: goto label_273038;
            case 0x27303Cu: goto label_27303c;
            case 0x273040u: goto label_273040;
            case 0x273044u: goto label_273044;
            case 0x273048u: goto label_273048;
            case 0x27304Cu: goto label_27304c;
            case 0x273050u: goto label_273050;
            case 0x273054u: goto label_273054;
            case 0x273058u: goto label_273058;
            case 0x27305Cu: goto label_27305c;
            case 0x273060u: goto label_273060;
            case 0x273064u: goto label_273064;
            case 0x273068u: goto label_273068;
            case 0x27306Cu: goto label_27306c;
            case 0x273070u: goto label_273070;
            case 0x273074u: goto label_273074;
            case 0x273078u: goto label_273078;
            case 0x27307Cu: goto label_27307c;
            case 0x273080u: goto label_273080;
            case 0x273084u: goto label_273084;
            case 0x273088u: goto label_273088;
            case 0x27308Cu: goto label_27308c;
            case 0x273090u: goto label_273090;
            case 0x273094u: goto label_273094;
            case 0x273098u: goto label_273098;
            case 0x27309Cu: goto label_27309c;
            case 0x2730A0u: goto label_2730a0;
            case 0x2730A4u: goto label_2730a4;
            case 0x2730A8u: goto label_2730a8;
            case 0x2730ACu: goto label_2730ac;
            case 0x2730B0u: goto label_2730b0;
            case 0x2730B4u: goto label_2730b4;
            case 0x2730B8u: goto label_2730b8;
            case 0x2730BCu: goto label_2730bc;
            case 0x2730C0u: goto label_2730c0;
            case 0x2730C4u: goto label_2730c4;
            case 0x2730C8u: goto label_2730c8;
            case 0x2730CCu: goto label_2730cc;
            case 0x2730D0u: goto label_2730d0;
            case 0x2730D4u: goto label_2730d4;
            case 0x2730D8u: goto label_2730d8;
            case 0x2730DCu: goto label_2730dc;
            case 0x2730E0u: goto label_2730e0;
            case 0x2730E4u: goto label_2730e4;
            case 0x2730E8u: goto label_2730e8;
            case 0x2730ECu: goto label_2730ec;
            case 0x2730F0u: goto label_2730f0;
            case 0x2730F4u: goto label_2730f4;
            case 0x2730F8u: goto label_2730f8;
            case 0x2730FCu: goto label_2730fc;
            case 0x273100u: goto label_273100;
            case 0x273104u: goto label_273104;
            case 0x273108u: goto label_273108;
            case 0x27310Cu: goto label_27310c;
            case 0x273110u: goto label_273110;
            case 0x273114u: goto label_273114;
            case 0x273118u: goto label_273118;
            case 0x27311Cu: goto label_27311c;
            case 0x273120u: goto label_273120;
            case 0x273124u: goto label_273124;
            case 0x273128u: goto label_273128;
            case 0x27312Cu: goto label_27312c;
            case 0x273130u: goto label_273130;
            case 0x273134u: goto label_273134;
            case 0x273138u: goto label_273138;
            case 0x27313Cu: goto label_27313c;
            case 0x273140u: goto label_273140;
            case 0x273144u: goto label_273144;
            case 0x273148u: goto label_273148;
            case 0x27314Cu: goto label_27314c;
            case 0x273150u: goto label_273150;
            case 0x273154u: goto label_273154;
            case 0x273158u: goto label_273158;
            case 0x27315Cu: goto label_27315c;
            case 0x273160u: goto label_273160;
            case 0x273164u: goto label_273164;
            case 0x273168u: goto label_273168;
            case 0x27316Cu: goto label_27316c;
            case 0x273170u: goto label_273170;
            case 0x273174u: goto label_273174;
            case 0x273178u: goto label_273178;
            case 0x27317Cu: goto label_27317c;
            case 0x273180u: goto label_273180;
            case 0x273184u: goto label_273184;
            case 0x273188u: goto label_273188;
            case 0x27318Cu: goto label_27318c;
            case 0x273190u: goto label_273190;
            case 0x273194u: goto label_273194;
            case 0x273198u: goto label_273198;
            case 0x27319Cu: goto label_27319c;
            case 0x2731A0u: goto label_2731a0;
            case 0x2731A4u: goto label_2731a4;
            case 0x2731A8u: goto label_2731a8;
            case 0x2731ACu: goto label_2731ac;
            case 0x2731B0u: goto label_2731b0;
            case 0x2731B4u: goto label_2731b4;
            case 0x2731B8u: goto label_2731b8;
            case 0x2731BCu: goto label_2731bc;
            case 0x2731C0u: goto label_2731c0;
            case 0x2731C4u: goto label_2731c4;
            case 0x2731C8u: goto label_2731c8;
            case 0x2731CCu: goto label_2731cc;
            case 0x2731D0u: goto label_2731d0;
            case 0x2731D4u: goto label_2731d4;
            case 0x2731D8u: goto label_2731d8;
            case 0x2731DCu: goto label_2731dc;
            case 0x2731E0u: goto label_2731e0;
            case 0x2731E4u: goto label_2731e4;
            case 0x2731E8u: goto label_2731e8;
            case 0x2731ECu: goto label_2731ec;
            case 0x2731F0u: goto label_2731f0;
            case 0x2731F4u: goto label_2731f4;
            case 0x2731F8u: goto label_2731f8;
            case 0x2731FCu: goto label_2731fc;
            case 0x273200u: goto label_273200;
            case 0x273204u: goto label_273204;
            case 0x273208u: goto label_273208;
            case 0x27320Cu: goto label_27320c;
            case 0x273210u: goto label_273210;
            case 0x273214u: goto label_273214;
            case 0x273218u: goto label_273218;
            case 0x27321Cu: goto label_27321c;
            case 0x273220u: goto label_273220;
            case 0x273224u: goto label_273224;
            case 0x273228u: goto label_273228;
            case 0x27322Cu: goto label_27322c;
            case 0x273230u: goto label_273230;
            case 0x273234u: goto label_273234;
            case 0x273238u: goto label_273238;
            case 0x27323Cu: goto label_27323c;
            case 0x273240u: goto label_273240;
            case 0x273244u: goto label_273244;
            case 0x273248u: goto label_273248;
            case 0x27324Cu: goto label_27324c;
            case 0x273250u: goto label_273250;
            case 0x273254u: goto label_273254;
            case 0x273258u: goto label_273258;
            case 0x27325Cu: goto label_27325c;
            case 0x273260u: goto label_273260;
            case 0x273264u: goto label_273264;
            case 0x273268u: goto label_273268;
            case 0x27326Cu: goto label_27326c;
            case 0x273270u: goto label_273270;
            case 0x273274u: goto label_273274;
            case 0x273278u: goto label_273278;
            case 0x27327Cu: goto label_27327c;
            case 0x273280u: goto label_273280;
            case 0x273284u: goto label_273284;
            case 0x273288u: goto label_273288;
            case 0x27328Cu: goto label_27328c;
            case 0x273290u: goto label_273290;
            case 0x273294u: goto label_273294;
            case 0x273298u: goto label_273298;
            case 0x27329Cu: goto label_27329c;
            case 0x2732A0u: goto label_2732a0;
            case 0x2732A4u: goto label_2732a4;
            case 0x2732A8u: goto label_2732a8;
            case 0x2732ACu: goto label_2732ac;
            case 0x2732B0u: goto label_2732b0;
            case 0x2732B4u: goto label_2732b4;
            case 0x2732B8u: goto label_2732b8;
            case 0x2732BCu: goto label_2732bc;
            case 0x2732C0u: goto label_2732c0;
            case 0x2732C4u: goto label_2732c4;
            case 0x2732C8u: goto label_2732c8;
            case 0x2732CCu: goto label_2732cc;
            case 0x2732D0u: goto label_2732d0;
            case 0x2732D4u: goto label_2732d4;
            case 0x2732D8u: goto label_2732d8;
            case 0x2732DCu: goto label_2732dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x273184u;
label_273184:
    // 0x273184: 0x8e2200d4
    ctx->pc = 0x273184u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_273188:
    // 0x273188: 0x1440000d
label_27318c:
    if (ctx->pc == 0x27318Cu) {
        ctx->pc = 0x27318Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x273190u;
        goto label_273190;
    }
    ctx->pc = 0x273188u;
    {
        const bool branch_taken_0x273188 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27318Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x273188) {
            ctx->pc = 0x2731C0u;
            goto label_2731c0;
        }
    }
    ctx->pc = 0x273190u;
label_273190:
    // 0x273190: 0x240202d
    ctx->pc = 0x273190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_273194:
    // 0x273194: 0xc09a2e4
label_273198:
    if (ctx->pc == 0x273198u) {
        ctx->pc = 0x273198u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
        ctx->pc = 0x27319Cu;
        goto label_27319c;
    }
    ctx->pc = 0x273194u;
    SET_GPR_U32(ctx, 31, 0x27319Cu);
    ctx->pc = 0x273198u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
    ctx->pc = 0x268B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_cam_pyr_0x268b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27319Cu; }
    }
    if (ctx->pc != 0x27319Cu) { return; }
    ctx->pc = 0x27319Cu;
label_27319c:
    // 0x27319c: 0x3c014049
    ctx->pc = 0x27319cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
label_2731a0:
    // 0x2731a0: 0x34210fdb
    ctx->pc = 0x2731a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_2731a4:
    // 0x2731a4: 0x44816800
    ctx->pc = 0x2731a4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_2731a8:
    // 0x2731a8: 0xc0b5a46
label_2731ac:
    if (ctx->pc == 0x2731ACu) {
        ctx->pc = 0x2731ACu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2731B0u;
        goto label_2731b0;
    }
    ctx->pc = 0x2731A8u;
    SET_GPR_U32(ctx, 31, 0x2731B0u);
    ctx->pc = 0x2731ACu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D6918u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddAngle_0x2d6918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2731B0u; }
    }
    if (ctx->pc != 0x2731B0u) { return; }
    ctx->pc = 0x2731B0u;
label_2731b0:
    // 0x2731b0: 0xe62000b4
    ctx->pc = 0x2731b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
label_2731b4:
    // 0x2731b4: 0x2402ffff
    ctx->pc = 0x2731b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2731b8:
    // 0x2731b8: 0xae2200d4
    ctx->pc = 0x2731b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
label_2731bc:
    // 0x2731bc: 0x3c020031
    ctx->pc = 0x2731bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2731c0:
    // 0x2731c0: 0x8c430018
    ctx->pc = 0x2731c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2731c4:
    // 0x2731c4: 0x34028008
    ctx->pc = 0x2731c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
label_2731c8:
    // 0x2731c8: 0x14620040
label_2731cc:
    if (ctx->pc == 0x2731CCu) {
        ctx->pc = 0x2731CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2731D0u;
        goto label_2731d0;
    }
    ctx->pc = 0x2731C8u;
    {
        const bool branch_taken_0x2731c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2731CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2731c8) {
            ctx->pc = 0x2732CCu;
            goto label_2732cc;
        }
    }
    ctx->pc = 0x2731D0u;
label_2731d0:
    // 0x2731d0: 0x3c020035
    ctx->pc = 0x2731d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2731d4:
    // 0x2731d4: 0x8c42a2e8
    ctx->pc = 0x2731d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943464)));
label_2731d8:
    // 0x2731d8: 0x5040003d
label_2731dc:
    if (ctx->pc == 0x2731DCu) {
        ctx->pc = 0x2731DCu;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2731E0u;
        goto label_2731e0;
    }
    ctx->pc = 0x2731D8u;
    {
        const bool branch_taken_0x2731d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2731d8) {
            ctx->pc = 0x2731DCu;
            SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->pc = 0x2732D0u;
            goto label_2732d0;
        }
    }
    ctx->pc = 0x2731E0u;
label_2731e0:
    // 0x2731e0: 0xc09b896
label_2731e4:
    if (ctx->pc == 0x2731E4u) {
        ctx->pc = 0x2731E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2731E8u;
        goto label_2731e8;
    }
    ctx->pc = 0x2731E0u;
    SET_GPR_U32(ctx, 31, 0x2731E8u);
    ctx->pc = 0x2731E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26E258u;
    {
        const uint32_t __entryPc = ctx->pc;
        MoveCam_walk_0x26e258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2731E8u; }
    }
    if (ctx->pc != 0x2731E8u) { return; }
    ctx->pc = 0x2731E8u;
label_2731e8:
    // 0x2731e8: 0x10000038
label_2731ec:
    if (ctx->pc == 0x2731ECu) {
        ctx->pc = 0x2731ECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2731F0u;
        goto label_2731f0;
    }
    ctx->pc = 0x2731E8u;
    {
        const bool branch_taken_0x2731e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2731ECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2731e8) {
            ctx->pc = 0x2732CCu;
            goto label_2732cc;
        }
    }
    ctx->pc = 0x2731F0u;
label_2731f0:
    // 0x2731f0: 0x8e2200d4
    ctx->pc = 0x2731f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2731f4:
    // 0x2731f4: 0x54400004
label_2731f8:
    if (ctx->pc == 0x2731F8u) {
        ctx->pc = 0x2731F8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2731FCu;
        goto label_2731fc;
    }
    ctx->pc = 0x2731F4u;
    {
        const bool branch_taken_0x2731f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2731f4) {
            ctx->pc = 0x2731F8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x273208u;
            goto label_273208;
        }
    }
    ctx->pc = 0x2731FCu;
label_2731fc:
    // 0x2731fc: 0x2402ffff
    ctx->pc = 0x2731fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_273200:
    // 0x273200: 0xae2200d4
    ctx->pc = 0x273200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
label_273204:
    // 0x273204: 0xc6210070
    ctx->pc = 0x273204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273208:
    // 0x273208: 0xc6220074
    ctx->pc = 0x273208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27320c:
    // 0x27320c: 0xc6230078
    ctx->pc = 0x27320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_273210:
    // 0x273210: 0x46010841
    ctx->pc = 0x273210u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[1]);
label_273214:
    // 0x273214: 0xe7a10000
    ctx->pc = 0x273214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_273218:
    // 0x273218: 0x46021081
    ctx->pc = 0x273218u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[2]);
label_27321c:
    // 0x27321c: 0xe7a20004
    ctx->pc = 0x27321cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_273220:
    // 0x273220: 0x460318c1
    ctx->pc = 0x273220u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[3]);
label_273224:
    // 0x273224: 0xe7a30008
    ctx->pc = 0x273224u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_273228:
    // 0x273228: 0xc6200140
    ctx->pc = 0x273228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27322c:
    // 0x27322c: 0x46010000
    ctx->pc = 0x27322cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_273230:
    // 0x273230: 0xe6200140
    ctx->pc = 0x273230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
label_273234:
    // 0x273234: 0xc6200144
    ctx->pc = 0x273234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273238:
    // 0x273238: 0x46020000
    ctx->pc = 0x273238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_27323c:
    // 0x27323c: 0xe6200144
    ctx->pc = 0x27323cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
label_273240:
    // 0x273240: 0xc6200148
    ctx->pc = 0x273240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273244:
    // 0x273244: 0x46030000
    ctx->pc = 0x273244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_273248:
    // 0x273248: 0xe6200148
    ctx->pc = 0x273248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
label_27324c:
    // 0x27324c: 0x3c020031
    ctx->pc = 0x27324cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_273250:
    // 0x273250: 0x8c430018
    ctx->pc = 0x273250u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_273254:
    // 0x273254: 0x34028008
    ctx->pc = 0x273254u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
label_273258:
    // 0x273258: 0x14620004
label_27325c:
    if (ctx->pc == 0x27325Cu) {
        ctx->pc = 0x27325Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x273260u;
        goto label_273260;
    }
    ctx->pc = 0x273258u;
    {
        const bool branch_taken_0x273258 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x27325Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x273258) {
            ctx->pc = 0x27326Cu;
            goto label_27326c;
        }
    }
    ctx->pc = 0x273260u;
label_273260:
    // 0x273260: 0xc09b514
label_273264:
    if (ctx->pc == 0x273264u) {
        ctx->pc = 0x273264u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x273268u;
        goto label_273268;
    }
    ctx->pc = 0x273260u;
    SET_GPR_U32(ctx, 31, 0x273268u);
    ctx->pc = 0x273264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26D450u;
    {
        const uint32_t __entryPc = ctx->pc;
        MoveCam_flyby_mode_0x26d450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273268u; }
    }
    if (ctx->pc != 0x273268u) { return; }
    ctx->pc = 0x273268u;
label_273268:
    // 0x273268: 0x3c02003c
    ctx->pc = 0x273268u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_27326c:
    // 0x27326c: 0x8c4238d4
    ctx->pc = 0x27326cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14548)));
label_273270:
    // 0x273270: 0x10400004
label_273274:
    if (ctx->pc == 0x273274u) {
        ctx->pc = 0x273274u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 320));
        ctx->pc = 0x273278u;
        goto label_273278;
    }
    ctx->pc = 0x273270u;
    {
        const bool branch_taken_0x273270 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x273274u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 320));
        if (branch_taken_0x273270) {
            ctx->pc = 0x273284u;
            goto label_273284;
        }
    }
    ctx->pc = 0x273278u;
label_273278:
    // 0x273278: 0x26250070
    ctx->pc = 0x273278u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 112));
label_27327c:
    // 0x27327c: 0xc099c08
label_273280:
    if (ctx->pc == 0x273280u) {
        ctx->pc = 0x273280u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x273284u;
        goto label_273284;
    }
    ctx->pc = 0x27327Cu;
    SET_GPR_U32(ctx, 31, 0x273284u);
    ctx->pc = 0x273280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x267020u;
    {
        const uint32_t __entryPc = ctx->pc;
        fix_radius_0x267020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273284u; }
    }
    if (ctx->pc != 0x273284u) { return; }
    ctx->pc = 0x273284u;
label_273284:
    // 0x273284: 0x26300140
    ctx->pc = 0x273284u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 320));
label_273288:
    // 0x273288: 0x240202d
    ctx->pc = 0x273288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27328c:
    // 0x27328c: 0xc09a2e4
label_273290:
    if (ctx->pc == 0x273290u) {
        ctx->pc = 0x273290u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x273294u;
        goto label_273294;
    }
    ctx->pc = 0x27328Cu;
    SET_GPR_U32(ctx, 31, 0x273294u);
    ctx->pc = 0x273290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x268B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_cam_pyr_0x268b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273294u; }
    }
    if (ctx->pc != 0x273294u) { return; }
    ctx->pc = 0x273294u;
label_273294:
    // 0x273294: 0xc62000b0
    ctx->pc = 0x273294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273298:
    // 0x273298: 0x46000007
    ctx->pc = 0x273298u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_27329c:
    // 0x27329c: 0xe62000b0
    ctx->pc = 0x27329cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
label_2732a0:
    // 0x2732a0: 0x240202d
    ctx->pc = 0x2732a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2732a4:
    // 0x2732a4: 0xc09a760
label_2732a8:
    if (ctx->pc == 0x2732A8u) {
        ctx->pc = 0x2732A8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2732ACu;
        goto label_2732ac;
    }
    ctx->pc = 0x2732A4u;
    SET_GPR_U32(ctx, 31, 0x2732ACu);
    ctx->pc = 0x2732A8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x269D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_orient_to_0x269d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2732ACu; }
    }
    if (ctx->pc != 0x2732ACu) { return; }
    ctx->pc = 0x2732ACu;
label_2732ac:
    // 0x2732ac: 0x10000007
label_2732b0:
    if (ctx->pc == 0x2732B0u) {
        ctx->pc = 0x2732B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2732B4u;
        goto label_2732b4;
    }
    ctx->pc = 0x2732ACu;
    {
        const bool branch_taken_0x2732ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2732B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2732ac) {
            ctx->pc = 0x2732CCu;
            goto label_2732cc;
        }
    }
    ctx->pc = 0x2732B4u;
label_2732b4:
    // 0x2732b4: 0xc09c60e
label_2732b8:
    if (ctx->pc == 0x2732B8u) {
        ctx->pc = 0x2732B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2732BCu;
        goto label_2732bc;
    }
    ctx->pc = 0x2732B4u;
    SET_GPR_U32(ctx, 31, 0x2732BCu);
    ctx->pc = 0x2732B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x271838u;
    {
        const uint32_t __entryPc = ctx->pc;
        FirstPersonCamera_0x271838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2732BCu; }
    }
    if (ctx->pc != 0x2732BCu) { return; }
    ctx->pc = 0x2732BCu;
label_2732bc:
    // 0x2732bc: 0x10000003
label_2732c0:
    if (ctx->pc == 0x2732C0u) {
        ctx->pc = 0x2732C0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2732C4u;
        goto label_2732c4;
    }
    ctx->pc = 0x2732BCu;
    {
        const bool branch_taken_0x2732bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2732C0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2732bc) {
            ctx->pc = 0x2732CCu;
            goto label_2732cc;
        }
    }
    ctx->pc = 0x2732C4u;
label_2732c4:
    // 0x2732c4: 0xae200000
    ctx->pc = 0x2732c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2732c8:
    // 0x2732c8: 0xdfbf0050
    ctx->pc = 0x2732c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2732cc:
    // 0x2732cc: 0xdfb20040
    ctx->pc = 0x2732ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2732d0:
    // 0x2732d0: 0xdfb10030
    ctx->pc = 0x2732d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2732d4:
    // 0x2732d4: 0xdfb00020
    ctx->pc = 0x2732d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2732d8:
    // 0x2732d8: 0x3e00008
label_2732dc:
    if (ctx->pc == 0x2732DCu) {
        ctx->pc = 0x2732DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2732E0u;
        goto label_fallthrough_0x2732d8;
    }
    ctx->pc = 0x2732D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2732DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x272A68u: goto label_272a68;
            case 0x272A6Cu: goto label_272a6c;
            case 0x272A70u: goto label_272a70;
            case 0x272A74u: goto label_272a74;
            case 0x272A78u: goto label_272a78;
            case 0x272A7Cu: goto label_272a7c;
            case 0x272A80u: goto label_272a80;
            case 0x272A84u: goto label_272a84;
            case 0x272A88u: goto label_272a88;
            case 0x272A8Cu: goto label_272a8c;
            case 0x272A90u: goto label_272a90;
            case 0x272A94u: goto label_272a94;
            case 0x272A98u: goto label_272a98;
            case 0x272A9Cu: goto label_272a9c;
            case 0x272AA0u: goto label_272aa0;
            case 0x272AA4u: goto label_272aa4;
            case 0x272AA8u: goto label_272aa8;
            case 0x272AACu: goto label_272aac;
            case 0x272AB0u: goto label_272ab0;
            case 0x272AB4u: goto label_272ab4;
            case 0x272AB8u: goto label_272ab8;
            case 0x272ABCu: goto label_272abc;
            case 0x272AC0u: goto label_272ac0;
            case 0x272AC4u: goto label_272ac4;
            case 0x272AC8u: goto label_272ac8;
            case 0x272ACCu: goto label_272acc;
            case 0x272AD0u: goto label_272ad0;
            case 0x272AD4u: goto label_272ad4;
            case 0x272AD8u: goto label_272ad8;
            case 0x272ADCu: goto label_272adc;
            case 0x272AE0u: goto label_272ae0;
            case 0x272AE4u: goto label_272ae4;
            case 0x272AE8u: goto label_272ae8;
            case 0x272AECu: goto label_272aec;
            case 0x272AF0u: goto label_272af0;
            case 0x272AF4u: goto label_272af4;
            case 0x272AF8u: goto label_272af8;
            case 0x272AFCu: goto label_272afc;
            case 0x272B00u: goto label_272b00;
            case 0x272B04u: goto label_272b04;
            case 0x272B08u: goto label_272b08;
            case 0x272B0Cu: goto label_272b0c;
            case 0x272B10u: goto label_272b10;
            case 0x272B14u: goto label_272b14;
            case 0x272B18u: goto label_272b18;
            case 0x272B1Cu: goto label_272b1c;
            case 0x272B20u: goto label_272b20;
            case 0x272B24u: goto label_272b24;
            case 0x272B28u: goto label_272b28;
            case 0x272B2Cu: goto label_272b2c;
            case 0x272B30u: goto label_272b30;
            case 0x272B34u: goto label_272b34;
            case 0x272B38u: goto label_272b38;
            case 0x272B3Cu: goto label_272b3c;
            case 0x272B40u: goto label_272b40;
            case 0x272B44u: goto label_272b44;
            case 0x272B48u: goto label_272b48;
            case 0x272B4Cu: goto label_272b4c;
            case 0x272B50u: goto label_272b50;
            case 0x272B54u: goto label_272b54;
            case 0x272B58u: goto label_272b58;
            case 0x272B5Cu: goto label_272b5c;
            case 0x272B60u: goto label_272b60;
            case 0x272B64u: goto label_272b64;
            case 0x272B68u: goto label_272b68;
            case 0x272B6Cu: goto label_272b6c;
            case 0x272B70u: goto label_272b70;
            case 0x272B74u: goto label_272b74;
            case 0x272B78u: goto label_272b78;
            case 0x272B7Cu: goto label_272b7c;
            case 0x272B80u: goto label_272b80;
            case 0x272B84u: goto label_272b84;
            case 0x272B88u: goto label_272b88;
            case 0x272B8Cu: goto label_272b8c;
            case 0x272B90u: goto label_272b90;
            case 0x272B94u: goto label_272b94;
            case 0x272B98u: goto label_272b98;
            case 0x272B9Cu: goto label_272b9c;
            case 0x272BA0u: goto label_272ba0;
            case 0x272BA4u: goto label_272ba4;
            case 0x272BA8u: goto label_272ba8;
            case 0x272BACu: goto label_272bac;
            case 0x272BB0u: goto label_272bb0;
            case 0x272BB4u: goto label_272bb4;
            case 0x272BB8u: goto label_272bb8;
            case 0x272BBCu: goto label_272bbc;
            case 0x272BC0u: goto label_272bc0;
            case 0x272BC4u: goto label_272bc4;
            case 0x272BC8u: goto label_272bc8;
            case 0x272BCCu: goto label_272bcc;
            case 0x272BD0u: goto label_272bd0;
            case 0x272BD4u: goto label_272bd4;
            case 0x272BD8u: goto label_272bd8;
            case 0x272BDCu: goto label_272bdc;
            case 0x272BE0u: goto label_272be0;
            case 0x272BE4u: goto label_272be4;
            case 0x272BE8u: goto label_272be8;
            case 0x272BECu: goto label_272bec;
            case 0x272BF0u: goto label_272bf0;
            case 0x272BF4u: goto label_272bf4;
            case 0x272BF8u: goto label_272bf8;
            case 0x272BFCu: goto label_272bfc;
            case 0x272C00u: goto label_272c00;
            case 0x272C04u: goto label_272c04;
            case 0x272C08u: goto label_272c08;
            case 0x272C0Cu: goto label_272c0c;
            case 0x272C10u: goto label_272c10;
            case 0x272C14u: goto label_272c14;
            case 0x272C18u: goto label_272c18;
            case 0x272C1Cu: goto label_272c1c;
            case 0x272C20u: goto label_272c20;
            case 0x272C24u: goto label_272c24;
            case 0x272C28u: goto label_272c28;
            case 0x272C2Cu: goto label_272c2c;
            case 0x272C30u: goto label_272c30;
            case 0x272C34u: goto label_272c34;
            case 0x272C38u: goto label_272c38;
            case 0x272C3Cu: goto label_272c3c;
            case 0x272C40u: goto label_272c40;
            case 0x272C44u: goto label_272c44;
            case 0x272C48u: goto label_272c48;
            case 0x272C4Cu: goto label_272c4c;
            case 0x272C50u: goto label_272c50;
            case 0x272C54u: goto label_272c54;
            case 0x272C58u: goto label_272c58;
            case 0x272C5Cu: goto label_272c5c;
            case 0x272C60u: goto label_272c60;
            case 0x272C64u: goto label_272c64;
            case 0x272C68u: goto label_272c68;
            case 0x272C6Cu: goto label_272c6c;
            case 0x272C70u: goto label_272c70;
            case 0x272C74u: goto label_272c74;
            case 0x272C78u: goto label_272c78;
            case 0x272C7Cu: goto label_272c7c;
            case 0x272C80u: goto label_272c80;
            case 0x272C84u: goto label_272c84;
            case 0x272C88u: goto label_272c88;
            case 0x272C8Cu: goto label_272c8c;
            case 0x272C90u: goto label_272c90;
            case 0x272C94u: goto label_272c94;
            case 0x272C98u: goto label_272c98;
            case 0x272C9Cu: goto label_272c9c;
            case 0x272CA0u: goto label_272ca0;
            case 0x272CA4u: goto label_272ca4;
            case 0x272CA8u: goto label_272ca8;
            case 0x272CACu: goto label_272cac;
            case 0x272CB0u: goto label_272cb0;
            case 0x272CB4u: goto label_272cb4;
            case 0x272CB8u: goto label_272cb8;
            case 0x272CBCu: goto label_272cbc;
            case 0x272CC0u: goto label_272cc0;
            case 0x272CC4u: goto label_272cc4;
            case 0x272CC8u: goto label_272cc8;
            case 0x272CCCu: goto label_272ccc;
            case 0x272CD0u: goto label_272cd0;
            case 0x272CD4u: goto label_272cd4;
            case 0x272CD8u: goto label_272cd8;
            case 0x272CDCu: goto label_272cdc;
            case 0x272CE0u: goto label_272ce0;
            case 0x272CE4u: goto label_272ce4;
            case 0x272CE8u: goto label_272ce8;
            case 0x272CECu: goto label_272cec;
            case 0x272CF0u: goto label_272cf0;
            case 0x272CF4u: goto label_272cf4;
            case 0x272CF8u: goto label_272cf8;
            case 0x272CFCu: goto label_272cfc;
            case 0x272D00u: goto label_272d00;
            case 0x272D04u: goto label_272d04;
            case 0x272D08u: goto label_272d08;
            case 0x272D0Cu: goto label_272d0c;
            case 0x272D10u: goto label_272d10;
            case 0x272D14u: goto label_272d14;
            case 0x272D18u: goto label_272d18;
            case 0x272D1Cu: goto label_272d1c;
            case 0x272D20u: goto label_272d20;
            case 0x272D24u: goto label_272d24;
            case 0x272D28u: goto label_272d28;
            case 0x272D2Cu: goto label_272d2c;
            case 0x272D30u: goto label_272d30;
            case 0x272D34u: goto label_272d34;
            case 0x272D38u: goto label_272d38;
            case 0x272D3Cu: goto label_272d3c;
            case 0x272D40u: goto label_272d40;
            case 0x272D44u: goto label_272d44;
            case 0x272D48u: goto label_272d48;
            case 0x272D4Cu: goto label_272d4c;
            case 0x272D50u: goto label_272d50;
            case 0x272D54u: goto label_272d54;
            case 0x272D58u: goto label_272d58;
            case 0x272D5Cu: goto label_272d5c;
            case 0x272D60u: goto label_272d60;
            case 0x272D64u: goto label_272d64;
            case 0x272D68u: goto label_272d68;
            case 0x272D6Cu: goto label_272d6c;
            case 0x272D70u: goto label_272d70;
            case 0x272D74u: goto label_272d74;
            case 0x272D78u: goto label_272d78;
            case 0x272D7Cu: goto label_272d7c;
            case 0x272D80u: goto label_272d80;
            case 0x272D84u: goto label_272d84;
            case 0x272D88u: goto label_272d88;
            case 0x272D8Cu: goto label_272d8c;
            case 0x272D90u: goto label_272d90;
            case 0x272D94u: goto label_272d94;
            case 0x272D98u: goto label_272d98;
            case 0x272D9Cu: goto label_272d9c;
            case 0x272DA0u: goto label_272da0;
            case 0x272DA4u: goto label_272da4;
            case 0x272DA8u: goto label_272da8;
            case 0x272DACu: goto label_272dac;
            case 0x272DB0u: goto label_272db0;
            case 0x272DB4u: goto label_272db4;
            case 0x272DB8u: goto label_272db8;
            case 0x272DBCu: goto label_272dbc;
            case 0x272DC0u: goto label_272dc0;
            case 0x272DC4u: goto label_272dc4;
            case 0x272DC8u: goto label_272dc8;
            case 0x272DCCu: goto label_272dcc;
            case 0x272DD0u: goto label_272dd0;
            case 0x272DD4u: goto label_272dd4;
            case 0x272DD8u: goto label_272dd8;
            case 0x272DDCu: goto label_272ddc;
            case 0x272DE0u: goto label_272de0;
            case 0x272DE4u: goto label_272de4;
            case 0x272DE8u: goto label_272de8;
            case 0x272DECu: goto label_272dec;
            case 0x272DF0u: goto label_272df0;
            case 0x272DF4u: goto label_272df4;
            case 0x272DF8u: goto label_272df8;
            case 0x272DFCu: goto label_272dfc;
            case 0x272E00u: goto label_272e00;
            case 0x272E04u: goto label_272e04;
            case 0x272E08u: goto label_272e08;
            case 0x272E0Cu: goto label_272e0c;
            case 0x272E10u: goto label_272e10;
            case 0x272E14u: goto label_272e14;
            case 0x272E18u: goto label_272e18;
            case 0x272E1Cu: goto label_272e1c;
            case 0x272E20u: goto label_272e20;
            case 0x272E24u: goto label_272e24;
            case 0x272E28u: goto label_272e28;
            case 0x272E2Cu: goto label_272e2c;
            case 0x272E30u: goto label_272e30;
            case 0x272E34u: goto label_272e34;
            case 0x272E38u: goto label_272e38;
            case 0x272E3Cu: goto label_272e3c;
            case 0x272E40u: goto label_272e40;
            case 0x272E44u: goto label_272e44;
            case 0x272E48u: goto label_272e48;
            case 0x272E4Cu: goto label_272e4c;
            case 0x272E50u: goto label_272e50;
            case 0x272E54u: goto label_272e54;
            case 0x272E58u: goto label_272e58;
            case 0x272E5Cu: goto label_272e5c;
            case 0x272E60u: goto label_272e60;
            case 0x272E64u: goto label_272e64;
            case 0x272E68u: goto label_272e68;
            case 0x272E6Cu: goto label_272e6c;
            case 0x272E70u: goto label_272e70;
            case 0x272E74u: goto label_272e74;
            case 0x272E78u: goto label_272e78;
            case 0x272E7Cu: goto label_272e7c;
            case 0x272E80u: goto label_272e80;
            case 0x272E84u: goto label_272e84;
            case 0x272E88u: goto label_272e88;
            case 0x272E8Cu: goto label_272e8c;
            case 0x272E90u: goto label_272e90;
            case 0x272E94u: goto label_272e94;
            case 0x272E98u: goto label_272e98;
            case 0x272E9Cu: goto label_272e9c;
            case 0x272EA0u: goto label_272ea0;
            case 0x272EA4u: goto label_272ea4;
            case 0x272EA8u: goto label_272ea8;
            case 0x272EACu: goto label_272eac;
            case 0x272EB0u: goto label_272eb0;
            case 0x272EB4u: goto label_272eb4;
            case 0x272EB8u: goto label_272eb8;
            case 0x272EBCu: goto label_272ebc;
            case 0x272EC0u: goto label_272ec0;
            case 0x272EC4u: goto label_272ec4;
            case 0x272EC8u: goto label_272ec8;
            case 0x272ECCu: goto label_272ecc;
            case 0x272ED0u: goto label_272ed0;
            case 0x272ED4u: goto label_272ed4;
            case 0x272ED8u: goto label_272ed8;
            case 0x272EDCu: goto label_272edc;
            case 0x272EE0u: goto label_272ee0;
            case 0x272EE4u: goto label_272ee4;
            case 0x272EE8u: goto label_272ee8;
            case 0x272EECu: goto label_272eec;
            case 0x272EF0u: goto label_272ef0;
            case 0x272EF4u: goto label_272ef4;
            case 0x272EF8u: goto label_272ef8;
            case 0x272EFCu: goto label_272efc;
            case 0x272F00u: goto label_272f00;
            case 0x272F04u: goto label_272f04;
            case 0x272F08u: goto label_272f08;
            case 0x272F0Cu: goto label_272f0c;
            case 0x272F10u: goto label_272f10;
            case 0x272F14u: goto label_272f14;
            case 0x272F18u: goto label_272f18;
            case 0x272F1Cu: goto label_272f1c;
            case 0x272F20u: goto label_272f20;
            case 0x272F24u: goto label_272f24;
            case 0x272F28u: goto label_272f28;
            case 0x272F2Cu: goto label_272f2c;
            case 0x272F30u: goto label_272f30;
            case 0x272F34u: goto label_272f34;
            case 0x272F38u: goto label_272f38;
            case 0x272F3Cu: goto label_272f3c;
            case 0x272F40u: goto label_272f40;
            case 0x272F44u: goto label_272f44;
            case 0x272F48u: goto label_272f48;
            case 0x272F4Cu: goto label_272f4c;
            case 0x272F50u: goto label_272f50;
            case 0x272F54u: goto label_272f54;
            case 0x272F58u: goto label_272f58;
            case 0x272F5Cu: goto label_272f5c;
            case 0x272F60u: goto label_272f60;
            case 0x272F64u: goto label_272f64;
            case 0x272F68u: goto label_272f68;
            case 0x272F6Cu: goto label_272f6c;
            case 0x272F70u: goto label_272f70;
            case 0x272F74u: goto label_272f74;
            case 0x272F78u: goto label_272f78;
            case 0x272F7Cu: goto label_272f7c;
            case 0x272F80u: goto label_272f80;
            case 0x272F84u: goto label_272f84;
            case 0x272F88u: goto label_272f88;
            case 0x272F8Cu: goto label_272f8c;
            case 0x272F90u: goto label_272f90;
            case 0x272F94u: goto label_272f94;
            case 0x272F98u: goto label_272f98;
            case 0x272F9Cu: goto label_272f9c;
            case 0x272FA0u: goto label_272fa0;
            case 0x272FA4u: goto label_272fa4;
            case 0x272FA8u: goto label_272fa8;
            case 0x272FACu: goto label_272fac;
            case 0x272FB0u: goto label_272fb0;
            case 0x272FB4u: goto label_272fb4;
            case 0x272FB8u: goto label_272fb8;
            case 0x272FBCu: goto label_272fbc;
            case 0x272FC0u: goto label_272fc0;
            case 0x272FC4u: goto label_272fc4;
            case 0x272FC8u: goto label_272fc8;
            case 0x272FCCu: goto label_272fcc;
            case 0x272FD0u: goto label_272fd0;
            case 0x272FD4u: goto label_272fd4;
            case 0x272FD8u: goto label_272fd8;
            case 0x272FDCu: goto label_272fdc;
            case 0x272FE0u: goto label_272fe0;
            case 0x272FE4u: goto label_272fe4;
            case 0x272FE8u: goto label_272fe8;
            case 0x272FECu: goto label_272fec;
            case 0x272FF0u: goto label_272ff0;
            case 0x272FF4u: goto label_272ff4;
            case 0x272FF8u: goto label_272ff8;
            case 0x272FFCu: goto label_272ffc;
            case 0x273000u: goto label_273000;
            case 0x273004u: goto label_273004;
            case 0x273008u: goto label_273008;
            case 0x27300Cu: goto label_27300c;
            case 0x273010u: goto label_273010;
            case 0x273014u: goto label_273014;
            case 0x273018u: goto label_273018;
            case 0x27301Cu: goto label_27301c;
            case 0x273020u: goto label_273020;
            case 0x273024u: goto label_273024;
            case 0x273028u: goto label_273028;
            case 0x27302Cu: goto label_27302c;
            case 0x273030u: goto label_273030;
            case 0x273034u: goto label_273034;
            case 0x273038u: goto label_273038;
            case 0x27303Cu: goto label_27303c;
            case 0x273040u: goto label_273040;
            case 0x273044u: goto label_273044;
            case 0x273048u: goto label_273048;
            case 0x27304Cu: goto label_27304c;
            case 0x273050u: goto label_273050;
            case 0x273054u: goto label_273054;
            case 0x273058u: goto label_273058;
            case 0x27305Cu: goto label_27305c;
            case 0x273060u: goto label_273060;
            case 0x273064u: goto label_273064;
            case 0x273068u: goto label_273068;
            case 0x27306Cu: goto label_27306c;
            case 0x273070u: goto label_273070;
            case 0x273074u: goto label_273074;
            case 0x273078u: goto label_273078;
            case 0x27307Cu: goto label_27307c;
            case 0x273080u: goto label_273080;
            case 0x273084u: goto label_273084;
            case 0x273088u: goto label_273088;
            case 0x27308Cu: goto label_27308c;
            case 0x273090u: goto label_273090;
            case 0x273094u: goto label_273094;
            case 0x273098u: goto label_273098;
            case 0x27309Cu: goto label_27309c;
            case 0x2730A0u: goto label_2730a0;
            case 0x2730A4u: goto label_2730a4;
            case 0x2730A8u: goto label_2730a8;
            case 0x2730ACu: goto label_2730ac;
            case 0x2730B0u: goto label_2730b0;
            case 0x2730B4u: goto label_2730b4;
            case 0x2730B8u: goto label_2730b8;
            case 0x2730BCu: goto label_2730bc;
            case 0x2730C0u: goto label_2730c0;
            case 0x2730C4u: goto label_2730c4;
            case 0x2730C8u: goto label_2730c8;
            case 0x2730CCu: goto label_2730cc;
            case 0x2730D0u: goto label_2730d0;
            case 0x2730D4u: goto label_2730d4;
            case 0x2730D8u: goto label_2730d8;
            case 0x2730DCu: goto label_2730dc;
            case 0x2730E0u: goto label_2730e0;
            case 0x2730E4u: goto label_2730e4;
            case 0x2730E8u: goto label_2730e8;
            case 0x2730ECu: goto label_2730ec;
            case 0x2730F0u: goto label_2730f0;
            case 0x2730F4u: goto label_2730f4;
            case 0x2730F8u: goto label_2730f8;
            case 0x2730FCu: goto label_2730fc;
            case 0x273100u: goto label_273100;
            case 0x273104u: goto label_273104;
            case 0x273108u: goto label_273108;
            case 0x27310Cu: goto label_27310c;
            case 0x273110u: goto label_273110;
            case 0x273114u: goto label_273114;
            case 0x273118u: goto label_273118;
            case 0x27311Cu: goto label_27311c;
            case 0x273120u: goto label_273120;
            case 0x273124u: goto label_273124;
            case 0x273128u: goto label_273128;
            case 0x27312Cu: goto label_27312c;
            case 0x273130u: goto label_273130;
            case 0x273134u: goto label_273134;
            case 0x273138u: goto label_273138;
            case 0x27313Cu: goto label_27313c;
            case 0x273140u: goto label_273140;
            case 0x273144u: goto label_273144;
            case 0x273148u: goto label_273148;
            case 0x27314Cu: goto label_27314c;
            case 0x273150u: goto label_273150;
            case 0x273154u: goto label_273154;
            case 0x273158u: goto label_273158;
            case 0x27315Cu: goto label_27315c;
            case 0x273160u: goto label_273160;
            case 0x273164u: goto label_273164;
            case 0x273168u: goto label_273168;
            case 0x27316Cu: goto label_27316c;
            case 0x273170u: goto label_273170;
            case 0x273174u: goto label_273174;
            case 0x273178u: goto label_273178;
            case 0x27317Cu: goto label_27317c;
            case 0x273180u: goto label_273180;
            case 0x273184u: goto label_273184;
            case 0x273188u: goto label_273188;
            case 0x27318Cu: goto label_27318c;
            case 0x273190u: goto label_273190;
            case 0x273194u: goto label_273194;
            case 0x273198u: goto label_273198;
            case 0x27319Cu: goto label_27319c;
            case 0x2731A0u: goto label_2731a0;
            case 0x2731A4u: goto label_2731a4;
            case 0x2731A8u: goto label_2731a8;
            case 0x2731ACu: goto label_2731ac;
            case 0x2731B0u: goto label_2731b0;
            case 0x2731B4u: goto label_2731b4;
            case 0x2731B8u: goto label_2731b8;
            case 0x2731BCu: goto label_2731bc;
            case 0x2731C0u: goto label_2731c0;
            case 0x2731C4u: goto label_2731c4;
            case 0x2731C8u: goto label_2731c8;
            case 0x2731CCu: goto label_2731cc;
            case 0x2731D0u: goto label_2731d0;
            case 0x2731D4u: goto label_2731d4;
            case 0x2731D8u: goto label_2731d8;
            case 0x2731DCu: goto label_2731dc;
            case 0x2731E0u: goto label_2731e0;
            case 0x2731E4u: goto label_2731e4;
            case 0x2731E8u: goto label_2731e8;
            case 0x2731ECu: goto label_2731ec;
            case 0x2731F0u: goto label_2731f0;
            case 0x2731F4u: goto label_2731f4;
            case 0x2731F8u: goto label_2731f8;
            case 0x2731FCu: goto label_2731fc;
            case 0x273200u: goto label_273200;
            case 0x273204u: goto label_273204;
            case 0x273208u: goto label_273208;
            case 0x27320Cu: goto label_27320c;
            case 0x273210u: goto label_273210;
            case 0x273214u: goto label_273214;
            case 0x273218u: goto label_273218;
            case 0x27321Cu: goto label_27321c;
            case 0x273220u: goto label_273220;
            case 0x273224u: goto label_273224;
            case 0x273228u: goto label_273228;
            case 0x27322Cu: goto label_27322c;
            case 0x273230u: goto label_273230;
            case 0x273234u: goto label_273234;
            case 0x273238u: goto label_273238;
            case 0x27323Cu: goto label_27323c;
            case 0x273240u: goto label_273240;
            case 0x273244u: goto label_273244;
            case 0x273248u: goto label_273248;
            case 0x27324Cu: goto label_27324c;
            case 0x273250u: goto label_273250;
            case 0x273254u: goto label_273254;
            case 0x273258u: goto label_273258;
            case 0x27325Cu: goto label_27325c;
            case 0x273260u: goto label_273260;
            case 0x273264u: goto label_273264;
            case 0x273268u: goto label_273268;
            case 0x27326Cu: goto label_27326c;
            case 0x273270u: goto label_273270;
            case 0x273274u: goto label_273274;
            case 0x273278u: goto label_273278;
            case 0x27327Cu: goto label_27327c;
            case 0x273280u: goto label_273280;
            case 0x273284u: goto label_273284;
            case 0x273288u: goto label_273288;
            case 0x27328Cu: goto label_27328c;
            case 0x273290u: goto label_273290;
            case 0x273294u: goto label_273294;
            case 0x273298u: goto label_273298;
            case 0x27329Cu: goto label_27329c;
            case 0x2732A0u: goto label_2732a0;
            case 0x2732A4u: goto label_2732a4;
            case 0x2732A8u: goto label_2732a8;
            case 0x2732ACu: goto label_2732ac;
            case 0x2732B0u: goto label_2732b0;
            case 0x2732B4u: goto label_2732b4;
            case 0x2732B8u: goto label_2732b8;
            case 0x2732BCu: goto label_2732bc;
            case 0x2732C0u: goto label_2732c0;
            case 0x2732C4u: goto label_2732c4;
            case 0x2732C8u: goto label_2732c8;
            case 0x2732CCu: goto label_2732cc;
            case 0x2732D0u: goto label_2732d0;
            case 0x2732D4u: goto label_2732d4;
            case 0x2732D8u: goto label_2732d8;
            case 0x2732DCu: goto label_2732dc;
            default: break;
        }
        return;
    }
label_fallthrough_0x2732d8:
    ctx->pc = 0x2732E0u;
}
