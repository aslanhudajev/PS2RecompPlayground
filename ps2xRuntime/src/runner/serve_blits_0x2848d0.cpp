#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: serve_blits
// Address: 0x2848d0 - 0x284e6c
void serve_blits_0x2848d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2848d0u;

label_2848d0:
    // 0x2848d0: 0x27bdff60
    ctx->pc = 0x2848d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_2848d4:
    // 0x2848d4: 0xffbf0090
    ctx->pc = 0x2848d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2848d8:
    // 0x2848d8: 0xffb70080
    ctx->pc = 0x2848d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_2848dc:
    // 0x2848dc: 0xffb60070
    ctx->pc = 0x2848dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_2848e0:
    // 0x2848e0: 0xffb50060
    ctx->pc = 0x2848e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2848e4:
    // 0x2848e4: 0xffb40050
    ctx->pc = 0x2848e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2848e8:
    // 0x2848e8: 0xffb30040
    ctx->pc = 0x2848e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2848ec:
    // 0x2848ec: 0xffb20030
    ctx->pc = 0x2848ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2848f0:
    // 0x2848f0: 0xffb10020
    ctx->pc = 0x2848f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2848f4:
    // 0x2848f4: 0xffb00010
    ctx->pc = 0x2848f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2848f8:
    // 0x2848f8: 0x80a82d
    ctx->pc = 0x2848f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2848fc:
    // 0x2848fc: 0xb82d
    ctx->pc = 0x2848fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284900:
    // 0x284900: 0xb02d
    ctx->pc = 0x284900u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284904:
    // 0x284904: 0x3c04003c
    ctx->pc = 0x284904u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_284908:
    // 0x284908: 0x24843b88
    ctx->pc = 0x284908u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15240));
label_28490c:
    // 0x28490c: 0x2403000c
    ctx->pc = 0x28490cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
label_284910:
    // 0x284910: 0x2c31818
    ctx->pc = 0x284910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_284914:
    // 0x284914: 0x24020084
    ctx->pc = 0x284914u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 132));
label_284918:
    // 0x284918: 0x2a21018
    ctx->pc = 0x284918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_28491c:
    // 0x28491c: 0x621821
    ctx->pc = 0x28491cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_284920:
    // 0x284920: 0x641021
    ctx->pc = 0x284920u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_284924:
    // 0x284924: 0x8c540000
    ctx->pc = 0x284924u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_284928:
    // 0x284928: 0x832021
    ctx->pc = 0x284928u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_28492c:
    // 0x28492c: 0x8c830004
    ctx->pc = 0x28492cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_284930:
    // 0x284930: 0x2c620008
    ctx->pc = 0x284930u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 8));
label_284934:
    // 0x284934: 0x1040013d
label_284938:
    if (ctx->pc == 0x284938u) {
        ctx->pc = 0x284938u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x28493Cu;
        goto label_28493c;
    }
    ctx->pc = 0x284934u;
    {
        const bool branch_taken_0x284934 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x284938u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x284934) {
            ctx->pc = 0x284E2Cu;
            goto label_284e2c;
        }
    }
    ctx->pc = 0x28493Cu;
label_28493c:
    // 0x28493c: 0x2442d100
    ctx->pc = 0x28493cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955264));
label_284940:
    // 0x284940: 0x31880
    ctx->pc = 0x284940u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_284944:
    // 0x284944: 0x621821
    ctx->pc = 0x284944u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_284948:
    // 0x284948: 0x8c620000
    ctx->pc = 0x284948u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28494c:
    // 0x28494c: 0x400008
label_284950:
    if (ctx->pc == 0x284950u) {
        ctx->pc = 0x284954u;
        goto label_284954;
    }
    ctx->pc = 0x28494Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2848D0u: goto label_2848d0;
            case 0x2848D4u: goto label_2848d4;
            case 0x2848D8u: goto label_2848d8;
            case 0x2848DCu: goto label_2848dc;
            case 0x2848E0u: goto label_2848e0;
            case 0x2848E4u: goto label_2848e4;
            case 0x2848E8u: goto label_2848e8;
            case 0x2848ECu: goto label_2848ec;
            case 0x2848F0u: goto label_2848f0;
            case 0x2848F4u: goto label_2848f4;
            case 0x2848F8u: goto label_2848f8;
            case 0x2848FCu: goto label_2848fc;
            case 0x284900u: goto label_284900;
            case 0x284904u: goto label_284904;
            case 0x284908u: goto label_284908;
            case 0x28490Cu: goto label_28490c;
            case 0x284910u: goto label_284910;
            case 0x284914u: goto label_284914;
            case 0x284918u: goto label_284918;
            case 0x28491Cu: goto label_28491c;
            case 0x284920u: goto label_284920;
            case 0x284924u: goto label_284924;
            case 0x284928u: goto label_284928;
            case 0x28492Cu: goto label_28492c;
            case 0x284930u: goto label_284930;
            case 0x284934u: goto label_284934;
            case 0x284938u: goto label_284938;
            case 0x28493Cu: goto label_28493c;
            case 0x284940u: goto label_284940;
            case 0x284944u: goto label_284944;
            case 0x284948u: goto label_284948;
            case 0x28494Cu: goto label_28494c;
            case 0x284950u: goto label_284950;
            case 0x284954u: goto label_284954;
            case 0x284958u: goto label_284958;
            case 0x28495Cu: goto label_28495c;
            case 0x284960u: goto label_284960;
            case 0x284964u: goto label_284964;
            case 0x284968u: goto label_284968;
            case 0x28496Cu: goto label_28496c;
            case 0x284970u: goto label_284970;
            case 0x284974u: goto label_284974;
            case 0x284978u: goto label_284978;
            case 0x28497Cu: goto label_28497c;
            case 0x284980u: goto label_284980;
            case 0x284984u: goto label_284984;
            case 0x284988u: goto label_284988;
            case 0x28498Cu: goto label_28498c;
            case 0x284990u: goto label_284990;
            case 0x284994u: goto label_284994;
            case 0x284998u: goto label_284998;
            case 0x28499Cu: goto label_28499c;
            case 0x2849A0u: goto label_2849a0;
            case 0x2849A4u: goto label_2849a4;
            case 0x2849A8u: goto label_2849a8;
            case 0x2849ACu: goto label_2849ac;
            case 0x2849B0u: goto label_2849b0;
            case 0x2849B4u: goto label_2849b4;
            case 0x2849B8u: goto label_2849b8;
            case 0x2849BCu: goto label_2849bc;
            case 0x2849C0u: goto label_2849c0;
            case 0x2849C4u: goto label_2849c4;
            case 0x2849C8u: goto label_2849c8;
            case 0x2849CCu: goto label_2849cc;
            case 0x2849D0u: goto label_2849d0;
            case 0x2849D4u: goto label_2849d4;
            case 0x2849D8u: goto label_2849d8;
            case 0x2849DCu: goto label_2849dc;
            case 0x2849E0u: goto label_2849e0;
            case 0x2849E4u: goto label_2849e4;
            case 0x2849E8u: goto label_2849e8;
            case 0x2849ECu: goto label_2849ec;
            case 0x2849F0u: goto label_2849f0;
            case 0x2849F4u: goto label_2849f4;
            case 0x2849F8u: goto label_2849f8;
            case 0x2849FCu: goto label_2849fc;
            case 0x284A00u: goto label_284a00;
            case 0x284A04u: goto label_284a04;
            case 0x284A08u: goto label_284a08;
            case 0x284A0Cu: goto label_284a0c;
            case 0x284A10u: goto label_284a10;
            case 0x284A14u: goto label_284a14;
            case 0x284A18u: goto label_284a18;
            case 0x284A1Cu: goto label_284a1c;
            case 0x284A20u: goto label_284a20;
            case 0x284A24u: goto label_284a24;
            case 0x284A28u: goto label_284a28;
            case 0x284A2Cu: goto label_284a2c;
            case 0x284A30u: goto label_284a30;
            case 0x284A34u: goto label_284a34;
            case 0x284A38u: goto label_284a38;
            case 0x284A3Cu: goto label_284a3c;
            case 0x284A40u: goto label_284a40;
            case 0x284A44u: goto label_284a44;
            case 0x284A48u: goto label_284a48;
            case 0x284A4Cu: goto label_284a4c;
            case 0x284A50u: goto label_284a50;
            case 0x284A54u: goto label_284a54;
            case 0x284A58u: goto label_284a58;
            case 0x284A5Cu: goto label_284a5c;
            case 0x284A60u: goto label_284a60;
            case 0x284A64u: goto label_284a64;
            case 0x284A68u: goto label_284a68;
            case 0x284A6Cu: goto label_284a6c;
            case 0x284A70u: goto label_284a70;
            case 0x284A74u: goto label_284a74;
            case 0x284A78u: goto label_284a78;
            case 0x284A7Cu: goto label_284a7c;
            case 0x284A80u: goto label_284a80;
            case 0x284A84u: goto label_284a84;
            case 0x284A88u: goto label_284a88;
            case 0x284A8Cu: goto label_284a8c;
            case 0x284A90u: goto label_284a90;
            case 0x284A94u: goto label_284a94;
            case 0x284A98u: goto label_284a98;
            case 0x284A9Cu: goto label_284a9c;
            case 0x284AA0u: goto label_284aa0;
            case 0x284AA4u: goto label_284aa4;
            case 0x284AA8u: goto label_284aa8;
            case 0x284AACu: goto label_284aac;
            case 0x284AB0u: goto label_284ab0;
            case 0x284AB4u: goto label_284ab4;
            case 0x284AB8u: goto label_284ab8;
            case 0x284ABCu: goto label_284abc;
            case 0x284AC0u: goto label_284ac0;
            case 0x284AC4u: goto label_284ac4;
            case 0x284AC8u: goto label_284ac8;
            case 0x284ACCu: goto label_284acc;
            case 0x284AD0u: goto label_284ad0;
            case 0x284AD4u: goto label_284ad4;
            case 0x284AD8u: goto label_284ad8;
            case 0x284ADCu: goto label_284adc;
            case 0x284AE0u: goto label_284ae0;
            case 0x284AE4u: goto label_284ae4;
            case 0x284AE8u: goto label_284ae8;
            case 0x284AECu: goto label_284aec;
            case 0x284AF0u: goto label_284af0;
            case 0x284AF4u: goto label_284af4;
            case 0x284AF8u: goto label_284af8;
            case 0x284AFCu: goto label_284afc;
            case 0x284B00u: goto label_284b00;
            case 0x284B04u: goto label_284b04;
            case 0x284B08u: goto label_284b08;
            case 0x284B0Cu: goto label_284b0c;
            case 0x284B10u: goto label_284b10;
            case 0x284B14u: goto label_284b14;
            case 0x284B18u: goto label_284b18;
            case 0x284B1Cu: goto label_284b1c;
            case 0x284B20u: goto label_284b20;
            case 0x284B24u: goto label_284b24;
            case 0x284B28u: goto label_284b28;
            case 0x284B2Cu: goto label_284b2c;
            case 0x284B30u: goto label_284b30;
            case 0x284B34u: goto label_284b34;
            case 0x284B38u: goto label_284b38;
            case 0x284B3Cu: goto label_284b3c;
            case 0x284B40u: goto label_284b40;
            case 0x284B44u: goto label_284b44;
            case 0x284B48u: goto label_284b48;
            case 0x284B4Cu: goto label_284b4c;
            case 0x284B50u: goto label_284b50;
            case 0x284B54u: goto label_284b54;
            case 0x284B58u: goto label_284b58;
            case 0x284B5Cu: goto label_284b5c;
            case 0x284B60u: goto label_284b60;
            case 0x284B64u: goto label_284b64;
            case 0x284B68u: goto label_284b68;
            case 0x284B6Cu: goto label_284b6c;
            case 0x284B70u: goto label_284b70;
            case 0x284B74u: goto label_284b74;
            case 0x284B78u: goto label_284b78;
            case 0x284B7Cu: goto label_284b7c;
            case 0x284B80u: goto label_284b80;
            case 0x284B84u: goto label_284b84;
            case 0x284B88u: goto label_284b88;
            case 0x284B8Cu: goto label_284b8c;
            case 0x284B90u: goto label_284b90;
            case 0x284B94u: goto label_284b94;
            case 0x284B98u: goto label_284b98;
            case 0x284B9Cu: goto label_284b9c;
            case 0x284BA0u: goto label_284ba0;
            case 0x284BA4u: goto label_284ba4;
            case 0x284BA8u: goto label_284ba8;
            case 0x284BACu: goto label_284bac;
            case 0x284BB0u: goto label_284bb0;
            case 0x284BB4u: goto label_284bb4;
            case 0x284BB8u: goto label_284bb8;
            case 0x284BBCu: goto label_284bbc;
            case 0x284BC0u: goto label_284bc0;
            case 0x284BC4u: goto label_284bc4;
            case 0x284BC8u: goto label_284bc8;
            case 0x284BCCu: goto label_284bcc;
            case 0x284BD0u: goto label_284bd0;
            case 0x284BD4u: goto label_284bd4;
            case 0x284BD8u: goto label_284bd8;
            case 0x284BDCu: goto label_284bdc;
            case 0x284BE0u: goto label_284be0;
            case 0x284BE4u: goto label_284be4;
            case 0x284BE8u: goto label_284be8;
            case 0x284BECu: goto label_284bec;
            case 0x284BF0u: goto label_284bf0;
            case 0x284BF4u: goto label_284bf4;
            case 0x284BF8u: goto label_284bf8;
            case 0x284BFCu: goto label_284bfc;
            case 0x284C00u: goto label_284c00;
            case 0x284C04u: goto label_284c04;
            case 0x284C08u: goto label_284c08;
            case 0x284C0Cu: goto label_284c0c;
            case 0x284C10u: goto label_284c10;
            case 0x284C14u: goto label_284c14;
            case 0x284C18u: goto label_284c18;
            case 0x284C1Cu: goto label_284c1c;
            case 0x284C20u: goto label_284c20;
            case 0x284C24u: goto label_284c24;
            case 0x284C28u: goto label_284c28;
            case 0x284C2Cu: goto label_284c2c;
            case 0x284C30u: goto label_284c30;
            case 0x284C34u: goto label_284c34;
            case 0x284C38u: goto label_284c38;
            case 0x284C3Cu: goto label_284c3c;
            case 0x284C40u: goto label_284c40;
            case 0x284C44u: goto label_284c44;
            case 0x284C48u: goto label_284c48;
            case 0x284C4Cu: goto label_284c4c;
            case 0x284C50u: goto label_284c50;
            case 0x284C54u: goto label_284c54;
            case 0x284C58u: goto label_284c58;
            case 0x284C5Cu: goto label_284c5c;
            case 0x284C60u: goto label_284c60;
            case 0x284C64u: goto label_284c64;
            case 0x284C68u: goto label_284c68;
            case 0x284C6Cu: goto label_284c6c;
            case 0x284C70u: goto label_284c70;
            case 0x284C74u: goto label_284c74;
            case 0x284C78u: goto label_284c78;
            case 0x284C7Cu: goto label_284c7c;
            case 0x284C80u: goto label_284c80;
            case 0x284C84u: goto label_284c84;
            case 0x284C88u: goto label_284c88;
            case 0x284C8Cu: goto label_284c8c;
            case 0x284C90u: goto label_284c90;
            case 0x284C94u: goto label_284c94;
            case 0x284C98u: goto label_284c98;
            case 0x284C9Cu: goto label_284c9c;
            case 0x284CA0u: goto label_284ca0;
            case 0x284CA4u: goto label_284ca4;
            case 0x284CA8u: goto label_284ca8;
            case 0x284CACu: goto label_284cac;
            case 0x284CB0u: goto label_284cb0;
            case 0x284CB4u: goto label_284cb4;
            case 0x284CB8u: goto label_284cb8;
            case 0x284CBCu: goto label_284cbc;
            case 0x284CC0u: goto label_284cc0;
            case 0x284CC4u: goto label_284cc4;
            case 0x284CC8u: goto label_284cc8;
            case 0x284CCCu: goto label_284ccc;
            case 0x284CD0u: goto label_284cd0;
            case 0x284CD4u: goto label_284cd4;
            case 0x284CD8u: goto label_284cd8;
            case 0x284CDCu: goto label_284cdc;
            case 0x284CE0u: goto label_284ce0;
            case 0x284CE4u: goto label_284ce4;
            case 0x284CE8u: goto label_284ce8;
            case 0x284CECu: goto label_284cec;
            case 0x284CF0u: goto label_284cf0;
            case 0x284CF4u: goto label_284cf4;
            case 0x284CF8u: goto label_284cf8;
            case 0x284CFCu: goto label_284cfc;
            case 0x284D00u: goto label_284d00;
            case 0x284D04u: goto label_284d04;
            case 0x284D08u: goto label_284d08;
            case 0x284D0Cu: goto label_284d0c;
            case 0x284D10u: goto label_284d10;
            case 0x284D14u: goto label_284d14;
            case 0x284D18u: goto label_284d18;
            case 0x284D1Cu: goto label_284d1c;
            case 0x284D20u: goto label_284d20;
            case 0x284D24u: goto label_284d24;
            case 0x284D28u: goto label_284d28;
            case 0x284D2Cu: goto label_284d2c;
            case 0x284D30u: goto label_284d30;
            case 0x284D34u: goto label_284d34;
            case 0x284D38u: goto label_284d38;
            case 0x284D3Cu: goto label_284d3c;
            case 0x284D40u: goto label_284d40;
            case 0x284D44u: goto label_284d44;
            case 0x284D48u: goto label_284d48;
            case 0x284D4Cu: goto label_284d4c;
            case 0x284D50u: goto label_284d50;
            case 0x284D54u: goto label_284d54;
            case 0x284D58u: goto label_284d58;
            case 0x284D5Cu: goto label_284d5c;
            case 0x284D60u: goto label_284d60;
            case 0x284D64u: goto label_284d64;
            case 0x284D68u: goto label_284d68;
            case 0x284D6Cu: goto label_284d6c;
            case 0x284D70u: goto label_284d70;
            case 0x284D74u: goto label_284d74;
            case 0x284D78u: goto label_284d78;
            case 0x284D7Cu: goto label_284d7c;
            case 0x284D80u: goto label_284d80;
            case 0x284D84u: goto label_284d84;
            case 0x284D88u: goto label_284d88;
            case 0x284D8Cu: goto label_284d8c;
            case 0x284D90u: goto label_284d90;
            case 0x284D94u: goto label_284d94;
            case 0x284D98u: goto label_284d98;
            case 0x284D9Cu: goto label_284d9c;
            case 0x284DA0u: goto label_284da0;
            case 0x284DA4u: goto label_284da4;
            case 0x284DA8u: goto label_284da8;
            case 0x284DACu: goto label_284dac;
            case 0x284DB0u: goto label_284db0;
            case 0x284DB4u: goto label_284db4;
            case 0x284DB8u: goto label_284db8;
            case 0x284DBCu: goto label_284dbc;
            case 0x284DC0u: goto label_284dc0;
            case 0x284DC4u: goto label_284dc4;
            case 0x284DC8u: goto label_284dc8;
            case 0x284DCCu: goto label_284dcc;
            case 0x284DD0u: goto label_284dd0;
            case 0x284DD4u: goto label_284dd4;
            case 0x284DD8u: goto label_284dd8;
            case 0x284DDCu: goto label_284ddc;
            case 0x284DE0u: goto label_284de0;
            case 0x284DE4u: goto label_284de4;
            case 0x284DE8u: goto label_284de8;
            case 0x284DECu: goto label_284dec;
            case 0x284DF0u: goto label_284df0;
            case 0x284DF4u: goto label_284df4;
            case 0x284DF8u: goto label_284df8;
            case 0x284DFCu: goto label_284dfc;
            case 0x284E00u: goto label_284e00;
            case 0x284E04u: goto label_284e04;
            case 0x284E08u: goto label_284e08;
            case 0x284E0Cu: goto label_284e0c;
            case 0x284E10u: goto label_284e10;
            case 0x284E14u: goto label_284e14;
            case 0x284E18u: goto label_284e18;
            case 0x284E1Cu: goto label_284e1c;
            case 0x284E20u: goto label_284e20;
            case 0x284E24u: goto label_284e24;
            case 0x284E28u: goto label_284e28;
            case 0x284E2Cu: goto label_284e2c;
            case 0x284E30u: goto label_284e30;
            case 0x284E34u: goto label_284e34;
            case 0x284E38u: goto label_284e38;
            case 0x284E3Cu: goto label_284e3c;
            case 0x284E40u: goto label_284e40;
            case 0x284E44u: goto label_284e44;
            case 0x284E48u: goto label_284e48;
            case 0x284E4Cu: goto label_284e4c;
            case 0x284E50u: goto label_284e50;
            case 0x284E54u: goto label_284e54;
            case 0x284E58u: goto label_284e58;
            case 0x284E5Cu: goto label_284e5c;
            case 0x284E60u: goto label_284e60;
            case 0x284E64u: goto label_284e64;
            case 0x284E68u: goto label_284e68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284954u;
label_284954:
    // 0x284954: 0x2a0202d
    ctx->pc = 0x284954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_284958:
    // 0x284958: 0x2c0282d
    ctx->pc = 0x284958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28495c:
    // 0x28495c: 0xc0a1204
label_284960:
    if (ctx->pc == 0x284960u) {
        ctx->pc = 0x284960u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x284964u;
        goto label_284964;
    }
    ctx->pc = 0x28495Cu;
    SET_GPR_U32(ctx, 31, 0x284964u);
    ctx->pc = 0x284960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x284810u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_blit_fx_0x284810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284964u; }
    }
    if (ctx->pc != 0x284964u) { return; }
    ctx->pc = 0x284964u;
label_284964:
    // 0x284964: 0x280202d
    ctx->pc = 0x284964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_284968:
    // 0x284968: 0xc0b0ce8
label_28496c:
    if (ctx->pc == 0x28496Cu) {
        ctx->pc = 0x28496Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x284970u;
        goto label_284970;
    }
    ctx->pc = 0x284968u;
    SET_GPR_U32(ctx, 31, 0x284970u);
    ctx->pc = 0x28496Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284970u; }
    }
    if (ctx->pc != 0x284970u) { return; }
    ctx->pc = 0x284970u;
label_284970:
    // 0x284970: 0x1000012f
label_284974:
    if (ctx->pc == 0x284974u) {
        ctx->pc = 0x284974u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x284978u;
        goto label_284978;
    }
    ctx->pc = 0x284970u;
    {
        const bool branch_taken_0x284970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x284974u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        if (branch_taken_0x284970) {
            ctx->pc = 0x284E30u;
            goto label_284e30;
        }
    }
    ctx->pc = 0x284978u;
label_284978:
    // 0x284978: 0x280202d
    ctx->pc = 0x284978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28497c:
    // 0x28497c: 0x3a0282d
    ctx->pc = 0x28497cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_284980:
    // 0x284980: 0xc0a1222
label_284984:
    if (ctx->pc == 0x284984u) {
        ctx->pc = 0x284984u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x284988u;
        goto label_284988;
    }
    ctx->pc = 0x284980u;
    SET_GPR_U32(ctx, 31, 0x284988u);
    ctx->pc = 0x284984u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x284888u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_blit_dims_0x284888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284988u; }
    }
    if (ctx->pc != 0x284988u) { return; }
    ctx->pc = 0x284988u;
label_284988:
    // 0x284988: 0x3c04003c
    ctx->pc = 0x284988u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_28498c:
    // 0x28498c: 0x24843b88
    ctx->pc = 0x28498cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15240));
label_284990:
    // 0x284990: 0x2403000c
    ctx->pc = 0x284990u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
label_284994:
    // 0x284994: 0x2c31818
    ctx->pc = 0x284994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_284998:
    // 0x284998: 0x24020084
    ctx->pc = 0x284998u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 132));
label_28499c:
    // 0x28499c: 0x2a21018
    ctx->pc = 0x28499cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2849a0:
    // 0x2849a0: 0x621821
    ctx->pc = 0x2849a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2849a4:
    // 0x2849a4: 0x24840008
    ctx->pc = 0x2849a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
label_2849a8:
    // 0x2849a8: 0x641821
    ctx->pc = 0x2849a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2849ac:
    // 0x2849ac: 0x8c620000
    ctx->pc = 0x2849acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2849b0:
    // 0x2849b0: 0x24450001
    ctx->pc = 0x2849b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
label_2849b4:
    // 0x2849b4: 0x30a2003f
    ctx->pc = 0x2849b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 63));
label_2849b8:
    // 0x2849b8: 0xac620000
    ctx->pc = 0x2849b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2849bc:
    // 0x2849bc: 0x40202d
    ctx->pc = 0x2849bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2849c0:
    // 0x2849c0: 0x28820020
    ctx->pc = 0x2849c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 32));
label_2849c4:
    // 0x2849c4: 0x14400003
label_2849c8:
    if (ctx->pc == 0x2849C8u) {
        ctx->pc = 0x2849C8u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 31));
        ctx->pc = 0x2849CCu;
        goto label_2849cc;
    }
    ctx->pc = 0x2849C4u;
    {
        const bool branch_taken_0x2849c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2849C8u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 31));
        if (branch_taken_0x2849c4) {
            ctx->pc = 0x2849D4u;
            goto label_2849d4;
        }
    }
    ctx->pc = 0x2849CCu;
label_2849cc:
    // 0x2849cc: 0x24020020
    ctx->pc = 0x2849ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_2849d0:
    // 0x2849d0: 0x432023
    ctx->pc = 0x2849d0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2849d4:
    // 0x2849d4: 0xc0be4ce
label_2849d8:
    if (ctx->pc == 0x2849D8u) {
        ctx->pc = 0x2849DCu;
        goto label_2849dc;
    }
    ctx->pc = 0x2849D4u;
    SET_GPR_U32(ctx, 31, 0x2849DCu);
    ctx->pc = 0x2F9338u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x2f9338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2849DCu; }
    }
    if (ctx->pc != 0x2849DCu) { return; }
    ctx->pc = 0x2849DCu;
label_2849dc:
    // 0x2849dc: 0x3c01003b
    ctx->pc = 0x2849dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)59 << 16));
label_2849e0:
    // 0x2849e0: 0xdc25d120
    ctx->pc = 0x2849e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294955296)));
label_2849e4:
    // 0x2849e4: 0xc0be370
label_2849e8:
    if (ctx->pc == 0x2849E8u) {
        ctx->pc = 0x2849E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2849ECu;
        goto label_2849ec;
    }
    ctx->pc = 0x2849E4u;
    SET_GPR_U32(ctx, 31, 0x2849ECu);
    ctx->pc = 0x2849E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2849ECu; }
    }
    if (ctx->pc != 0x2849ECu) { return; }
    ctx->pc = 0x2849ECu;
label_2849ec:
    // 0x2849ec: 0x3405ffc0
    ctx->pc = 0x2849ecu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
label_2849f0:
    // 0x2849f0: 0x52bbc
    ctx->pc = 0x2849f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_2849f4:
    // 0x2849f4: 0xc0be340
label_2849f8:
    if (ctx->pc == 0x2849F8u) {
        ctx->pc = 0x2849F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2849FCu;
        goto label_2849fc;
    }
    ctx->pc = 0x2849F4u;
    SET_GPR_U32(ctx, 31, 0x2849FCu);
    ctx->pc = 0x2849F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2849FCu; }
    }
    if (ctx->pc != 0x2849FCu) { return; }
    ctx->pc = 0x2849FCu;
label_2849fc:
    // 0x2849fc: 0xc0be564
label_284a00:
    if (ctx->pc == 0x284A00u) {
        ctx->pc = 0x284A00u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x284A04u;
        goto label_284a04;
    }
    ctx->pc = 0x2849FCu;
    SET_GPR_U32(ctx, 31, 0x284A04u);
    ctx->pc = 0x284A00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284A04u; }
    }
    if (ctx->pc != 0x284A04u) { return; }
    ctx->pc = 0x284A04u;
label_284a04:
    // 0x284a04: 0xc7a10000
    ctx->pc = 0x284a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_284a08:
    // 0x284a08: 0x46800860
    ctx->pc = 0x284a08u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_284a0c:
    // 0x284a0c: 0x46000842
    ctx->pc = 0x284a0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_284a10:
    // 0x284a10: 0x460008a4
    ctx->pc = 0x284a10u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[1]);
label_284a14:
    // 0x284a14: 0xe7a20000
    ctx->pc = 0x284a14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_284a18:
    // 0x284a18: 0xc7a10004
    ctx->pc = 0x284a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_284a1c:
    // 0x284a1c: 0x46800860
    ctx->pc = 0x284a1cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_284a20:
    // 0x284a20: 0x46000842
    ctx->pc = 0x284a20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_284a24:
    // 0x284a24: 0x46000824
    ctx->pc = 0x284a24u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
label_284a28:
    // 0x284a28: 0xe7a00004
    ctx->pc = 0x284a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_284a2c:
    // 0x284a2c: 0x3c070035
    ctx->pc = 0x284a2cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)53 << 16));
label_284a30:
    // 0x284a30: 0x24e7a320
    ctx->pc = 0x284a30u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294943520));
label_284a34:
    // 0x284a34: 0x2404000c
    ctx->pc = 0x284a34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
label_284a38:
    // 0x284a38: 0x2c42018
    ctx->pc = 0x284a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_284a3c:
    // 0x284a3c: 0x872821
    ctx->pc = 0x284a3cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_284a40:
    // 0x284a40: 0x8fa20000
    ctx->pc = 0x284a40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_284a44:
    // 0x284a44: 0x21fc2
    ctx->pc = 0x284a44u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
label_284a48:
    // 0x284a48: 0x431021
    ctx->pc = 0x284a48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284a4c:
    // 0x284a4c: 0x21043
    ctx->pc = 0x284a4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_284a50:
    // 0x284a50: 0x8ca50000
    ctx->pc = 0x284a50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_284a54:
    // 0x284a54: 0xa22823
    ctx->pc = 0x284a54u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_284a58:
    // 0x284a58: 0x3c030035
    ctx->pc = 0x284a58u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_284a5c:
    // 0x284a5c: 0x2463a2f0
    ctx->pc = 0x284a5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943472));
label_284a60:
    // 0x284a60: 0x151080
    ctx->pc = 0x284a60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_284a64:
    // 0x284a64: 0x431021
    ctx->pc = 0x284a64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284a68:
    // 0x284a68: 0x8c480000
    ctx->pc = 0x284a68u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_284a6c:
    // 0x284a6c: 0xe41821
    ctx->pc = 0x284a6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_284a70:
    // 0x284a70: 0x8fa60004
    ctx->pc = 0x284a70u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_284a74:
    // 0x284a74: 0x617c2
    ctx->pc = 0x284a74u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), 31));
label_284a78:
    // 0x284a78: 0xc23021
    ctx->pc = 0x284a78u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_284a7c:
    // 0x284a7c: 0x63043
    ctx->pc = 0x284a7cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_284a80:
    // 0x284a80: 0x8c620004
    ctx->pc = 0x284a80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_284a84:
    // 0x284a84: 0x60382d
    ctx->pc = 0x284a84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_284a88:
    // 0x284a88: 0x280202d
    ctx->pc = 0x284a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_284a8c:
    // 0x284a8c: 0xa82821
    ctx->pc = 0x284a8cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_284a90:
    // 0x284a90: 0xc4ec0008
    ctx->pc = 0x284a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_284a94:
    // 0x284a94: 0x46806320
    ctx->pc = 0x284a94u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_284a98:
    // 0x284a98: 0xc0b0df2
label_284a9c:
    if (ctx->pc == 0x284A9Cu) {
        ctx->pc = 0x284A9Cu;
        SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->pc = 0x284AA0u;
        goto label_284aa0;
    }
    ctx->pc = 0x284A98u;
    SET_GPR_U32(ctx, 31, 0x284AA0u);
    ctx->pc = 0x284A9Cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284AA0u; }
    }
    if (ctx->pc != 0x284AA0u) { return; }
    ctx->pc = 0x284AA0u;
label_284aa0:
    // 0x284aa0: 0x280202d
    ctx->pc = 0x284aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_284aa4:
    // 0x284aa4: 0x8fa50000
    ctx->pc = 0x284aa4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_284aa8:
    // 0x284aa8: 0xc0b0cf6
label_284aac:
    if (ctx->pc == 0x284AACu) {
        ctx->pc = 0x284AACu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x284AB0u;
        goto label_284ab0;
    }
    ctx->pc = 0x284AA8u;
    SET_GPR_U32(ctx, 31, 0x284AB0u);
    ctx->pc = 0x284AACu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284AB0u; }
    }
    if (ctx->pc != 0x284AB0u) { return; }
    ctx->pc = 0x284AB0u;
label_284ab0:
    // 0x284ab0: 0x100000df
label_284ab4:
    if (ctx->pc == 0x284AB4u) {
        ctx->pc = 0x284AB4u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x284AB8u;
        goto label_284ab8;
    }
    ctx->pc = 0x284AB0u;
    {
        const bool branch_taken_0x284ab0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x284AB4u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        if (branch_taken_0x284ab0) {
            ctx->pc = 0x284E30u;
            goto label_284e30;
        }
    }
    ctx->pc = 0x284AB8u;
label_284ab8:
    // 0x284ab8: 0x3c03003c
    ctx->pc = 0x284ab8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_284abc:
    // 0x284abc: 0x24633b88
    ctx->pc = 0x284abcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15240));
label_284ac0:
    // 0x284ac0: 0x2409000c
    ctx->pc = 0x284ac0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 12));
label_284ac4:
    // 0x284ac4: 0x2c94818
    ctx->pc = 0x284ac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_284ac8:
    // 0x284ac8: 0x24020084
    ctx->pc = 0x284ac8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 132));
label_284acc:
    // 0x284acc: 0x2a21018
    ctx->pc = 0x284accu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_284ad0:
    // 0x284ad0: 0x1221021
    ctx->pc = 0x284ad0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_284ad4:
    // 0x284ad4: 0x24630008
    ctx->pc = 0x284ad4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
label_284ad8:
    // 0x284ad8: 0x431021
    ctx->pc = 0x284ad8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284adc:
    // 0x284adc: 0x3c030031
    ctx->pc = 0x284adcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_284ae0:
    // 0x284ae0: 0x8c440000
    ctx->pc = 0x284ae0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_284ae4:
    // 0x284ae4: 0x8c63ffbc
    ctx->pc = 0x284ae4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_284ae8:
    // 0x284ae8: 0x832021
    ctx->pc = 0x284ae8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_284aec:
    // 0x284aec: 0xac440000
    ctx->pc = 0x284aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_284af0:
    // 0x284af0: 0x848018
    ctx->pc = 0x284af0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_284af4:
    // 0x284af4: 0x3c070035
    ctx->pc = 0x284af4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)53 << 16));
label_284af8:
    // 0x284af8: 0x24e7a320
    ctx->pc = 0x284af8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294943520));
label_284afc:
    // 0x284afc: 0x1272821
    ctx->pc = 0x284afcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_284b00:
    // 0x284b00: 0x3c020035
    ctx->pc = 0x284b00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_284b04:
    // 0x284b04: 0x2442a2f0
    ctx->pc = 0x284b04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294943472));
label_284b08:
    // 0x284b08: 0x151880
    ctx->pc = 0x284b08u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 2));
label_284b0c:
    // 0x284b0c: 0x621821
    ctx->pc = 0x284b0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_284b10:
    // 0x284b10: 0x8ca80000
    ctx->pc = 0x284b10u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_284b14:
    // 0x284b14: 0x8c620000
    ctx->pc = 0x284b14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_284b18:
    // 0x284b18: 0x1024021
    ctx->pc = 0x284b18u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_284b1c:
    // 0x284b1c: 0x26050007
    ctx->pc = 0x284b1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 7));
label_284b20:
    // 0x284b20: 0x2402ffff
    ctx->pc = 0x284b20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_284b24:
    // 0x284b24: 0x50102a
    ctx->pc = 0x284b24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
label_284b28:
    // 0x284b28: 0x202280b
    ctx->pc = 0x284b28u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 16));
label_284b2c:
    // 0x284b2c: 0x528c3
    ctx->pc = 0x284b2cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_284b30:
    // 0x284b30: 0x43040
    ctx->pc = 0x284b30u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 4), 1));
label_284b34:
    // 0x284b34: 0xc43021
    ctx->pc = 0x284b34u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_284b38:
    // 0x284b38: 0xe93821
    ctx->pc = 0x284b38u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_284b3c:
    // 0x284b3c: 0x280202d
    ctx->pc = 0x284b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_284b40:
    // 0x284b40: 0x1052821
    ctx->pc = 0x284b40u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_284b44:
    // 0x284b44: 0xc4ec0008
    ctx->pc = 0x284b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_284b48:
    // 0x284b48: 0x46806320
    ctx->pc = 0x284b48u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_284b4c:
    // 0x284b4c: 0xc0b0df2
label_284b50:
    if (ctx->pc == 0x284B50u) {
        ctx->pc = 0x284B50u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->pc = 0x284B54u;
        goto label_284b54;
    }
    ctx->pc = 0x284B4Cu;
    SET_GPR_U32(ctx, 31, 0x284B54u);
    ctx->pc = 0x284B50u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284B54u; }
    }
    if (ctx->pc != 0x284B54u) { return; }
    ctx->pc = 0x284B54u;
label_284b54:
    // 0x284b54: 0x280202d
    ctx->pc = 0x284b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_284b58:
    // 0x284b58: 0xc0b0f52
label_284b5c:
    if (ctx->pc == 0x284B5Cu) {
        ctx->pc = 0x284B5Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x284B60u;
        goto label_284b60;
    }
    ctx->pc = 0x284B58u;
    SET_GPR_U32(ctx, 31, 0x284B60u);
    ctx->pc = 0x284B5Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284B60u; }
    }
    if (ctx->pc != 0x284B60u) { return; }
    ctx->pc = 0x284B60u;
label_284b60:
    // 0x284b60: 0x24060100
    ctx->pc = 0x284b60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
label_284b64:
    // 0x284b64: 0x280202d
    ctx->pc = 0x284b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_284b68:
    // 0x284b68: 0x24050080
    ctx->pc = 0x284b68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 128));
label_284b6c:
    // 0x284b6c: 0xc0b0cf6
label_284b70:
    if (ctx->pc == 0x284B70u) {
        ctx->pc = 0x284B70u;
        SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->pc = 0x284B74u;
        goto label_284b74;
    }
    ctx->pc = 0x284B6Cu;
    SET_GPR_U32(ctx, 31, 0x284B74u);
    ctx->pc = 0x284B70u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284B74u; }
    }
    if (ctx->pc != 0x284B74u) { return; }
    ctx->pc = 0x284B74u;
label_284b74:
    // 0x284b74: 0x2a100100
    ctx->pc = 0x284b74u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 16), 256));
label_284b78:
    // 0x284b78: 0x1600000a
label_284b7c:
    if (ctx->pc == 0x284B7Cu) {
        ctx->pc = 0x284B7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x284B80u;
        goto label_284b80;
    }
    ctx->pc = 0x284B78u;
    {
        const bool branch_taken_0x284b78 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x284B7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x284b78) {
            ctx->pc = 0x284BA4u;
            goto label_284ba4;
        }
    }
    ctx->pc = 0x284B80u;
label_284b80:
    // 0x284b80: 0x2a0202d
    ctx->pc = 0x284b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_284b84:
    // 0x284b84: 0x2c0282d
    ctx->pc = 0x284b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_284b88:
    // 0x284b88: 0xc0a1204
label_284b8c:
    if (ctx->pc == 0x284B8Cu) {
        ctx->pc = 0x284B8Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x284B90u;
        goto label_284b90;
    }
    ctx->pc = 0x284B88u;
    SET_GPR_U32(ctx, 31, 0x284B90u);
    ctx->pc = 0x284B8Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x284810u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_blit_fx_0x284810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284B90u; }
    }
    if (ctx->pc != 0x284B90u) { return; }
    ctx->pc = 0x284B90u;
label_284b90:
    // 0x284b90: 0x280202d
    ctx->pc = 0x284b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_284b94:
    // 0x284b94: 0xc0b0ce8
label_284b98:
    if (ctx->pc == 0x284B98u) {
        ctx->pc = 0x284B98u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x284B9Cu;
        goto label_284b9c;
    }
    ctx->pc = 0x284B94u;
    SET_GPR_U32(ctx, 31, 0x284B9Cu);
    ctx->pc = 0x284B98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284B9Cu; }
    }
    if (ctx->pc != 0x284B9Cu) { return; }
    ctx->pc = 0x284B9Cu;
label_284b9c:
    // 0x284b9c: 0x100000a3
label_284ba0:
    if (ctx->pc == 0x284BA0u) {
        ctx->pc = 0x284BA0u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x284BA4u;
        goto label_284ba4;
    }
    ctx->pc = 0x284B9Cu;
    {
        const bool branch_taken_0x284b9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x284BA0u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
        if (branch_taken_0x284b9c) {
            ctx->pc = 0x284E2Cu;
            goto label_284e2c;
        }
    }
    ctx->pc = 0x284BA4u;
label_284ba4:
    // 0x284ba4: 0xc0b0ce8
label_284ba8:
    if (ctx->pc == 0x284BA8u) {
        ctx->pc = 0x284BA8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x284BACu;
        goto label_284bac;
    }
    ctx->pc = 0x284BA4u;
    SET_GPR_U32(ctx, 31, 0x284BACu);
    ctx->pc = 0x284BA8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284BACu; }
    }
    if (ctx->pc != 0x284BACu) { return; }
    ctx->pc = 0x284BACu;
label_284bac:
    // 0x284bac: 0x1000009f
label_284bb0:
    if (ctx->pc == 0x284BB0u) {
        ctx->pc = 0x284BB0u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x284BB4u;
        goto label_284bb4;
    }
    ctx->pc = 0x284BACu;
    {
        const bool branch_taken_0x284bac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x284BB0u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
        if (branch_taken_0x284bac) {
            ctx->pc = 0x284E2Cu;
            goto label_284e2c;
        }
    }
    ctx->pc = 0x284BB4u;
label_284bb4:
    // 0x284bb4: 0x3c06003c
    ctx->pc = 0x284bb4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
label_284bb8:
    // 0x284bb8: 0x24c63b88
    ctx->pc = 0x284bb8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 15240));
label_284bbc:
    // 0x284bbc: 0x2405000c
    ctx->pc = 0x284bbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
label_284bc0:
    // 0x284bc0: 0x2c52818
    ctx->pc = 0x284bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_284bc4:
    // 0x284bc4: 0x24020084
    ctx->pc = 0x284bc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 132));
label_284bc8:
    // 0x284bc8: 0x2a21018
    ctx->pc = 0x284bc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_284bcc:
    // 0x284bcc: 0xa22821
    ctx->pc = 0x284bccu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_284bd0:
    // 0x284bd0: 0x24c40008
    ctx->pc = 0x284bd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 8));
label_284bd4:
    // 0x284bd4: 0xa42021
    ctx->pc = 0x284bd4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_284bd8:
    // 0x284bd8: 0x3c020031
    ctx->pc = 0x284bd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_284bdc:
    // 0x284bdc: 0x8c830000
    ctx->pc = 0x284bdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_284be0:
    // 0x284be0: 0x8c42ffbc
    ctx->pc = 0x284be0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_284be4:
    // 0x284be4: 0x621821
    ctx->pc = 0x284be4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_284be8:
    // 0x284be8: 0xac830000
    ctx->pc = 0x284be8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_284bec:
    // 0x284bec: 0x38043
    ctx->pc = 0x284becu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
label_284bf0:
    // 0x284bf0: 0xc53021
    ctx->pc = 0x284bf0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_284bf4:
    // 0x284bf4: 0x8cc30004
    ctx->pc = 0x284bf4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_284bf8:
    // 0x284bf8: 0x24020007
    ctx->pc = 0x284bf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_284bfc:
    // 0x284bfc: 0x54620006
label_284c00:
    if (ctx->pc == 0x284C00u) {
        ctx->pc = 0x284C00u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x284C04u;
        goto label_284c04;
    }
    ctx->pc = 0x284BFCu;
    {
        const bool branch_taken_0x284bfc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x284bfc) {
            ctx->pc = 0x284C00u;
            { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
            ctx->pc = 0x284C18u;
            goto label_284c18;
        }
    }
    ctx->pc = 0x284C04u;
label_284c04:
    // 0x284c04: 0x2610fff0
    ctx->pc = 0x284c04u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_284c08:
    // 0x284c08: 0x2402ffff
    ctx->pc = 0x284c08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_284c0c:
    // 0x284c0c: 0x50102a
    ctx->pc = 0x284c0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
label_284c10:
    // 0x284c10: 0x2800a
    ctx->pc = 0x284c10u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
label_284c14:
    // 0x284c14: 0x2108018
    ctx->pc = 0x284c14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_284c18:
    // 0x284c18: 0x280202d
    ctx->pc = 0x284c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_284c1c:
    // 0x284c1c: 0xc0b0f52
label_284c20:
    if (ctx->pc == 0x284C20u) {
        ctx->pc = 0x284C20u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x284C24u;
        goto label_284c24;
    }
    ctx->pc = 0x284C1Cu;
    SET_GPR_U32(ctx, 31, 0x284C24u);
    ctx->pc = 0x284C20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C24u; }
    }
    if (ctx->pc != 0x284C24u) { return; }
    ctx->pc = 0x284C24u;
label_284c24:
    // 0x284c24: 0x2a100100
    ctx->pc = 0x284c24u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 16), 256));
label_284c28:
    // 0x284c28: 0x56000080
label_284c2c:
    if (ctx->pc == 0x284C2Cu) {
        ctx->pc = 0x284C2Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x284C30u;
        goto label_284c30;
    }
    ctx->pc = 0x284C28u;
    {
        const bool branch_taken_0x284c28 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x284c28) {
            ctx->pc = 0x284C2Cu;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
            ctx->pc = 0x284E2Cu;
            goto label_284e2c;
        }
    }
    ctx->pc = 0x284C30u;
label_284c30:
    // 0x284c30: 0x2a0202d
    ctx->pc = 0x284c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_284c34:
    // 0x284c34: 0x2c0282d
    ctx->pc = 0x284c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_284c38:
    // 0x284c38: 0xc0a1204
label_284c3c:
    if (ctx->pc == 0x284C3Cu) {
        ctx->pc = 0x284C3Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x284C40u;
        goto label_284c40;
    }
    ctx->pc = 0x284C38u;
    SET_GPR_U32(ctx, 31, 0x284C40u);
    ctx->pc = 0x284C3Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x284810u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_blit_fx_0x284810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C40u; }
    }
    if (ctx->pc != 0x284C40u) { return; }
    ctx->pc = 0x284C40u;
label_284c40:
    // 0x284c40: 0x280202d
    ctx->pc = 0x284c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_284c44:
    // 0x284c44: 0xc0b0ce8
label_284c48:
    if (ctx->pc == 0x284C48u) {
        ctx->pc = 0x284C48u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x284C4Cu;
        goto label_284c4c;
    }
    ctx->pc = 0x284C44u;
    SET_GPR_U32(ctx, 31, 0x284C4Cu);
    ctx->pc = 0x284C48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C4Cu; }
    }
    if (ctx->pc != 0x284C4Cu) { return; }
    ctx->pc = 0x284C4Cu;
label_284c4c:
    // 0x284c4c: 0x10000077
label_284c50:
    if (ctx->pc == 0x284C50u) {
        ctx->pc = 0x284C50u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x284C54u;
        goto label_284c54;
    }
    ctx->pc = 0x284C4Cu;
    {
        const bool branch_taken_0x284c4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x284C50u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
        if (branch_taken_0x284c4c) {
            ctx->pc = 0x284E2Cu;
            goto label_284e2c;
        }
    }
    ctx->pc = 0x284C54u;
label_284c54:
    // 0x284c54: 0x3c03003c
    ctx->pc = 0x284c54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_284c58:
    // 0x284c58: 0x24633b88
    ctx->pc = 0x284c58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15240));
label_284c5c:
    // 0x284c5c: 0x2411000c
    ctx->pc = 0x284c5cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 12));
label_284c60:
    // 0x284c60: 0x2d18818
    ctx->pc = 0x284c60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_284c64:
    // 0x284c64: 0x24020084
    ctx->pc = 0x284c64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 132));
label_284c68:
    // 0x284c68: 0x2a21018
    ctx->pc = 0x284c68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_284c6c:
    // 0x284c6c: 0x2221021
    ctx->pc = 0x284c6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_284c70:
    // 0x284c70: 0x24630008
    ctx->pc = 0x284c70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
label_284c74:
    // 0x284c74: 0x431021
    ctx->pc = 0x284c74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284c78:
    // 0x284c78: 0x3c030031
    ctx->pc = 0x284c78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_284c7c:
    // 0x284c7c: 0x8c500000
    ctx->pc = 0x284c7cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_284c80:
    // 0x284c80: 0x8c63ffbc
    ctx->pc = 0x284c80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_284c84:
    // 0x284c84: 0x2038021
    ctx->pc = 0x284c84u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_284c88:
    // 0x284c88: 0xac500000
    ctx->pc = 0x284c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_284c8c:
    // 0x284c8c: 0x108043
    ctx->pc = 0x284c8cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_284c90:
    // 0x284c90: 0x280202d
    ctx->pc = 0x284c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_284c94:
    // 0x284c94: 0x27a50008
    ctx->pc = 0x284c94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 8));
label_284c98:
    // 0x284c98: 0xc0a1222
label_284c9c:
    if (ctx->pc == 0x284C9Cu) {
        ctx->pc = 0x284C9Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 12));
        ctx->pc = 0x284CA0u;
        goto label_284ca0;
    }
    ctx->pc = 0x284C98u;
    SET_GPR_U32(ctx, 31, 0x284CA0u);
    ctx->pc = 0x284C9Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 12));
    ctx->pc = 0x284888u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_blit_dims_0x284888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284CA0u; }
    }
    if (ctx->pc != 0x284CA0u) { return; }
    ctx->pc = 0x284CA0u;
label_284ca0:
    // 0x284ca0: 0x2108018
    ctx->pc = 0x284ca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_284ca4:
    // 0x284ca4: 0x24020100
    ctx->pc = 0x284ca4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
label_284ca8:
    // 0x284ca8: 0x501023
    ctx->pc = 0x284ca8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_284cac:
    // 0x284cac: 0x44820800
    ctx->pc = 0x284cacu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_284cb0:
    // 0x284cb0: 0x46800860
    ctx->pc = 0x284cb0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_284cb4:
    // 0x284cb4: 0x3c013b80
    ctx->pc = 0x284cb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
label_284cb8:
    // 0x284cb8: 0x44810000
    ctx->pc = 0x284cb8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_284cbc:
    // 0x284cbc: 0x46000842
    ctx->pc = 0x284cbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_284cc0:
    // 0x284cc0: 0xc7a00008
    ctx->pc = 0x284cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284cc4:
    // 0x284cc4: 0x46800020
    ctx->pc = 0x284cc4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_284cc8:
    // 0x284cc8: 0x46010002
    ctx->pc = 0x284cc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_284ccc:
    // 0x284ccc: 0x460000a4
    ctx->pc = 0x284cccu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
label_284cd0:
    // 0x284cd0: 0x44131000
    ctx->pc = 0x284cd0u;
    SET_GPR_U32(ctx, 19, *(uint32_t*)&ctx->f[2]);
label_284cd4:
    // 0x284cd4: 0xc7a0000c
    ctx->pc = 0x284cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284cd8:
    // 0x284cd8: 0x46800020
    ctx->pc = 0x284cd8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_284cdc:
    // 0x284cdc: 0x46010002
    ctx->pc = 0x284cdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_284ce0:
    // 0x284ce0: 0x46000064
    ctx->pc = 0x284ce0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_284ce4:
    // 0x284ce4: 0x44120800
    ctx->pc = 0x284ce4u;
    SET_GPR_U32(ctx, 18, *(uint32_t*)&ctx->f[1]);
label_284ce8:
    // 0x284ce8: 0x3c070035
    ctx->pc = 0x284ce8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)53 << 16));
label_284cec:
    // 0x284cec: 0x24e7a320
    ctx->pc = 0x284cecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294943520));
label_284cf0:
    // 0x284cf0: 0x2271821
    ctx->pc = 0x284cf0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_284cf4:
    // 0x284cf4: 0x8fa50008
    ctx->pc = 0x284cf4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_284cf8:
    // 0x284cf8: 0x517c2
    ctx->pc = 0x284cf8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 31));
label_284cfc:
    // 0x284cfc: 0xa22821
    ctx->pc = 0x284cfcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_284d00:
    // 0x284d00: 0x52843
    ctx->pc = 0x284d00u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_284d04:
    // 0x284d04: 0x8c620000
    ctx->pc = 0x284d04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_284d08:
    // 0x284d08: 0xa22821
    ctx->pc = 0x284d08u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_284d0c:
    // 0x284d0c: 0x1317c2
    ctx->pc = 0x284d0cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 19), 31));
label_284d10:
    // 0x284d10: 0x2621021
    ctx->pc = 0x284d10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_284d14:
    // 0x284d14: 0x21043
    ctx->pc = 0x284d14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_284d18:
    // 0x284d18: 0xa22823
    ctx->pc = 0x284d18u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_284d1c:
    // 0x284d1c: 0x3c030035
    ctx->pc = 0x284d1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_284d20:
    // 0x284d20: 0x2463a2f0
    ctx->pc = 0x284d20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943472));
label_284d24:
    // 0x284d24: 0x151080
    ctx->pc = 0x284d24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_284d28:
    // 0x284d28: 0x431021
    ctx->pc = 0x284d28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284d2c:
    // 0x284d2c: 0x8c480000
    ctx->pc = 0x284d2cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_284d30:
    // 0x284d30: 0xf11821
    ctx->pc = 0x284d30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_284d34:
    // 0x284d34: 0x8fa6000c
    ctx->pc = 0x284d34u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_284d38:
    // 0x284d38: 0x617c2
    ctx->pc = 0x284d38u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), 31));
label_284d3c:
    // 0x284d3c: 0xc23021
    ctx->pc = 0x284d3cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_284d40:
    // 0x284d40: 0x63043
    ctx->pc = 0x284d40u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_284d44:
    // 0x284d44: 0x8c620004
    ctx->pc = 0x284d44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_284d48:
    // 0x284d48: 0xc23021
    ctx->pc = 0x284d48u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_284d4c:
    // 0x284d4c: 0x1217c2
    ctx->pc = 0x284d4cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 18), 31));
label_284d50:
    // 0x284d50: 0x2421021
    ctx->pc = 0x284d50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_284d54:
    // 0x284d54: 0x21043
    ctx->pc = 0x284d54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_284d58:
    // 0x284d58: 0x60382d
    ctx->pc = 0x284d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_284d5c:
    // 0x284d5c: 0x280202d
    ctx->pc = 0x284d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_284d60:
    // 0x284d60: 0xa82821
    ctx->pc = 0x284d60u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_284d64:
    // 0x284d64: 0xc4ec0008
    ctx->pc = 0x284d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_284d68:
    // 0x284d68: 0x46806320
    ctx->pc = 0x284d68u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_284d6c:
    // 0x284d6c: 0xc0b0df2
label_284d70:
    if (ctx->pc == 0x284D70u) {
        ctx->pc = 0x284D70u;
        SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x284D74u;
        goto label_284d74;
    }
    ctx->pc = 0x284D6Cu;
    SET_GPR_U32(ctx, 31, 0x284D74u);
    ctx->pc = 0x284D70u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284D74u; }
    }
    if (ctx->pc != 0x284D74u) { return; }
    ctx->pc = 0x284D74u;
label_284d74:
    // 0x284d74: 0x280202d
    ctx->pc = 0x284d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_284d78:
    // 0x284d78: 0x260282d
    ctx->pc = 0x284d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_284d7c:
    // 0x284d7c: 0xc0b0cf6
label_284d80:
    if (ctx->pc == 0x284D80u) {
        ctx->pc = 0x284D80u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x284D84u;
        goto label_284d84;
    }
    ctx->pc = 0x284D7Cu;
    SET_GPR_U32(ctx, 31, 0x284D84u);
    ctx->pc = 0x284D80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284D84u; }
    }
    if (ctx->pc != 0x284D84u) { return; }
    ctx->pc = 0x284D84u;
label_284d84:
    // 0x284d84: 0x2a100100
    ctx->pc = 0x284d84u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 16), 256));
label_284d88:
    // 0x284d88: 0x56000028
label_284d8c:
    if (ctx->pc == 0x284D8Cu) {
        ctx->pc = 0x284D8Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x284D90u;
        goto label_284d90;
    }
    ctx->pc = 0x284D88u;
    {
        const bool branch_taken_0x284d88 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x284d88) {
            ctx->pc = 0x284D8Cu;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
            ctx->pc = 0x284E2Cu;
            goto label_284e2c;
        }
    }
    ctx->pc = 0x284D90u;
label_284d90:
    // 0x284d90: 0x2a0202d
    ctx->pc = 0x284d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_284d94:
    // 0x284d94: 0x2c0282d
    ctx->pc = 0x284d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_284d98:
    // 0x284d98: 0xc0a1204
label_284d9c:
    if (ctx->pc == 0x284D9Cu) {
        ctx->pc = 0x284D9Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x284DA0u;
        goto label_284da0;
    }
    ctx->pc = 0x284D98u;
    SET_GPR_U32(ctx, 31, 0x284DA0u);
    ctx->pc = 0x284D9Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x284810u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_blit_fx_0x284810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284DA0u; }
    }
    if (ctx->pc != 0x284DA0u) { return; }
    ctx->pc = 0x284DA0u;
label_284da0:
    // 0x284da0: 0x280202d
    ctx->pc = 0x284da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_284da4:
    // 0x284da4: 0xc0b0ce8
label_284da8:
    if (ctx->pc == 0x284DA8u) {
        ctx->pc = 0x284DA8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x284DACu;
        goto label_284dac;
    }
    ctx->pc = 0x284DA4u;
    SET_GPR_U32(ctx, 31, 0x284DACu);
    ctx->pc = 0x284DA8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284DACu; }
    }
    if (ctx->pc != 0x284DACu) { return; }
    ctx->pc = 0x284DACu;
label_284dac:
    // 0x284dac: 0x1000001f
label_284db0:
    if (ctx->pc == 0x284DB0u) {
        ctx->pc = 0x284DB0u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x284DB4u;
        goto label_284db4;
    }
    ctx->pc = 0x284DACu;
    {
        const bool branch_taken_0x284dac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x284DB0u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
        if (branch_taken_0x284dac) {
            ctx->pc = 0x284E2Cu;
            goto label_284e2c;
        }
    }
    ctx->pc = 0x284DB4u;
label_284db4:
    // 0x284db4: 0x3c04003c
    ctx->pc = 0x284db4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_284db8:
    // 0x284db8: 0x24843b88
    ctx->pc = 0x284db8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15240));
label_284dbc:
    // 0x284dbc: 0x2403000c
    ctx->pc = 0x284dbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
label_284dc0:
    // 0x284dc0: 0x2c31818
    ctx->pc = 0x284dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_284dc4:
    // 0x284dc4: 0x24020084
    ctx->pc = 0x284dc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 132));
label_284dc8:
    // 0x284dc8: 0x2a21018
    ctx->pc = 0x284dc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_284dcc:
    // 0x284dcc: 0x621821
    ctx->pc = 0x284dccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_284dd0:
    // 0x284dd0: 0x24840008
    ctx->pc = 0x284dd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
label_284dd4:
    // 0x284dd4: 0x641821
    ctx->pc = 0x284dd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_284dd8:
    // 0x284dd8: 0x3c020031
    ctx->pc = 0x284dd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_284ddc:
    // 0x284ddc: 0x8c700000
    ctx->pc = 0x284ddcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_284de0:
    // 0x284de0: 0x8c42ffbc
    ctx->pc = 0x284de0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_284de4:
    // 0x284de4: 0x2028021
    ctx->pc = 0x284de4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_284de8:
    // 0x284de8: 0xac700000
    ctx->pc = 0x284de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_284dec:
    // 0x284dec: 0x108043
    ctx->pc = 0x284decu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_284df0:
    // 0x284df0: 0x2108018
    ctx->pc = 0x284df0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_284df4:
    // 0x284df4: 0x2a020101
    ctx->pc = 0x284df4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 257));
label_284df8:
    // 0x284df8: 0x24050100
    ctx->pc = 0x284df8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 256));
label_284dfc:
    // 0x284dfc: 0xa2800a
    ctx->pc = 0x284dfcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 5));
label_284e00:
    // 0x284e00: 0x280202d
    ctx->pc = 0x284e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_284e04:
    // 0x284e04: 0xc0b0f52
label_284e08:
    if (ctx->pc == 0x284E08u) {
        ctx->pc = 0x284E08u;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->pc = 0x284E0Cu;
        goto label_284e0c;
    }
    ctx->pc = 0x284E04u;
    SET_GPR_U32(ctx, 31, 0x284E0Cu);
    ctx->pc = 0x284E08u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284E0Cu; }
    }
    if (ctx->pc != 0x284E0Cu) { return; }
    ctx->pc = 0x284E0Cu;
label_284e0c:
    // 0x284e0c: 0x2a100100
    ctx->pc = 0x284e0cu;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 16), 256));
label_284e10:
    // 0x284e10: 0x56000006
label_284e14:
    if (ctx->pc == 0x284E14u) {
        ctx->pc = 0x284E14u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x284E18u;
        goto label_284e18;
    }
    ctx->pc = 0x284E10u;
    {
        const bool branch_taken_0x284e10 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x284e10) {
            ctx->pc = 0x284E14u;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
            ctx->pc = 0x284E2Cu;
            goto label_284e2c;
        }
    }
    ctx->pc = 0x284E18u;
label_284e18:
    // 0x284e18: 0x2a0202d
    ctx->pc = 0x284e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_284e1c:
    // 0x284e1c: 0x2c0282d
    ctx->pc = 0x284e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_284e20:
    // 0x284e20: 0xc0a1204
label_284e24:
    if (ctx->pc == 0x284E24u) {
        ctx->pc = 0x284E24u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x284E28u;
        goto label_284e28;
    }
    ctx->pc = 0x284E20u;
    SET_GPR_U32(ctx, 31, 0x284E28u);
    ctx->pc = 0x284E24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x284810u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_blit_fx_0x284810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284E28u; }
    }
    if (ctx->pc != 0x284E28u) { return; }
    ctx->pc = 0x284E28u;
label_284e28:
    // 0x284e28: 0x26f70001
    ctx->pc = 0x284e28u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
label_284e2c:
    // 0x284e2c: 0x26d60001
    ctx->pc = 0x284e2cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
label_284e30:
    // 0x284e30: 0x2ac2000b
    ctx->pc = 0x284e30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 11));
label_284e34:
    // 0x284e34: 0x1440feb4
label_284e38:
    if (ctx->pc == 0x284E38u) {
        ctx->pc = 0x284E38u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        ctx->pc = 0x284E3Cu;
        goto label_284e3c;
    }
    ctx->pc = 0x284E34u;
    {
        const bool branch_taken_0x284e34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x284E38u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x284e34) {
            ctx->pc = 0x284908u;
            goto label_284908;
        }
    }
    ctx->pc = 0x284E3Cu;
label_284e3c:
    // 0x284e3c: 0x2e0102d
    ctx->pc = 0x284e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_284e40:
    // 0x284e40: 0xdfbf0090
    ctx->pc = 0x284e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_284e44:
    // 0x284e44: 0xdfb70080
    ctx->pc = 0x284e44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_284e48:
    // 0x284e48: 0xdfb60070
    ctx->pc = 0x284e48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_284e4c:
    // 0x284e4c: 0xdfb50060
    ctx->pc = 0x284e4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_284e50:
    // 0x284e50: 0xdfb40050
    ctx->pc = 0x284e50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_284e54:
    // 0x284e54: 0xdfb30040
    ctx->pc = 0x284e54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_284e58:
    // 0x284e58: 0xdfb20030
    ctx->pc = 0x284e58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_284e5c:
    // 0x284e5c: 0xdfb10020
    ctx->pc = 0x284e5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_284e60:
    // 0x284e60: 0xdfb00010
    ctx->pc = 0x284e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_284e64:
    // 0x284e64: 0x3e00008
label_284e68:
    if (ctx->pc == 0x284E68u) {
        ctx->pc = 0x284E68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x284E6Cu;
        goto label_fallthrough_0x284e64;
    }
    ctx->pc = 0x284E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284E68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2848D0u: goto label_2848d0;
            case 0x2848D4u: goto label_2848d4;
            case 0x2848D8u: goto label_2848d8;
            case 0x2848DCu: goto label_2848dc;
            case 0x2848E0u: goto label_2848e0;
            case 0x2848E4u: goto label_2848e4;
            case 0x2848E8u: goto label_2848e8;
            case 0x2848ECu: goto label_2848ec;
            case 0x2848F0u: goto label_2848f0;
            case 0x2848F4u: goto label_2848f4;
            case 0x2848F8u: goto label_2848f8;
            case 0x2848FCu: goto label_2848fc;
            case 0x284900u: goto label_284900;
            case 0x284904u: goto label_284904;
            case 0x284908u: goto label_284908;
            case 0x28490Cu: goto label_28490c;
            case 0x284910u: goto label_284910;
            case 0x284914u: goto label_284914;
            case 0x284918u: goto label_284918;
            case 0x28491Cu: goto label_28491c;
            case 0x284920u: goto label_284920;
            case 0x284924u: goto label_284924;
            case 0x284928u: goto label_284928;
            case 0x28492Cu: goto label_28492c;
            case 0x284930u: goto label_284930;
            case 0x284934u: goto label_284934;
            case 0x284938u: goto label_284938;
            case 0x28493Cu: goto label_28493c;
            case 0x284940u: goto label_284940;
            case 0x284944u: goto label_284944;
            case 0x284948u: goto label_284948;
            case 0x28494Cu: goto label_28494c;
            case 0x284950u: goto label_284950;
            case 0x284954u: goto label_284954;
            case 0x284958u: goto label_284958;
            case 0x28495Cu: goto label_28495c;
            case 0x284960u: goto label_284960;
            case 0x284964u: goto label_284964;
            case 0x284968u: goto label_284968;
            case 0x28496Cu: goto label_28496c;
            case 0x284970u: goto label_284970;
            case 0x284974u: goto label_284974;
            case 0x284978u: goto label_284978;
            case 0x28497Cu: goto label_28497c;
            case 0x284980u: goto label_284980;
            case 0x284984u: goto label_284984;
            case 0x284988u: goto label_284988;
            case 0x28498Cu: goto label_28498c;
            case 0x284990u: goto label_284990;
            case 0x284994u: goto label_284994;
            case 0x284998u: goto label_284998;
            case 0x28499Cu: goto label_28499c;
            case 0x2849A0u: goto label_2849a0;
            case 0x2849A4u: goto label_2849a4;
            case 0x2849A8u: goto label_2849a8;
            case 0x2849ACu: goto label_2849ac;
            case 0x2849B0u: goto label_2849b0;
            case 0x2849B4u: goto label_2849b4;
            case 0x2849B8u: goto label_2849b8;
            case 0x2849BCu: goto label_2849bc;
            case 0x2849C0u: goto label_2849c0;
            case 0x2849C4u: goto label_2849c4;
            case 0x2849C8u: goto label_2849c8;
            case 0x2849CCu: goto label_2849cc;
            case 0x2849D0u: goto label_2849d0;
            case 0x2849D4u: goto label_2849d4;
            case 0x2849D8u: goto label_2849d8;
            case 0x2849DCu: goto label_2849dc;
            case 0x2849E0u: goto label_2849e0;
            case 0x2849E4u: goto label_2849e4;
            case 0x2849E8u: goto label_2849e8;
            case 0x2849ECu: goto label_2849ec;
            case 0x2849F0u: goto label_2849f0;
            case 0x2849F4u: goto label_2849f4;
            case 0x2849F8u: goto label_2849f8;
            case 0x2849FCu: goto label_2849fc;
            case 0x284A00u: goto label_284a00;
            case 0x284A04u: goto label_284a04;
            case 0x284A08u: goto label_284a08;
            case 0x284A0Cu: goto label_284a0c;
            case 0x284A10u: goto label_284a10;
            case 0x284A14u: goto label_284a14;
            case 0x284A18u: goto label_284a18;
            case 0x284A1Cu: goto label_284a1c;
            case 0x284A20u: goto label_284a20;
            case 0x284A24u: goto label_284a24;
            case 0x284A28u: goto label_284a28;
            case 0x284A2Cu: goto label_284a2c;
            case 0x284A30u: goto label_284a30;
            case 0x284A34u: goto label_284a34;
            case 0x284A38u: goto label_284a38;
            case 0x284A3Cu: goto label_284a3c;
            case 0x284A40u: goto label_284a40;
            case 0x284A44u: goto label_284a44;
            case 0x284A48u: goto label_284a48;
            case 0x284A4Cu: goto label_284a4c;
            case 0x284A50u: goto label_284a50;
            case 0x284A54u: goto label_284a54;
            case 0x284A58u: goto label_284a58;
            case 0x284A5Cu: goto label_284a5c;
            case 0x284A60u: goto label_284a60;
            case 0x284A64u: goto label_284a64;
            case 0x284A68u: goto label_284a68;
            case 0x284A6Cu: goto label_284a6c;
            case 0x284A70u: goto label_284a70;
            case 0x284A74u: goto label_284a74;
            case 0x284A78u: goto label_284a78;
            case 0x284A7Cu: goto label_284a7c;
            case 0x284A80u: goto label_284a80;
            case 0x284A84u: goto label_284a84;
            case 0x284A88u: goto label_284a88;
            case 0x284A8Cu: goto label_284a8c;
            case 0x284A90u: goto label_284a90;
            case 0x284A94u: goto label_284a94;
            case 0x284A98u: goto label_284a98;
            case 0x284A9Cu: goto label_284a9c;
            case 0x284AA0u: goto label_284aa0;
            case 0x284AA4u: goto label_284aa4;
            case 0x284AA8u: goto label_284aa8;
            case 0x284AACu: goto label_284aac;
            case 0x284AB0u: goto label_284ab0;
            case 0x284AB4u: goto label_284ab4;
            case 0x284AB8u: goto label_284ab8;
            case 0x284ABCu: goto label_284abc;
            case 0x284AC0u: goto label_284ac0;
            case 0x284AC4u: goto label_284ac4;
            case 0x284AC8u: goto label_284ac8;
            case 0x284ACCu: goto label_284acc;
            case 0x284AD0u: goto label_284ad0;
            case 0x284AD4u: goto label_284ad4;
            case 0x284AD8u: goto label_284ad8;
            case 0x284ADCu: goto label_284adc;
            case 0x284AE0u: goto label_284ae0;
            case 0x284AE4u: goto label_284ae4;
            case 0x284AE8u: goto label_284ae8;
            case 0x284AECu: goto label_284aec;
            case 0x284AF0u: goto label_284af0;
            case 0x284AF4u: goto label_284af4;
            case 0x284AF8u: goto label_284af8;
            case 0x284AFCu: goto label_284afc;
            case 0x284B00u: goto label_284b00;
            case 0x284B04u: goto label_284b04;
            case 0x284B08u: goto label_284b08;
            case 0x284B0Cu: goto label_284b0c;
            case 0x284B10u: goto label_284b10;
            case 0x284B14u: goto label_284b14;
            case 0x284B18u: goto label_284b18;
            case 0x284B1Cu: goto label_284b1c;
            case 0x284B20u: goto label_284b20;
            case 0x284B24u: goto label_284b24;
            case 0x284B28u: goto label_284b28;
            case 0x284B2Cu: goto label_284b2c;
            case 0x284B30u: goto label_284b30;
            case 0x284B34u: goto label_284b34;
            case 0x284B38u: goto label_284b38;
            case 0x284B3Cu: goto label_284b3c;
            case 0x284B40u: goto label_284b40;
            case 0x284B44u: goto label_284b44;
            case 0x284B48u: goto label_284b48;
            case 0x284B4Cu: goto label_284b4c;
            case 0x284B50u: goto label_284b50;
            case 0x284B54u: goto label_284b54;
            case 0x284B58u: goto label_284b58;
            case 0x284B5Cu: goto label_284b5c;
            case 0x284B60u: goto label_284b60;
            case 0x284B64u: goto label_284b64;
            case 0x284B68u: goto label_284b68;
            case 0x284B6Cu: goto label_284b6c;
            case 0x284B70u: goto label_284b70;
            case 0x284B74u: goto label_284b74;
            case 0x284B78u: goto label_284b78;
            case 0x284B7Cu: goto label_284b7c;
            case 0x284B80u: goto label_284b80;
            case 0x284B84u: goto label_284b84;
            case 0x284B88u: goto label_284b88;
            case 0x284B8Cu: goto label_284b8c;
            case 0x284B90u: goto label_284b90;
            case 0x284B94u: goto label_284b94;
            case 0x284B98u: goto label_284b98;
            case 0x284B9Cu: goto label_284b9c;
            case 0x284BA0u: goto label_284ba0;
            case 0x284BA4u: goto label_284ba4;
            case 0x284BA8u: goto label_284ba8;
            case 0x284BACu: goto label_284bac;
            case 0x284BB0u: goto label_284bb0;
            case 0x284BB4u: goto label_284bb4;
            case 0x284BB8u: goto label_284bb8;
            case 0x284BBCu: goto label_284bbc;
            case 0x284BC0u: goto label_284bc0;
            case 0x284BC4u: goto label_284bc4;
            case 0x284BC8u: goto label_284bc8;
            case 0x284BCCu: goto label_284bcc;
            case 0x284BD0u: goto label_284bd0;
            case 0x284BD4u: goto label_284bd4;
            case 0x284BD8u: goto label_284bd8;
            case 0x284BDCu: goto label_284bdc;
            case 0x284BE0u: goto label_284be0;
            case 0x284BE4u: goto label_284be4;
            case 0x284BE8u: goto label_284be8;
            case 0x284BECu: goto label_284bec;
            case 0x284BF0u: goto label_284bf0;
            case 0x284BF4u: goto label_284bf4;
            case 0x284BF8u: goto label_284bf8;
            case 0x284BFCu: goto label_284bfc;
            case 0x284C00u: goto label_284c00;
            case 0x284C04u: goto label_284c04;
            case 0x284C08u: goto label_284c08;
            case 0x284C0Cu: goto label_284c0c;
            case 0x284C10u: goto label_284c10;
            case 0x284C14u: goto label_284c14;
            case 0x284C18u: goto label_284c18;
            case 0x284C1Cu: goto label_284c1c;
            case 0x284C20u: goto label_284c20;
            case 0x284C24u: goto label_284c24;
            case 0x284C28u: goto label_284c28;
            case 0x284C2Cu: goto label_284c2c;
            case 0x284C30u: goto label_284c30;
            case 0x284C34u: goto label_284c34;
            case 0x284C38u: goto label_284c38;
            case 0x284C3Cu: goto label_284c3c;
            case 0x284C40u: goto label_284c40;
            case 0x284C44u: goto label_284c44;
            case 0x284C48u: goto label_284c48;
            case 0x284C4Cu: goto label_284c4c;
            case 0x284C50u: goto label_284c50;
            case 0x284C54u: goto label_284c54;
            case 0x284C58u: goto label_284c58;
            case 0x284C5Cu: goto label_284c5c;
            case 0x284C60u: goto label_284c60;
            case 0x284C64u: goto label_284c64;
            case 0x284C68u: goto label_284c68;
            case 0x284C6Cu: goto label_284c6c;
            case 0x284C70u: goto label_284c70;
            case 0x284C74u: goto label_284c74;
            case 0x284C78u: goto label_284c78;
            case 0x284C7Cu: goto label_284c7c;
            case 0x284C80u: goto label_284c80;
            case 0x284C84u: goto label_284c84;
            case 0x284C88u: goto label_284c88;
            case 0x284C8Cu: goto label_284c8c;
            case 0x284C90u: goto label_284c90;
            case 0x284C94u: goto label_284c94;
            case 0x284C98u: goto label_284c98;
            case 0x284C9Cu: goto label_284c9c;
            case 0x284CA0u: goto label_284ca0;
            case 0x284CA4u: goto label_284ca4;
            case 0x284CA8u: goto label_284ca8;
            case 0x284CACu: goto label_284cac;
            case 0x284CB0u: goto label_284cb0;
            case 0x284CB4u: goto label_284cb4;
            case 0x284CB8u: goto label_284cb8;
            case 0x284CBCu: goto label_284cbc;
            case 0x284CC0u: goto label_284cc0;
            case 0x284CC4u: goto label_284cc4;
            case 0x284CC8u: goto label_284cc8;
            case 0x284CCCu: goto label_284ccc;
            case 0x284CD0u: goto label_284cd0;
            case 0x284CD4u: goto label_284cd4;
            case 0x284CD8u: goto label_284cd8;
            case 0x284CDCu: goto label_284cdc;
            case 0x284CE0u: goto label_284ce0;
            case 0x284CE4u: goto label_284ce4;
            case 0x284CE8u: goto label_284ce8;
            case 0x284CECu: goto label_284cec;
            case 0x284CF0u: goto label_284cf0;
            case 0x284CF4u: goto label_284cf4;
            case 0x284CF8u: goto label_284cf8;
            case 0x284CFCu: goto label_284cfc;
            case 0x284D00u: goto label_284d00;
            case 0x284D04u: goto label_284d04;
            case 0x284D08u: goto label_284d08;
            case 0x284D0Cu: goto label_284d0c;
            case 0x284D10u: goto label_284d10;
            case 0x284D14u: goto label_284d14;
            case 0x284D18u: goto label_284d18;
            case 0x284D1Cu: goto label_284d1c;
            case 0x284D20u: goto label_284d20;
            case 0x284D24u: goto label_284d24;
            case 0x284D28u: goto label_284d28;
            case 0x284D2Cu: goto label_284d2c;
            case 0x284D30u: goto label_284d30;
            case 0x284D34u: goto label_284d34;
            case 0x284D38u: goto label_284d38;
            case 0x284D3Cu: goto label_284d3c;
            case 0x284D40u: goto label_284d40;
            case 0x284D44u: goto label_284d44;
            case 0x284D48u: goto label_284d48;
            case 0x284D4Cu: goto label_284d4c;
            case 0x284D50u: goto label_284d50;
            case 0x284D54u: goto label_284d54;
            case 0x284D58u: goto label_284d58;
            case 0x284D5Cu: goto label_284d5c;
            case 0x284D60u: goto label_284d60;
            case 0x284D64u: goto label_284d64;
            case 0x284D68u: goto label_284d68;
            case 0x284D6Cu: goto label_284d6c;
            case 0x284D70u: goto label_284d70;
            case 0x284D74u: goto label_284d74;
            case 0x284D78u: goto label_284d78;
            case 0x284D7Cu: goto label_284d7c;
            case 0x284D80u: goto label_284d80;
            case 0x284D84u: goto label_284d84;
            case 0x284D88u: goto label_284d88;
            case 0x284D8Cu: goto label_284d8c;
            case 0x284D90u: goto label_284d90;
            case 0x284D94u: goto label_284d94;
            case 0x284D98u: goto label_284d98;
            case 0x284D9Cu: goto label_284d9c;
            case 0x284DA0u: goto label_284da0;
            case 0x284DA4u: goto label_284da4;
            case 0x284DA8u: goto label_284da8;
            case 0x284DACu: goto label_284dac;
            case 0x284DB0u: goto label_284db0;
            case 0x284DB4u: goto label_284db4;
            case 0x284DB8u: goto label_284db8;
            case 0x284DBCu: goto label_284dbc;
            case 0x284DC0u: goto label_284dc0;
            case 0x284DC4u: goto label_284dc4;
            case 0x284DC8u: goto label_284dc8;
            case 0x284DCCu: goto label_284dcc;
            case 0x284DD0u: goto label_284dd0;
            case 0x284DD4u: goto label_284dd4;
            case 0x284DD8u: goto label_284dd8;
            case 0x284DDCu: goto label_284ddc;
            case 0x284DE0u: goto label_284de0;
            case 0x284DE4u: goto label_284de4;
            case 0x284DE8u: goto label_284de8;
            case 0x284DECu: goto label_284dec;
            case 0x284DF0u: goto label_284df0;
            case 0x284DF4u: goto label_284df4;
            case 0x284DF8u: goto label_284df8;
            case 0x284DFCu: goto label_284dfc;
            case 0x284E00u: goto label_284e00;
            case 0x284E04u: goto label_284e04;
            case 0x284E08u: goto label_284e08;
            case 0x284E0Cu: goto label_284e0c;
            case 0x284E10u: goto label_284e10;
            case 0x284E14u: goto label_284e14;
            case 0x284E18u: goto label_284e18;
            case 0x284E1Cu: goto label_284e1c;
            case 0x284E20u: goto label_284e20;
            case 0x284E24u: goto label_284e24;
            case 0x284E28u: goto label_284e28;
            case 0x284E2Cu: goto label_284e2c;
            case 0x284E30u: goto label_284e30;
            case 0x284E34u: goto label_284e34;
            case 0x284E38u: goto label_284e38;
            case 0x284E3Cu: goto label_284e3c;
            case 0x284E40u: goto label_284e40;
            case 0x284E44u: goto label_284e44;
            case 0x284E48u: goto label_284e48;
            case 0x284E4Cu: goto label_284e4c;
            case 0x284E50u: goto label_284e50;
            case 0x284E54u: goto label_284e54;
            case 0x284E58u: goto label_284e58;
            case 0x284E5Cu: goto label_284e5c;
            case 0x284E60u: goto label_284e60;
            case 0x284E64u: goto label_284e64;
            case 0x284E68u: goto label_284e68;
            default: break;
        }
        return;
    }
label_fallthrough_0x284e64:
    ctx->pc = 0x284E6Cu;
}
